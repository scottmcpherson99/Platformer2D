// Fill out your copyright notice in the Description page of Project Settings.

#include <iostream>

#include "Coin.h"

#include "PlayerCharacter.h"

#include "AudioManager.h"

#include "Components/BoxComponent.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ACoin::ACoin()
{

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ACoin>
void ACoin::BeginPlay()
{
	//called on begin play
	Super::BeginPlay();

	//turn on collision checks for the collision box and set the triggerbox to be the coins location
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ACoin::OnTriggerBoxOverlap);
	TriggerBox->SetWorldLocation(GetActorLocation());
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void ACoin::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//check to see if the overlapping actor is a player character, if it is, destroy the tile
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		playerCharacter->SetCoins(1);
		audioManagerHandler->PlayAudio(collectionSound);

		//destroy the coin
		Destroy();
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////