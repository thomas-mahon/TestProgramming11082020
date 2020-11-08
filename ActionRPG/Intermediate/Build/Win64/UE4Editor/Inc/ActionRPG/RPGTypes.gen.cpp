// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/RPGTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGTypes() {}
// Cross Module References
	ACTIONRPG_API UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGSaveGame_NoRegister();
	ACTIONRPG_API UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnInventoryLoaded__DelegateSignature();
	ACTIONRPG_API UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGItem_NoRegister();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSlot();
	ACTIONRPG_API UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics
	{
		struct _Script_ActionRPG_eventOnSaveGameLoaded_Parms
		{
			URPGSaveGame* SaveGame;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRPG_eventOnSaveGameLoaded_Parms, SaveGame), Z_Construct_UClass_URPGSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics::NewProp_SaveGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate called when the save game has been loaded/reset */" },
		{ "ModuleRelativePath", "Public/RPGTypes.h" },
		{ "ToolTip", "Delegate called when the save game has been loaded/reset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionRPG, nullptr, "OnSaveGameLoaded__DelegateSignature", nullptr, nullptr, sizeof(_Script_ActionRPG_eventOnSaveGameLoaded_Parms), Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ActionRPG_OnInventoryLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRPG_OnInventoryLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate called when the entire inventory has been loaded, all items may have been replaced */" },
		{ "ModuleRelativePath", "Public/RPGTypes.h" },
		{ "ToolTip", "Delegate called when the entire inventory has been loaded, all items may have been replaced" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionRPG_OnInventoryLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionRPG, nullptr, "OnInventoryLoaded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRPG_OnInventoryLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRPG_OnInventoryLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnInventoryLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionRPG_OnInventoryLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics
	{
		struct _Script_ActionRPG_eventOnSlottedItemChanged_Parms
		{
			FRPGItemSlot ItemSlot;
			URPGItem* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRPG_eventOnSlottedItemChanged_Parms, Item), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRPG_eventOnSlottedItemChanged_Parms, ItemSlot), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::NewProp_ItemSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate called when the contents of an inventory slot change */" },
		{ "ModuleRelativePath", "Public/RPGTypes.h" },
		{ "ToolTip", "Delegate called when the contents of an inventory slot change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionRPG, nullptr, "OnSlottedItemChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_ActionRPG_eventOnSlottedItemChanged_Parms), Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics
	{
		struct _Script_ActionRPG_eventOnInventoryItemChanged_Parms
		{
			bool bAdded;
			URPGItem* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_bAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRPG_eventOnInventoryItemChanged_Parms, Item), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_bAdded_SetBit(void* Obj)
	{
		((_Script_ActionRPG_eventOnInventoryItemChanged_Parms*)Obj)->bAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_bAdded = { "bAdded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_ActionRPG_eventOnInventoryItemChanged_Parms), &Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_bAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_bAdded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate called when an inventory item changes */" },
		{ "ModuleRelativePath", "Public/RPGTypes.h" },
		{ "ToolTip", "Delegate called when an inventory item changes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionRPG, nullptr, "OnInventoryItemChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_ActionRPG_eventOnInventoryItemChanged_Parms), Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FRPGItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONRPG_API uint32 Get_Z_Construct_UScriptStruct_FRPGItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGItemData, Z_Construct_UPackage__Script_ActionRPG(), TEXT("RPGItemData"), sizeof(FRPGItemData), Get_Z_Construct_UScriptStruct_FRPGItemData_Hash());
	}
	return Singleton;
}
template<> ACTIONRPG_API UScriptStruct* StaticStruct<FRPGItemData>()
{
	return FRPGItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRPGItemData(FRPGItemData::StaticStruct, TEXT("/Script/ActionRPG"), TEXT("RPGItemData"), false, nullptr, nullptr);
static struct FScriptStruct_ActionRPG_StaticRegisterNativesFRPGItemData
{
	FScriptStruct_ActionRPG_StaticRegisterNativesFRPGItemData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RPGItemData")),new UScriptStruct::TCppStructOps<FRPGItemData>);
	}
} ScriptStruct_ActionRPG_StaticRegisterNativesFRPGItemData;
	struct Z_Construct_UScriptStruct_FRPGItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Extra information about a URPGItem that is in a player's inventory */" },
		{ "ModuleRelativePath", "Public/RPGTypes.h" },
		{ "ToolTip", "Extra information about a URPGItem that is in a player's inventory" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRPGItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGItemData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGItemData_Statics::NewProp_ItemLevel_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** The level of this item. This level is shared for all instances, can never be below 1 */" },
		{ "ModuleRelativePath", "Public/RPGTypes.h" },
		{ "ToolTip", "The level of this item. This level is shared for all instances, can never be below 1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRPGItemData_Statics::NewProp_ItemLevel = { "ItemLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGItemData, ItemLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGItemData_Statics::NewProp_ItemLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemData_Statics::NewProp_ItemLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGItemData_Statics::NewProp_ItemCount_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** The number of instances of this item in the inventory, can never be below 1 */" },
		{ "ModuleRelativePath", "Public/RPGTypes.h" },
		{ "ToolTip", "The number of instances of this item in the inventory, can never be below 1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRPGItemData_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGItemData, ItemCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGItemData_Statics::NewProp_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemData_Statics::NewProp_ItemCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemData_Statics::NewProp_ItemLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemData_Statics::NewProp_ItemCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
		nullptr,
		&NewStructOps,
		"RPGItemData",
		sizeof(FRPGItemData),
		alignof(FRPGItemData),
		Z_Construct_UScriptStruct_FRPGItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRPGItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRPGItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RPGItemData"), sizeof(FRPGItemData), Get_Z_Construct_UScriptStruct_FRPGItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRPGItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRPGItemData_Hash() { return 575294826U; }
class UScriptStruct* FRPGItemSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONRPG_API uint32 Get_Z_Construct_UScriptStruct_FRPGItemSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGItemSlot, Z_Construct_UPackage__Script_ActionRPG(), TEXT("RPGItemSlot"), sizeof(FRPGItemSlot), Get_Z_Construct_UScriptStruct_FRPGItemSlot_Hash());
	}
	return Singleton;
}
template<> ACTIONRPG_API UScriptStruct* StaticStruct<FRPGItemSlot>()
{
	return FRPGItemSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRPGItemSlot(FRPGItemSlot::StaticStruct, TEXT("/Script/ActionRPG"), TEXT("RPGItemSlot"), false, nullptr, nullptr);
static struct FScriptStruct_ActionRPG_StaticRegisterNativesFRPGItemSlot
{
	FScriptStruct_ActionRPG_StaticRegisterNativesFRPGItemSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RPGItemSlot")),new UScriptStruct::TCppStructOps<FRPGItemSlot>);
	}
} ScriptStruct_ActionRPG_StaticRegisterNativesFRPGItemSlot;
	struct Z_Construct_UScriptStruct_FRPGItemSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGItemSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct representing a slot for an item, shown in the UI */" },
		{ "ModuleRelativePath", "Public/RPGTypes.h" },
		{ "ToolTip", "Struct representing a slot for an item, shown in the UI" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGItemSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewProp_SlotNumber_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** The number of this slot, 0 indexed */" },
		{ "ModuleRelativePath", "Public/RPGTypes.h" },
		{ "ToolTip", "The number of this slot, 0 indexed" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewProp_SlotNumber = { "SlotNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGItemSlot, SlotNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewProp_SlotNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewProp_SlotNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** The type of items that can go in this slot */" },
		{ "ModuleRelativePath", "Public/RPGTypes.h" },
		{ "ToolTip", "The type of items that can go in this slot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGItemSlot, ItemType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGItemSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewProp_SlotNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItemSlot_Statics::NewProp_ItemType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGItemSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
		nullptr,
		&NewStructOps,
		"RPGItemSlot",
		sizeof(FRPGItemSlot),
		alignof(FRPGItemSlot),
		Z_Construct_UScriptStruct_FRPGItemSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGItemSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItemSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRPGItemSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RPGItemSlot"), sizeof(FRPGItemSlot), Get_Z_Construct_UScriptStruct_FRPGItemSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRPGItemSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRPGItemSlot_Hash() { return 3527820371U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
