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
#ifdef PLATFORMER2D_BulletDrop_generated_h
#error "BulletDrop.generated.h already included, missing '#pragma once' in BulletDrop.h"
#endif
#define PLATFORMER2D_BulletDrop_generated_h

#define Platformer2D_Source_Platformer2D_BulletDrop_h_15_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_BulletDrop_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define Platformer2D_Source_Platformer2D_BulletDrop_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define Platformer2D_Source_Platformer2D_BulletDrop_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletDrop(); \
	friend struct Z_Construct_UClass_ABulletDrop_Statics; \
public: \
	DECLARE_CLASS(ABulletDrop, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABulletDrop)


#define Platformer2D_Source_Platformer2D_BulletDrop_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABulletDrop(); \
	friend struct Z_Construct_UClass_ABulletDrop_Statics; \
public: \
	DECLARE_CLASS(ABulletDrop, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABulletDrop)


#define Platformer2D_Source_Platformer2D_BulletDrop_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABulletDrop(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABulletDrop) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletDrop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletDrop); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletDrop(ABulletDrop&&); \
	NO_API ABulletDrop(const ABulletDrop&); \
public:


#define Platformer2D_Source_Platformer2D_BulletDrop_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletDrop(ABulletDrop&&); \
	NO_API ABulletDrop(const ABulletDrop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletDrop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletDrop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletDrop)


#define Platformer2D_Source_Platformer2D_BulletDrop_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__collectionSound() { return STRUCT_OFFSET(ABulletDrop, collectionSound); }


#define Platformer2D_Source_Platformer2D_BulletDrop_h_12_PROLOG
#define Platformer2D_Source_Platformer2D_BulletDrop_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_BulletDrop_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_BulletDrop_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_BulletDrop_h_15_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_BulletDrop_h_15_INCLASS \
	Platformer2D_Source_Platformer2D_BulletDrop_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_BulletDrop_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_BulletDrop_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_BulletDrop_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_BulletDrop_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_BulletDrop_h_15_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_BulletDrop_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ABulletDrop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_BulletDrop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
