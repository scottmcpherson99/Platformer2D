// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/CloudEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudEnemy() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACloudEnemy_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACloudEnemy();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemyBase();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void ACloudEnemy::StaticRegisterNativesACloudEnemy()
	{
	}
	UClass* Z_Construct_UClass_ACloudEnemy_NoRegister()
	{
		return ACloudEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ACloudEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACloudEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloudEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CloudEnemy.h" },
		{ "ModuleRelativePath", "CloudEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACloudEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACloudEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACloudEnemy_Statics::ClassParams = {
		&ACloudEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACloudEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACloudEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACloudEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACloudEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACloudEnemy, 1950877949);
	template<> PLATFORMER2D_API UClass* StaticClass<ACloudEnemy>()
	{
		return ACloudEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACloudEnemy(Z_Construct_UClass_ACloudEnemy, &ACloudEnemy::StaticClass, TEXT("/Script/Platformer2D"), TEXT("ACloudEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACloudEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
