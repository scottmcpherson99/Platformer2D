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
	// <Animations>
	void PlayTitleAnimation();

	//fade in animation
	UPROPERTY(Transient, meta = (BindWidgetAnim))
		class UWidgetAnimation* FadeInAnimation;


	//fade out animation
	UPROPERTY(Transient, meta = (BindWidgetAnim))
		class UWidgetAnimation* FadeOutAnimation;

	//death animation
	UPROPERTY(Transient, meta = (BindWidgetAnim))
		class UWidgetAnimation* DeathAnimation;

	// </Animations>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <UpdatePlayerStats>
	//update the text displaying the players coins
	void UpdatePlayerCoins(float coins_);

	//update the text displaying the players lives
	void UpdatePlayerLives(float lives_);

	//update the text displaying the players coins
	void UpdatePlayerBullets(float bullets_);
	// </UpdatePlayerStats>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <UMainMenuWidget>
	void OnStart();

	void OnComplete();

	void OnPlayerDeath();
	// </UMainMenuWidget>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//text to show the players coins
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* PlayerCoins;

	//text to show the players lives
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* PlayerLives;

	//text to show the players bullets
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* PlayerBullets;

	//death screen hud to be played upon players death
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UDeathScreen* deathScreenHUD;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};