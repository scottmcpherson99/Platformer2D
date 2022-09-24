// Fill out your copyright notice in the Description page of Project Settings.


#include "TextRenderer.h"

// Sets default values
ATextRenderer::ATextRenderer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATextRenderer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATextRenderer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

