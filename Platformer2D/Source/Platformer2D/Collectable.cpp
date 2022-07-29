// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectable.h"

#include "AudioManager.h"

#include "Kismet/GameplayStatics.h"

#include "PaperFlipbookComponent.h"

#include "Components/BoxComponent.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ACollectable::ACollectable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	spriteComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("MeshComp"));
	spriteComponent->SetupAttachment(RootComponent);
	spriteComponent->SetEnableGravity(false);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ACollectable>
void ACollectable::BeginPlay()
{
	Super::BeginPlay();

	//create the audio manager handler that will play the audio in the main menu and play the background music
	if (IsValid(audioManager))
	{
		audioManagerHandler = Cast<AAudioManager>(UGameplayStatics::GetActorOfClass(GetWorld(), audioManager));
	}
}

void ACollectable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////