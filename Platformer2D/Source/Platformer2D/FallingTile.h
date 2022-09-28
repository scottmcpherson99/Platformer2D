// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TileBase.h"
#include "FallingTile.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AFallingTile : public ATileBase
{
	GENERATED_BODY()
	
public:
	AFallingTile();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <AFallingTile>
	// Called when the game starts or when spawned
	virtual void BeginPlay();
	// </AFallingTile>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	/** TriggerBox component */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		class UBoxComponent* TriggerBox;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Collision>
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// </Collision>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Timer>
	FTimerHandle gravityTimer;

	//enable the gravity
	void StartFalling();
	// </Timer>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};