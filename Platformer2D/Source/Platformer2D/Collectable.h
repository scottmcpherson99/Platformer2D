// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Collectable.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ACollectable : public APaperSpriteActor
{
	GENERATED_BODY()

public:
	ACollectable();
	
protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ACollectable>
	// Called when the game starts or when spawned
	virtual void BeginPlay();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </ACollectable>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	/** Sprite component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = SpriteComponent, meta = (AllowPrivateAccess = "true"))
		class UPaperFlipbookComponent* spriteComponent;

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