// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/FlyingEnemySpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingEnemySpawner() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_AFlyingEnemySpawner_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AFlyingEnemySpawner();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemyBase();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ADumbEnemy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFlyingEnemySpawner::execBezierTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BezierTimelineProgress(Z_Param_value);
		P_NATIVE_END;
	}
	void AFlyingEnemySpawner::StaticRegisterNativesAFlyingEnemySpawner()
	{
		UClass* Class = AFlyingEnemySpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BezierTimelineProgress", &AFlyingEnemySpawner::execBezierTimelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics
	{
		struct FlyingEnemySpawner_eventBezierTimelineProgress_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlyingEnemySpawner_eventBezierTimelineProgress_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlyingEnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyingEnemySpawner, nullptr, "BezierTimelineProgress", nullptr, nullptr, sizeof(FlyingEnemySpawner_eventBezierTimelineProgress_Parms), Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlyingEnemySpawner_NoRegister()
	{
		return AFlyingEnemySpawner::StaticClass();
	}
	struct Z_Construct_UClass_AFlyingEnemySpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_enemyToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BezierCurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BezierCurveFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlyingEnemySpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlyingEnemySpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlyingEnemySpawner_BezierTimelineProgress, "BezierTimelineProgress" }, // 2716523863
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingEnemySpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FlyingEnemySpawner.h" },
		{ "ModuleRelativePath", "FlyingEnemySpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingEnemySpawner_Statics::NewProp_enemyToSpawn_MetaData[] = {
		{ "Category", "Type of enemy to spawn" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Enemy to spawn>\n" },
		{ "ModuleRelativePath", "FlyingEnemySpawner.h" },
		{ "ToolTip", "<Enemy to spawn>" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlyingEnemySpawner_Statics::NewProp_enemyToSpawn = { "enemyToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingEnemySpawner, enemyToSpawn), Z_Construct_UClass_ADumbEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlyingEnemySpawner_Statics::NewProp_enemyToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemySpawner_Statics::NewProp_enemyToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingEnemySpawner_Statics::NewProp_BezierCurveFloat_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Movement>\n//timeline actor\n" },
		{ "ModuleRelativePath", "FlyingEnemySpawner.h" },
		{ "ToolTip", "<Movement>\ntimeline actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingEnemySpawner_Statics::NewProp_BezierCurveFloat = { "BezierCurveFloat", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlyingEnemySpawner, BezierCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlyingEnemySpawner_Statics::NewProp_BezierCurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemySpawner_Statics::NewProp_BezierCurveFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlyingEnemySpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingEnemySpawner_Statics::NewProp_enemyToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingEnemySpawner_Statics::NewProp_BezierCurveFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlyingEnemySpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlyingEnemySpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlyingEnemySpawner_Statics::ClassParams = {
		&AFlyingEnemySpawner::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlyingEnemySpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemySpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlyingEnemySpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemySpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlyingEnemySpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlyingEnemySpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlyingEnemySpawner, 2180378551);
	template<> PLATFORMER2D_API UClass* StaticClass<AFlyingEnemySpawner>()
	{
		return AFlyingEnemySpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlyingEnemySpawner(Z_Construct_UClass_AFlyingEnemySpawner, &AFlyingEnemySpawner::StaticClass, TEXT("/Script/Platformer2D"), TEXT("AFlyingEnemySpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyingEnemySpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
