// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"

#include "Components/TimelineComponent.h"

#include "WormEnemy.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EWormAIState : uint8
{
	EATTACKPLAYER UMETA(DisplayName = "AttackPlayer"),
	EWANDER UMETA(DisplayName = "Wander")
};

UCLASS()
class PLATFORMER2D_API AWormEnemy : public AEnemyBase
{
	GENERATED_BODY()

public: 
	AWormEnemy();
	
protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <AWormEnemy>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </AWormEnemy>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Timeline>
	//timeline actor
	UPROPERTY(EditAnywhere, Category = "Timeline")
		UCurveFloat* BezierCurveFloat;

	FTimeline BezierCurveTimeline;

	UFUNCTION()
		void BezierTimelineProgress(float value);
	// </Timeline>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <StateLogic>
	//switch the state the AI is in
	void SwitchAIState(EWormAIState newState_);

	//perform tasks based on state
	void FindControlPoints();
	// </StateLogic>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Collision>
	//checks to see if any actors have overlapped the collision box
	UFUNCTION()
		void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//checks to see if any actors have exited the collision box
	UFUNCTION()
		void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//trigger box to check for collisions with the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		class UBoxComponent* detectionBox;
	// </Collision>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", Meta = (MakeEditWidget = true))
		FVector upperLeftBound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", Meta = (MakeEditWidget = true))
		FVector lowerRightBound;

private:
	EWormAIState currentState_;

	FVector ControlPoints[3];
};
