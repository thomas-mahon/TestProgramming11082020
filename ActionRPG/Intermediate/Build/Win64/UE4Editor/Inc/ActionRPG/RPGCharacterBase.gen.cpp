// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/RPGCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCharacterBase() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_ARPGCharacterBase_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_ARPGCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSlot();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGInventoryInterface_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGAttributeSet_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARPGCharacterBase::execGetCooldownRemainingForTag)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_CooldownTags);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TimeRemaining);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CooldownDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCooldownRemainingForTag(Z_Param_CooldownTags,Z_Param_Out_TimeRemaining,Z_Param_Out_CooldownDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetActiveAbilitiesWithTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
		P_GET_TARRAY_REF(URPGGameplayAbility*,Z_Param_Out_ActiveAbilities);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActiveAbilitiesWithTags(Z_Param_AbilityTags,Z_Param_Out_ActiveAbilities);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execActivateAbilitiesWithTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateAbilitiesWithTags(Z_Param_AbilityTags,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetActiveAbilitiesWithItemSlot)
	{
		P_GET_STRUCT(FRPGItemSlot,Z_Param_ItemSlot);
		P_GET_TARRAY_REF(URPGGameplayAbility*,Z_Param_Out_ActiveAbilities);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActiveAbilitiesWithItemSlot(Z_Param_ItemSlot,Z_Param_Out_ActiveAbilities);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execActivateAbilitiesWithItemSlot)
	{
		P_GET_STRUCT(FRPGItemSlot,Z_Param_ItemSlot);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateAbilitiesWithItemSlot(Z_Param_ItemSlot,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execSetCharacterLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCharacterLevel(Z_Param_NewLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetCharacterLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetMoveSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	static FName NAME_ARPGCharacterBase_OnDamaged = FName(TEXT("OnDamaged"));
	void ARPGCharacterBase::OnDamaged(float DamageAmount, FHitResult const& HitInfo, FGameplayTagContainer const& DamageTags, ARPGCharacterBase* InstigatorCharacter, AActor* DamageCauser)
	{
		RPGCharacterBase_eventOnDamaged_Parms Parms;
		Parms.DamageAmount=DamageAmount;
		Parms.HitInfo=HitInfo;
		Parms.DamageTags=DamageTags;
		Parms.InstigatorCharacter=InstigatorCharacter;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_ARPGCharacterBase_OnDamaged),&Parms);
	}
	static FName NAME_ARPGCharacterBase_OnHealthChanged = FName(TEXT("OnHealthChanged"));
	void ARPGCharacterBase::OnHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
	{
		RPGCharacterBase_eventOnHealthChanged_Parms Parms;
		Parms.DeltaValue=DeltaValue;
		Parms.EventTags=EventTags;
		ProcessEvent(FindFunctionChecked(NAME_ARPGCharacterBase_OnHealthChanged),&Parms);
	}
	static FName NAME_ARPGCharacterBase_OnManaChanged = FName(TEXT("OnManaChanged"));
	void ARPGCharacterBase::OnManaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
	{
		RPGCharacterBase_eventOnManaChanged_Parms Parms;
		Parms.DeltaValue=DeltaValue;
		Parms.EventTags=EventTags;
		ProcessEvent(FindFunctionChecked(NAME_ARPGCharacterBase_OnManaChanged),&Parms);
	}
	static FName NAME_ARPGCharacterBase_OnMoveSpeedChanged = FName(TEXT("OnMoveSpeedChanged"));
	void ARPGCharacterBase::OnMoveSpeedChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
	{
		RPGCharacterBase_eventOnMoveSpeedChanged_Parms Parms;
		Parms.DeltaValue=DeltaValue;
		Parms.EventTags=EventTags;
		ProcessEvent(FindFunctionChecked(NAME_ARPGCharacterBase_OnMoveSpeedChanged),&Parms);
	}
	void ARPGCharacterBase::StaticRegisterNativesARPGCharacterBase()
	{
		UClass* Class = ARPGCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAbilitiesWithItemSlot", &ARPGCharacterBase::execActivateAbilitiesWithItemSlot },
			{ "ActivateAbilitiesWithTags", &ARPGCharacterBase::execActivateAbilitiesWithTags },
			{ "GetActiveAbilitiesWithItemSlot", &ARPGCharacterBase::execGetActiveAbilitiesWithItemSlot },
			{ "GetActiveAbilitiesWithTags", &ARPGCharacterBase::execGetActiveAbilitiesWithTags },
			{ "GetCharacterLevel", &ARPGCharacterBase::execGetCharacterLevel },
			{ "GetCooldownRemainingForTag", &ARPGCharacterBase::execGetCooldownRemainingForTag },
			{ "GetHealth", &ARPGCharacterBase::execGetHealth },
			{ "GetMana", &ARPGCharacterBase::execGetMana },
			{ "GetMaxHealth", &ARPGCharacterBase::execGetMaxHealth },
			{ "GetMaxMana", &ARPGCharacterBase::execGetMaxMana },
			{ "GetMoveSpeed", &ARPGCharacterBase::execGetMoveSpeed },
			{ "SetCharacterLevel", &ARPGCharacterBase::execSetCharacterLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics
	{
		struct RPGCharacterBase_eventActivateAbilitiesWithItemSlot_Parms
		{
			FRPGItemSlot ItemSlot;
			bool bAllowRemoteActivation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGCharacterBase_eventActivateAbilitiesWithItemSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGCharacterBase_eventActivateAbilitiesWithItemSlot_Parms), &Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((RPGCharacterBase_eventActivateAbilitiesWithItemSlot_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGCharacterBase_eventActivateAbilitiesWithItemSlot_Parms), &Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventActivateAbilitiesWithItemSlot_Parms, ItemSlot), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::NewProp_bAllowRemoteActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::NewProp_ItemSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/**\n\x09 * Attempts to activate any ability in the specified item slot. Will return false if no activatable ability found or activation fails\n\x09 * Returns true if it thinks it activated, but it may return false positives due to failure later in activation.\n\x09 * If bAllowRemoteActivation is true, it will remotely activate local/server abilities, if false it will only try to locally activate the ability\n\x09 */" },
		{ "CPP_Default_bAllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Attempts to activate any ability in the specified item slot. Will return false if no activatable ability found or activation fails\nReturns true if it thinks it activated, but it may return false positives due to failure later in activation.\nIf bAllowRemoteActivation is true, it will remotely activate local/server abilities, if false it will only try to locally activate the ability" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "ActivateAbilitiesWithItemSlot", nullptr, nullptr, sizeof(RPGCharacterBase_eventActivateAbilitiesWithItemSlot_Parms), Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics
	{
		struct RPGCharacterBase_eventActivateAbilitiesWithTags_Parms
		{
			FGameplayTagContainer AbilityTags;
			bool bAllowRemoteActivation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGCharacterBase_eventActivateAbilitiesWithTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGCharacterBase_eventActivateAbilitiesWithTags_Parms), &Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((RPGCharacterBase_eventActivateAbilitiesWithTags_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGCharacterBase_eventActivateAbilitiesWithTags_Parms), &Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventActivateAbilitiesWithTags_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::NewProp_bAllowRemoteActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::NewProp_AbilityTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/**\n\x09 * Attempts to activate all abilities that match the specified tags\n\x09 * Returns true if it thinks it activated, but it may return false positives due to failure later in activation.\n\x09 * If bAllowRemoteActivation is true, it will remotely activate local/server abilities, if false it will only try to locally activate the ability\n\x09 */" },
		{ "CPP_Default_bAllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Attempts to activate all abilities that match the specified tags\nReturns true if it thinks it activated, but it may return false positives due to failure later in activation.\nIf bAllowRemoteActivation is true, it will remotely activate local/server abilities, if false it will only try to locally activate the ability" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "ActivateAbilitiesWithTags", nullptr, nullptr, sizeof(RPGCharacterBase_eventActivateAbilitiesWithTags_Parms), Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics
	{
		struct RPGCharacterBase_eventGetActiveAbilitiesWithItemSlot_Parms
		{
			FRPGItemSlot ItemSlot;
			TArray<URPGGameplayAbility*> ActiveAbilities;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveAbilities;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveAbilities_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::NewProp_ActiveAbilities = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetActiveAbilitiesWithItemSlot_Parms, ActiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::NewProp_ActiveAbilities_Inner = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URPGGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetActiveAbilitiesWithItemSlot_Parms, ItemSlot), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::NewProp_ActiveAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::NewProp_ActiveAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::NewProp_ItemSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Returns a list of active abilities bound to the item slot. This only returns if the ability is currently running */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Returns a list of active abilities bound to the item slot. This only returns if the ability is currently running" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetActiveAbilitiesWithItemSlot", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetActiveAbilitiesWithItemSlot_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics
	{
		struct RPGCharacterBase_eventGetActiveAbilitiesWithTags_Parms
		{
			FGameplayTagContainer AbilityTags;
			TArray<URPGGameplayAbility*> ActiveAbilities;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveAbilities;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveAbilities_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::NewProp_ActiveAbilities = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetActiveAbilitiesWithTags_Parms, ActiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::NewProp_ActiveAbilities_Inner = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URPGGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetActiveAbilitiesWithTags_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::NewProp_ActiveAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::NewProp_ActiveAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::NewProp_AbilityTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Returns a list of active abilities matching the specified tags. This only returns if the ability is currently running */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Returns a list of active abilities matching the specified tags. This only returns if the ability is currently running" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetActiveAbilitiesWithTags", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetActiveAbilitiesWithTags_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics
	{
		struct RPGCharacterBase_eventGetCharacterLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the character level that is passed to the ability system */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Returns the character level that is passed to the ability system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetCharacterLevel", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetCharacterLevel_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics
	{
		struct RPGCharacterBase_eventGetCooldownRemainingForTag_Parms
		{
			FGameplayTagContainer CooldownTags;
			float TimeRemaining;
			float CooldownDuration;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGCharacterBase_eventGetCooldownRemainingForTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGCharacterBase_eventGetCooldownRemainingForTag_Parms), &Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetCooldownRemainingForTag_Parms, CooldownDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetCooldownRemainingForTag_Parms, TimeRemaining), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetCooldownRemainingForTag_Parms, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::NewProp_CooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::NewProp_TimeRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::NewProp_CooldownTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Returns total time and remaining time for cooldown tags. Returns false if no active cooldowns found */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Returns total time and remaining time for cooldown tags. Returns false if no active cooldowns found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetCooldownRemainingForTag", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetCooldownRemainingForTag_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics
	{
		struct RPGCharacterBase_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns current health, will be 0 if dead */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Returns current health, will be 0 if dead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetHealth", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetHealth_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics
	{
		struct RPGCharacterBase_eventGetMana_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns current mana */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Returns current mana" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetMana", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetMana_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics
	{
		struct RPGCharacterBase_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns maximum health, health will never be greater than this */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Returns maximum health, health will never be greater than this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetMaxHealth_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics
	{
		struct RPGCharacterBase_eventGetMaxMana_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns maximum mana, mana will never be greater than this */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Returns maximum mana, mana will never be greater than this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetMaxMana", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetMaxMana_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics
	{
		struct RPGCharacterBase_eventGetMoveSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns current movement speed */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Returns current movement speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetMoveSpeed", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetMoveSpeed_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnDamaged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnDamaged_Parms, InstigatorCharacter), Z_Construct_UClass_ARPGCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_DamageTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_DamageTags = { "DamageTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnDamaged_Parms, DamageTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_DamageTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_DamageTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnDamaged_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_HitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_HitInfo_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnDamaged_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_InstigatorCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_DamageTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_HitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called when character takes damage, which may have killed them\n\x09 *\n\x09 * @param DamageAmount Amount of damage that was done, not clamped based on current health\n\x09 * @param HitInfo The hit info that generated this damage\n\x09 * @param DamageTags The gameplay tags of the event that did the damage\n\x09 * @param InstigatorCharacter The character that initiated this damage\n\x09 * @param DamageCauser The actual actor that did the damage, might be a weapon or projectile\n\x09 */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Called when character takes damage, which may have killed them\n\n@param DamageAmount Amount of damage that was done, not clamped based on current health\n@param HitInfo The hit info that generated this damage\n@param DamageTags The gameplay tags of the event that did the damage\n@param InstigatorCharacter The character that initiated this damage\n@param DamageCauser The actual actor that did the damage, might be a weapon or projectile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "OnDamaged", nullptr, nullptr, sizeof(RPGCharacterBase_eventOnDamaged_Parms), Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_OnDamaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_OnDamaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::NewProp_EventTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::NewProp_EventTags_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnHealthChanged_Parms, DeltaValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::NewProp_EventTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::NewProp_DeltaValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called when health is changed, either from healing or from being damaged\n\x09 * For damage this is called in addition to OnDamaged/OnKilled\n\x09 *\n\x09 * @param DeltaValue Change in health value, positive for heal, negative for cost. If 0 the delta is unknown\n\x09 * @param EventTags The gameplay tags of the event that changed mana\n\x09 */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Called when health is changed, either from healing or from being damaged\nFor damage this is called in addition to OnDamaged/OnKilled\n\n@param DeltaValue Change in health value, positive for heal, negative for cost. If 0 the delta is unknown\n@param EventTags The gameplay tags of the event that changed mana" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(RPGCharacterBase_eventOnHealthChanged_Parms), Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnManaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::NewProp_EventTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::NewProp_EventTags_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnManaChanged_Parms, DeltaValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::NewProp_EventTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::NewProp_DeltaValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called when mana is changed, either from healing or from being used as a cost\n\x09 *\n\x09 * @param DeltaValue Change in mana value, positive for heal, negative for cost. If 0 the delta is unknown\n\x09 * @param EventTags The gameplay tags of the event that changed mana\n\x09 */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Called when mana is changed, either from healing or from being used as a cost\n\n@param DeltaValue Change in mana value, positive for heal, negative for cost. If 0 the delta is unknown\n@param EventTags The gameplay tags of the event that changed mana" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "OnManaChanged", nullptr, nullptr, sizeof(RPGCharacterBase_eventOnManaChanged_Parms), Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnMoveSpeedChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::NewProp_EventTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::NewProp_EventTags_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventOnMoveSpeedChanged_Parms, DeltaValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::NewProp_EventTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::NewProp_DeltaValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called when movement speed is changed\n\x09 *\n\x09 * @param DeltaValue Change in move speed\n\x09 * @param EventTags The gameplay tags of the event that changed mana\n\x09 */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Called when movement speed is changed\n\n@param DeltaValue Change in move speed\n@param EventTags The gameplay tags of the event that changed mana" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "OnMoveSpeedChanged", nullptr, nullptr, sizeof(RPGCharacterBase_eventOnMoveSpeedChanged_Parms), Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics
	{
		struct RPGCharacterBase_eventSetCharacterLevel_Parms
		{
			int32 NewLevel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGCharacterBase_eventSetCharacterLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGCharacterBase_eventSetCharacterLevel_Parms), &Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventSetCharacterLevel_Parms, NewLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::NewProp_NewLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Modifies the character level, this may change abilities. Returns true on success */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Modifies the character level, this may change abilities. Returns true on success" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "SetCharacterLevel", nullptr, nullptr, sizeof(RPGCharacterBase_eventSetCharacterLevel_Parms), Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARPGCharacterBase_NoRegister()
	{
		return ARPGCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ARPGCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlottedAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SlottedAbilities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlottedAbilities_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlottedAbilities_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbilitiesInitialized_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bAbilitiesInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventorySource_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InventorySource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveGameplayEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveGameplayEffects;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PassiveGameplayEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSlottedAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DefaultSlottedAbilities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSlottedAbilities_Key_KeyProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultSlottedAbilities_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayAbilities;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayAbilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPGCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithItemSlot, "ActivateAbilitiesWithItemSlot" }, // 2396169255
		{ &Z_Construct_UFunction_ARPGCharacterBase_ActivateAbilitiesWithTags, "ActivateAbilitiesWithTags" }, // 3223453426
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithItemSlot, "GetActiveAbilitiesWithItemSlot" }, // 812149399
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetActiveAbilitiesWithTags, "GetActiveAbilitiesWithTags" }, // 2883796224
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetCharacterLevel, "GetCharacterLevel" }, // 1397059767
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetCooldownRemainingForTag, "GetCooldownRemainingForTag" }, // 3481168895
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetHealth, "GetHealth" }, // 3144034498
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetMana, "GetMana" }, // 1718854921
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth, "GetMaxHealth" }, // 335564944
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana, "GetMaxMana" }, // 2773528524
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed, "GetMoveSpeed" }, // 587716476
		{ &Z_Construct_UFunction_ARPGCharacterBase_OnDamaged, "OnDamaged" }, // 86762327
		{ &Z_Construct_UFunction_ARPGCharacterBase_OnHealthChanged, "OnHealthChanged" }, // 1153063675
		{ &Z_Construct_UFunction_ARPGCharacterBase_OnManaChanged, "OnManaChanged" }, // 3524404117
		{ &Z_Construct_UFunction_ARPGCharacterBase_OnMoveSpeedChanged, "OnMoveSpeedChanged" }, // 2165499385
		{ &Z_Construct_UFunction_ARPGCharacterBase_SetCharacterLevel, "SetCharacterLevel" }, // 3112402798
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for Character, Designed to be blueprinted */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RPGCharacterBase.h" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Base class for Character, Designed to be blueprinted" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_SlottedAbilities_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Map of slot to ability granted by that slot. I may refactor this later */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Map of slot to ability granted by that slot. I may refactor this later" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_SlottedAbilities = { "SlottedAbilities", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, SlottedAbilities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_SlottedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_SlottedAbilities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_SlottedAbilities_Key_KeyProp = { "SlottedAbilities_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_SlottedAbilities_ValueProp = { "SlottedAbilities", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_bAbilitiesInitialized_MetaData[] = {
		{ "Comment", "/** If true we have initialized our abilities */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "If true we have initialized our abilities" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_bAbilitiesInitialized = { "bAbilitiesInitialized", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, bAbilitiesInitialized), METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_bAbilitiesInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_bAbilitiesInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_InventorySource_MetaData[] = {
		{ "Comment", "/** Cached pointer to the inventory source for this character, can be null */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Cached pointer to the inventory source for this character, can be null" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_InventorySource = { "InventorySource", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, InventorySource), Z_Construct_UClass_URPGInventoryInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_InventorySource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_InventorySource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Comment", "/** List of attributes modified by the ability system */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "List of attributes modified by the ability system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, AttributeSet), Z_Construct_UClass_URPGAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Comment", "/** The component used to handle ability system interactions */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "The component used to handle ability system interactions" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, AbilitySystemComponent), Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_PassiveGameplayEffects_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Passive gameplay effects applied on creation */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Passive gameplay effects applied on creation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_PassiveGameplayEffects = { "PassiveGameplayEffects", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, PassiveGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_PassiveGameplayEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_PassiveGameplayEffects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_PassiveGameplayEffects_Inner = { "PassiveGameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultSlottedAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Map of item slot to gameplay ability class, these are bound before any abilities added by the inventory */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Map of item slot to gameplay ability class, these are bound before any abilities added by the inventory" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultSlottedAbilities = { "DefaultSlottedAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, DefaultSlottedAbilities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultSlottedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultSlottedAbilities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultSlottedAbilities_Key_KeyProp = { "DefaultSlottedAbilities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultSlottedAbilities_ValueProp = { "DefaultSlottedAbilities", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_URPGGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_GameplayAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Abilities to grant to this character on creation. These will be activated by tag or event and are not bound to specific inputs */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "Abilities to grant to this character on creation. These will be activated by tag or event and are not bound to specific inputs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_GameplayAbilities = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, GameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_GameplayAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_GameplayAbilities_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_GameplayAbilities_Inner = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URPGGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** The level of this character, should not be modified directly once it has already spawned */" },
		{ "ModuleRelativePath", "Public/RPGCharacterBase.h" },
		{ "ToolTip", "The level of this character, should not be modified directly once it has already spawned" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0020080000000021, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, CharacterLevel), METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_SlottedAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_SlottedAbilities_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_SlottedAbilities_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_bAbilitiesInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_InventorySource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_PassiveGameplayEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_PassiveGameplayEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultSlottedAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultSlottedAbilities_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultSlottedAbilities_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_GameplayAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_GameplayAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterLevel,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPGCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ARPGCharacterBase, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGCharacterBase_Statics::ClassParams = {
		&ARPGCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARPGCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGCharacterBase, 1370195509);
	template<> ACTIONRPG_API UClass* StaticClass<ARPGCharacterBase>()
	{
		return ARPGCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGCharacterBase(Z_Construct_UClass_ARPGCharacterBase, &ARPGCharacterBase::StaticClass, TEXT("/Script/ActionRPG"), TEXT("ARPGCharacterBase"), false, nullptr, nullptr, nullptr);

	void ARPGCharacterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CharacterLevel(TEXT("CharacterLevel"));

		const bool bIsValid = true
			&& Name_CharacterLevel == ClassReps[(int32)ENetFields_Private::CharacterLevel].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARPGCharacterBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
