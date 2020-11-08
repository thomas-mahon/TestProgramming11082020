// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/RPGBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGBlueprintLibrary() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGBlueprintLibrary_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSlot();
// End Cross Module References
	DEFINE_FUNCTION(URPGBlueprintLibrary::execGetProjectVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URPGBlueprintLibrary::GetProjectVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGBlueprintLibrary::execApplyExternalEffectContainerSpec)
	{
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=URPGBlueprintLibrary::ApplyExternalEffectContainerSpec(Z_Param_Out_ContainerSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGBlueprintLibrary::execAddTargetsToEffectContainerSpec)
	{
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_HitResults);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=URPGBlueprintLibrary::AddTargetsToEffectContainerSpec(Z_Param_Out_ContainerSpec,Z_Param_Out_HitResults,Z_Param_Out_TargetActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGBlueprintLibrary::execDoesEffectContainerSpecHaveTargets)
	{
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::DoesEffectContainerSpecHaveTargets(Z_Param_Out_ContainerSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGBlueprintLibrary::execDoesEffectContainerSpecHaveEffects)
	{
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::DoesEffectContainerSpecHaveEffects(Z_Param_Out_ContainerSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGBlueprintLibrary::execIsValidItemSlot)
	{
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_ItemSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::IsValidItemSlot(Z_Param_Out_ItemSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGBlueprintLibrary::execNotEqual_RPGItemSlot)
	{
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_A);
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::NotEqual_RPGItemSlot(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGBlueprintLibrary::execEqualEqual_RPGItemSlot)
	{
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_A);
		P_GET_STRUCT_REF(FRPGItemSlot,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::EqualEqual_RPGItemSlot(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGBlueprintLibrary::execIsInEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URPGBlueprintLibrary::IsInEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGBlueprintLibrary::execStopLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		URPGBlueprintLibrary::StopLoadingScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGBlueprintLibrary::execPlayLoadingScreen)
	{
		P_GET_UBOOL(Z_Param_bPlayUntilStopped);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		URPGBlueprintLibrary::PlayLoadingScreen(Z_Param_bPlayUntilStopped,Z_Param_PlayTime);
		P_NATIVE_END;
	}
	void URPGBlueprintLibrary::StaticRegisterNativesURPGBlueprintLibrary()
	{
		UClass* Class = URPGBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTargetsToEffectContainerSpec", &URPGBlueprintLibrary::execAddTargetsToEffectContainerSpec },
			{ "ApplyExternalEffectContainerSpec", &URPGBlueprintLibrary::execApplyExternalEffectContainerSpec },
			{ "DoesEffectContainerSpecHaveEffects", &URPGBlueprintLibrary::execDoesEffectContainerSpecHaveEffects },
			{ "DoesEffectContainerSpecHaveTargets", &URPGBlueprintLibrary::execDoesEffectContainerSpecHaveTargets },
			{ "EqualEqual_RPGItemSlot", &URPGBlueprintLibrary::execEqualEqual_RPGItemSlot },
			{ "GetProjectVersion", &URPGBlueprintLibrary::execGetProjectVersion },
			{ "IsInEditor", &URPGBlueprintLibrary::execIsInEditor },
			{ "IsValidItemSlot", &URPGBlueprintLibrary::execIsValidItemSlot },
			{ "NotEqual_RPGItemSlot", &URPGBlueprintLibrary::execNotEqual_RPGItemSlot },
			{ "PlayLoadingScreen", &URPGBlueprintLibrary::execPlayLoadingScreen },
			{ "StopLoadingScreen", &URPGBlueprintLibrary::execStopLoadingScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics
	{
		struct RPGBlueprintLibrary_eventAddTargetsToEffectContainerSpec_Parms
		{
			FRPGGameplayEffectContainerSpec ContainerSpec;
			TArray<FHitResult> HitResults;
			TArray<AActor*> TargetActors;
			FRPGGameplayEffectContainerSpec ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerSpec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventAddTargetsToEffectContainerSpec_Parms, ReturnValue), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventAddTargetsToEffectContainerSpec_Parms, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventAddTargetsToEffectContainerSpec_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventAddTargetsToEffectContainerSpec_Parms, ContainerSpec), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::NewProp_ContainerSpec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "HitResults,TargetActors" },
		{ "Category", "Ability" },
		{ "Comment", "/** Adds targets to a copy of the passed in effect container spec and returns it */" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Adds targets to a copy of the passed in effect container spec and returns it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "AddTargetsToEffectContainerSpec", nullptr, nullptr, sizeof(RPGBlueprintLibrary_eventAddTargetsToEffectContainerSpec_Parms), Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics
	{
		struct RPGBlueprintLibrary_eventApplyExternalEffectContainerSpec_Parms
		{
			FRPGGameplayEffectContainerSpec ContainerSpec;
			TArray<FActiveGameplayEffectHandle> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerSpec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventApplyExternalEffectContainerSpec_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventApplyExternalEffectContainerSpec_Parms, ContainerSpec), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::NewProp_ContainerSpec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Applies container spec that was made from an ability */" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Applies container spec that was made from an ability" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "ApplyExternalEffectContainerSpec", nullptr, nullptr, sizeof(RPGBlueprintLibrary_eventApplyExternalEffectContainerSpec_Parms), Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics
	{
		struct RPGBlueprintLibrary_eventDoesEffectContainerSpecHaveEffects_Parms
		{
			FRPGGameplayEffectContainerSpec ContainerSpec;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerSpec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGBlueprintLibrary_eventDoesEffectContainerSpecHaveEffects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGBlueprintLibrary_eventDoesEffectContainerSpecHaveEffects_Parms), &Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ContainerSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventDoesEffectContainerSpecHaveEffects_Parms, ContainerSpec), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ContainerSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ContainerSpec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ContainerSpec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Checks if spec has any effects */" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Checks if spec has any effects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "DoesEffectContainerSpecHaveEffects", nullptr, nullptr, sizeof(RPGBlueprintLibrary_eventDoesEffectContainerSpecHaveEffects_Parms), Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics
	{
		struct RPGBlueprintLibrary_eventDoesEffectContainerSpecHaveTargets_Parms
		{
			FRPGGameplayEffectContainerSpec ContainerSpec;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerSpec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGBlueprintLibrary_eventDoesEffectContainerSpecHaveTargets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGBlueprintLibrary_eventDoesEffectContainerSpecHaveTargets_Parms), &Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ContainerSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventDoesEffectContainerSpecHaveTargets_Parms, ContainerSpec), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ContainerSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ContainerSpec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ContainerSpec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Checks if spec has any targets */" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Checks if spec has any targets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "DoesEffectContainerSpecHaveTargets", nullptr, nullptr, sizeof(RPGBlueprintLibrary_eventDoesEffectContainerSpecHaveTargets_Parms), Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics
	{
		struct RPGBlueprintLibrary_eventEqualEqual_RPGItemSlot_Parms
		{
			FRPGItemSlot A;
			FRPGItemSlot B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGBlueprintLibrary_eventEqualEqual_RPGItemSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGBlueprintLibrary_eventEqualEqual_RPGItemSlot_Parms), &Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventEqualEqual_RPGItemSlot_Parms, B), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventEqualEqual_RPGItemSlot_Parms, A), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Equality operator for ItemSlot */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (RPGItemSlot)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Equality operator for ItemSlot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "EqualEqual_RPGItemSlot", nullptr, nullptr, sizeof(RPGBlueprintLibrary_eventEqualEqual_RPGItemSlot_Parms), Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics
	{
		struct RPGBlueprintLibrary_eventGetProjectVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project" },
		{ "Comment", "//Returns the project version set in the 'Project Settings' > 'Description' section of the editor\n" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Returns the project version set in the 'Project Settings' > 'Description' section of the editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "GetProjectVersion", nullptr, nullptr, sizeof(RPGBlueprintLibrary_eventGetProjectVersion_Parms), Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics
	{
		struct RPGBlueprintLibrary_eventIsInEditor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGBlueprintLibrary_eventIsInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGBlueprintLibrary_eventIsInEditor_Parms), &Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "Comment", "/** Returns true if this is being run from an editor preview */" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Returns true if this is being run from an editor preview" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "IsInEditor", nullptr, nullptr, sizeof(RPGBlueprintLibrary_eventIsInEditor_Parms), Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics
	{
		struct RPGBlueprintLibrary_eventIsValidItemSlot_Parms
		{
			FRPGItemSlot ItemSlot;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGBlueprintLibrary_eventIsValidItemSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGBlueprintLibrary_eventIsValidItemSlot_Parms), &Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::NewProp_ItemSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventIsValidItemSlot_Parms, ItemSlot), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::NewProp_ItemSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::NewProp_ItemSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::NewProp_ItemSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Validity check for ItemSlot */" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Validity check for ItemSlot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "IsValidItemSlot", nullptr, nullptr, sizeof(RPGBlueprintLibrary_eventIsValidItemSlot_Parms), Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics
	{
		struct RPGBlueprintLibrary_eventNotEqual_RPGItemSlot_Parms
		{
			FRPGItemSlot A;
			FRPGItemSlot B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGBlueprintLibrary_eventNotEqual_RPGItemSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGBlueprintLibrary_eventNotEqual_RPGItemSlot_Parms), &Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventNotEqual_RPGItemSlot_Parms, B), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventNotEqual_RPGItemSlot_Parms, A), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Inequality operator for ItemSlot */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqualEqual (RPGItemSlot)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Inequality operator for ItemSlot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "NotEqual_RPGItemSlot", nullptr, nullptr, sizeof(RPGBlueprintLibrary_eventNotEqual_RPGItemSlot_Parms), Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics
	{
		struct RPGBlueprintLibrary_eventPlayLoadingScreen_Parms
		{
			bool bPlayUntilStopped;
			float PlayTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayTime;
		static void NewProp_bPlayUntilStopped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayUntilStopped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::NewProp_PlayTime = { "PlayTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGBlueprintLibrary_eventPlayLoadingScreen_Parms, PlayTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::NewProp_bPlayUntilStopped_SetBit(void* Obj)
	{
		((RPGBlueprintLibrary_eventPlayLoadingScreen_Parms*)Obj)->bPlayUntilStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::NewProp_bPlayUntilStopped = { "bPlayUntilStopped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGBlueprintLibrary_eventPlayLoadingScreen_Parms), &Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::NewProp_bPlayUntilStopped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::NewProp_PlayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::NewProp_bPlayUntilStopped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "Comment", "/** Show the native loading screen, such as on a map transfer. If bPlayUntilStopped is false, it will be displayed for PlayTime and automatically stop */" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Show the native loading screen, such as on a map transfer. If bPlayUntilStopped is false, it will be displayed for PlayTime and automatically stop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "PlayLoadingScreen", nullptr, nullptr, sizeof(RPGBlueprintLibrary_eventPlayLoadingScreen_Parms), Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGBlueprintLibrary_StopLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGBlueprintLibrary_StopLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "Comment", "/** Turns off the native loading screen if it is visible. This must be called if bPlayUntilStopped was true */" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Turns off the native loading screen if it is visible. This must be called if bPlayUntilStopped was true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGBlueprintLibrary_StopLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGBlueprintLibrary, nullptr, "StopLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGBlueprintLibrary_StopLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGBlueprintLibrary_StopLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGBlueprintLibrary_StopLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGBlueprintLibrary_StopLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGBlueprintLibrary_NoRegister()
	{
		return URPGBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URPGBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_AddTargetsToEffectContainerSpec, "AddTargetsToEffectContainerSpec" }, // 1253987695
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_ApplyExternalEffectContainerSpec, "ApplyExternalEffectContainerSpec" }, // 4174860091
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveEffects, "DoesEffectContainerSpecHaveEffects" }, // 2028105516
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_DoesEffectContainerSpecHaveTargets, "DoesEffectContainerSpecHaveTargets" }, // 1328157256
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_EqualEqual_RPGItemSlot, "EqualEqual_RPGItemSlot" }, // 4011621768
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_GetProjectVersion, "GetProjectVersion" }, // 2968674212
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_IsInEditor, "IsInEditor" }, // 1449281864
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_IsValidItemSlot, "IsValidItemSlot" }, // 393052933
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_NotEqual_RPGItemSlot, "NotEqual_RPGItemSlot" }, // 2121136548
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_PlayLoadingScreen, "PlayLoadingScreen" }, // 744686820
		{ &Z_Construct_UFunction_URPGBlueprintLibrary_StopLoadingScreen, "StopLoadingScreen" }, // 231618205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Game-specific blueprint library\n * Most games will need to implement one or more blueprint function libraries to expose their native code to blueprints\n */" },
		{ "IncludePath", "RPGBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/RPGBlueprintLibrary.h" },
		{ "ToolTip", "Game-specific blueprint library\nMost games will need to implement one or more blueprint function libraries to expose their native code to blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGBlueprintLibrary_Statics::ClassParams = {
		&URPGBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGBlueprintLibrary, 4164889838);
	template<> ACTIONRPG_API UClass* StaticClass<URPGBlueprintLibrary>()
	{
		return URPGBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGBlueprintLibrary(Z_Construct_UClass_URPGBlueprintLibrary, &URPGBlueprintLibrary::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
