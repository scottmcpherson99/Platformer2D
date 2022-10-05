// Fill out your copyright notice in the Description page of Project Settings.


#include "Spike.h"

#include "InPlayGameModeBase.h"

#include "PaperSpriteComponent.h"

#include "PlayerCharacter.h"

#include "Components/BoxComponent.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ASpike::ASpike()
{
	//create the trigger box component and attach it to the root
	spriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("spriteComponent"));
	spriteComponent->SetupAttachment(RootComponent);

	//create the trigger box component and attach it to the root
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ASpike Interface
void ASpike::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks for the collision box
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ASpike::OnTriggerBoxOverlap);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void ASpike::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is the player, display the death screen
	if (playerCharacter != nullptr)
	{
		// check if the player has already been killed
		if (playerCharacter->GetImunity() == false)
		{
		playerCharacter->OnPlayerDeath();

		//display the death screen on the widget
		AInPlayGameModeBase* gameMode = (AInPlayGameModeBase*)GetWorld()->GetAuthGameMode();

		if (gameMode)
		{
			gameMode->OnPlayerDeath();
		}
		//set the player character to be immune from taking any more damage
		playerCharacter->SetImunity(false);
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////