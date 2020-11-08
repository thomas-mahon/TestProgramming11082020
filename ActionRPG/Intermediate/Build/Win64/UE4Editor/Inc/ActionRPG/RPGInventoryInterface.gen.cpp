// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/RPGInventoryInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGInventoryInterface() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGInventoryInterface_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGInventoryInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
// End Cross Module References
	void URPGInventoryInterface::StaticRegisterNativesURPGInventoryInterface()
	{
	}
	UClass* Z_Construct_UClass_URPGInventoryInterface_NoRegister()
	{
		return URPGInventoryInterface::StaticClass();
	}
	struct Z_Construct_UClass_URPGInventoryInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGInventoryInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGInventoryInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/RPGInventoryInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGInventoryInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRPGInventoryInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGInventoryInterface_Statics::ClassParams = {
		&URPGInventoryInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_URPGInventoryInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGInventoryInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGInventoryInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGInventoryInterface, 1140955656);
	template<> ACTIONRPG_API UClass* StaticClass<URPGInventoryInterface>()
	{
		return URPGInventoryInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGInventoryInterface(Z_Construct_UClass_URPGInventoryInterface, &URPGInventoryInterface::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGInventoryInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGInventoryInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
