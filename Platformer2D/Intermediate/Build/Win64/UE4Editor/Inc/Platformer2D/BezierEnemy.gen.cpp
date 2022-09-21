// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/BezierEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBezierEnemy() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABezierEnemy_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABezierEnemy();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemyBase();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ABezierEnemy::execBezierTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BezierTimelineProgress(Z_Param_value);
		P_NATIVE_END;
	}
	void ABezierEnemy::StaticRegisterNativesABezierEnemy()
	{
		UClass* Class = ABezierEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BezierTimelineProgress", &ABezierEnemy::execBezierTimelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics
	{
		struct BezierEnemy_eventBezierTimelineProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BezierEnemy_eventBezierTimelineProgress_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BezierEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABezierEnemy, nullptr, "BezierTimelineProgress", nullptr, nullptr, sizeof(BezierEnemy_eventBezierTimelineProgress_Parms), Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABezierEnemy_NoRegister()
	{
		return ABezierEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABezierEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BezierCurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BezierCurveFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_midPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_midPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABezierEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABezierEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABezierEnemy_BezierTimelineProgress, "BezierTimelineProgress" }, // 3849708766
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BezierEnemy.h" },
		{ "ModuleRelativePath", "BezierEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierEnemy_Statics::NewProp_BezierCurveFloat_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Timeline>\n//timeline actor\n" },
		{ "ModuleRelativePath", "BezierEnemy.h" },
		{ "ToolTip", "<Timeline>\ntimeline actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABezierEnemy_Statics::NewProp_BezierCurveFloat = { "BezierCurveFloat", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierEnemy, BezierCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABezierEnemy_Statics::NewProp_BezierCurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierEnemy_Statics::NewProp_BezierCurveFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierEnemy_Statics::NewProp_midPoint_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//the second control point\n" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "BezierEnemy.h" },
		{ "ToolTip", "the second control point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABezierEnemy_Statics::NewProp_midPoint = { "midPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierEnemy, midPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABezierEnemy_Statics::NewProp_midPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierEnemy_Statics::NewProp_midPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierEnemy_Statics::NewProp_endPoint_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//the third control point\n" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "BezierEnemy.h" },
		{ "ToolTip", "the third control point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABezierEnemy_Statics::NewProp_endPoint = { "endPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierEnemy, endPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABezierEnemy_Statics::NewProp_endPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierEnemy_Statics::NewProp_endPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABezierEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierEnemy_Statics::NewProp_BezierCurveFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierEnemy_Statics::NewProp_midPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierEnemy_Statics::NewProp_endPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABezierEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABezierEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABezierEnemy_Statics::ClassParams = {
		&ABezierEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABezierEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABezierEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABezierEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABezierEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABezierEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABezierEnemy, 3816436602);
	template<> PLATFORMER2D_API UClass* StaticClass<ABezierEnemy>()
	{
		return ABezierEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABezierEnemy(Z_Construct_UClass_ABezierEnemy, &ABezierEnemy::StaticClass, TEXT("/Script/Platformer2D"), TEXT("ABezierEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABezierEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
