// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/TextBlock.h"

#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API UGameHUD : public UUserWidget
{
	GENERATED_BODY()
	
public:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <UpdatePlayerStats>
	//update the text displaying the players coins
	void UpdatePlayerCoins(float coins_);

	//update the text displaying the players lives
	void UpdatePlayerLives(float lives_);
	// </UpdatePlayerStats>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//button that will start a new game
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* PlayerCoins;

	//button that will show the game settings
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* PlayerLives;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
