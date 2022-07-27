// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "Components/InputComponent.h"

#include "GameFramework/CharacterMovementComponent.h"

#include "PaperSpriteComponent.h"
#include "PaperFlipbookComponent.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	// Create an orthographic camera (no perspective) and attach it to the boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 2048.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent all automatic rotation behavior on the camera, character, and camera component
	CameraBoom->SetUsingAbsoluteRotation(true);
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Interface
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	//set the default animation value
	SetIdleAnimation();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Interface
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &APlayerCharacter::Attack);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayerCharacter::StopJumping);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Movement
void APlayerCharacter::Jump()
{
	Super::Jump();

	//play the jumping animation
	UpdateAnimation(JumpingAnimation);
	isAnimPlaying = true;
}

void APlayerCharacter::StopJumping()
{
	Super::StopJumping();

	//play the idle animation
	SetIdleAnimation();
}

void APlayerCharacter::MoveRight(float movementValue_)
{
	//move the player along the x axis in the direction based of the player's input
	if (Controller && (movementValue_ != 0.0f))
	{
		AddMovementInput(FVector(1.0f * movementValue_, 0.0f, 0.0f));

		//setup the rotation of the controller based on the direction we are travelling
		const FVector PlayerVelocity = GetVelocity();
		float TravelDirection = PlayerVelocity.X;
		
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}

	//if the character is recieving moevemnt input, set the running animation
	//if the character is not recieving moevmenet input and no other animation is playing, set the animation to be idle
	if (movementValue_ != 0.f)
	{
		//play the running animation
		UpdateAnimation(RunningAnimation);
	}
	else
	{
		if (isAnimPlaying == false)
		{
			SetIdleAnimation();
		}
	}
}

void APlayerCharacter::Attack()
{
	//play the attacking animation
	UpdateAnimation(AttackAnimation);
	isAnimPlaying = true;

	GetWorldTimerManager().SetTimer(animationTimer, this, &APlayerCharacter::SetIdleAnimation, 0.47f, false);
	
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Handle Animations
void APlayerCharacter::UpdateAnimation(UPaperFlipbook* desiredAnimation_)
{
	//check if the new desired animation is not the current animation being played, if it is not, play the new desired animation
	if (GetSprite()->GetFlipbook() != desiredAnimation_)
	{
		GetSprite()->SetFlipbook(desiredAnimation_);
	}
}

void APlayerCharacter::SetIdleAnimation()
{
	//set the animation to be idle
	UpdateAnimation(IdleAnimation);

	//declare no animation is currently playing
	isAnimPlaying = false;

	//clear the animation timer
	GetWorldTimerManager().ClearTimer(animationTimer);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////