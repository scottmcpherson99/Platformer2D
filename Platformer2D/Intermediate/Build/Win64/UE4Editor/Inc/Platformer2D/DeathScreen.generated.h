// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_DeathScreen_generated_h
#error "DeathScreen.generated.h already included, missing '#pragma once' in DeathScreen.h"
#endif
#define PLATFORMER2D_DeathScreen_generated_h

#define Platformer2D_Source_Platformer2D_DeathScreen_h_18_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_DeathScreen_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnMainMenuClickedClicked); \
	DECLARE_FUNCTION(execOnRetryClicked);


#define Platformer2D_Source_Platformer2D_DeathScreen_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnMainMenuClickedClicked); \
	DECLARE_FUNCTION(execOnRetryClicked);


#define Platformer2D_Source_Platformer2D_DeathScreen_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeathScreen(); \
	friend struct Z_Construct_UClass_UDeathScreen_Statics; \
public: \
	DECLARE_CLASS(UDeathScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(UDeathScreen)


#define Platformer2D_Source_Platformer2D_DeathScreen_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDeathScreen(); \
	friend struct Z_Construct_UClass_UDeathScreen_Statics; \
public: \
	DECLARE_CLASS(UDeathScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(UDeathScreen)


#define Platformer2D_Source_Platformer2D_DeathScreen_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeathScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeathScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeathScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeathScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeathScreen(UDeathScreen&&); \
	NO_API UDeathScreen(const UDeathScreen&); \
public:


#define Platformer2D_Source_Platformer2D_DeathScreen_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeathScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeathScreen(UDeathScreen&&); \
	NO_API UDeathScreen(const UDeathScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeathScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeathScreen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeathScreen)


#define Platformer2D_Source_Platformer2D_DeathScreen_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RetryButton() { return STRUCT_OFFSET(UDeathScreen, RetryButton); } \
	FORCEINLINE static uint32 __PPO__MainMenuButton() { return STRUCT_OFFSET(UDeathScreen, MainMenuButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UDeathScreen, QuitButton); }


#define Platformer2D_Source_Platformer2D_DeathScreen_h_15_PROLOG
#define Platformer2D_Source_Platformer2D_DeathScreen_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_DeathScreen_h_18_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_DeathScreen_h_18_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_DeathScreen_h_18_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_DeathScreen_h_18_INCLASS \
	Platformer2D_Source_Platformer2D_DeathScreen_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_DeathScreen_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_DeathScreen_h_18_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_DeathScreen_h_18_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_DeathScreen_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_DeathScreen_h_18_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_DeathScreen_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class UDeathScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_DeathScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
