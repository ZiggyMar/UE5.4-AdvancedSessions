// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/EndSessionCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndSessionCallbackProxy() {}

// Begin Cross Module References
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UEndSessionCallbackProxy();
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UEndSessionCallbackProxy_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References

// Begin Class UEndSessionCallbackProxy Function EndSession
struct Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics
{
	struct EndSessionCallbackProxy_eventEndSession_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		UEndSessionCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedSessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09  Ends the current sessions, Generally for almost all uses you should be using the engines native Destroy Session node instead.\n\x09 *\x09  This exists for people using StartSession and optionally hand managing the session state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/EndSessionCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends the current sessions, Generally for almost all uses you should be using the engines native Destroy Session node instead.\nThis exists for people using StartSession and optionally hand managing the session state." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndSessionCallbackProxy_eventEndSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndSessionCallbackProxy_eventEndSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndSessionCallbackProxy_eventEndSession_Parms, ReturnValue), Z_Construct_UClass_UEndSessionCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndSessionCallbackProxy, nullptr, "EndSession", nullptr, nullptr, Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::EndSessionCallbackProxy_eventEndSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::EndSessionCallbackProxy_eventEndSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndSessionCallbackProxy::execEndSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEndSessionCallbackProxy**)Z_Param__Result=UEndSessionCallbackProxy::EndSession(Z_Param_WorldContextObject,Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UEndSessionCallbackProxy Function EndSession

// Begin Class UEndSessionCallbackProxy
void UEndSessionCallbackProxy::StaticRegisterNativesUEndSessionCallbackProxy()
{
	UClass* Class = UEndSessionCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndSession", &UEndSessionCallbackProxy::execEndSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEndSessionCallbackProxy);
UClass* Z_Construct_UClass_UEndSessionCallbackProxy_NoRegister()
{
	return UEndSessionCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UEndSessionCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EndSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/EndSessionCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is a successful destroy\n" },
#endif
		{ "ModuleRelativePath", "Classes/EndSessionCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is a successful destroy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
#endif
		{ "ModuleRelativePath", "Classes/EndSessionCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is an unsuccessful destroy" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndSessionCallbackProxy_EndSession, "EndSession" }, // 2937183150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndSessionCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEndSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEndSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndSessionCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndSessionCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndSessionCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndSessionCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEndSessionCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndSessionCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndSessionCallbackProxy_Statics::ClassParams = {
	&UEndSessionCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEndSessionCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEndSessionCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndSessionCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndSessionCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEndSessionCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UEndSessionCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndSessionCallbackProxy.OuterSingleton, Z_Construct_UClass_UEndSessionCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEndSessionCallbackProxy.OuterSingleton;
}
template<> ADVANCEDSESSIONS_API UClass* StaticClass<UEndSessionCallbackProxy>()
{
	return UEndSessionCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEndSessionCallbackProxy);
UEndSessionCallbackProxy::~UEndSessionCallbackProxy() {}
// End Class UEndSessionCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_EndSessionCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEndSessionCallbackProxy, UEndSessionCallbackProxy::StaticClass, TEXT("UEndSessionCallbackProxy"), &Z_Registration_Info_UClass_UEndSessionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndSessionCallbackProxy), 3243023799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_EndSessionCallbackProxy_h_1302720333(TEXT("/Script/AdvancedSessions"),
	Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_EndSessionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_EndSessionCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
