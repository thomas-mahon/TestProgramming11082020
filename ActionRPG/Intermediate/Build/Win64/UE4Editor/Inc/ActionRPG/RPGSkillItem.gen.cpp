// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Items/RPGSkillItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGSkillItem() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGSkillItem_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGSkillItem();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGItem();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
// End Cross Module References
	void URPGSkillItem::StaticRegisterNativesURPGSkillItem()
	{
	}
	UClass* Z_Construct_UClass_URPGSkillItem_NoRegister()
	{
		return URPGSkillItem::StaticClass();
	}
	struct Z_Construct_UClass_URPGSkillItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGSkillItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URPGItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGSkillItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Native base class for skills, should be blueprinted */" },
		{ "IncludePath", "Items/RPGSkillItem.h" },
		{ "ModuleRelativePath", "Public/Items/RPGSkillItem.h" },
		{ "ToolTip", "Native base class for skills, should be blueprinted" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGSkillItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGSkillItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGSkillItem_Statics::ClassParams = {
		&URPGSkillItem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URPGSkillItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGSkillItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGSkillItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGSkillItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGSkillItem, 2529962282);
	template<> ACTIONRPG_API UClass* StaticClass<URPGSkillItem>()
	{
		return URPGSkillItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGSkillItem(Z_Construct_UClass_URPGSkillItem, &URPGSkillItem::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGSkillItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGSkillItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
