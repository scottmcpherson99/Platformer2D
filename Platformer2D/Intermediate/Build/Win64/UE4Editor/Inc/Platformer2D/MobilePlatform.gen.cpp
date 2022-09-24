// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MobilePlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobilePlatform() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMobilePlatform_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMobilePlatform();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ATileBase();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AMobilePlatform::execTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineProgress(Z_Param_value);
		P_NATIVE_END;
	}
	void AMobilePlatform::StaticRegisterNativesAMobilePlatform()
	{
		UClass* Class = AMobilePlatform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TimelineProgress", &AMobilePlatform::execTimelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics
	{
		struct MobilePlatform_eventTimelineProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobilePlatform_eventTimelineProgress_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Timeline>\n" },
		{ "ModuleRelativePath", "MobilePlatform.h" },
		{ "ToolTip", "<Timeline>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobilePlatform, nullptr, "TimelineProgress", nullptr, nullptr, sizeof(MobilePlatform_eventTimelineProgress_Parms), Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMobilePlatform_TimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMobilePlatform_TimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMobilePlatform_NoRegister()
	{
		return AMobilePlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMobilePlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platformMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_platformMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLoc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMobilePlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATileBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMobilePlatform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMobilePlatform_TimelineProgress, "TimelineProgress" }, // 2079578511
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobilePlatform_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MobilePlatform.h" },
		{ "ModuleRelativePath", "MobilePlatform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobilePlatform_Statics::NewProp_platformMesh_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Components>\n//the flagpole sprite\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MobilePlatform.h" },
		{ "ToolTip", "<Components>\nthe flagpole sprite" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobilePlatform_Statics::NewProp_platformMesh = { "platformMesh", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobilePlatform, platformMesh), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobilePlatform_Statics::NewProp_platformMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobilePlatform_Statics::NewProp_platformMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobilePlatform_Statics::NewProp_CurveFloat_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "MobilePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobilePlatform_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobilePlatform, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobilePlatform_Statics::NewProp_CurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobilePlatform_Statics::NewProp_CurveFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobilePlatform_Statics::NewProp_StartLoc_MetaData[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Attributes>\n" },
		{ "ModuleRelativePath", "MobilePlatform.h" },
		{ "ToolTip", "<Attributes>" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMobilePlatform_Statics::NewProp_StartLoc = { "StartLoc", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobilePlatform, StartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMobilePlatform_Statics::NewProp_StartLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobilePlatform_Statics::NewProp_StartLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobilePlatform_Statics::NewProp_EndLoc_MetaData[] = {
		{ "Category", "Timeline" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "MobilePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMobilePlatform_Statics::NewProp_EndLoc = { "EndLoc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobilePlatform, EndLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMobilePlatform_Statics::NewProp_EndLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobilePlatform_Statics::NewProp_EndLoc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMobilePlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobilePlatform_Statics::NewProp_platformMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobilePlatform_Statics::NewProp_CurveFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobilePlatform_Statics::NewProp_StartLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobilePlatform_Statics::NewProp_EndLoc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMobilePlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMobilePlatform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMobilePlatform_Statics::ClassParams = {
		&AMobilePlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMobilePlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMobilePlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMobilePlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMobilePlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMobilePlatform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMobilePlatform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMobilePlatform, 3633052790);
	template<> PLATFORMER2D_API UClass* StaticClass<AMobilePlatform>()
	{
		return AMobilePlatform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMobilePlatform(Z_Construct_UClass_AMobilePlatform, &AMobilePlatform::StaticClass, TEXT("/Script/Platformer2D"), TEXT("AMobilePlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMobilePlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
