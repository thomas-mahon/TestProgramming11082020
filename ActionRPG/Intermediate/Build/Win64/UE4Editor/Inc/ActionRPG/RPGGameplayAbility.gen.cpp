// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Abilities/RPGGameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGGameplayAbility() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGGameplayAbility_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainer();
// End Cross Module References
	DEFINE_FUNCTION(URPGGameplayAbility::execApplyEffectContainer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag);
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainer(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameplayAbility::execApplyEffectContainerSpec)
	{
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainerSpec(Z_Param_Out_ContainerSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameplayAbility::execMakeEffectContainerSpec)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag);
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpec(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameplayAbility::execMakeEffectContainerSpecFromContainer)
	{
		P_GET_STRUCT_REF(FRPGGameplayEffectContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpecFromContainer(Z_Param_Out_Container,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
		P_NATIVE_END;
	}
	static FName NAME_URPGGameplayAbility_OnGrantAbility = FName(TEXT("OnGrantAbility"));
	void URPGGameplayAbility::OnGrantAbility()
	{
		ProcessEvent(FindFunctionChecked(NAME_URPGGameplayAbility_OnGrantAbility),NULL);
	}
	void URPGGameplayAbility::StaticRegisterNativesURPGGameplayAbility()
	{
		UClass* Class = URPGGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffectContainer", &URPGGameplayAbility::execApplyEffectContainer },
			{ "ApplyEffectContainerSpec", &URPGGameplayAbility::execApplyEffectContainerSpec },
			{ "MakeEffectContainerSpec", &URPGGameplayAbility::execMakeEffectContainerSpec },
			{ "MakeEffectContainerSpecFromContainer", &URPGGameplayAbility::execMakeEffectContainerSpecFromContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics
	{
		struct RPGGameplayAbility_eventApplyEffectContainer_Parms
		{
			FGameplayTag ContainerTag;
			FGameplayEventData EventData;
			int32 OverrideGameplayLevel;
			TArray<FActiveGameplayEffectHandle> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContainerTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventApplyEffectContainer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventApplyEffectContainer_Parms, OverrideGameplayLevel), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventApplyEffectContainer_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_ContainerTag = { "ContainerTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventApplyEffectContainer_Parms, ContainerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_OverrideGameplayLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::NewProp_ContainerTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "Ability" },
		{ "Comment", "/** Applies a gameplay effect container, by creating and then applying the spec */" },
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/Abilities/RPGGameplayAbility.h" },
		{ "ToolTip", "Applies a gameplay effect container, by creating and then applying the spec" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameplayAbility, nullptr, "ApplyEffectContainer", nullptr, nullptr, sizeof(RPGGameplayAbility_eventApplyEffectContainer_Parms), Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics
	{
		struct RPGGameplayAbility_eventApplyEffectContainerSpec_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventApplyEffectContainerSpec_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventApplyEffectContainerSpec_Parms, ContainerSpec), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Applies a gameplay effect container spec that was previously created */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGGameplayAbility.h" },
		{ "ToolTip", "Applies a gameplay effect container spec that was previously created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameplayAbility, nullptr, "ApplyEffectContainerSpec", nullptr, nullptr, sizeof(RPGGameplayAbility_eventApplyEffectContainerSpec_Parms), Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics
	{
		struct RPGGameplayAbility_eventMakeEffectContainerSpec_Parms
		{
			FGameplayTag ContainerTag;
			FGameplayEventData EventData;
			int32 OverrideGameplayLevel;
			FRPGGameplayEffectContainerSpec ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContainerTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventMakeEffectContainerSpec_Parms, ReturnValue), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventMakeEffectContainerSpec_Parms, OverrideGameplayLevel), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventMakeEffectContainerSpec_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ContainerTag = { "ContainerTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventMakeEffectContainerSpec_Parms, ContainerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_OverrideGameplayLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ContainerTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "Ability" },
		{ "Comment", "/** Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap */" },
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/Abilities/RPGGameplayAbility.h" },
		{ "ToolTip", "Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameplayAbility, nullptr, "MakeEffectContainerSpec", nullptr, nullptr, sizeof(RPGGameplayAbility_eventMakeEffectContainerSpec_Parms), Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics
	{
		struct RPGGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms
		{
			FRPGGameplayEffectContainer Container;
			FGameplayEventData EventData;
			int32 OverrideGameplayLevel;
			FRPGGameplayEffectContainerSpec ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Container;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, OverrideGameplayLevel), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, Container), Z_Construct_UScriptStruct_FRPGGameplayEffectContainer, METADATA_PARAMS(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_OverrideGameplayLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "Ability" },
		{ "Comment", "/** Make gameplay effect container spec to be applied later, using the passed in container */" },
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/Abilities/RPGGameplayAbility.h" },
		{ "ToolTip", "Make gameplay effect container spec to be applied later, using the passed in container" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameplayAbility, nullptr, "MakeEffectContainerSpecFromContainer", nullptr, nullptr, sizeof(RPGGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms), Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameplayAbility_OnGrantAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameplayAbility_OnGrantAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Abilities/RPGGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameplayAbility_OnGrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameplayAbility, nullptr, "OnGrantAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameplayAbility_OnGrantAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameplayAbility_OnGrantAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameplayAbility_OnGrantAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameplayAbility_OnGrantAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGGameplayAbility_NoRegister()
	{
		return URPGGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_URPGGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectContainerMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EffectContainerMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainer, "ApplyEffectContainer" }, // 2060157220
		{ &Z_Construct_UFunction_URPGGameplayAbility_ApplyEffectContainerSpec, "ApplyEffectContainerSpec" }, // 462170835
		{ &Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpec, "MakeEffectContainerSpec" }, // 2174943384
		{ &Z_Construct_UFunction_URPGGameplayAbility_MakeEffectContainerSpecFromContainer, "MakeEffectContainerSpecFromContainer" }, // 4087598397
		{ &Z_Construct_UFunction_URPGGameplayAbility_OnGrantAbility, "OnGrantAbility" }, // 1199399355
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subclass of ability blueprint type with game-specific data\n * This class uses GameplayEffectContainers to allow easier execution of gameplay effects based on a triggering tag\n * Most games will need to implement a subclass to support their game-specific code\n */" },
		{ "IncludePath", "Abilities/RPGGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/Abilities/RPGGameplayAbility.h" },
		{ "ToolTip", "Subclass of ability blueprint type with game-specific data\nThis class uses GameplayEffectContainers to allow easier execution of gameplay effects based on a triggering tag\nMost games will need to implement a subclass to support their game-specific code" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_EffectContainerMap_MetaData[] = {
		{ "Category", "GameplayEffects" },
		{ "Comment", "/** Map of gameplay tags to gameplay effect containers */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGGameplayAbility.h" },
		{ "ToolTip", "Map of gameplay tags to gameplay effect containers" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_EffectContainerMap = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGGameplayAbility, EffectContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_EffectContainerMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_EffectContainerMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_EffectContainerMap_Key_KeyProp = { "EffectContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_EffectContainerMap_ValueProp = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRPGGameplayEffectContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGGameplayAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_EffectContainerMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_EffectContainerMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_EffectContainerMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGGameplayAbility_Statics::ClassParams = {
		&URPGGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGGameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGGameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGGameplayAbility, 442045781);
	template<> ACTIONRPG_API UClass* StaticClass<URPGGameplayAbility>()
	{
		return URPGGameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGGameplayAbility(Z_Construct_UClass_URPGGameplayAbility, &URPGGameplayAbility::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGGameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
