// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Spike.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ASpike : public APaperSpriteActor
{
	GENERATED_BODY()
	
public:
	ASpike();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ASpike>
	// Called when the game starts or when spawned
	virtual void BeginPlay();
	// </ASpike>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
		/** Sprite component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SpriteComponent")
		class UPaperSpriteComponent* spriteComponent;

	/** collision box component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
		class UBoxComponent* TriggerBox;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Collision>
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// </Collision>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};