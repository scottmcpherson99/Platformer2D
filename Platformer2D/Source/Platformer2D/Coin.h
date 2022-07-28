// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Coin.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ACoin : public ACollectable
{
	GENERATED_BODY()
	
public:
	ACoin();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ACoin>
	// Called when the game starts or when spawned
	virtual void BeginPlay();
	// </ACoin>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Collision>
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// </Collision>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};