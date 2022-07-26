// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"

#include "InPlayGameModeBase.h"

#include "PaperSpriteComponent.h"
#include "PaperFlipbookComponent.h"

#include "PlayerCharacter.h"

#include "Components/BoxComponent.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AEnemyBase::AEnemyBase()
{
	//create the flagpole mesh
	enemyMeshFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("enemyMeshFlipbook"));
	enemyMeshFlipbook->SetupAttachment(RootComponent);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Enemy Base Interface
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::OnTriggerBoxOverlap);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void AEnemyBase::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is the player, display the death screen
	if (playerCharacter != nullptr)
	{
		// check if the player has already been killed
		if (playerCharacter->GetImunity() == false)
		{
			playerCharacter->OnPlayerDeath();

			//set the player character to be immune from taking any more damage
			playerCharacter->SetImunity(true);

			//display the death screen on the widget
			AInPlayGameModeBase* gameMode = (AInPlayGameModeBase*)GetWorld()->GetAuthGameMode();

			if (gameMode)
			{
				gameMode->OnPlayerDeath();
			}

			
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////