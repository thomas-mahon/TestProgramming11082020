// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONRPG_RPGSaveGame_generated_h
#error "RPGSaveGame.generated.h already included, missing '#pragma once' in RPGSaveGame.h"
#endif
#define ACTIONRPG_RPGSaveGame_generated_h

#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_RPC_WRAPPERS
#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URPGSaveGame, NO_API)


#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGSaveGame(); \
	friend struct Z_Construct_UClass_URPGSaveGame_Statics; \
public: \
	DECLARE_CLASS(URPGSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGSaveGame) \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_ARCHIVESERIALIZER


#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_INCLASS \
private: \
	static void StaticRegisterNativesURPGSaveGame(); \
	friend struct Z_Construct_UClass_URPGSaveGame_Statics; \
public: \
	DECLARE_CLASS(URPGSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGSaveGame) \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_ARCHIVESERIALIZER


#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGSaveGame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGSaveGame(URPGSaveGame&&); \
	NO_API URPGSaveGame(const URPGSaveGame&); \
public:


#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGSaveGame(URPGSaveGame&&); \
	NO_API URPGSaveGame(const URPGSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGSaveGame)


#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InventoryItems_DEPRECATED() { return STRUCT_OFFSET(URPGSaveGame, InventoryItems_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__SavedDataVersion() { return STRUCT_OFFSET(URPGSaveGame, SavedDataVersion); }


#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_29_PROLOG
#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_INCLASS \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_RPGSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
