// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyPickup.h"

#include "AudioManager.h"

#include "PaperSpriteComponent.h"

#include "Components/BoxComponent.h"

#include "PlayerCharacter.h"
#include "Components/InputComponent.h"

#include "Kismet/GameplayStatics.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Set default values
AKeyPickup::AKeyPickup()
{

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// KeyPickup Interface
void AKeyPickup::BeginPlay()
{
	Super::BeginPlay();

	//create the audio manager handler that will play the audio
	if (IsValid(audioManager))
	{
		audioManagerHandler = Cast<AAudioManager>(UGameplayStatics::GetActorOfClass(GetWorld(), audioManager));
	}

	//turn on collision checks
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AKeyPickup::OnComponentBeginOverlap);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &AKeyPickup::OnComponentEndOverlap);

	BindToInput();
}

void AKeyPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Input
void AKeyPickup::BindToInput()
{
	// Initialize our component
	InputComponent = NewObject<UInputComponent>(this);
	InputComponent->RegisterComponent();
	if (InputComponent)
	{
		InputComponent->BindAction("Interact", IE_Pressed, this, &AKeyPickup::OnInteraction);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void AKeyPickup::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	//get the player character and controller
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	if (playerCharacter != nullptr && playerController != nullptr)
	{
		EnableInput(playerController);
	}
}

void AKeyPickup::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	if (playerCharacter != nullptr && playerController != nullptr)
	{
		DisableInput(playerController);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Gameplay
void AKeyPickup::OnInteraction()
{
	ACharacter* character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character);

	if (playerCharacter != nullptr)
	{
		audioManagerHandler->PlayAudio(keyPickupSound);
		playerCharacter->SetHasPlayerGotKey(true);
		Destroy();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////