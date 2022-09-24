// Fill out your copyright notice in the Description page of Project Settings.


#include "MobilePlatform.h"

#include "Components/TimelineComponent.h"

#include "PaperSpriteComponent.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AMobilePlatform::AMobilePlatform()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the flagpole mesh
	platformMesh = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("platformMesh"));
	platformMesh->SetupAttachment(RootComponent);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Timeline
void AMobilePlatform::TimelineProgress(float value)
{
	//find the next location based of the starting location, finishing location and current time on the timeline and move the actor to this location
	FVector NewLocation = FMath::Lerp(StartLoc, EndLoc, value);
	SetActorLocation(NewLocation);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <AMobilePlatform>
void AMobilePlatform::BeginPlay()
{
	Super::BeginPlay();

	//set up the timeline curve
	FOnTimelineFloat TimelineProgress;
	TimelineProgress.BindUFunction(this, FName("TimelineProgress"));
	CurveTimeline.AddInterpFloat(CurveFloat, TimelineProgress);
	CurveTimeline.SetLooping(true);

	//set the starting point to be the actors spawn location
	StartLoc = GetActorLocation();

	// set the end location to be the specified value plus the actor location
	EndLoc += GetActorLocation();

	//play the timeline
	CurveTimeline.PlayFromStart();
}

void AMobilePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//play the timeline
	CurveTimeline.TickTimeline(DeltaTime);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////