// Fill out your copyright notice in the Description page of Project Settings.


#include "Spring.h"

#include "AudioManager.h"

#include "PaperSpriteComponent.h"

#include "PlayerCharacter.h"

#include "Components/BoxComponent.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ASpring::ASpring()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	usedSpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("usedSpriteComponent"));
	usedSpriteComponent->SetupAttachment(RootComponent);
	usedSpriteComponent->SetEnableGravity(false);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ASpring>
void ASpring::BeginPlay()
{
	//called on begin play
	Super::BeginPlay();

	//turn on collision checks for the collision box and set the triggerbox to be the coins location
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ASpring::OnTriggerBoxOverlap);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ASpring::OnComponentEndOverlap);
	TriggerBox->SetWorldLocation(GetActorLocation());

	usedSpriteComponent->SetVisibility(false);
	spriteComponent->SetVisibility(true);
}

void ASpring::Tick(float DeltaTime)
{
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void ASpring::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//check to see if the overlapping actor is a player character, if it is, launch the player
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		//play the bounce sound
		audioManagerHandler->PlayAudio(bounceSound);

		//launch the character in the air
		playerCharacter->LaunchCharacter(FVector(0.f, 0.f, 1000.f), false, true);

		//set the used spring animation on display
		usedSpriteComponent->SetVisibility(true);
		spriteComponent->SetVisibility(false);
	}
}

void ASpring::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is the player, switch to the original sprite
	if (playerCharacter != nullptr)
	{
		GetWorldTimerManager().SetTimer(animationTimer, this, &ASpring::ResetAnimation, 0.5f, false);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void ASpring::ResetAnimation()
{
	//clear the animation timer
	GetWorldTimerManager().ClearTimer(animationTimer);

	//reset the spring animation
	usedSpriteComponent->SetVisibility(false);
	spriteComponent->SetVisibility(true);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////