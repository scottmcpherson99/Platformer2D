// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/ControlsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlsWidget() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_UControlsWidget_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UControlsWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void UControlsWidget::StaticRegisterNativesUControlsWidget()
	{
	}
	UClass* Z_Construct_UClass_UControlsWidget_NoRegister()
	{
		return UControlsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UControlsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlsWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ControlsWidget.h" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UControlsWidget_Statics::ClassParams = {
		&UControlsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UControlsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UControlsWidget, 4052205016);
	template<> PLATFORMER2D_API UClass* StaticClass<UControlsWidget>()
	{
		return UControlsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UControlsWidget(Z_Construct_UClass_UControlsWidget, &UControlsWidget::StaticClass, TEXT("/Script/Platformer2D"), TEXT("UControlsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
