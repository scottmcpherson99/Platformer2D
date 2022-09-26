// Fill out your copyright notice in the Description page of Project Settings.


#include "TextRenderer.h"
#include "Components/TextRenderComponent.h"	
#include "Components/SceneComponent.h"

// Sets default values
ATextRenderer::ATextRenderer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComp_ = CreateDefaultSubobject<USceneComponent>(TEXT("sceneComp_"));
	sceneComp_->SetupAttachment(RootComponent);

	textRenderComp_ = CreateDefaultSubobject<UTextRenderComponent>(TEXT("textRenderComp_"));
	textRenderComp_->SetupAttachment(sceneComp_);

	textOutput.insert(std::pair<TextRendered, FString>(TextRendered::BreakableTile, "Tiles can be broken by jumping\nunderneath them to gain a drop"));
	textOutput.insert(std::pair<TextRendered, FString>(TextRendered::EnemyIntro, "Enemies will try to halt your progress!\nLeft click to shoot them"));
	textOutput.insert(std::pair<TextRendered, FString>(TextRendered::FallingTile, "Watch out for falling tiles that will\ncollapse after you have stood on them!"));
	textOutput.insert(std::pair<TextRendered, FString>(TextRendered::Movingplatform, "Some platforms will move from side to side\nor up and down, be careful not to fall!"));
	textOutput.insert(std::pair<TextRendered, FString>(TextRendered::Pickup, "You will be able to pickup some aids to help you along your journey!"));
	textOutput.insert(std::pair<TextRendered, FString>(TextRendered::Spikes, "Be careful not to step on spikes, they will hurt!"));
}

// Called when the game starts or when spawned
void ATextRenderer::BeginPlay()
{
	Super::BeginPlay();
	
	RenderedText();

}

// Called every frame
void ATextRenderer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATextRenderer::RenderedText()
{
	textRenderComp_->SetText(textOutput.at(textRendered));
}

