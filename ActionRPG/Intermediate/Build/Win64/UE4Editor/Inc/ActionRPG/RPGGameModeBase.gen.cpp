// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/RPGGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGGameModeBase() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_ARPGGameModeBase_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_ARPGGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
// End Cross Module References
	void ARPGGameModeBase::StaticRegisterNativesARPGGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARPGGameModeBase_NoRegister()
	{
		return ARPGGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARPGGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for GameMode, should be blueprinted */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RPGGameModeBase.h" },
		{ "ModuleRelativePath", "Public/RPGGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Base class for GameMode, should be blueprinted" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGGameModeBase_Statics::ClassParams = {
		&ARPGGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARPGGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGGameModeBase, 1409270173);
	template<> ACTIONRPG_API UClass* StaticClass<ARPGGameModeBase>()
	{
		return ARPGGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGGameModeBase(Z_Construct_UClass_ARPGGameModeBase, &ARPGGameModeBase::StaticClass, TEXT("/Script/ActionRPG"), TEXT("ARPGGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
