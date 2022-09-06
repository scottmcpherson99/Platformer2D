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
#ifdef PLATFORMER2D_DeathBox_generated_h
#error "DeathBox.generated.h already included, missing '#pragma once' in DeathBox.h"
#endif
#define PLATFORMER2D_DeathBox_generated_h

#define Platformer2D_Source_Platformer2D_DeathBox_h_12_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_DeathBox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define Platformer2D_Source_Platformer2D_DeathBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define Platformer2D_Source_Platformer2D_DeathBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeathBox(); \
	friend struct Z_Construct_UClass_ADeathBox_Statics; \
public: \
	DECLARE_CLASS(ADeathBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ADeathBox)


#define Platformer2D_Source_Platformer2D_DeathBox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADeathBox(); \
	friend struct Z_Construct_UClass_ADeathBox_Statics; \
public: \
	DECLARE_CLASS(ADeathBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ADeathBox)


#define Platformer2D_Source_Platformer2D_DeathBox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeathBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeathBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathBox(ADeathBox&&); \
	NO_API ADeathBox(const ADeathBox&); \
public:


#define Platformer2D_Source_Platformer2D_DeathBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathBox(ADeathBox&&); \
	NO_API ADeathBox(const ADeathBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeathBox)


#define Platformer2D_Source_Platformer2D_DeathBox_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ADeathBox, TriggerBox); }


#define Platformer2D_Source_Platformer2D_DeathBox_h_9_PROLOG
#define Platformer2D_Source_Platformer2D_DeathBox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_DeathBox_h_12_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_DeathBox_h_12_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_DeathBox_h_12_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_DeathBox_h_12_INCLASS \
	Platformer2D_Source_Platformer2D_DeathBox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_DeathBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_DeathBox_h_12_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_DeathBox_h_12_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_DeathBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_DeathBox_h_12_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_DeathBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ADeathBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_DeathBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
