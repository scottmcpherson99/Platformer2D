// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletDrop.h"


#include "PlayerCharacter.h"

#include "AudioManager.h"

#include "Components/BoxComponent.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ABulletDrop::ABulletDrop()
{

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ACoin>
void ABulletDrop::BeginPlay()
{
	//called on begin play
	Super::BeginPlay();

	//turn on collision checks for the collision box and set the triggerbox to be the bullets location
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ABulletDrop::OnTriggerBoxOverlap);
	TriggerBox->SetWorldLocation(GetActorLocation());
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void ABulletDrop::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//check to see if the overlapping actor is a player character, if it is, destroy the bullet
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		playerCharacter->SetBullets(1);
		audioManagerHandler->PlayAudio(collectionSound);

		//destroy the bullet
		Destroy();
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////