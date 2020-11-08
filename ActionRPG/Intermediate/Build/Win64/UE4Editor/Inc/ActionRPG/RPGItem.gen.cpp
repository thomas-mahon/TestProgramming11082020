// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Items/RPGItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGItem() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGItem_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGItem();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGGameplayAbility_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
// End Cross Module References
	DEFINE_FUNCTION(URPGItem::execGetIdentifierString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIdentifierString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGItem::execIsConsumable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConsumable();
		P_NATIVE_END;
	}
	void URPGItem::StaticRegisterNativesURPGItem()
	{
		UClass* Class = URPGItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIdentifierString", &URPGItem::execGetIdentifierString },
			{ "IsConsumable", &URPGItem::execIsConsumable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics
	{
		struct RPGItem_eventGetIdentifierString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGItem_eventGetIdentifierString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Returns the logical name, equivalent to the primary asset id */" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "Returns the logical name, equivalent to the primary asset id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGItem, nullptr, "GetIdentifierString", nullptr, nullptr, sizeof(RPGItem_eventGetIdentifierString_Parms), Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGItem_GetIdentifierString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGItem_GetIdentifierString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGItem_IsConsumable_Statics
	{
		struct RPGItem_eventIsConsumable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGItem_IsConsumable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGItem_eventIsConsumable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGItem_IsConsumable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGItem_eventIsConsumable_Parms), &Z_Construct_UFunction_URPGItem_IsConsumable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGItem_IsConsumable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItem_IsConsumable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGItem_IsConsumable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Max" },
		{ "Comment", "/** Returns if the item is consumable (MaxCount <= 0)*/" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "Returns if the item is consumable (MaxCount <= 0)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGItem_IsConsumable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGItem, nullptr, "IsConsumable", nullptr, nullptr, sizeof(RPGItem_eventIsConsumable_Parms), Z_Construct_UFunction_URPGItem_IsConsumable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItem_IsConsumable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGItem_IsConsumable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItem_IsConsumable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGItem_IsConsumable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGItem_IsConsumable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGItem_NoRegister()
	{
		return URPGItem::StaticClass();
	}
	struct Z_Construct_UClass_URPGItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GrantedAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGItem_GetIdentifierString, "GetIdentifierString" }, // 3844958307
		{ &Z_Construct_UFunction_URPGItem_IsConsumable, "IsConsumable" }, // 492666061
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for all items, do not blueprint directly */" },
		{ "IncludePath", "Items/RPGItem.h" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "Base class for all items, do not blueprint directly" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItem_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Ability level this item grants. <= 0 means the character level */" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "Ability level this item grants. <= 0 means the character level" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItem, AbilityLevel), METADATA_PARAMS(Z_Construct_UClass_URPGItem_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::NewProp_AbilityLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItem_Statics::NewProp_GrantedAbility_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Ability to grant if this item is slotted */" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "Ability to grant if this item is slotted" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_GrantedAbility = { "GrantedAbility", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItem, GrantedAbility), Z_Construct_UClass_URPGGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URPGItem_Statics::NewProp_GrantedAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::NewProp_GrantedAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItem_Statics::NewProp_MaxLevel_MetaData[] = {
		{ "Category", "Max" },
		{ "Comment", "/** Maximum level this item can be, <= 0 means infinite */" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "Maximum level this item can be, <= 0 means infinite" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItem, MaxLevel), METADATA_PARAMS(Z_Construct_UClass_URPGItem_Statics::NewProp_MaxLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::NewProp_MaxLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItem_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "Max" },
		{ "Comment", "/** Maximum number of instances that can be in inventory at once, <= 0 means infinite */" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "Maximum number of instances that can be in inventory at once, <= 0 means infinite" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItem, MaxCount), METADATA_PARAMS(Z_Construct_UClass_URPGItem_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItem_Statics::NewProp_Price_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Price in game */" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "Price in game" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItem, Price), METADATA_PARAMS(Z_Construct_UClass_URPGItem_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItem_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Icon to display */" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "Icon to display" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItem, ItemIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_URPGItem_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItem_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** User-visible long description */" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "User-visible long description" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItem, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_URPGItem_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItem_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** User-visible short name */" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "User-visible short name" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItem, ItemName), METADATA_PARAMS(Z_Construct_UClass_URPGItem_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Type of this item, set in native parent class */" },
		{ "ModuleRelativePath", "Public/Items/RPGItem.h" },
		{ "ToolTip", "Type of this item, set in native parent class" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItem, ItemType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(Z_Construct_UClass_URPGItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_AbilityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_GrantedAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_MaxLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_ItemIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_ItemType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGItem_Statics::ClassParams = {
		&URPGItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URPGItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGItem, 856930902);
	template<> ACTIONRPG_API UClass* StaticClass<URPGItem>()
	{
		return URPGItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGItem(Z_Construct_UClass_URPGItem, &URPGItem::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
