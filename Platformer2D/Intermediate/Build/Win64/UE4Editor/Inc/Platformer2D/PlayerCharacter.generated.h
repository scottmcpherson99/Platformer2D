// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define PLATFORMER2D_PlayerCharacter_generated_h

#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_RPC_WRAPPERS
#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(APlayerCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__WalkingAnimation() { return STRUCT_OFFSET(APlayerCharacter, WalkingAnimation); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(APlayerCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(APlayerCharacter, IdleAnimation); } \
	FORCEINLINE static uint32 __PPO__JumpingAnimation() { return STRUCT_OFFSET(APlayerCharacter, JumpingAnimation); } \
	FORCEINLINE static uint32 __PPO__AttackAnimation() { return STRUCT_OFFSET(APlayerCharacter, AttackAnimation); } \
	FORCEINLINE static uint32 __PPO__CheerAnimation() { return STRUCT_OFFSET(APlayerCharacter, CheerAnimation); } \
	FORCEINLINE static uint32 __PPO__audioManager() { return STRUCT_OFFSET(APlayerCharacter, audioManager); } \
	FORCEINLINE static uint32 __PPO__jumpingSound() { return STRUCT_OFFSET(APlayerCharacter, jumpingSound); }


#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_23_PROLOG
#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_INCLASS \
	Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_PlayerCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_PlayerCharacter_h


#define FOREACH_ENUM_EPLAYERANIMATION(op) \
	op(EPlayerAnimation::EIDLE) \
	op(EPlayerAnimation::EWALKING) \
	op(EPlayerAnimation::ERUNNING) \
	op(EPlayerAnimation::EJUMPING) \
	op(EPlayerAnimation::ECHEERING) \
	op(EPlayerAnimation::EATTACKING) 

enum class EPlayerAnimation : uint8;
template<> PLATFORMER2D_API UEnum* StaticEnum<EPlayerAnimation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
