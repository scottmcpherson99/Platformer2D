// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioManager.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AAudioManager::AAudioManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Audio Manager Interface
// Called when the game starts or when spawned
void AAudioManager::BeginPlay()
{
	Super::BeginPlay();

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Play Audio
void AAudioManager::PlayLoopingAudio(USoundBase* desiredSound)
{
	//play the sound that has been passed in and schedule it to be played again once it has finished
	if (desiredSound != nullptr)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), desiredSound);
		doLoop(desiredSound);
	}
}

void AAudioManager::PlayAudio(USoundBase* desiredSound)
{
	//play the sound that has been passed in
	if (desiredSound != nullptr)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), desiredSound);
	}
}

void AAudioManager::PlayAudioAtLocation(USoundBase* desiredSound, FVector desiredLocation)
{
	//play the sound that has been passed in at the location that has been passed in
	if (desiredSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), desiredSound, desiredLocation);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Handle Loops
void AAudioManager::doLoop(USoundBase* desiredSound)
{
	//after the audio sound that has been passed in has finished, replay the audio
	FTimerDelegate delagte;
	delagte.BindUFunction(this, FName("PlayLoopingAudio"), desiredSound);
	GetWorldTimerManager().SetTimer(loopTimer, delagte, desiredSound->Duration, false);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////