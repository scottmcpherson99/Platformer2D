// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "KeyPickup.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AKeyPickup : public ACollectable
{
	GENERATED_BODY()
public:
	AKeyPickup();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <AKeyPickup>
	virtual void BeginPlay();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </AKeyPickup>
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
	// <Audio>
	//sound for player picking up the key
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
		class USoundBase* keyPickupSound;
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
};