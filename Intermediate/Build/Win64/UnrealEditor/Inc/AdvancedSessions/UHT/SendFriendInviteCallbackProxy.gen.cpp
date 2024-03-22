// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/SendFriendInviteCallbackProxy.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/BlueprintDataDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendFriendInviteCallbackProxy() {}

// Begin Cross Module References
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy();
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy_NoRegister();
ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature();
ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References

// Begin Delegate FBlueprintSendFriendInviteDelegate
struct Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SendFriendInviteCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions, nullptr, "BlueprintSendFriendInviteDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBlueprintSendFriendInviteDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintSendFriendInviteDelegate)
{
	BlueprintSendFriendInviteDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FBlueprintSendFriendInviteDelegate

// Begin Class USendFriendInviteCallbackProxy Function SendFriendInvite
struct Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics
{
	struct SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		FBPUniqueNetId UniqueNetIDInvited;
		USendFriendInviteCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedFriends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a friend who is using the defined UniqueNetId, some interfaces do now allow this function to be called (INCLUDING STEAM)\n" },
#endif
		{ "ModuleRelativePath", "Classes/SendFriendInviteCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a friend who is using the defined UniqueNetId, some interfaces do now allow this function to be called (INCLUDING STEAM)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNetIDInvited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetIDInvited;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_UniqueNetIDInvited = { "UniqueNetIDInvited", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms, UniqueNetIDInvited), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueNetIDInvited_MetaData), NewProp_UniqueNetIDInvited_MetaData) }; // 700456651
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms, ReturnValue), Z_Construct_UClass_USendFriendInviteCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_UniqueNetIDInvited,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendFriendInviteCallbackProxy, nullptr, "SendFriendInvite", nullptr, nullptr, Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::PropPointers), sizeof(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::Function_MetaDataParams), Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USendFriendInviteCallbackProxy::execSendFriendInvite)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetIDInvited);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USendFriendInviteCallbackProxy**)Z_Param__Result=USendFriendInviteCallbackProxy::SendFriendInvite(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_UniqueNetIDInvited);
	P_NATIVE_END;
}
// End Class USendFriendInviteCallbackProxy Function SendFriendInvite

// Begin Class USendFriendInviteCallbackProxy
void USendFriendInviteCallbackProxy::StaticRegisterNativesUSendFriendInviteCallbackProxy()
{
	UClass* Class = USendFriendInviteCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendFriendInvite", &USendFriendInviteCallbackProxy::execSendFriendInvite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USendFriendInviteCallbackProxy);
UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy_NoRegister()
{
	return USendFriendInviteCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SendFriendInviteCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/SendFriendInviteCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the friends list successfully was retrieved\n" },
#endif
		{ "ModuleRelativePath", "Classes/SendFriendInviteCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the friends list successfully was retrieved" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there was an error retrieving the friends list\n" },
#endif
		{ "ModuleRelativePath", "Classes/SendFriendInviteCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there was an error retrieving the friends list" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite, "SendFriendInvite" }, // 424758230
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USendFriendInviteCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USendFriendInviteCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3027136724
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USendFriendInviteCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3027136724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::ClassParams = {
	&USendFriendInviteCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy()
{
	if (!Z_Registration_Info_UClass_USendFriendInviteCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USendFriendInviteCallbackProxy.OuterSingleton, Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USendFriendInviteCallbackProxy.OuterSingleton;
}
template<> ADVANCEDSESSIONS_API UClass* StaticClass<USendFriendInviteCallbackProxy>()
{
	return USendFriendInviteCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USendFriendInviteCallbackProxy);
USendFriendInviteCallbackProxy::~USendFriendInviteCallbackProxy() {}
// End Class USendFriendInviteCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USendFriendInviteCallbackProxy, USendFriendInviteCallbackProxy::StaticClass, TEXT("USendFriendInviteCallbackProxy"), &Z_Registration_Info_UClass_USendFriendInviteCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USendFriendInviteCallbackProxy), 2047822195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_714157299(TEXT("/Script/AdvancedSessions"),
	Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_SendFriendInviteCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
