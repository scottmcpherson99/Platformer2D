// Fill out your copyright notice in the Description page of Project Settings.


#include "WormEnemy.h"

#include "BezierCurve.h"

#include "Components/BoxComponent.h"

#include "Kismet/GameplayStatics.h"

#include "PlayerCharacter.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AWormEnemy::AWormEnemy()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	detectionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("detectionBox"));
	detectionBox->SetupAttachment(RootComponent);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// WormEnemy Interface
void AWormEnemy::BeginPlay()
{
	Super::BeginPlay();

	//set the bounding areas
	upperLeftBound += detectionBox->GetComponentLocation();
	lowerRightBound += detectionBox->GetComponentLocation();

	//set the current state to be wanderinng and choose the 1st control points
	currentState_ = EWormAIState::EWANDER;
	FindControlPoints();

	//turn on collision checks
	detectionBox->OnComponentBeginOverlap.AddDynamic(this, &AWormEnemy::OnComponentBeginOverlap);
	detectionBox->OnComponentEndOverlap.AddDynamic(this, &AWormEnemy::OnComponentEndOverlap);

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

void AWormEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//run the timeline
	BezierCurveTimeline.TickTimeline(DeltaTime);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Timeline
void AWormEnemy::BezierTimelineProgress(float DeltaTime)
{
	BezierCurve bezCurve;
	SetActorLocation(bezCurve.QuadraticBezierCurves(DeltaTime, ControlPoints[0], ControlPoints[1], ControlPoints[2]));

	if (DeltaTime >= 1.f)
	{
		FindControlPoints();
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// State Handlers
void AWormEnemy::SwitchAIState(EWormAIState newState_)
{
	currentState_ = newState_;
}

void AWormEnemy::FindControlPoints()
{
	ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	switch (currentState_)
	{
	case EWormAIState::EWANDER:
		//set the starting control point to be the current location and pick two random points within the boundaries to be the second and third control points
		ControlPoints[0] = TriggerBox->GetComponentLocation();;
		for (int i = 1; i < 3; i++)
		{
			ControlPoints[i].X = FMath::FRandRange(upperLeftBound.X, lowerRightBound.X);
			ControlPoints[i].Y = 0;
			ControlPoints[i].Z = FMath::FRandRange(upperLeftBound.Z, lowerRightBound.Z);
		}
		break;

	case EWormAIState::EATTACKPLAYER:
	
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
		break;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void AWormEnemy::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is the player, switch to attack state
	if (playerCharacter != nullptr)
	{
		SwitchAIState(EWormAIState::EATTACKPLAYER);
	}
}

void AWormEnemy::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is the player, switch to attack state
	if (playerCharacter != nullptr)
	{
		SwitchAIState(EWormAIState::EWANDER);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////