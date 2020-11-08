// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/RPGGameInstanceBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGGameInstanceBase() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGGameInstanceBase_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGGameInstanceBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGSaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSlot();
	ACTIONRPG_API UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemData();
// End Cross Module References
	DEFINE_FUNCTION(URPGGameInstanceBase::execResetSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameInstanceBase::execWriteSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WriteSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameInstanceBase::execGetSaveSlotInfo)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SlotName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSaveSlotInfo(Z_Param_Out_SlotName,Z_Param_Out_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameInstanceBase::execHandleSaveGameLoaded)
	{
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleSaveGameLoaded(Z_Param_SaveGameObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameInstanceBase::execLoadOrCreateSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadOrCreateSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameInstanceBase::execSetSavingEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSavingEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameInstanceBase::execGetCurrentSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URPGSaveGame**)Z_Param__Result=P_THIS->GetCurrentSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameInstanceBase::execIsValidItemSlot)
	{
		P_GET_STRUCT(FRPGItemSlot,Z_Param_ItemSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidItemSlot(Z_Param_ItemSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGGameInstanceBase::execAddDefaultInventory)
	{
		P_GET_OBJECT(URPGSaveGame,Z_Param_SaveGame);
		P_GET_UBOOL(Z_Param_bRemoveExtra);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDefaultInventory(Z_Param_SaveGame,Z_Param_bRemoveExtra);
		P_NATIVE_END;
	}
	void URPGGameInstanceBase::StaticRegisterNativesURPGGameInstanceBase()
	{
		UClass* Class = URPGGameInstanceBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDefaultInventory", &URPGGameInstanceBase::execAddDefaultInventory },
			{ "GetCurrentSaveGame", &URPGGameInstanceBase::execGetCurrentSaveGame },
			{ "GetSaveSlotInfo", &URPGGameInstanceBase::execGetSaveSlotInfo },
			{ "HandleSaveGameLoaded", &URPGGameInstanceBase::execHandleSaveGameLoaded },
			{ "IsValidItemSlot", &URPGGameInstanceBase::execIsValidItemSlot },
			{ "LoadOrCreateSaveGame", &URPGGameInstanceBase::execLoadOrCreateSaveGame },
			{ "ResetSaveGame", &URPGGameInstanceBase::execResetSaveGame },
			{ "SetSavingEnabled", &URPGGameInstanceBase::execSetSavingEnabled },
			{ "WriteSaveGame", &URPGGameInstanceBase::execWriteSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics
	{
		struct RPGGameInstanceBase_eventAddDefaultInventory_Parms
		{
			URPGSaveGame* SaveGame;
			bool bRemoveExtra;
		};
		static void NewProp_bRemoveExtra_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveExtra;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::NewProp_bRemoveExtra_SetBit(void* Obj)
	{
		((RPGGameInstanceBase_eventAddDefaultInventory_Parms*)Obj)->bRemoveExtra = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::NewProp_bRemoveExtra = { "bRemoveExtra", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGGameInstanceBase_eventAddDefaultInventory_Parms), &Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::NewProp_bRemoveExtra_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameInstanceBase_eventAddDefaultInventory_Parms, SaveGame), Z_Construct_UClass_URPGSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::NewProp_bRemoveExtra,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::NewProp_SaveGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Adds the default inventory to the inventory array\n\x09 * @param InventoryArray Inventory to modify\n\x09 * @param RemoveExtra If true, remove anything other than default inventory\n\x09 */" },
		{ "CPP_Default_bRemoveExtra", "false" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Adds the default inventory to the inventory array\n@param InventoryArray Inventory to modify\n@param RemoveExtra If true, remove anything other than default inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstanceBase, nullptr, "AddDefaultInventory", nullptr, nullptr, sizeof(RPGGameInstanceBase_eventAddDefaultInventory_Parms), Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics
	{
		struct RPGGameInstanceBase_eventGetCurrentSaveGame_Parms
		{
			URPGSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameInstanceBase_eventGetCurrentSaveGame_Parms, ReturnValue), Z_Construct_UClass_URPGSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "/** Returns the current save game, so it can be used to initialize state. Changes are not written until WriteSaveGame is called */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Returns the current save game, so it can be used to initialize state. Changes are not written until WriteSaveGame is called" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstanceBase, nullptr, "GetCurrentSaveGame", nullptr, nullptr, sizeof(RPGGameInstanceBase_eventGetCurrentSaveGame_Parms), Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics
	{
		struct RPGGameInstanceBase_eventGetSaveSlotInfo_Parms
		{
			FString SlotName;
			int32 UserIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameInstanceBase_eventGetSaveSlotInfo_Parms, UserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameInstanceBase_eventGetSaveSlotInfo_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "/** Gets the save game slot and user index used for inventory saving, ready to pass to GameplayStatics save functions */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Gets the save game slot and user index used for inventory saving, ready to pass to GameplayStatics save functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstanceBase, nullptr, "GetSaveSlotInfo", nullptr, nullptr, sizeof(RPGGameInstanceBase_eventGetSaveSlotInfo_Parms), Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics
	{
		struct RPGGameInstanceBase_eventHandleSaveGameLoaded_Parms
		{
			USaveGame* SaveGameObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGGameInstanceBase_eventHandleSaveGameLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGGameInstanceBase_eventHandleSaveGameLoaded_Parms), &Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameInstanceBase_eventHandleSaveGameLoaded_Parms, SaveGameObject), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::NewProp_SaveGameObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "/** Handle the final setup required after loading a USaveGame object using AsyncLoadGameFromSlot. Returns true if it loaded, false if it created one */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Handle the final setup required after loading a USaveGame object using AsyncLoadGameFromSlot. Returns true if it loaded, false if it created one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstanceBase, nullptr, "HandleSaveGameLoaded", nullptr, nullptr, sizeof(RPGGameInstanceBase_eventHandleSaveGameLoaded_Parms), Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics
	{
		struct RPGGameInstanceBase_eventIsValidItemSlot_Parms
		{
			FRPGItemSlot ItemSlot;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGGameInstanceBase_eventIsValidItemSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGGameInstanceBase_eventIsValidItemSlot_Parms), &Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGGameInstanceBase_eventIsValidItemSlot_Parms, ItemSlot), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::NewProp_ItemSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Returns true if this is a valid inventory slot */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Returns true if this is a valid inventory slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstanceBase, nullptr, "IsValidItemSlot", nullptr, nullptr, sizeof(RPGGameInstanceBase_eventIsValidItemSlot_Parms), Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics
	{
		struct RPGGameInstanceBase_eventLoadOrCreateSaveGame_Parms
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
	void Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGGameInstanceBase_eventLoadOrCreateSaveGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGGameInstanceBase_eventLoadOrCreateSaveGame_Parms), &Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "/** Synchronously loads a save game. If it fails, it will create a new one for you. Returns true if it loaded, false if it created one */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Synchronously loads a save game. If it fails, it will create a new one for you. Returns true if it loaded, false if it created one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstanceBase, nullptr, "LoadOrCreateSaveGame", nullptr, nullptr, sizeof(RPGGameInstanceBase_eventLoadOrCreateSaveGame_Parms), Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameInstanceBase_ResetSaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstanceBase_ResetSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "/** Resets the current save game to it's default. This will erase player data! This won't save to disk until the next WriteSaveGame */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Resets the current save game to it's default. This will erase player data! This won't save to disk until the next WriteSaveGame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstanceBase_ResetSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstanceBase, nullptr, "ResetSaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameInstanceBase_ResetSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_ResetSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameInstanceBase_ResetSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameInstanceBase_ResetSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics
	{
		struct RPGGameInstanceBase_eventSetSavingEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((RPGGameInstanceBase_eventSetSavingEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGGameInstanceBase_eventSetSavingEnabled_Parms), &Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "/** Sets rather save/load is enabled. If disabled it will always count as a new character */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Sets rather save/load is enabled. If disabled it will always count as a new character" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstanceBase, nullptr, "SetSavingEnabled", nullptr, nullptr, sizeof(RPGGameInstanceBase_eventSetSavingEnabled_Parms), Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics
	{
		struct RPGGameInstanceBase_eventWriteSaveGame_Parms
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
	void Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGGameInstanceBase_eventWriteSaveGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGGameInstanceBase_eventWriteSaveGame_Parms), &Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "/** Writes the current save game object to disk. The save to disk happens in a background thread*/" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Writes the current save game object to disk. The save to disk happens in a background thread" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGGameInstanceBase, nullptr, "WriteSaveGame", nullptr, nullptr, sizeof(RPGGameInstanceBase_eventWriteSaveGame_Parms), Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGGameInstanceBase_NoRegister()
	{
		return URPGGameInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_URPGGameInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingSaveRequested_MetaData[];
#endif
		static void NewProp_bPendingSaveRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingSaveRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurrentlySaving_MetaData[];
#endif
		static void NewProp_bCurrentlySaving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurrentlySaving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSavingEnabled_MetaData[];
#endif
		static void NewProp_bSavingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSaveGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSaveGameLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveGameLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveUserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SaveUserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSlotsPerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ItemSlotsPerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSlotsPerType_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemSlotsPerType_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DefaultInventory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultInventory_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultInventory_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGGameInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGGameInstanceBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGGameInstanceBase_AddDefaultInventory, "AddDefaultInventory" }, // 2669917072
		{ &Z_Construct_UFunction_URPGGameInstanceBase_GetCurrentSaveGame, "GetCurrentSaveGame" }, // 2084208391
		{ &Z_Construct_UFunction_URPGGameInstanceBase_GetSaveSlotInfo, "GetSaveSlotInfo" }, // 2673502529
		{ &Z_Construct_UFunction_URPGGameInstanceBase_HandleSaveGameLoaded, "HandleSaveGameLoaded" }, // 3920922374
		{ &Z_Construct_UFunction_URPGGameInstanceBase_IsValidItemSlot, "IsValidItemSlot" }, // 2920384788
		{ &Z_Construct_UFunction_URPGGameInstanceBase_LoadOrCreateSaveGame, "LoadOrCreateSaveGame" }, // 3984109366
		{ &Z_Construct_UFunction_URPGGameInstanceBase_ResetSaveGame, "ResetSaveGame" }, // 1238428632
		{ &Z_Construct_UFunction_URPGGameInstanceBase_SetSavingEnabled, "SetSavingEnabled" }, // 3513830387
		{ &Z_Construct_UFunction_URPGGameInstanceBase_WriteSaveGame, "WriteSaveGame" }, // 2139215752
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for GameInstance, should be blueprinted\n * Most games will need to make a game-specific subclass of GameInstance\n * Once you make a blueprint subclass of your native subclass you will want to set it to be the default in project settings\n */" },
		{ "IncludePath", "RPGGameInstanceBase.h" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Base class for GameInstance, should be blueprinted\nMost games will need to make a game-specific subclass of GameInstance\nOnce you make a blueprint subclass of your native subclass you will want to set it to be the default in project settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bPendingSaveRequested_MetaData[] = {
		{ "Comment", "/** True if another save was requested during a save */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "True if another save was requested during a save" },
	};
#endif
	void Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bPendingSaveRequested_SetBit(void* Obj)
	{
		((URPGGameInstanceBase*)Obj)->bPendingSaveRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bPendingSaveRequested = { "bPendingSaveRequested", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URPGGameInstanceBase), &Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bPendingSaveRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bPendingSaveRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bPendingSaveRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bCurrentlySaving_MetaData[] = {
		{ "Comment", "/** True if we are in the middle of doing a save */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "True if we are in the middle of doing a save" },
	};
#endif
	void Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bCurrentlySaving_SetBit(void* Obj)
	{
		((URPGGameInstanceBase*)Obj)->bCurrentlySaving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bCurrentlySaving = { "bCurrentlySaving", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URPGGameInstanceBase), &Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bCurrentlySaving_SetBit, METADATA_PARAMS(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bCurrentlySaving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bCurrentlySaving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bSavingEnabled_MetaData[] = {
		{ "Comment", "/** Rather it will attempt to actually save to disk */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Rather it will attempt to actually save to disk" },
	};
#endif
	void Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bSavingEnabled_SetBit(void* Obj)
	{
		((URPGGameInstanceBase*)Obj)->bSavingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bSavingEnabled = { "bSavingEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URPGGameInstanceBase), &Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bSavingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bSavingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bSavingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_CurrentSaveGame_MetaData[] = {
		{ "Comment", "/** The current save game object */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "The current save game object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_CurrentSaveGame = { "CurrentSaveGame", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGGameInstanceBase, CurrentSaveGame), Z_Construct_UClass_URPGSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_CurrentSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_CurrentSaveGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_OnSaveGameLoaded_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Delegate called when the save game has been loaded/reset */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Delegate called when the save game has been loaded/reset" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_OnSaveGameLoaded = { "OnSaveGameLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGGameInstanceBase, OnSaveGameLoaded), Z_Construct_UDelegateFunction_ActionRPG_OnSaveGameLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_OnSaveGameLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_OnSaveGameLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_SaveUserIndex_MetaData[] = {
		{ "Category", "Save" },
		{ "Comment", "/** The platform-specific user index */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "The platform-specific user index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_SaveUserIndex = { "SaveUserIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGGameInstanceBase, SaveUserIndex), METADATA_PARAMS(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_SaveUserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_SaveUserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_SaveSlot_MetaData[] = {
		{ "Category", "Save" },
		{ "Comment", "/** The slot name used for saving */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "The slot name used for saving" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_SaveSlot = { "SaveSlot", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGGameInstanceBase, SaveSlot), METADATA_PARAMS(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_SaveSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_SaveSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_ItemSlotsPerType_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Number of slots for each type of item */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "Number of slots for each type of item" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_ItemSlotsPerType = { "ItemSlotsPerType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGGameInstanceBase, ItemSlotsPerType), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_ItemSlotsPerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_ItemSlotsPerType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_ItemSlotsPerType_Key_KeyProp = { "ItemSlotsPerType_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_ItemSlotsPerType_ValueProp = { "ItemSlotsPerType", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_DefaultInventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** List of inventory items to add to new players */" },
		{ "ModuleRelativePath", "Public/RPGGameInstanceBase.h" },
		{ "ToolTip", "List of inventory items to add to new players" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_DefaultInventory = { "DefaultInventory", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGGameInstanceBase, DefaultInventory), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_DefaultInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_DefaultInventory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_DefaultInventory_Key_KeyProp = { "DefaultInventory_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_DefaultInventory_ValueProp = { "DefaultInventory", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRPGItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGGameInstanceBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bPendingSaveRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bCurrentlySaving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_bSavingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_CurrentSaveGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_OnSaveGameLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_SaveUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_SaveSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_ItemSlotsPerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_ItemSlotsPerType_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_ItemSlotsPerType_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_DefaultInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_DefaultInventory_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameInstanceBase_Statics::NewProp_DefaultInventory_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGGameInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGameInstanceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGGameInstanceBase_Statics::ClassParams = {
		&URPGGameInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGGameInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URPGGameInstanceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameInstanceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGGameInstanceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGGameInstanceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGGameInstanceBase, 1891768712);
	template<> ACTIONRPG_API UClass* StaticClass<URPGGameInstanceBase>()
	{
		return URPGGameInstanceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGGameInstanceBase(Z_Construct_UClass_URPGGameInstanceBase, &URPGGameInstanceBase::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGGameInstanceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGameInstanceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
