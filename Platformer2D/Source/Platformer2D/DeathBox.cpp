// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathBox.h"

#include "InPlayGameModeBase.h"

#include "PlayerCharacter.h"

#include "Components/BoxComponent.h"

// Sets default values
ADeathBox::ADeathBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ADeathBox::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADeathBox::OnTriggerBoxOverlap);
}

void ADeathBox::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is the player, display the death screen
	if (playerCharacter != nullptr)
	{
		playerCharacter->OnPlayerDeath();

		//display the death screen on the widget
		AInPlayGameModeBase* gameMode = (AInPlayGameModeBase*)GetWorld()->GetAuthGameMode();

		if (gameMode)
		{
			gameMode->OnPlayerDeath();
		}
	}
}