// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Interactable.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AInteractable : public APaperSpriteActor
{
	GENERATED_BODY()

public:
	AInteractable();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <AInteractable>
	// Called when the game starts or when spawned
	virtual void BeginPlay();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </ASpring>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	/** Sprite component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = SpriteComponent, meta = (AllowPrivateAccess = "true"))
		class UPaperSpriteComponent* spriteComponent;

	/** TriggerBox component */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		class UBoxComponent* TriggerBox;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Audio>
	//handles playing audio
	UPROPERTY(EditAnywhere, Category = "Audio")
		TSubclassOf<class AAudioManager> audioManager;

	class AAudioManager* audioManagerHandler;
	// </Audio>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};