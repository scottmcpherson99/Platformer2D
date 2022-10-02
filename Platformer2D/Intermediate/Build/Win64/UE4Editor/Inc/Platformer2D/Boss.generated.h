// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_Boss_generated_h
#error "Boss.generated.h already included, missing '#pragma once' in Boss.h"
#endif
#define PLATFORMER2D_Boss_generated_h

#define Platformer2D_Source_Platformer2D_Boss_h_24_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_Boss_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBezierTimelineProgress);


#define Platformer2D_Source_Platformer2D_Boss_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBezierTimelineProgress);


#define Platformer2D_Source_Platformer2D_Boss_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoss(); \
	friend struct Z_Construct_UClass_ABoss_Statics; \
public: \
	DECLARE_CLASS(ABoss, AEnemyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABoss)


#define Platformer2D_Source_Platformer2D_Boss_h_24_INCLASS \
private: \
	static void StaticRegisterNativesABoss(); \
	friend struct Z_Construct_UClass_ABoss_Statics; \
public: \
	DECLARE_CLASS(ABoss, AEnemyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABoss)


#define Platformer2D_Source_Platformer2D_Boss_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoss(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoss) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss(ABoss&&); \
	NO_API ABoss(const ABoss&); \
public:


#define Platformer2D_Source_Platformer2D_Boss_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss(ABoss&&); \
	NO_API ABoss(const ABoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoss)


#define Platformer2D_Source_Platformer2D_Boss_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BezierCurveFloat() { return STRUCT_OFFSET(ABoss, BezierCurveFloat); } \
	FORCEINLINE static uint32 __PPO__healthWidgetComp() { return STRUCT_OFFSET(ABoss, healthWidgetComp); } \
	FORCEINLINE static uint32 __PPO__upperLeftBound() { return STRUCT_OFFSET(ABoss, upperLeftBound); } \
	FORCEINLINE static uint32 __PPO__lowerRightBound() { return STRUCT_OFFSET(ABoss, lowerRightBound); }


#define Platformer2D_Source_Platformer2D_Boss_h_21_PROLOG
#define Platformer2D_Source_Platformer2D_Boss_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_Boss_h_24_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_Boss_h_24_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_Boss_h_24_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_Boss_h_24_INCLASS \
	Platformer2D_Source_Platformer2D_Boss_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_Boss_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_Boss_h_24_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_Boss_h_24_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_Boss_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_Boss_h_24_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_Boss_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ABoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_Boss_h


#define FOREACH_ENUM_EBOSSAISTATE(op) \
	op(EBossAIState::EATTACKPLAYER) \
	op(EBossAIState::EWANDER) \
	op(EBossAIState::ESTATIONARY) 

enum class EBossAIState : uint8;
template<> PLATFORMER2D_API UEnum* StaticEnum<EBossAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
