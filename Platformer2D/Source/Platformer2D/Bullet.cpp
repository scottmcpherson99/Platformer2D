// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Gameframework/ProjectileMovementComponent.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"
#include "EnemyBase.h"
#include "Collectable.h"
#include "Kismet/GameplayStatics.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ABullet::ABullet()
{
	//create projectile movement
	projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("projectileMovementComponent"));
	projectileMovement->MaxSpeed = 400;
	projectileMovement->InitialSpeed = 400;
	projectileMovement->ProjectileGravityScale = 0.f;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);

	//create sprite component
	bulletSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("BulletSprite"));
	bulletSprite->SetEnableGravity(false);
	bulletSprite->AttachTo(TriggerBox);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Bullet Interface
void ABullet::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnTriggerBoxOverlap);
}

void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void ABullet::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AEnemyBase* enemy = Cast<AEnemyBase>(OtherActor);
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is an enemy then destroy the bullet and the enemy
	if (enemy != nullptr)
	{
		enemy->Destroy();
		Destroy();
	}
	
	//if the colliding actor is a player character, ignore the collision
	else if (playerCharacter != nullptr)
	{
	}

	// if the colliding actor is anything else, destroy the bullet
	else if (playerCharacter == nullptr)
	{
		Destroy();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////