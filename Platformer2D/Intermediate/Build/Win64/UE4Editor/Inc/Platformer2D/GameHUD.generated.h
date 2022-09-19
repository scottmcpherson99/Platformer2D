// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define PLATFORMER2D_GameHUD_generated_h

#define Platformer2D_Source_Platformer2D_GameHUD_h_18_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_GameHUD_h_18_RPC_WRAPPERS
#define Platformer2D_Source_Platformer2D_GameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Platformer2D_Source_Platformer2D_GameHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameHUD(); \
	friend struct Z_Construct_UClass_UGameHUD_Statics; \
public: \
	DECLARE_CLASS(UGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(UGameHUD)


#define Platformer2D_Source_Platformer2D_GameHUD_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGameHUD(); \
	friend struct Z_Construct_UClass_UGameHUD_Statics; \
public: \
	DECLARE_CLASS(UGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(UGameHUD)


#define Platformer2D_Source_Platformer2D_GameHUD_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHUD(UGameHUD&&); \
	NO_API UGameHUD(const UGameHUD&); \
public:


#define Platformer2D_Source_Platformer2D_GameHUD_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHUD(UGameHUD&&); \
	NO_API UGameHUD(const UGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHUD)


#define Platformer2D_Source_Platformer2D_GameHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCoins() { return STRUCT_OFFSET(UGameHUD, PlayerCoins); } \
	FORCEINLINE static uint32 __PPO__PlayerLives() { return STRUCT_OFFSET(UGameHUD, PlayerLives); } \
	FORCEINLINE static uint32 __PPO__PlayerBullets() { return STRUCT_OFFSET(UGameHUD, PlayerBullets); } \
	FORCEINLINE static uint32 __PPO__deathScreenHUD() { return STRUCT_OFFSET(UGameHUD, deathScreenHUD); }


#define Platformer2D_Source_Platformer2D_GameHUD_h_15_PROLOG
#define Platformer2D_Source_Platformer2D_GameHUD_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_GameHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_GameHUD_h_18_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_GameHUD_h_18_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_GameHUD_h_18_INCLASS \
	Platformer2D_Source_Platformer2D_GameHUD_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_GameHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_GameHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_GameHUD_h_18_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_GameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_GameHUD_h_18_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_GameHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class UGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_GameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
