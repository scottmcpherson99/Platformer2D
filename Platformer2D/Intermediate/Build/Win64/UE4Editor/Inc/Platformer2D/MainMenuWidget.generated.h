// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define PLATFORMER2D_MainMenuWidget_generated_h

#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBackClicked); \
	DECLARE_FUNCTION(execOnHowToPlayClicked); \
	DECLARE_FUNCTION(execOnControlsClicked); \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnNewGameClicked);


#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBackClicked); \
	DECLARE_FUNCTION(execOnHowToPlayClicked); \
	DECLARE_FUNCTION(execOnControlsClicked); \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnNewGameClicked);


#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public:


#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget)


#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NewGameButton() { return STRUCT_OFFSET(UMainMenuWidget, NewGameButton); } \
	FORCEINLINE static uint32 __PPO__ControlsButton() { return STRUCT_OFFSET(UMainMenuWidget, ControlsButton); } \
	FORCEINLINE static uint32 __PPO__HowToPlayButton() { return STRUCT_OFFSET(UMainMenuWidget, HowToPlayButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UMainMenuWidget, QuitButton); } \
	FORCEINLINE static uint32 __PPO__BackButton() { return STRUCT_OFFSET(UMainMenuWidget, BackButton); } \
	FORCEINLINE static uint32 __PPO__TitleBlock() { return STRUCT_OFFSET(UMainMenuWidget, TitleBlock); } \
	FORCEINLINE static uint32 __PPO__TitleBlock2() { return STRUCT_OFFSET(UMainMenuWidget, TitleBlock2); } \
	FORCEINLINE static uint32 __PPO__FadeImage() { return STRUCT_OFFSET(UMainMenuWidget, FadeImage); } \
	FORCEINLINE static uint32 __PPO__controlsWidgetHUD() { return STRUCT_OFFSET(UMainMenuWidget, controlsWidgetHUD); }


#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_17_PROLOG
#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_INCLASS \
	Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_MainMenuWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class UMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_MainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
