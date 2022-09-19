// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Animations>
	void PlayFadeOutAnimation();

	//title animation
	UPROPERTY(Transient, meta = (BindWidgetAnim))
		class UWidgetAnimation* FadeOutAnimation;

	FTimerHandle FadeOutTimer;
	// </Animations>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <UMainMenuWidget>
	void OnStart();

	void OnNewLevel();
	// </UMainMenuWidget>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//button that will start a new game
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* NewGameButton;

	//button that will show the game controls
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* ControlsButton;

	//button that will show how to play the game
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* HowToPlayButton;

	//button that will exit the application
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* QuitButton;

	//button that will exit the application
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* BackButton;

	//title
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* TitleBlock;

	//title
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* TitleBlock2;

	//fade out image
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage* FadeImage;

	//death screen hud to be played upon players death
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UControlsWidget* controlsWidgetHUD;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
		

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ButtonFunctions>
	//start a new game
	UFUNCTION()
		void OnNewGameClicked();

	//exit the application
	UFUNCTION()
		void OnQuitClicked();

	//show the game settings
	UFUNCTION()
		void OnControlsClicked();

	//show the how to play screen
	UFUNCTION()
		void OnHowToPlayClicked();

	//go back to the main menu
	UFUNCTION()
		void OnBackClicked();
	// </ButtonFunctions>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <UMainMenuWidget>
	virtual void NativeConstruct() override;
	// </UMainMenuWidget>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};