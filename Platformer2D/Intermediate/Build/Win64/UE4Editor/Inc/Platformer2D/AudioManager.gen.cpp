// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/AudioManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioManager() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_AAudioManager_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AAudioManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAudioManager::execPlayLoopingAudio)
	{
		P_GET_OBJECT(USoundBase,Z_Param_desiredSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLoopingAudio(Z_Param_desiredSound);
		P_NATIVE_END;
	}
	void AAudioManager::StaticRegisterNativesAAudioManager()
	{
		UClass* Class = AAudioManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayLoopingAudio", &AAudioManager::execPlayLoopingAudio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics
	{
		struct AudioManager_eventPlayLoopingAudio_Parms
		{
			USoundBase* desiredSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_desiredSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics::NewProp_desiredSound = { "desiredSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioManager_eventPlayLoopingAudio_Parms, desiredSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics::NewProp_desiredSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <PlayAudio>\n//play sound on repeat\n" },
		{ "ModuleRelativePath", "AudioManager.h" },
		{ "ToolTip", "<PlayAudio>\nplay sound on repeat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioManager, nullptr, "PlayLoopingAudio", nullptr, nullptr, sizeof(AudioManager_eventPlayLoopingAudio_Parms), Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioManager_PlayLoopingAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioManager_PlayLoopingAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAudioManager_NoRegister()
	{
		return AAudioManager::StaticClass();
	}
	struct Z_Construct_UClass_AAudioManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAudioManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAudioManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAudioManager_PlayLoopingAudio, "PlayLoopingAudio" }, // 2717098358
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AudioManager.h" },
		{ "ModuleRelativePath", "AudioManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAudioManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAudioManager_Statics::ClassParams = {
		&AAudioManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAudioManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAudioManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAudioManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAudioManager, 671847203);
	template<> PLATFORMER2D_API UClass* StaticClass<AAudioManager>()
	{
		return AAudioManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAudioManager(Z_Construct_UClass_AAudioManager, &AAudioManager::StaticClass, TEXT("/Script/Platformer2D"), TEXT("AAudioManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
