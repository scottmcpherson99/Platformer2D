// Fill out your copyright notice in the Description page of Project Settings.


#include "LifeDrop.h"

#include "PlayerCharacter.h"

#include "AudioManager.h"

#include "Components/BoxComponent.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ALifeDrop::ALifeDrop()
{

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ALifeDrop>
void ALifeDrop::BeginPlay()
{
	//called on begin play
	Super::BeginPlay();

	//turn on collision checks for the collision box and set the triggerbox to be the coins location
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ALifeDrop::OnTriggerBoxOverlap);
	TriggerBox->SetWorldLocation(GetActorLocation());
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void ALifeDrop::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//check to see if the overlapping actor is a player character, if it is, destroy the tile
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		playerCharacter->SetLives(1);
		audioManagerHandler->PlayAudio(collectionSound);

		//destroy the life drop
		Destroy();
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////