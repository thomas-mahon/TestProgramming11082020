// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Abilities/RPGDamageExecution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGDamageExecution() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGDamageExecution_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGDamageExecution();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
// End Cross Module References
	void URPGDamageExecution::StaticRegisterNativesURPGDamageExecution()
	{
	}
	UClass* Z_Construct_UClass_URPGDamageExecution_NoRegister()
	{
		return URPGDamageExecution::StaticClass();
	}
	struct Z_Construct_UClass_URPGDamageExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGDamageExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGDamageExecution_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A damage execution, which allows doing damage by combining a raw Damage number with AttackPower and DefensePower\n * Most games will want to implement multiple game-specific executions\n */" },
		{ "IncludePath", "Abilities/RPGDamageExecution.h" },
		{ "ModuleRelativePath", "Public/Abilities/RPGDamageExecution.h" },
		{ "ToolTip", "A damage execution, which allows doing damage by combining a raw Damage number with AttackPower and DefensePower\nMost games will want to implement multiple game-specific executions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGDamageExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGDamageExecution>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGDamageExecution_Statics::ClassParams = {
		&URPGDamageExecution::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGDamageExecution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGDamageExecution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGDamageExecution()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGDamageExecution_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGDamageExecution, 3101477844);
	template<> ACTIONRPG_API UClass* StaticClass<URPGDamageExecution>()
	{
		return URPGDamageExecution::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGDamageExecution(Z_Construct_UClass_URPGDamageExecution, &URPGDamageExecution::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGDamageExecution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGDamageExecution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
