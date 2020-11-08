// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Abilities/RPGAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAttributeSet() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGAttributeSet_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(URPGAttributeSet::execOnRep_MoveSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MoveSpeed(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSet::execOnRep_DefensePower)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DefensePower(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSet::execOnRep_AttackPower)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttackPower(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSet::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSet::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	void URPGAttributeSet::StaticRegisterNativesURPGAttributeSet()
	{
		UClass* Class = URPGAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_AttackPower", &URPGAttributeSet::execOnRep_AttackPower },
			{ "OnRep_DefensePower", &URPGAttributeSet::execOnRep_DefensePower },
			{ "OnRep_Health", &URPGAttributeSet::execOnRep_Health },
			{ "OnRep_Mana", &URPGAttributeSet::execOnRep_Mana },
			{ "OnRep_MaxHealth", &URPGAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &URPGAttributeSet::execOnRep_MaxMana },
			{ "OnRep_MoveSpeed", &URPGAttributeSet::execOnRep_MoveSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics
	{
		struct RPGAttributeSet_eventOnRep_AttackPower_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_AttackPower_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_AttackPower", nullptr, nullptr, sizeof(RPGAttributeSet_eventOnRep_AttackPower_Parms), Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics
	{
		struct RPGAttributeSet_eventOnRep_DefensePower_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_DefensePower_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_DefensePower", nullptr, nullptr, sizeof(RPGAttributeSet_eventOnRep_DefensePower_Parms), Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics
	{
		struct RPGAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_Health_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication\n" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
		{ "ToolTip", "These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(RPGAttributeSet_eventOnRep_Health_Parms), Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics
	{
		struct RPGAttributeSet_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_Mana_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, sizeof(RPGAttributeSet_eventOnRep_Mana_Parms), Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics
	{
		struct RPGAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_MaxHealth_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, sizeof(RPGAttributeSet_eventOnRep_MaxHealth_Parms), Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics
	{
		struct RPGAttributeSet_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_MaxMana_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, sizeof(RPGAttributeSet_eventOnRep_MaxMana_Parms), Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics
	{
		struct RPGAttributeSet_eventOnRep_MoveSpeed_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_MoveSpeed_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_MoveSpeed", nullptr, nullptr, sizeof(RPGAttributeSet_eventOnRep_MoveSpeed_Parms), Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGAttributeSet_NoRegister()
	{
		return URPGAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_URPGAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefensePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefensePower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_AttackPower, "OnRep_AttackPower" }, // 3604312684
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_DefensePower, "OnRep_DefensePower" }, // 1511486251
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_Health, "OnRep_Health" }, // 883464993
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 3621368066
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 645668421
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 4050323684
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_MoveSpeed, "OnRep_MoveSpeed" }, // 4022573722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This holds all of the attributes used by abilities, it instantiates a copy of this on every character */" },
		{ "IncludePath", "Abilities/RPGAttributeSet.h" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
		{ "ToolTip", "This holds all of the attributes used by abilities, it instantiates a copy of this on every character" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Damage is a 'temporary' attribute used by the DamageExecution to calculate final damage, which then turns into -Health */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
		{ "ToolTip", "Damage is a 'temporary' attribute used by the DamageExecution to calculate final damage, which then turns into -Health" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MoveSpeed" },
		{ "Comment", "/** MoveSpeed affects how fast characters can move */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
		{ "ToolTip", "MoveSpeed affects how fast characters can move" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MoveSpeed = { "MoveSpeed", "OnRep_MoveSpeed", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSet, MoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_DefensePower_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Base Damage is divided by DefensePower to get actual damage done, so 1.0 means no bonus */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
		{ "ToolTip", "Base Damage is divided by DefensePower to get actual damage done, so 1.0 means no bonus" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_DefensePower = { "DefensePower", "OnRep_DefensePower", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSet, DefensePower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_DefensePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_DefensePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_AttackPower_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** AttackPower of the attacker is multiplied by the base Damage to reduce health, so 1.0 means no bonus */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
		{ "ToolTip", "AttackPower of the attacker is multiplied by the base Damage to reduce health, so 1.0 means no bonus" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_AttackPower = { "AttackPower", "OnRep_AttackPower", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_AttackPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_AttackPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Mana" },
		{ "Comment", "/** MaxMana is its own attribute, since GameplayEffects may modify it */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
		{ "ToolTip", "MaxMana is its own attribute, since GameplayEffects may modify it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Mana" },
		{ "Comment", "/** Current Mana, used to execute special abilities. Capped by MaxMana */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
		{ "ToolTip", "Current Mana, used to execute special abilities. Capped by MaxMana" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Mana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "/** MaxHealth is its own attribute, since GameplayEffects may modify it */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
		{ "ToolTip", "MaxHealth is its own attribute, since GameplayEffects may modify it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Current Health, when 0 we expect owner to die. Capped by MaxHealth */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAttributeSet.h" },
		{ "ToolTip", "Current Health, when 0 we expect owner to die. Capped by MaxHealth" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_DefensePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_AttackPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Mana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGAttributeSet_Statics::ClassParams = {
		&URPGAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGAttributeSet, 4113207623);
	template<> ACTIONRPG_API UClass* StaticClass<URPGAttributeSet>()
	{
		return URPGAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGAttributeSet(Z_Construct_UClass_URPGAttributeSet, &URPGAttributeSet::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGAttributeSet"), false, nullptr, nullptr, nullptr);

	void URPGAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_AttackPower(TEXT("AttackPower"));
		static const FName Name_DefensePower(TEXT("DefensePower"));
		static const FName Name_MoveSpeed(TEXT("MoveSpeed"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_AttackPower == ClassReps[(int32)ENetFields_Private::AttackPower].Property->GetFName()
			&& Name_DefensePower == ClassReps[(int32)ENetFields_Private::DefensePower].Property->GetFName()
			&& Name_MoveSpeed == ClassReps[(int32)ENetFields_Private::MoveSpeed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URPGAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
