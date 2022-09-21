// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"
#include "DumbEnemy.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ADumbEnemy : public AEnemyBase
{
	GENERATED_BODY()
public:
	ADumbEnemy();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ADumbEnemy>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </ADumbEnemy>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Collision>
	//checks to see if any actors have overlapped the collision box
	UFUNCTION()
		void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//trigger box to check for collisions with the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		class UBoxComponent* detectionBox;
	// </Collision>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Attributes>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float movementSpeed;
	// </Attributes>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

};