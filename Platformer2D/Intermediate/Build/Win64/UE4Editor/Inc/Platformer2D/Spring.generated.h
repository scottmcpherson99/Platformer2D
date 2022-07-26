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
#ifdef PLATFORMER2D_Spring_generated_h
#error "Spring.generated.h already included, missing '#pragma once' in Spring.h"
#endif
#define PLATFORMER2D_Spring_generated_h

#define Platformer2D_Source_Platformer2D_Spring_h_15_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_Spring_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define Platformer2D_Source_Platformer2D_Spring_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define Platformer2D_Source_Platformer2D_Spring_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpring(); \
	friend struct Z_Construct_UClass_ASpring_Statics; \
public: \
	DECLARE_CLASS(ASpring, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ASpring)


#define Platformer2D_Source_Platformer2D_Spring_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpring(); \
	friend struct Z_Construct_UClass_ASpring_Statics; \
public: \
	DECLARE_CLASS(ASpring, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ASpring)


#define Platformer2D_Source_Platformer2D_Spring_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpring(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpring) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpring); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpring); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpring(ASpring&&); \
	NO_API ASpring(const ASpring&); \
public:


#define Platformer2D_Source_Platformer2D_Spring_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpring(ASpring&&); \
	NO_API ASpring(const ASpring&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpring); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpring); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpring)


#define Platformer2D_Source_Platformer2D_Spring_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__usedSpriteComponent() { return STRUCT_OFFSET(ASpring, usedSpriteComponent); } \
	FORCEINLINE static uint32 __PPO__bounceSound() { return STRUCT_OFFSET(ASpring, bounceSound); } \
	FORCEINLINE static uint32 __PPO__jumpForce() { return STRUCT_OFFSET(ASpring, jumpForce); }


#define Platformer2D_Source_Platformer2D_Spring_h_12_PROLOG
#define Platformer2D_Source_Platformer2D_Spring_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_Spring_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_Spring_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_Spring_h_15_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_Spring_h_15_INCLASS \
	Platformer2D_Source_Platformer2D_Spring_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_Spring_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_Spring_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_Spring_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_Spring_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_Spring_h_15_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_Spring_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ASpring>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_Spring_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
