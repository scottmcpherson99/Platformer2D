// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/BreakableTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableTile() {}
// Cross Module References
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_Drop();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableTile_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableTile();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ATileBase();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACoin_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ALifeDrop_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABulletDrop_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static UEnum* Drop_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_Drop, Z_Construct_UPackage__Script_Platformer2D(), TEXT("Drop"));
		}
		return Singleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<Drop>()
	{
		return Drop_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Drop(Drop_StaticEnum, TEXT("/Script/Platformer2D"), TEXT("Drop"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Platformer2D_Drop_Hash() { return 984696513U; }
	UEnum* Z_Construct_UEnum_Platformer2D_Drop()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Platformer2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Drop"), 0, Get_Z_Construct_UEnum_Platformer2D_Drop_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Coin", (int64)Coin },
				{ "Bullet", (int64)Bullet },
				{ "LifeDrop", (int64)LifeDrop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bullet.DisplayName", "Bullet" },
				{ "Bullet.Name", "Bullet" },
				{ "Coin.DisplayName", "Coin" },
				{ "Coin.Name", "Coin" },
				{ "LifeDrop.DisplayName", "LifeDrop" },
				{ "LifeDrop.Name", "LifeDrop" },
				{ "ModuleRelativePath", "BreakableTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
				nullptr,
				"Drop",
				"Drop",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ABreakableTile::execOnTriggerBoxOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerBoxOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABreakableTile::StaticRegisterNativesABreakableTile()
	{
		UClass* Class = ABreakableTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggerBoxOverlap", &ABreakableTile::execOnTriggerBoxOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics
	{
		struct BreakableTile_eventOnTriggerBoxOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreakableTile_eventOnTriggerBoxOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreakableTile_eventOnTriggerBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreakableTile_eventOnTriggerBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreakableTile_eventOnTriggerBoxOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BreakableTile_eventOnTriggerBoxOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BreakableTile_eventOnTriggerBoxOverlap_Parms), &Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreakableTile_eventOnTriggerBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//if another object enters the TriggerBox\n" },
		{ "ModuleRelativePath", "BreakableTile.h" },
		{ "ToolTip", "if another object enters the TriggerBox" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableTile, nullptr, "OnTriggerBoxOverlap", nullptr, nullptr, sizeof(BreakableTile_eventOnTriggerBoxOverlap_Parms), Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABreakableTile_NoRegister()
	{
		return ABreakableTile::StaticClass();
	}
	struct Z_Construct_UClass_ABreakableTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_drop_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_drop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coinDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_coinDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lifeDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_lifeDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bulletDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_tileStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakableTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATileBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABreakableTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABreakableTile_OnTriggerBoxOverlap, "OnTriggerBoxOverlap" }, // 2480970061
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableTile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BreakableTile.h" },
		{ "ModuleRelativePath", "BreakableTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableTile_Statics::NewProp_drop_MetaData[] = {
		{ "Category", "Type of drop to spawn" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Drops>\n//enum to specify what the block should drop \n" },
		{ "ModuleRelativePath", "BreakableTile.h" },
		{ "ToolTip", "<Drops>\nenum to specify what the block should drop" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABreakableTile_Statics::NewProp_drop = { "drop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableTile, drop), Z_Construct_UEnum_Platformer2D_Drop, METADATA_PARAMS(Z_Construct_UClass_ABreakableTile_Statics::NewProp_drop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableTile_Statics::NewProp_drop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableTile_Statics::NewProp_coinDrop_MetaData[] = {
		{ "Category", "Type of drop to spawn" },
		{ "Comment", "// The coin drop\n" },
		{ "ModuleRelativePath", "BreakableTile.h" },
		{ "ToolTip", "The coin drop" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABreakableTile_Statics::NewProp_coinDrop = { "coinDrop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableTile, coinDrop), Z_Construct_UClass_ACoin_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABreakableTile_Statics::NewProp_coinDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableTile_Statics::NewProp_coinDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableTile_Statics::NewProp_lifeDrop_MetaData[] = {
		{ "Category", "Type of drop to spawn" },
		{ "Comment", "// The life drop\n" },
		{ "ModuleRelativePath", "BreakableTile.h" },
		{ "ToolTip", "The life drop" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABreakableTile_Statics::NewProp_lifeDrop = { "lifeDrop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableTile, lifeDrop), Z_Construct_UClass_ALifeDrop_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABreakableTile_Statics::NewProp_lifeDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableTile_Statics::NewProp_lifeDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableTile_Statics::NewProp_bulletDrop_MetaData[] = {
		{ "Category", "Type of drop to spawn" },
		{ "Comment", "// The bullet drop\n" },
		{ "ModuleRelativePath", "BreakableTile.h" },
		{ "ToolTip", "The bullet drop" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABreakableTile_Statics::NewProp_bulletDrop = { "bulletDrop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableTile, bulletDrop), Z_Construct_UClass_ABulletDrop_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABreakableTile_Statics::NewProp_bulletDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableTile_Statics::NewProp_bulletDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableTile_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Collision>\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableTile.h" },
		{ "ToolTip", "<Collision>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableTile_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableTile, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABreakableTile_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableTile_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableTile_Statics::NewProp_tileStrength_MetaData[] = {
		{ "Category", "strength" },
		{ "Comment", "//choose how strong the tile is, how many times the player needs to hit the tile for it to break\n" },
		{ "ModuleRelativePath", "BreakableTile.h" },
		{ "ToolTip", "choose how strong the tile is, how many times the player needs to hit the tile for it to break" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABreakableTile_Statics::NewProp_tileStrength = { "tileStrength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableTile, tileStrength), METADATA_PARAMS(Z_Construct_UClass_ABreakableTile_Statics::NewProp_tileStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableTile_Statics::NewProp_tileStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableTile_Statics::NewProp_drop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableTile_Statics::NewProp_coinDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableTile_Statics::NewProp_lifeDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableTile_Statics::NewProp_bulletDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableTile_Statics::NewProp_TriggerBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableTile_Statics::NewProp_tileStrength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakableTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABreakableTile_Statics::ClassParams = {
		&ABreakableTile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABreakableTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableTile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABreakableTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABreakableTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABreakableTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABreakableTile, 943274154);
	template<> PLATFORMER2D_API UClass* StaticClass<ABreakableTile>()
	{
		return ABreakableTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABreakableTile(Z_Construct_UClass_ABreakableTile, &ABreakableTile::StaticClass, TEXT("/Script/Platformer2D"), TEXT("ABreakableTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
