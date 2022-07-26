// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TileBase.h"
#include "BreakableTile.generated.h"

UENUM()
enum Drop
{
	Coin UMETA(DisplayName = "Coin"),
	Bullet UMETA(DisplayName = "Bullet"),
	LifeDrop UMETA(DisplayName = "LifeDrop"),
};
/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ABreakableTile : public ATileBase
{
	GENERATED_BODY()
	
public:
	ABreakableTile();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Drops>
	//enum to specify what the block should drop 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Type of drop to spawn")
		TEnumAsByte<Drop> drop;

	// The coin drop
	UPROPERTY(EditAnywhere, Category = "Type of drop to spawn")
		TSubclassOf<class ACoin> coinDrop;

	// The life drop
	UPROPERTY(EditAnywhere, Category = "Type of drop to spawn")
		TSubclassOf<class ALifeDrop> lifeDrop;

	// The bullet drop
	UPROPERTY(EditAnywhere, Category = "Type of drop to spawn")
		TSubclassOf<class ABulletDrop> bulletDrop;
	// </Drops>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Collision>
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
		class UBoxComponent* TriggerBox;

	//if another object enters the TriggerBox
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// </Collision>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ABreakableTile>
	virtual void BeginPlay() override;
	// </ABreakableTile>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <TileDestruction>
	void DestroyTile();

	//timer to delay the destruction of the tile
	FTimerHandle destroyTimer;

	//choose how strong the tile is, how many times the player needs to hit the tile for it to break
	UPROPERTY(EditAnywhere, meta = (UIMin = 1, UIMax = 10), Category = strength)
		int tileStrength;
	// </TileDestruction>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};