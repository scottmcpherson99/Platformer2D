// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/TileBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBase() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_ATileBase_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ATileBase();
	PAPER2D_API UClass* Z_Construct_UClass_APaperSpriteActor();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void ATileBase::StaticRegisterNativesATileBase()
	{
	}
	UClass* Z_Construct_UClass_ATileBase_NoRegister()
	{
		return ATileBase::StaticClass();
	}
	struct Z_Construct_UClass_ATileBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATileBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperSpriteActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TileBase.h" },
		{ "ModuleRelativePath", "TileBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATileBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATileBase_Statics::ClassParams = {
		&ATileBase::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ATileBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATileBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATileBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATileBase, 1542202449);
	template<> PLATFORMER2D_API UClass* StaticClass<ATileBase>()
	{
		return ATileBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATileBase(Z_Construct_UClass_ATileBase, &ATileBase::StaticClass, TEXT("/Script/Platformer2D"), TEXT("ATileBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATileBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
