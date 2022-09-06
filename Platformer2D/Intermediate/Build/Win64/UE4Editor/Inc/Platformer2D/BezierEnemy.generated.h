// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_BezierEnemy_generated_h
#error "BezierEnemy.generated.h already included, missing '#pragma once' in BezierEnemy.h"
#endif
#define PLATFORMER2D_BezierEnemy_generated_h

#define Platformer2D_Source_Platformer2D_BezierEnemy_h_18_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_BezierEnemy_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBezierTimelineProgress);


#define Platformer2D_Source_Platformer2D_BezierEnemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBezierTimelineProgress);


#define Platformer2D_Source_Platformer2D_BezierEnemy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABezierEnemy(); \
	friend struct Z_Construct_UClass_ABezierEnemy_Statics; \
public: \
	DECLARE_CLASS(ABezierEnemy, AEnemyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABezierEnemy)


#define Platformer2D_Source_Platformer2D_BezierEnemy_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABezierEnemy(); \
	friend struct Z_Construct_UClass_ABezierEnemy_Statics; \
public: \
	DECLARE_CLASS(ABezierEnemy, AEnemyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABezierEnemy)


#define Platformer2D_Source_Platformer2D_BezierEnemy_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABezierEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABezierEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABezierEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABezierEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABezierEnemy(ABezierEnemy&&); \
	NO_API ABezierEnemy(const ABezierEnemy&); \
public:


#define Platformer2D_Source_Platformer2D_BezierEnemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABezierEnemy(ABezierEnemy&&); \
	NO_API ABezierEnemy(const ABezierEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABezierEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABezierEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABezierEnemy)


#define Platformer2D_Source_Platformer2D_BezierEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BezierCurveFloat() { return STRUCT_OFFSET(ABezierEnemy, BezierCurveFloat); } \
	FORCEINLINE static uint32 __PPO__midPoint() { return STRUCT_OFFSET(ABezierEnemy, midPoint); } \
	FORCEINLINE static uint32 __PPO__endPoint() { return STRUCT_OFFSET(ABezierEnemy, endPoint); }


#define Platformer2D_Source_Platformer2D_BezierEnemy_h_15_PROLOG
#define Platformer2D_Source_Platformer2D_BezierEnemy_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_BezierEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_BezierEnemy_h_18_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_BezierEnemy_h_18_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_BezierEnemy_h_18_INCLASS \
	Platformer2D_Source_Platformer2D_BezierEnemy_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_BezierEnemy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_BezierEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_BezierEnemy_h_18_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_BezierEnemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_BezierEnemy_h_18_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_BezierEnemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ABezierEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_BezierEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
