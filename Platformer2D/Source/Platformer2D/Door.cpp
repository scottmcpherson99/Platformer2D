// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

#include "AudioManager.h"

#include "PaperSpriteComponent.h"

#include "Components/BoxComponent.h"

#include "PlayerCharacter.h"
#include "Components/InputComponent.h"

#include "Kismet/GameplayStatics.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Set default values
ADoor::ADoor()
{
	//create sprite component
	doorSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("BulletSprite"));
	doorSprite->AttachTo(RootComponent);

	//create the trigger box component
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Input
void ADoor::BindToInput()
{
	// Initialize our component
	InputComponent = NewObject<UInputComponent>(this);
	InputComponent->RegisterComponent();
	if (InputComponent)
	{
		InputComponent->BindAction("Interact", IE_Pressed, this, &ADoor::OnInteraction);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Door Interface
void ADoor::BeginPlay()
{
	Super::BeginPlay();

	//create the audio manager handler that will play the audio
	if (IsValid(audioManager))
	{
		audioManagerHandler = Cast<AAudioManager>(UGameplayStatics::GetActorOfClass(GetWorld(), audioManager));
	}

	//turn on collision checks
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADoor::OnComponentBeginOverlap);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ADoor::OnComponentEndOverlap);

	BindToInput();

	playerHasKey = false;
}

void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void ADoor::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//get the player character and controller
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	if (playerCharacter != nullptr && playerController != nullptr)
	{
		EnableInput(playerController);
		playerHasKey = playerCharacter->GetHasPlayerGotKey();
	}
}

void ADoor::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	if (playerCharacter != nullptr && playerController != nullptr)
	{
		DisableInput(playerController);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void ADoor::OnInteraction()
{
	//if the player has the key, destroy the door
	if (playerHasKey == true)
	{
		//play the sound for opening the door
		audioManagerHandler->PlayAudio(openingDoorSound);
		Destroy();
	}
	else
	{
		//play the sound for the door being locked
		audioManagerHandler->PlayAudio(lockedDoorSound);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////