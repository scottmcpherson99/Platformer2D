// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameStats.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API USaveGameStats : public USaveGame
{
	GENERATED_BODY()

public:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <GettersandSetters>
	// Output the player's lives
	const float GetLives() const;

	// Update the players lives
	void SetLives(float lives_);
	
	// Output the player's coins
	const float GetCoins() const;

	// Update the players coins
	void SetCoins(float coins_);

	// Output the player's bullets
	const float GetBullets() const;

	// Update the players lives
	void SetBullets(float bullets_);

	// Output the level the player reached
	const FName GetPlayerLevel() const;

	// Update the level the player reached
	void SetLevelName(FName levelName_);
	// <//GettersandSetters>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Attributes>
	// the player's lives total
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		float lives;

	//the players coin total
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		float coins;

	//the players bullet total
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		float bullets;

	// the level name the player reached
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		FName levelName;
	// <//Attributes>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};