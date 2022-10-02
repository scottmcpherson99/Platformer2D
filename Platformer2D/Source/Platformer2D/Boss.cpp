// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss.h"

#include "Components/TimelineComponent.h"

#include "BezierCurve.h"

#include "Components/BoxComponent.h"

#include "Kismet/GameplayStatics.h"

#include "PlayerCharacter.h"

#include "BulletDrop.h"

#include "Components/WidgetComponent.h"
#include "HealthBar.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ABoss::ABoss()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the health bar
	healthWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBar"));
	healthWidgetComp->AttachTo(RootComponent);
	maxHealth = 100;
	health = 100;

	//reset the number of loops in the state
	numberOfLoopsInState = 0;

	// set the enemy to be stationary for the inital cutscene
	SwitchState(EBossAIState::ESTATIONARY);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <GettersandSetters>
void ABoss::SetHealth(float health_)
{
	health += health_;

	if (health <= 0)
	{
		Destroy();
	}
}

const float ABoss::GetHealth() const
{
	return health;
}

void ABoss::SetMaxHealth(float maxHealth_)
{
	maxHealth = maxHealth_;
}

const float ABoss::GetMaxHealth() const
{
	return maxHealth;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// ABoss Interface
void ABoss::BeginPlay()
{
	Super::BeginPlay();

	UHealthBar* healthBar = Cast<UHealthBar>(healthWidgetComp->GetUserWidgetObject());
	healthBar->SetOwnerBoss(this);
	

	//spawn enemies after specified amount of time
	GetWorldTimerManager().SetTimer(bulletDropTimer, this, &ABoss::SpawnBullet, 2.f, true);

	// start the AI State machine
	GetWorldTimerManager().SetTimer(startStateTimer, this, &ABoss::StartStateMachine, 5.f, false);

	//set the bounding areas
	upperLeftBound += TriggerBox->GetComponentLocation();
	lowerRightBound += TriggerBox->GetComponentLocation();
}

void ABoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//run the timeline
	BezierCurveTimeline.TickTimeline(DeltaTime);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <StateMachine>
void ABoss::SwitchState(EBossAIState newState_)
{
	// set the new state
	currentState = newState_;

	// reset the number of loops in the state
	numberOfLoopsInState = 0;
}

void ABoss::StartStateMachine()
{
	// clear the timer
	GetWorldTimerManager().ClearTimer(startStateTimer);

	// start the AI wander state
	SwitchState(EBossAIState::EWANDER);
	 
	//find the initial control points
	FindControlPoints();

	//run the timeline of the bezier curve from the start and repeat upon completion
	if (BezierCurveFloat)
	{
		FOnTimelineFloat BezierTimelineProgress;
		BezierTimelineProgress.BindUFunction(this, FName("BezierTimelineProgress"));
		BezierCurveTimeline.AddInterpFloat(BezierCurveFloat, BezierTimelineProgress);
		BezierCurveTimeline.SetLooping(true);

		BezierCurveTimeline.PlayFromStart();
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Movement
void ABoss::BezierTimelineProgress(float value)
{
	BezierCurve bezCurve;
	SetActorLocation(bezCurve.QuadraticBezierCurves(value, ControlPoints[0], ControlPoints[1], ControlPoints[2]));

	if (value >= 1.f)
	{
		FindControlPoints();
	}
}

void ABoss::FindControlPoints()
{
	// get the player character
	ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	switch (currentState)
	{
		// attack the player
	case EBossAIState::EATTACKPLAYER:

		//get the current location of the ai
		ControlPoints[0] = TriggerBox->GetComponentLocation();

		//get the players location at the time of the curve starting
		ControlPoints[1] = playerCharacter->GetActorLocation();

		//get an exit point from the player

		//get the distance between the two points
		float distance[2];
		distance[0] = fabs(ControlPoints[0].X - ControlPoints[1].X);
		distance[1] = fabs(ControlPoints[0].Z - ControlPoints[1].Z);

		//calculate the final control point to be the distance equal to the distance between the 1st 2 points but on a parallel line away from the start point
		if (ControlPoints[0].X > ControlPoints[1].X)
		{
			ControlPoints[2].X = ControlPoints[1].X - distance[0];
		}
		else
		{
			ControlPoints[2].X = ControlPoints[1].X + distance[0];
		}

		if (ControlPoints[0].Z > ControlPoints[1].Z)
		{
			ControlPoints[2].Z = ControlPoints[1].Z - distance[0];
		}
		else
		{
			ControlPoints[2].Z = ControlPoints[1].Z + distance[0];
		}

		numberOfLoopsInState++;
		// switch the state to wander
		if (numberOfLoopsInState >= 4)
		{
			SwitchState(EBossAIState::EWANDER);
		}
		break;

		// wander around the arena
		case EBossAIState::EWANDER:
			
			//set the starting control point to be the current location and pick two random points within the boundaries to be the second and third control points
			ControlPoints[0] = TriggerBox->GetComponentLocation();;
			for (int i = 1; i < 3; i++)
			{
				ControlPoints[i].X = FMath::FRandRange(upperLeftBound.X, lowerRightBound.X);
				ControlPoints[i].Y = 0;
				ControlPoints[i].Z = FMath::FRandRange(upperLeftBound.Z, lowerRightBound.Z);
			}
			numberOfLoopsInState++;

			// switch the state to attack the player
			if (numberOfLoopsInState >= 4)
			{
				SwitchState(EBossAIState::EATTACKPLAYER);
			}
		break;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Spawning
void ABoss::SpawnBullet()
{
	UWorld* world = GetWorld();

	if (world)
	{
		//set the spawn parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		// Set the spawn location
		FVector EnemySpawnerVec;
		EnemySpawnerVec = GetActorLocation();

		world->SpawnActor<ABulletDrop>(bulletToSpawn, EnemySpawnerVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////