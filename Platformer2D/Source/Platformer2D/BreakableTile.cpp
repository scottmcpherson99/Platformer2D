// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableTile.h"

#include "PlayerCharacter.h"

#include "Components/BoxComponent.h"

#include "Coin.h"
#include "LifeDrop.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ABreakableTile::ABreakableTile()
{
	//create the trigger box component and attach it to the root
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// BreakableTile Interface
void ABreakableTile::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks for the collision box
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ABreakableTile::OnTriggerBoxOverlap);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void ABreakableTile::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//check to see if the overlapping actor is a player character, if it is, destroy the tile
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		tileStrength--;

		if (tileStrength < 1)
		{
			//destroy the tile
			GetWorldTimerManager().SetTimer(destroyTimer, this, &ABreakableTile::DestroyTile, 0.1f, false);
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tile Destruction
// destroy the tile
void ABreakableTile::DestroyTile()
{
	//set the spawn parameters for the drop
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();
	FVector spawnVec = GetActorLocation();

	//if the specified drop if a coin and coinDrop has been defined, spawn the coin
	if (drop == Drop::Coin)
	{
		if (coinDrop != nullptr)
		{
			//spawn a coin drop
			GetWorld()->SpawnActor<ACoin>(coinDrop, spawnVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
		}
	}

	//if the specified drop if a lifedrop and lifeDrop has been defined, spawn the life drop
	else if (drop == Drop::LifeDrop)
	{
		if (lifeDrop != nullptr)
		{
			//spawn a life drop
			GetWorld()->SpawnActor<ALifeDrop>(lifeDrop, spawnVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
		}
	}

	Destroy();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////