// Fill out your copyright notice in the Description page of Project Settings.


#include "DumbEnemy.h"

#include "Components/BoxComponent.h"

#include "PaperFlipbookComponent.h"
#include "PaperSpriteComponent.h"

#include "Wall.h"

#include "PlayerCharacter.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ADumbEnemy::ADumbEnemy()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	detectionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("detectionBox"));
	detectionBox->SetupAttachment(RootComponent);

	movementSpeed = 30;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Dumb Enemy Interface
void ADumbEnemy::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks
	detectionBox->OnComponentBeginOverlap.AddDynamic(this, &ADumbEnemy::OnComponentBeginOverlap);
}

void ADumbEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddMovementInput(FVector(movementSpeed * DeltaTime, 0.0f, 0.0f));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void ADumbEnemy::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AWall* wall = Cast<AWall>(OtherActor);

	if (wall != nullptr)
	{
		movementSpeed *= -1;
		if (movementSpeed < 0)
		{
			enemyMeshFlipbook->SetWorldRotation(FQuat(0.f, 0.f, 180.f, 0.f));
		}
		else if (movementSpeed > 0)
		{
			enemyMeshFlipbook->SetWorldRotation(FQuat(0.f, 0.f, 0.f, 0.f));
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////