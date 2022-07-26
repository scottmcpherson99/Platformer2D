// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_TextRenderer_generated_h
#error "TextRenderer.generated.h already included, missing '#pragma once' in TextRenderer.h"
#endif
#define PLATFORMER2D_TextRenderer_generated_h

#define Platformer2D_Source_Platformer2D_TextRenderer_h_26_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_TextRenderer_h_26_RPC_WRAPPERS
#define Platformer2D_Source_Platformer2D_TextRenderer_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Platformer2D_Source_Platformer2D_TextRenderer_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATextRenderer(); \
	friend struct Z_Construct_UClass_ATextRenderer_Statics; \
public: \
	DECLARE_CLASS(ATextRenderer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ATextRenderer)


#define Platformer2D_Source_Platformer2D_TextRenderer_h_26_INCLASS \
private: \
	static void StaticRegisterNativesATextRenderer(); \
	friend struct Z_Construct_UClass_ATextRenderer_Statics; \
public: \
	DECLARE_CLASS(ATextRenderer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ATextRenderer)


#define Platformer2D_Source_Platformer2D_TextRenderer_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATextRenderer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATextRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATextRenderer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATextRenderer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATextRenderer(ATextRenderer&&); \
	NO_API ATextRenderer(const ATextRenderer&); \
public:


#define Platformer2D_Source_Platformer2D_TextRenderer_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATextRenderer(ATextRenderer&&); \
	NO_API ATextRenderer(const ATextRenderer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATextRenderer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATextRenderer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATextRenderer)


#define Platformer2D_Source_Platformer2D_TextRenderer_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sceneComp_() { return STRUCT_OFFSET(ATextRenderer, sceneComp_); } \
	FORCEINLINE static uint32 __PPO__textRenderComp_() { return STRUCT_OFFSET(ATextRenderer, textRenderComp_); } \
	FORCEINLINE static uint32 __PPO__textRendered() { return STRUCT_OFFSET(ATextRenderer, textRendered); }


#define Platformer2D_Source_Platformer2D_TextRenderer_h_23_PROLOG
#define Platformer2D_Source_Platformer2D_TextRenderer_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_TextRenderer_h_26_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_TextRenderer_h_26_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_TextRenderer_h_26_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_TextRenderer_h_26_INCLASS \
	Platformer2D_Source_Platformer2D_TextRenderer_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_TextRenderer_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_TextRenderer_h_26_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_TextRenderer_h_26_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_TextRenderer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_TextRenderer_h_26_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_TextRenderer_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ATextRenderer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_TextRenderer_h


#define FOREACH_ENUM_TEXTRENDERED(op) \
	op(Pickup) \
	op(EnemyIntro) \
	op(BreakableTile) \
	op(Movingplatform) \
	op(FallingTile) \
	op(Spikes) \
	op(Door) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
