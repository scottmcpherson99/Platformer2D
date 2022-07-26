// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "PlayerCharacter.generated.h"

//enum state for choice of player animation
UENUM(BlueprintType)
enum class EPlayerAnimation : uint8
{
	EIDLE UMETA(DisplayName = "Idle"),
	EWALKING UMETA(DisplayName = "Walking"),
	ERUNNING UMETA(DisplayName = "Running"),
	EJUMPING UMETA(DisplayName = "Jumping"),
	ECHEERING UMETA(DisplayName = "Cheering"),
	EATTACKING UMETA(DisplayName = "Attacking")
};
/**
 * 
 */
UCLASS()
class PLATFORMER2D_API APlayerCharacter : public APaperCharacter
{
	GENERATED_BODY()

public:
		APlayerCharacter();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <GettersandSetters>
	// Update the value of the players coins
		void SetCoins(float value_);

	// Output the players coins
		const float GetCoins() const;

	// Update the value of the players lives
		void SetLives(float value_);

	// Output the players lives
		const float GetLives() const;

	//get the players direction
		const bool GetPlayerDirection() const;

	// Update the value of the players bullets
		void SetBullets(float bullets_);

	//get the bullets remaining
		const float GetBulletsRemaining() const;

	// Update the value of whether the player has the key
		void SetHasPlayerGotKey(bool hasKey_);

	// Output if the player has the key
		const bool GetHasPlayerGotKey() const;

	// set the player to be imune from taking any more damage
		void SetImunity(bool imunity_);

	// check if the player is dead
		const bool GetImunity() const;
	// </GettersandSetters>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Animations>
		void UpdateAnimation(EPlayerAnimation desiredAnimation);
	// </Animations>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////



	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Gameplay>
		//player death occurence
		void OnPlayerDeath();

		//shoot a bullet
		void ShootBullet();

		//game over for player
		void GameOver();
	// </Gameplay>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


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
	// <SaveGame>
	// Load the players stats
	void LoadPlayerStats();

	// Save the players stats
	void SavePlayerStats();
	// Save game slot
	class USaveGameStats* savePlayerStats;
	// </SaveGame>
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


		///////////////////////////////////////////////////////////////////////////////////////////////////////////
		// <SubClasses>
		UPROPERTY(EditAnywhere, Category = "PlayerAttributes")
			TSubclassOf<class ABullet> playerBullet;
		// </SubClasses>
		///////////////////////////////////////////////////////////////////////////////////////////////////////////


		///////////////////////////////////////////////////////////////////////////////////////////////////////////
		// <Widgets>
		void UpdatePlayerStats();
		// </Widgets>
		///////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////

		
		// <Audio>
		//background music
		//handles playing audio
		UPROPERTY(EditAnywhere, Category = "Audio")
			TSubclassOf<class AAudioManager> audioManager;

		class AAudioManager* audioManagerHandler;

		//sound for player jumping
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
			class USoundBase* jumpingSound;
		// </Audio>
		///////////////////////////////////////////////////////////////////////////////////////////////////////////
		

private:
		///////////////////////////////////////////////////////////////////////////////////////////////////////////
		// <Attributes>
		//players coins
		float coins = 0;

		//players lives
		float lives = 3;

		//player direction
		bool playerFacingRight;

		//player bullets remaining
		float bulletsRemaining = 3;

		//check if the player has a key
		bool hasKey;

		// check if the player is already dead
		bool playerImunity;
		// </Attributes>
		///////////////////////////////////////////////////////////////////////////////////////////////////////////
};