// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <map>
#include "GameFramework/Actor.h"
#include "TextRenderer.generated.h"

UENUM()
enum TextRendered
{
	Pickup UMETA(DisplayName = "Pickup"),
	EnemyIntro UMETA(DisplayName = "EnemyIntro"),
	BreakableTile UMETA(DisplayName = "BreakableTile"),
	Movingplatform UMETA(DisplayName = "MovingPlatform"),
	FallingTile UMETA(DisplayName = "FallingTile"),
	Spikes UMETA(DisplayName = "Spikes"),
	Door UMETA(DisplayName = "Door"),
};


UCLASS()
class PLATFORMER2D_API ATextRenderer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATextRenderer();

protected:

	std::map <TextRendered, FString> textOutput;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class USceneComponent* sceneComp_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UTextRenderComponent* textRenderComp_;

	void RenderedText();

	//enum to specify what text to render
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text to render")
		TEnumAsByte<TextRendered> textRendered;
};
