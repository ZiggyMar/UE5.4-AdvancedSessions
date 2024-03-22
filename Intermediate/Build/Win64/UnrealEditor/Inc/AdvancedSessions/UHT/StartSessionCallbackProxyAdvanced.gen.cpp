// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/StartSessionCallbackProxyAdvanced.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartSessionCallbackProxyAdvanced() {}

// Begin Cross Module References
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UStartSessionCallbackProxyAdvanced();
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References

// Begin Class UStartSessionCallbackProxyAdvanced Function StartAdvancedSession
struct Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics
{
	struct StartSessionCallbackProxyAdvanced_eventStartAdvancedSession_Parms
	{
		const UObject* WorldContextObject;
		UStartSessionCallbackProxyAdvanced* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedSessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts a session with the default online subsystem. The session needs to be previously created by calling the \"CreateAdvancedSession\" node.\n\x09 * @param WorldContextObject\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/StartSessionCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts a session with the default online subsystem. The session needs to be previously created by calling the \"CreateAdvancedSession\" node.\n@param WorldContextObject" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StartSessionCallbackProxyAdvanced_eventStartAdvancedSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StartSessionCallbackProxyAdvanced_eventStartAdvancedSession_Parms, ReturnValue), Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartSessionCallbackProxyAdvanced, nullptr, "StartAdvancedSession", nullptr, nullptr, Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::StartSessionCallbackProxyAdvanced_eventStartAdvancedSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::StartSessionCallbackProxyAdvanced_eventStartAdvancedSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStartSessionCallbackProxyAdvanced::execStartAdvancedSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStartSessionCallbackProxyAdvanced**)Z_Param__Result=UStartSessionCallbackProxyAdvanced::StartAdvancedSession(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UStartSessionCallbackProxyAdvanced Function StartAdvancedSession

// Begin Class UStartSessionCallbackProxyAdvanced
void UStartSessionCallbackProxyAdvanced::StaticRegisterNativesUStartSessionCallbackProxyAdvanced()
{
	UClass* Class = UStartSessionCallbackProxyAdvanced::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartAdvancedSession", &UStartSessionCallbackProxyAdvanced::execStartAdvancedSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStartSessionCallbackProxyAdvanced);
UClass* Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_NoRegister()
{
	return UStartSessionCallbackProxyAdvanced::StaticClass();
}
struct Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StartSessionCallbackProxyAdvanced.h" },
		{ "ModuleRelativePath", "Classes/StartSessionCallbackProxyAdvanced.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the session starts successfully\n" },
#endif
		{ "ModuleRelativePath", "Classes/StartSessionCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the session starts successfully" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is an error starting the session\n" },
#endif
		{ "ModuleRelativePath", "Classes/StartSessionCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is an error starting the session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStartSessionCallbackProxyAdvanced_StartAdvancedSession, "StartAdvancedSession" }, // 3897091636
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartSessionCallbackProxyAdvanced>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStartSessionCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStartSessionCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::ClassParams = {
	&UStartSessionCallbackProxyAdvanced::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams), Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStartSessionCallbackProxyAdvanced()
{
	if (!Z_Registration_Info_UClass_UStartSessionCallbackProxyAdvanced.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStartSessionCallbackProxyAdvanced.OuterSingleton, Z_Construct_UClass_UStartSessionCallbackProxyAdvanced_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStartSessionCallbackProxyAdvanced.OuterSingleton;
}
template<> ADVANCEDSESSIONS_API UClass* StaticClass<UStartSessionCallbackProxyAdvanced>()
{
	return UStartSessionCallbackProxyAdvanced::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStartSessionCallbackProxyAdvanced);
UStartSessionCallbackProxyAdvanced::~UStartSessionCallbackProxyAdvanced() {}
// End Class UStartSessionCallbackProxyAdvanced

// Begin Registration
struct Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_StartSessionCallbackProxyAdvanced_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStartSessionCallbackProxyAdvanced, UStartSessionCallbackProxyAdvanced::StaticClass, TEXT("UStartSessionCallbackProxyAdvanced"), &Z_Registration_Info_UClass_UStartSessionCallbackProxyAdvanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStartSessionCallbackProxyAdvanced), 3527223866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_StartSessionCallbackProxyAdvanced_h_123527503(TEXT("/Script/AdvancedSessions"),
	Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_StartSessionCallbackProxyAdvanced_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_StartSessionCallbackProxyAdvanced_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
