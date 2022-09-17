// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"

#include "Components/TimelineComponent.h"

#include "BezierEnemy.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ABezierEnemy : public AEnemyBase
{
	GENERATED_BODY()
	
public:
	ABezierEnemy();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ABezierEnemy>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </ABezierEnemy>
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
	// <Components>

	//the second control point
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", Meta = (MakeEditWidget = true))
		FVector midPoint;

	//the third control point
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", Meta = (MakeEditWidget = true))
		FVector endPoint;

	//the first control point
	FVector startPoint;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};