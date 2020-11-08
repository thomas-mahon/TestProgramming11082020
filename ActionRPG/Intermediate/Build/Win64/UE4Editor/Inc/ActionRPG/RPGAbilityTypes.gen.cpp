// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Abilities/RPGAbilityTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAbilityTypes() {}
// Cross Module References
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGTargetType_NoRegister();
// End Cross Module References
class UScriptStruct* FRPGGameplayEffectContainerSpec::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONRPG_API uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, Z_Construct_UPackage__Script_ActionRPG(), TEXT("RPGGameplayEffectContainerSpec"), sizeof(FRPGGameplayEffectContainerSpec), Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Hash());
	}
	return Singleton;
}
template<> ACTIONRPG_API UScriptStruct* StaticStruct<FRPGGameplayEffectContainerSpec>()
{
	return FRPGGameplayEffectContainerSpec::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRPGGameplayEffectContainerSpec(FRPGGameplayEffectContainerSpec::StaticStruct, TEXT("/Script/ActionRPG"), TEXT("RPGGameplayEffectContainerSpec"), false, nullptr, nullptr);
static struct FScriptStruct_ActionRPG_StaticRegisterNativesFRPGGameplayEffectContainerSpec
{
	FScriptStruct_ActionRPG_StaticRegisterNativesFRPGGameplayEffectContainerSpec()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RPGGameplayEffectContainerSpec")),new UScriptStruct::TCppStructOps<FRPGGameplayEffectContainerSpec>);
	}
} ScriptStruct_ActionRPG_StaticRegisterNativesFRPGGameplayEffectContainerSpec;
	struct Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectSpecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectSpecs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetGameplayEffectSpecs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A \"processed\" version of RPGGameplayEffectContainer that can be passed around and eventually applied */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTypes.h" },
		{ "ToolTip", "A \"processed\" version of RPGGameplayEffectContainer that can be passed around and eventually applied" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGGameplayEffectContainerSpec>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTypes.h" },
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGGameplayEffectContainerSpec, TargetGameplayEffectSpecs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
		{ "Comment", "/** Computed target data */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTypes.h" },
		{ "ToolTip", "Computed target data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGGameplayEffectContainerSpec, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
		nullptr,
		&NewStructOps,
		"RPGGameplayEffectContainerSpec",
		sizeof(FRPGGameplayEffectContainerSpec),
		alignof(FRPGGameplayEffectContainerSpec),
		Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RPGGameplayEffectContainerSpec"), sizeof(FRPGGameplayEffectContainerSpec), Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Hash() { return 4272251977U; }
class UScriptStruct* FRPGGameplayEffectContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONRPG_API uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer, Z_Construct_UPackage__Script_ActionRPG(), TEXT("RPGGameplayEffectContainer"), sizeof(FRPGGameplayEffectContainer), Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Hash());
	}
	return Singleton;
}
template<> ACTIONRPG_API UScriptStruct* StaticStruct<FRPGGameplayEffectContainer>()
{
	return FRPGGameplayEffectContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRPGGameplayEffectContainer(FRPGGameplayEffectContainer::StaticStruct, TEXT("/Script/ActionRPG"), TEXT("RPGGameplayEffectContainer"), false, nullptr, nullptr);
static struct FScriptStruct_ActionRPG_StaticRegisterNativesFRPGGameplayEffectContainer
{
	FScriptStruct_ActionRPG_StaticRegisterNativesFRPGGameplayEffectContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RPGGameplayEffectContainer")),new UScriptStruct::TCppStructOps<FRPGGameplayEffectContainer>);
	}
} ScriptStruct_ActionRPG_StaticRegisterNativesFRPGGameplayEffectContainer;
	struct Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetGameplayEffectClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct defining a list of gameplay effects, a tag, and targeting info\n * These containers are defined statically in blueprints or assets and then turn into Specs at runtime\n */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTypes.h" },
		{ "ToolTip", "Struct defining a list of gameplay effects, a tag, and targeting info\nThese containers are defined statically in blueprints or assets and then turn into Specs at runtime" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGGameplayEffectContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTypes.h" },
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGGameplayEffectContainer, TargetGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
		{ "Comment", "/** Sets the way that targeting happens */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTypes.h" },
		{ "ToolTip", "Sets the way that targeting happens" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGGameplayEffectContainer, TargetType), Z_Construct_UClass_URPGTargetType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
		nullptr,
		&NewStructOps,
		"RPGGameplayEffectContainer",
		sizeof(FRPGGameplayEffectContainer),
		alignof(FRPGGameplayEffectContainer),
		Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RPGGameplayEffectContainer"), sizeof(FRPGGameplayEffectContainer), Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Hash() { return 2397098491U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
