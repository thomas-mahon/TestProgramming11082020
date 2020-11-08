// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/RPGAssetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAssetManager() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGAssetManager_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGAssetManager();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
// End Cross Module References
	void URPGAssetManager::StaticRegisterNativesURPGAssetManager()
	{
	}
	UClass* Z_Construct_UClass_URPGAssetManager_NoRegister()
	{
		return URPGAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_URPGAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAssetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Game implementation of asset manager, overrides functionality and stores game-specific types\n * It is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic\n * This is used by setting AssetManagerClassName in DefaultEngine.ini\n */" },
		{ "IncludePath", "RPGAssetManager.h" },
		{ "ModuleRelativePath", "Public/RPGAssetManager.h" },
		{ "ToolTip", "Game implementation of asset manager, overrides functionality and stores game-specific types\nIt is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic\nThis is used by setting AssetManagerClassName in DefaultEngine.ini" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGAssetManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGAssetManager_Statics::ClassParams = {
		&URPGAssetManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URPGAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGAssetManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGAssetManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGAssetManager, 2304940928);
	template<> ACTIONRPG_API UClass* StaticClass<URPGAssetManager>()
	{
		return URPGAssetManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGAssetManager(Z_Construct_UClass_URPGAssetManager, &URPGAssetManager::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGAssetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGAssetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
