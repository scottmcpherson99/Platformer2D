// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Door.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ADoor : public APaperSpriteActor
{
	GENERATED_BODY()
	
public:
	ADoor();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ADoor>
	virtual void BeginPlay();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </ADoor>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <PlayerInput>
	// APlayerCharacter Input Component
	void BindToInput();

	//class UInputComponent* InputComponent;
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);
	// </PlayerInput>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	// door sprite
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpriteComponent)
		class UPaperSpriteComponent* doorSprite;

	//trigger box to check for collisions with the door
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

	//sound for player opening door
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
		class USoundBase* openingDoorSound;

	//sound for player attempting to open the door without a key
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
		class USoundBase* lockedDoorSound;
	// </Audio>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Collision>
	//checks to see if any actors have overlapped the collision box
	UFUNCTION()
		void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//checks to see if any actors have exited the collision box
	UFUNCTION()
		void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	// </Collision>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Gameplay>
	void OnInteraction();
	// </Gameplay>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

private:
	bool playerHasKey;
};