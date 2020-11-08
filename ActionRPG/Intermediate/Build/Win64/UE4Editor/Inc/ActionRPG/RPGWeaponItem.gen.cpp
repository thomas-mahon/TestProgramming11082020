// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Items/RPGWeaponItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGWeaponItem() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGWeaponItem_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGWeaponItem();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGItem();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void URPGWeaponItem::StaticRegisterNativesURPGWeaponItem()
	{
	}
	UClass* Z_Construct_UClass_URPGWeaponItem_NoRegister()
	{
		return URPGWeaponItem::StaticClass();
	}
	struct Z_Construct_UClass_URPGWeaponItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGWeaponItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URPGItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGWeaponItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Native base class for weapons, should be blueprinted */" },
		{ "IncludePath", "Items/RPGWeaponItem.h" },
		{ "ModuleRelativePath", "Public/Items/RPGWeaponItem.h" },
		{ "ToolTip", "Native base class for weapons, should be blueprinted" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGWeaponItem_Statics::NewProp_WeaponActor_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Weapon actor to spawn */" },
		{ "ModuleRelativePath", "Public/Items/RPGWeaponItem.h" },
		{ "ToolTip", "Weapon actor to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URPGWeaponItem_Statics::NewProp_WeaponActor = { "WeaponActor", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGWeaponItem, WeaponActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URPGWeaponItem_Statics::NewProp_WeaponActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGWeaponItem_Statics::NewProp_WeaponActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGWeaponItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGWeaponItem_Statics::NewProp_WeaponActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGWeaponItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGWeaponItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGWeaponItem_Statics::ClassParams = {
		&URPGWeaponItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URPGWeaponItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGWeaponItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGWeaponItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGWeaponItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGWeaponItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGWeaponItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGWeaponItem, 676251539);
	template<> ACTIONRPG_API UClass* StaticClass<URPGWeaponItem>()
	{
		return URPGWeaponItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGWeaponItem(Z_Construct_UClass_URPGWeaponItem, &URPGWeaponItem::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGWeaponItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGWeaponItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
