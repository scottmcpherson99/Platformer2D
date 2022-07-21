// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API APlayerCharacter : public APaperCharacter
{
	GENERATED_BODY()

public:
		APlayerCharacter();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <APlayerCharacter>
	virtual void BeginPlay();
	// </APlayerCharacter>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <PlayerInput>
	// APlayerCharacter Input Component
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// </PlayerInput>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Movement>
	// Jump
	virtual void Jump() override;

	//stop jump
	virtual void StopJumping() override;

	// Move Player
	void MoveRight(float movementValue_);

	//player attack
	void Attack();

	// </Movement>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* SideViewCameraComponent;
	// </Components>
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Flipbook Animations>
		
	// The animation to play while walking
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* WalkingAnimation;

	// The animation to play while running around
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* RunningAnimation;

	// The animation to play while idle (standing still)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* IdleAnimation;

	// The animation to play while jumping
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* JumpingAnimation;

		
		// The animation to play while attacking
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* AttackAnimation;

		// The animation to play while celebrating
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* CheerAnimation;
		// </Flipbook Animations>
		///////////////////////////////////////////////////////////////////////////////////////////////////////////


		///////////////////////////////////////////////////////////////////////////////////////////////////////////
		// <Animations>
		void UpdateAnimation(UPaperFlipbook* desiredAnimation);

		void SetIdleAnimation();

		FTimerHandle animationTimer;

		bool isAnimPlaying;
		// </Animations>
		///////////////////////////////////////////////////////////////////////////////////////////////////////////

};