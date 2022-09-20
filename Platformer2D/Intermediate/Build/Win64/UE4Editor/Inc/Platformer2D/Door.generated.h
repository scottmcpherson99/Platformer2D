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
#ifdef PLATFORMER2D_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define PLATFORMER2D_Door_generated_h

#define Platformer2D_Source_Platformer2D_Door_h_15_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_Door_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define Platformer2D_Source_Platformer2D_Door_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define Platformer2D_Source_Platformer2D_Door_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define Platformer2D_Source_Platformer2D_Door_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define Platformer2D_Source_Platformer2D_Door_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define Platformer2D_Source_Platformer2D_Door_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define Platformer2D_Source_Platformer2D_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__doorSprite() { return STRUCT_OFFSET(ADoor, doorSprite); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ADoor, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__audioManager() { return STRUCT_OFFSET(ADoor, audioManager); } \
	FORCEINLINE static uint32 __PPO__openingDoorSound() { return STRUCT_OFFSET(ADoor, openingDoorSound); } \
	FORCEINLINE static uint32 __PPO__lockedDoorSound() { return STRUCT_OFFSET(ADoor, lockedDoorSound); }


#define Platformer2D_Source_Platformer2D_Door_h_12_PROLOG
#define Platformer2D_Source_Platformer2D_Door_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_Door_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_Door_h_15_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_Door_h_15_INCLASS \
	Platformer2D_Source_Platformer2D_Door_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_Door_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_Door_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_Door_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_Door_h_15_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_Door_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
