// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "TileBase.h"
#include "MobilePlatform.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AMobilePlatform : public ATileBase
{
	GENERATED_BODY()
public:
	AMobilePlatform();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Timeline>
	UFUNCTION()
		void TimelineProgress(float value);
	// </Timeline>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ACollectable>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </ACollectable>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//the flagpole sprite
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sprite)
		class UPaperSpriteComponent* platformMesh;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Timeline>
	// Called when the game starts or when spawned
	FTimeline CurveTimeline;

	UPROPERTY(EditAnywhere, Category = "Timeline")
		UCurveFloat* CurveFloat;
	// </Timeline>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Attributes>
	UPROPERTY()
		FVector StartLoc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timeline", Meta = (MakeEditWidget = true))
		FVector EndLoc;
	// </Attributes>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};