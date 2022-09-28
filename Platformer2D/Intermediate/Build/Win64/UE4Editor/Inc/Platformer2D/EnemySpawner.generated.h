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
#ifdef PLATFORMER2D_EnemySpawner_generated_h
#error "EnemySpawner.generated.h already included, missing '#pragma once' in EnemySpawner.h"
#endif
#define PLATFORMER2D_EnemySpawner_generated_h

#define Platformer2D_Source_Platformer2D_EnemySpawner_h_12_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_EnemySpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define Platformer2D_Source_Platformer2D_EnemySpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define Platformer2D_Source_Platformer2D_EnemySpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define Platformer2D_Source_Platformer2D_EnemySpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define Platformer2D_Source_Platformer2D_EnemySpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemySpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemySpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public:


#define Platformer2D_Source_Platformer2D_EnemySpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemySpawner)


#define Platformer2D_Source_Platformer2D_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(AEnemySpawner, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__spawnVector() { return STRUCT_OFFSET(AEnemySpawner, spawnVector); } \
	FORCEINLINE static uint32 __PPO__spawnArrow() { return STRUCT_OFFSET(AEnemySpawner, spawnArrow); }


#define Platformer2D_Source_Platformer2D_EnemySpawner_h_9_PROLOG
#define Platformer2D_Source_Platformer2D_EnemySpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_EnemySpawner_h_12_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_EnemySpawner_h_12_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_EnemySpawner_h_12_INCLASS \
	Platformer2D_Source_Platformer2D_EnemySpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_EnemySpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_EnemySpawner_h_12_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_EnemySpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_EnemySpawner_h_12_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_EnemySpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AEnemySpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_EnemySpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
