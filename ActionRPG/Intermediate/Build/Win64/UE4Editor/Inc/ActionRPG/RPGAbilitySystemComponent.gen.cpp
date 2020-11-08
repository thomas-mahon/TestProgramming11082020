// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Abilities/RPGAbilitySystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAbilitySystemComponent() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
// End Cross Module References
	void URPGAbilitySystemComponent::StaticRegisterNativesURPGAbilitySystemComponent()
	{
	}
	UClass* Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister()
	{
		return URPGAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_URPGAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subclass of ability system component with game-specific data\n * Most games will need to make a game-specific subclass to provide utility functions\n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Abilities/RPGAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilitySystemComponent.h" },
		{ "ToolTip", "Subclass of ability system component with game-specific data\nMost games will need to make a game-specific subclass to provide utility functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGAbilitySystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGAbilitySystemComponent_Statics::ClassParams = {
		&URPGAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URPGAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGAbilitySystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGAbilitySystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGAbilitySystemComponent, 3251471320);
	template<> ACTIONRPG_API UClass* StaticClass<URPGAbilitySystemComponent>()
	{
		return URPGAbilitySystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGAbilitySystemComponent(Z_Construct_UClass_URPGAbilitySystemComponent, &URPGAbilitySystemComponent::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGAbilitySystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGAbilitySystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
