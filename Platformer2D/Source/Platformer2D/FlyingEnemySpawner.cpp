// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyingEnemySpawner.h"

#include "Kismet/GameplayStatics.h"

#include "Components/TimelineComponent.h"

#include "BezierCurve.h"

#include "Components/BoxComponent.h"

#include "DumbEnemy.h"

#include "PlayerCharacter.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AFlyingEnemySpawner::AFlyingEnemySpawner()
{	
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// FlyingEnemySpawner Interface
void AFlyingEnemySpawner::BeginPlay()
{
	Super::BeginPlay();

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

	//spawn enemies after specified amount of time
	GetWorldTimerManager().SetTimer(destroyTimer, this, &AFlyingEnemySpawner::SpawnEnemy, 5.f, true);
}

void AFlyingEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//run the timeline
	BezierCurveTimeline.TickTimeline(DeltaTime);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Movement
void AFlyingEnemySpawner::BezierTimelineProgress(float value)
{
	BezierCurve bezCurve;
	SetActorLocation(bezCurve.QuadraticBezierCurves(value, ControlPoints[0], ControlPoints[1], ControlPoints[2]));

	if (value >= 1.f)
	{
		FindControlPoints();
	}
}

void AFlyingEnemySpawner::FindControlPoints()
{
	ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	//get the current location of the ai
	ControlPoints[0] = TriggerBox->GetComponentLocation();

	//get the players location at the time of the curve starting
	ControlPoints[1].X = playerCharacter->GetActorLocation().X;
	ControlPoints[1].Y = 0;
	ControlPoints[1].Z = FMath::FRandRange(playerCharacter->GetActorLocation().Z + 350, playerCharacter->GetActorLocation().Z + 500);

	//calculate the final control point to be the distance equal to the distance between the 1st 2 points but on a parallel line away from the start point
	ControlPoints[2].X = FMath::FRandRange(playerCharacter->GetActorLocation().X + 200, playerCharacter->GetActorLocation().X + 400);
	ControlPoints[2].Y = 0;
	ControlPoints[2].Z = FMath::FRandRange(playerCharacter->GetActorLocation().Z + 350, playerCharacter->GetActorLocation().Z + 500);
	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <SpawnEnemy>
void AFlyingEnemySpawner::SpawnEnemy()
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

		world->SpawnActor<ADumbEnemy>(enemyToSpawn, EnemySpawnerVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////