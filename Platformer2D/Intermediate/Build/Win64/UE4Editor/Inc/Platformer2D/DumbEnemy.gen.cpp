// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/DumbEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDumbEnemy() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_ADumbEnemy_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ADumbEnemy();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemyBase();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void ADumbEnemy::StaticRegisterNativesADumbEnemy()
	{
	}
	UClass* Z_Construct_UClass_ADumbEnemy_NoRegister()
	{
		return ADumbEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ADumbEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADumbEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADumbEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DumbEnemy.h" },
		{ "ModuleRelativePath", "DumbEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADumbEnemy_Statics::NewProp_movementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "DumbEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADumbEnemy_Statics::NewProp_movementSpeed = { "movementSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADumbEnemy, movementSpeed), METADATA_PARAMS(Z_Construct_UClass_ADumbEnemy_Statics::NewProp_movementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADumbEnemy_Statics::NewProp_movementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADumbEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADumbEnemy_Statics::NewProp_movementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADumbEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADumbEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADumbEnemy_Statics::ClassParams = {
		&ADumbEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADumbEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADumbEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADumbEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADumbEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADumbEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADumbEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADumbEnemy, 3161979818);
	template<> PLATFORMER2D_API UClass* StaticClass<ADumbEnemy>()
	{
		return ADumbEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADumbEnemy(Z_Construct_UClass_ADumbEnemy, &ADumbEnemy::StaticClass, TEXT("/Script/Platformer2D"), TEXT("ADumbEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADumbEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
