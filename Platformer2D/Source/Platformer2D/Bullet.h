// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Bullet.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ABullet : public APaperSpriteActor
{
	GENERATED_BODY()
	
public:
	ABullet();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <APlayerCharacter>
	virtual void BeginPlay();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </APlayerCharacter>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	// bullet animation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpriteComponent)
		class UPaperSpriteComponent* bulletSprite;

	// projectile movement component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		class UProjectileMovementComponent* projectileMovement;

	//trigger box to check for collisions with the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		class UBoxComponent* TriggerBox;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Collision>
		//checks to see if any actors have overlapped the collision box
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// </Collision>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

};
