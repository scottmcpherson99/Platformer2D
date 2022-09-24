// Fill out your copyright notice in the Description page of Project Settings.


#include "FallingTile.h"

#include "PlayerCharacter.h"

#include "Components/BoxComponent.h"

#include "PaperSpriteComponent.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AFallingTile::AFallingTile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the collision box component
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <AFallingTile>
void AFallingTile::BeginPlay()
{
	//called on begin play
	Super::BeginPlay();

	//turn on collision checks for the collision box and set the triggerbox to be the coins location
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AFallingTile::OnTriggerBoxOverlap);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void AFallingTile::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//check to see if the overlapping actor is a player character
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		GetWorldTimerManager().SetTimer(gravityTimer, this, &AFallingTile::StartFalling, 2.f, false);
	}
}
void AFallingTile::StartFalling()
{
	//clear the gravity timer
	GetWorldTimerManager().ClearTimer(gravityTimer);

	//enable physics on the tile
	GetRenderComponent()->SetSimulatePhysics(true);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////