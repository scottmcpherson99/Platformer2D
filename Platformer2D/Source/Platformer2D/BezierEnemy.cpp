// Fill out your copyright notice in the Description page of Project Settings.


#include "BezierEnemy.h"

#include "BezierCurve.h"

#include "Components/BoxComponent.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ABezierEnemy::ABezierEnemy()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// BezierEnemy Interface
void ABezierEnemy::BeginPlay()
{
	Super::BeginPlay();

	//set the initial ontrol point to be the initial staring posiition of the enemy
	startPoint = TriggerBox->GetComponentLocation();
	
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

void ABezierEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	BezierCurveTimeline.TickTimeline(DeltaTime);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Timeline
void ABezierEnemy::BezierTimelineProgress(float DeltaTime)
{
	BezierCurve bezCurve;
	SetActorLocation(bezCurve.QuadraticBezierCurves(DeltaTime, startPoint, midPoint + startPoint, endPoint + startPoint));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////