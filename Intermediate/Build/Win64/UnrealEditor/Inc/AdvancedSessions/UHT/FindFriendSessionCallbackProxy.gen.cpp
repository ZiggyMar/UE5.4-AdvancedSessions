// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/FindFriendSessionCallbackProxy.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/BlueprintDataDefinitions.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindFriendSessionCallbackProxy() {}

// Begin Cross Module References
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy();
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister();
ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature();
ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References

// Begin Delegate FBlueprintFindFriendSessionDelegate
struct Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics
{
	struct _Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms
	{
		TArray<FBlueprintSessionResult> SessionInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FindFriendSessionCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo_Inner = { "SessionInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 1307808723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms, SessionInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionInfo_MetaData), NewProp_SessionInfo_MetaData) }; // 1307808723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions, nullptr, "BlueprintFindFriendSessionDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::_Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::_Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBlueprintFindFriendSessionDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintFindFriendSessionDelegate, TArray<FBlueprintSessionResult> const& SessionInfo)
{
	struct _Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms
	{
		TArray<FBlueprintSessionResult> SessionInfo;
	};
	_Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms Parms;
	Parms.SessionInfo=SessionInfo;
	BlueprintFindFriendSessionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBlueprintFindFriendSessionDelegate

// Begin Class UFindFriendSessionCallbackProxy Function FindFriendSession
struct Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics
{
	struct FindFriendSessionCallbackProxy_eventFindFriendSession_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		FBPUniqueNetId FriendUniqueNetId;
		UFindFriendSessionCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedFriends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attempts to get the current session that a friend is in\n" },
#endif
		{ "ModuleRelativePath", "Classes/FindFriendSessionCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to get the current session that a friend is in" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendUniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendUniqueNetId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId = { "FriendUniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, FriendUniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendUniqueNetId_MetaData), NewProp_FriendUniqueNetId_MetaData) }; // 700456651
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, ReturnValue), Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindFriendSessionCallbackProxy, nullptr, "FindFriendSession", nullptr, nullptr, Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::FindFriendSessionCallbackProxy_eventFindFriendSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::FindFriendSessionCallbackProxy_eventFindFriendSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFindFriendSessionCallbackProxy::execFindFriendSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_FriendUniqueNetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFindFriendSessionCallbackProxy**)Z_Param__Result=UFindFriendSessionCallbackProxy::FindFriendSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_FriendUniqueNetId);
	P_NATIVE_END;
}
// End Class UFindFriendSessionCallbackProxy Function FindFriendSession

// Begin Class UFindFriendSessionCallbackProxy
void UFindFriendSessionCallbackProxy::StaticRegisterNativesUFindFriendSessionCallbackProxy()
{
	UClass* Class = UFindFriendSessionCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindFriendSession", &UFindFriendSessionCallbackProxy::execFindFriendSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindFriendSessionCallbackProxy);
UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister()
{
	return UFindFriendSessionCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FindFriendSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/FindFriendSessionCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the friends list successfully was retrieved\n" },
#endif
		{ "ModuleRelativePath", "Classes/FindFriendSessionCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the friends list successfully was retrieved" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there was an error retrieving the friends list\n" },
#endif
		{ "ModuleRelativePath", "Classes/FindFriendSessionCallbackProxy.h" },
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
		{ &Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession, "FindFriendSession" }, // 2429463939
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindFriendSessionCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFindFriendSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 269219830
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFindFriendSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 269219830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::ClassParams = {
	&UFindFriendSessionCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UFindFriendSessionCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindFriendSessionCallbackProxy.OuterSingleton, Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFindFriendSessionCallbackProxy.OuterSingleton;
}
template<> ADVANCEDSESSIONS_API UClass* StaticClass<UFindFriendSessionCallbackProxy>()
{
	return UFindFriendSessionCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFindFriendSessionCallbackProxy);
UFindFriendSessionCallbackProxy::~UFindFriendSessionCallbackProxy() {}
// End Class UFindFriendSessionCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFindFriendSessionCallbackProxy, UFindFriendSessionCallbackProxy::StaticClass, TEXT("UFindFriendSessionCallbackProxy"), &Z_Registration_Info_UClass_UFindFriendSessionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindFriendSessionCallbackProxy), 2095461194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_1365403343(TEXT("/Script/AdvancedSessions"),
	Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
