// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAbilityTask_PlayMontageAndWaitForEvent() {}
// Cross Module References
	ACTIONRPG_API UFunction* Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics
	{
		struct _Script_ActionRPG_eventRPGPlayMontageAndWaitForEventDelegate_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData EventData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRPG_eventRPGPlayMontageAndWaitForEventDelegate_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionRPG_eventRPGPlayMontageAndWaitForEventDelegate_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate type used, EventTag and Payload may be empty if it came from the montage callbacks */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Delegate type used, EventTag and Payload may be empty if it came from the montage callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionRPG, nullptr, "RPGPlayMontageAndWaitForEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_ActionRPG_eventRPGPlayMontageAndWaitForEventDelegate_Parms), Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URPGAbilityTask_PlayMontageAndWaitForEvent::execPlayMontageAndWaitForEvent)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_EventTags);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
		P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URPGAbilityTask_PlayMontageAndWaitForEvent**)Z_Param__Result=URPGAbilityTask_PlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_EventTags,Z_Param_Rate,Z_Param_StartSection,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale);
		P_NATIVE_END;
	}
	void URPGAbilityTask_PlayMontageAndWaitForEvent::StaticRegisterNativesURPGAbilityTask_PlayMontageAndWaitForEvent()
	{
		UClass* Class = URPGAbilityTask_PlayMontageAndWaitForEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayMontageAndWaitForEvent", &URPGAbilityTask_PlayMontageAndWaitForEvent::execPlayMontageAndWaitForEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics
	{
		struct RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UAnimMontage* MontageToPlay;
			FGameplayTagContainer EventTags;
			float Rate;
			FName StartSection;
			bool bStopWhenAbilityEnds;
			float AnimRootMotionTranslationScale;
			URPGAbilityTask_PlayMontageAndWaitForEvent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, ReturnValue), Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms), &Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, StartSection), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Play a montage and wait for it end. If a gameplay event happens that matches EventTags (or EventTags is empty), the EventReceived delegate will fire with a tag and event data.\n\x09 * If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\n\x09 * On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\n\x09 * OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\x09 *\n\x09 * @param TaskInstanceName Set to override the name of this task, for later querying\n\x09 * @param MontageToPlay The montage to play on the character\n\x09 * @param EventTags Any gameplay events matching this tag will activate the EventReceived callback. If empty, all events will trigger callback\n\x09 * @param Rate Change to play the montage faster or slower\n\x09 * @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n\x09 * @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n\x09 */" },
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Play a montage and wait for it end. If a gameplay event happens that matches EventTags (or EventTags is empty), the EventReceived delegate will fire with a tag and event data.\nIf StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\nOn normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\nOnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\n@param TaskInstanceName Set to override the name of this task, for later querying\n@param MontageToPlay The montage to play on the character\n@param EventTags Any gameplay events matching this tag will activate the EventReceived callback. If empty, all events will trigger callback\n@param Rate Change to play the montage faster or slower\n@param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n@param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent, nullptr, "PlayMontageAndWaitForEvent", nullptr, nullptr, sizeof(RPGAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms), Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_NoRegister()
	{
		return URPGAbilityTask_PlayMontageAndWaitForEvent::StaticClass();
	}
	struct Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAbilityEnds_MetaData[];
#endif
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, "PlayMontageAndWaitForEvent" }, // 2464198471
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This task combines PlayMontageAndWait and WaitForEvent into one task, so you can wait for multiple types of activations such as from a melee combo\n * Much of this code is copied from one of those two ability tasks\n * This is a good task to look at as an example when creating game-specific tasks\n * It is expected that each game will have a set of game-specific tasks to do what they want\n */" },
		{ "IncludePath", "Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This task combines PlayMontageAndWait and WaitForEvent into one task, so you can wait for multiple types of activations such as from a melee combo\nMuch of this code is copied from one of those two ability tasks\nThis is a good task to look at as an example when creating game-specific tasks\nIt is expected that each game will have a set of game-specific tasks to do what they want" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_MetaData[] = {
		{ "Comment", "/** Rather montage should be aborted if ability ends */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Rather montage should be aborted if ability ends" },
	};
#endif
	void Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((URPGAbilityTask_PlayMontageAndWaitForEvent*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URPGAbilityTask_PlayMontageAndWaitForEvent), &Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale_MetaData[] = {
		{ "Comment", "/** Modifies how root motion movement to apply */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Modifies how root motion movement to apply" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, AnimRootMotionTranslationScale), METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection_MetaData[] = {
		{ "Comment", "/** Section to start montage from */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Section to start montage from" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, StartSection), METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_Rate_MetaData[] = {
		{ "Comment", "/** Playback rate */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Playback rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, Rate), METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_Rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags_MetaData[] = {
		{ "Comment", "/** List of tags to match against gameplay events */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "List of tags to match against gameplay events" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay_MetaData[] = {
		{ "Comment", "/** Montage that is playing */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Montage that is playing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventReceived_MetaData[] = {
		{ "Comment", "/** One of the triggering gameplay events happened */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "One of the triggering gameplay events happened" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventReceived = { "EventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, EventReceived), Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCancelled_MetaData[] = {
		{ "Comment", "/** The ability task was explicitly cancelled by another ability */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "The ability task was explicitly cancelled by another ability" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, OnCancelled), Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnInterrupted_MetaData[] = {
		{ "Comment", "/** The montage was interrupted */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "The montage was interrupted" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, OnInterrupted), Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnInterrupted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnBlendOut_MetaData[] = {
		{ "Comment", "/** The montage started blending out */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "The montage started blending out" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, OnBlendOut), Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnBlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnBlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/** The montage completely finished playing */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "The montage completely finished playing" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, OnCompleted), Z_Construct_UDelegateFunction_ActionRPG_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnBlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGAbilityTask_PlayMontageAndWaitForEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::ClassParams = {
		&URPGAbilityTask_PlayMontageAndWaitForEvent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGAbilityTask_PlayMontageAndWaitForEvent, 137855987);
	template<> ACTIONRPG_API UClass* StaticClass<URPGAbilityTask_PlayMontageAndWaitForEvent>()
	{
		return URPGAbilityTask_PlayMontageAndWaitForEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent(Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent, &URPGAbilityTask_PlayMontageAndWaitForEvent::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGAbilityTask_PlayMontageAndWaitForEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGAbilityTask_PlayMontageAndWaitForEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
