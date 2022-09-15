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
#ifdef PLATFORMER2D_WormEnemy_generated_h
#error "WormEnemy.generated.h already included, missing '#pragma once' in WormEnemy.h"
#endif
#define PLATFORMER2D_WormEnemy_generated_h

#define Platformer2D_Source_Platformer2D_WormEnemy_h_26_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_WormEnemy_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execBezierTimelineProgress);


#define Platformer2D_Source_Platformer2D_WormEnemy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execBezierTimelineProgress);


#define Platformer2D_Source_Platformer2D_WormEnemy_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWormEnemy(); \
	friend struct Z_Construct_UClass_AWormEnemy_Statics; \
public: \
	DECLARE_CLASS(AWormEnemy, AEnemyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AWormEnemy)


#define Platformer2D_Source_Platformer2D_WormEnemy_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAWormEnemy(); \
	friend struct Z_Construct_UClass_AWormEnemy_Statics; \
public: \
	DECLARE_CLASS(AWormEnemy, AEnemyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AWormEnemy)


#define Platformer2D_Source_Platformer2D_WormEnemy_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWormEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWormEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWormEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWormEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWormEnemy(AWormEnemy&&); \
	NO_API AWormEnemy(const AWormEnemy&); \
public:


#define Platformer2D_Source_Platformer2D_WormEnemy_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWormEnemy(AWormEnemy&&); \
	NO_API AWormEnemy(const AWormEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWormEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWormEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWormEnemy)


#define Platformer2D_Source_Platformer2D_WormEnemy_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BezierCurveFloat() { return STRUCT_OFFSET(AWormEnemy, BezierCurveFloat); } \
	FORCEINLINE static uint32 __PPO__detectionBox() { return STRUCT_OFFSET(AWormEnemy, detectionBox); } \
	FORCEINLINE static uint32 __PPO__upperLeftBound() { return STRUCT_OFFSET(AWormEnemy, upperLeftBound); } \
	FORCEINLINE static uint32 __PPO__lowerRightBound() { return STRUCT_OFFSET(AWormEnemy, lowerRightBound); }


#define Platformer2D_Source_Platformer2D_WormEnemy_h_23_PROLOG
#define Platformer2D_Source_Platformer2D_WormEnemy_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_WormEnemy_h_26_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_WormEnemy_h_26_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_WormEnemy_h_26_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_WormEnemy_h_26_INCLASS \
	Platformer2D_Source_Platformer2D_WormEnemy_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_WormEnemy_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_WormEnemy_h_26_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_WormEnemy_h_26_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_WormEnemy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_WormEnemy_h_26_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_WormEnemy_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AWormEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_WormEnemy_h


#define FOREACH_ENUM_EWORMAISTATE(op) \
	op(EWormAIState::EATTACKPLAYER) \
	op(EWormAIState::EWANDER) 

enum class EWormAIState : uint8;
template<> PLATFORMER2D_API UEnum* StaticEnum<EWormAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
