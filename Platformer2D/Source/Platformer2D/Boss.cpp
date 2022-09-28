// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss.h"

#include "Components/TimelineComponent.h"

#include "BezierCurve.h"

#include "Components/BoxComponent.h"

#include "Kismet/GameplayStatics.h"

#include "PlayerCharacter.h"

ABoss::ABoss()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ABoss::BeginPlay()
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
}

void ABoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//run the timeline
	BezierCurveTimeline.TickTimeline(DeltaTime);
}

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
}
