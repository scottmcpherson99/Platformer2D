// Fill out your copyright notice in the Description page of Project Settings.


#include "Goal.h"

#include "PlayerCharacter.h"

#include "AudioManager.h"

#include "Components/BoxComponent.h"

#include "Kismet/GameplayStatics.h"

#include "PaperSpriteComponent.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AGoal::AGoal()
{
	//create the flagpole mesh
	flagpoleMesh = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("flagpoleMesh"));
	flagpoleMesh->SetupAttachment(RootComponent);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ACoin>
void AGoal::BeginPlay()
{
	//called on begin play
	Super::BeginPlay();

	//turn on collision checks for the collision box and set the triggerbox to be the coins location
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AGoal::OnTriggerBoxOverlap);
	TriggerBox->SetWorldLocation(GetActorLocation());
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void AGoal::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//check to see if the overlapping actor is a player character
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		//play the cheering animation for the player
		playerCharacter->UpdateAnimation(EPlayerAnimation::ECHEERING);

		//turn off the input for the player character and show the mouse cursor to let the user navigate the widget
		APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
		if (playerController != nullptr)
		{
			playerController->bShowMouseCursor = true;

			if (playerCharacter != nullptr)
			{
				playerCharacter->DisableInput(playerController);
			}
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////