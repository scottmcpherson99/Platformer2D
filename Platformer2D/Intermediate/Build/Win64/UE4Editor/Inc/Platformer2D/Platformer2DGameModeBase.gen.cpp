// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Platformer2DGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformer2DGameModeBase() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DGameModeBase_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformer2DGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void APlatformer2DGameModeBase::StaticRegisterNativesAPlatformer2DGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APlatformer2DGameModeBase_NoRegister()
	{
		return APlatformer2DGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlatformer2DGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformer2DGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformer2DGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Platformer2DGameModeBase.h" },
		{ "ModuleRelativePath", "Platformer2DGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformer2DGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformer2DGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformer2DGameModeBase_Statics::ClassParams = {
		&APlatformer2DGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlatformer2DGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformer2DGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformer2DGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformer2DGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformer2DGameModeBase, 1401832729);
	template<> PLATFORMER2D_API UClass* StaticClass<APlatformer2DGameModeBase>()
	{
		return APlatformer2DGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformer2DGameModeBase(Z_Construct_UClass_APlatformer2DGameModeBase, &APlatformer2DGameModeBase::StaticClass, TEXT("/Script/Platformer2D"), TEXT("APlatformer2DGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformer2DGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
