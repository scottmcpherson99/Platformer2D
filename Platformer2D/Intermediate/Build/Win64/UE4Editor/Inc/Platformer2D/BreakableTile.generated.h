// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PLATFORMER2D_BreakableTile_generated_h
#error "BreakableTile.generated.h already included, missing '#pragma once' in BreakableTile.h"
#endif
#define PLATFORMER2D_BreakableTile_generated_h

#define Platformer2D_Source_Platformer2D_BreakableTile_h_15_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_BreakableTile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define Platformer2D_Source_Platformer2D_BreakableTile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define Platformer2D_Source_Platformer2D_BreakableTile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABreakableTile(); \
	friend struct Z_Construct_UClass_ABreakableTile_Statics; \
public: \
	DECLARE_CLASS(ABreakableTile, ATileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABreakableTile)


#define Platformer2D_Source_Platformer2D_BreakableTile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABreakableTile(); \
	friend struct Z_Construct_UClass_ABreakableTile_Statics; \
public: \
	DECLARE_CLASS(ABreakableTile, ATileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABreakableTile)


#define Platformer2D_Source_Platformer2D_BreakableTile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABreakableTile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABreakableTile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableTile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreakableTile(ABreakableTile&&); \
	NO_API ABreakableTile(const ABreakableTile&); \
public:


#define Platformer2D_Source_Platformer2D_BreakableTile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreakableTile(ABreakableTile&&); \
	NO_API ABreakableTile(const ABreakableTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableTile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABreakableTile)


#define Platformer2D_Source_Platformer2D_BreakableTile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ABreakableTile, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__tileStrength() { return STRUCT_OFFSET(ABreakableTile, tileStrength); }


#define Platformer2D_Source_Platformer2D_BreakableTile_h_12_PROLOG
#define Platformer2D_Source_Platformer2D_BreakableTile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_BreakableTile_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_BreakableTile_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_BreakableTile_h_15_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_BreakableTile_h_15_INCLASS \
	Platformer2D_Source_Platformer2D_BreakableTile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_BreakableTile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_BreakableTile_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_BreakableTile_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_BreakableTile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_BreakableTile_h_15_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_BreakableTile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ABreakableTile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_BreakableTile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
