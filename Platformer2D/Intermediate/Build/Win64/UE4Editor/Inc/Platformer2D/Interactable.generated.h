// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define PLATFORMER2D_Interactable_generated_h

#define Platformer2D_Source_Platformer2D_Interactable_h_15_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_Interactable_h_15_RPC_WRAPPERS
#define Platformer2D_Source_Platformer2D_Interactable_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Platformer2D_Source_Platformer2D_Interactable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define Platformer2D_Source_Platformer2D_Interactable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define Platformer2D_Source_Platformer2D_Interactable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public:


#define Platformer2D_Source_Platformer2D_Interactable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable)


#define Platformer2D_Source_Platformer2D_Interactable_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__spriteComponent() { return STRUCT_OFFSET(AInteractable, spriteComponent); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(AInteractable, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__audioManager() { return STRUCT_OFFSET(AInteractable, audioManager); }


#define Platformer2D_Source_Platformer2D_Interactable_h_12_PROLOG
#define Platformer2D_Source_Platformer2D_Interactable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_Interactable_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_Interactable_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_Interactable_h_15_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_Interactable_h_15_INCLASS \
	Platformer2D_Source_Platformer2D_Interactable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_Interactable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_Interactable_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_Interactable_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_Interactable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_Interactable_h_15_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_Interactable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
