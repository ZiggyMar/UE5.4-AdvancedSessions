// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AutoLoginUserCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoLoginUserCallbackProxy() {}

// Begin Cross Module References
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAutoLoginUserCallbackProxy();
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAutoLoginUserCallbackProxy_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References

// Begin Class UAutoLoginUserCallbackProxy Function AutoLoginUser
struct Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics
{
	struct AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms
	{
		UObject* WorldContextObject;
		int32 LocalUserNum;
		UAutoLoginUserCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedIdentity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Logs the player into the online service using parameters passed on the\n\x09 * command line. Expects -AUTH_LOGIN=<UserName> -AUTH_PASSWORD=<password>. If either\n\x09 * are missing, the function returns false and doesn't start the login\n\x09 * process\n\x09 *\n\x09 * @param LocalUserNum the controller number of the associated user\n\x09 *\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AutoLoginUserCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logs the player into the online service using parameters passed on the\ncommand line. Expects -AUTH_LOGIN=<UserName> -AUTH_PASSWORD=<password>. If either\nare missing, the function returns false and doesn't start the login\nprocess\n\n@param LocalUserNum the controller number of the associated user" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms, ReturnValue), Z_Construct_UClass_UAutoLoginUserCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoLoginUserCallbackProxy, nullptr, "AutoLoginUser", nullptr, nullptr, Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::AutoLoginUserCallbackProxy_eventAutoLoginUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoLoginUserCallbackProxy::execAutoLoginUser)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAutoLoginUserCallbackProxy**)Z_Param__Result=UAutoLoginUserCallbackProxy::AutoLoginUser(Z_Param_WorldContextObject,Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// End Class UAutoLoginUserCallbackProxy Function AutoLoginUser

// Begin Class UAutoLoginUserCallbackProxy
void UAutoLoginUserCallbackProxy::StaticRegisterNativesUAutoLoginUserCallbackProxy()
{
	UClass* Class = UAutoLoginUserCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutoLoginUser", &UAutoLoginUserCallbackProxy::execAutoLoginUser },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoLoginUserCallbackProxy);
UClass* Z_Construct_UClass_UAutoLoginUserCallbackProxy_NoRegister()
{
	return UAutoLoginUserCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AutoLoginUserCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/AutoLoginUserCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is a successful destroy\n" },
#endif
		{ "ModuleRelativePath", "Classes/AutoLoginUserCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is a successful destroy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
#endif
		{ "ModuleRelativePath", "Classes/AutoLoginUserCallbackProxy.h" },
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
		{ &Z_Construct_UFunction_UAutoLoginUserCallbackProxy_AutoLoginUser, "AutoLoginUser" }, // 1709804665
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoLoginUserCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoLoginUserCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoLoginUserCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::ClassParams = {
	&UAutoLoginUserCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoLoginUserCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UAutoLoginUserCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoLoginUserCallbackProxy.OuterSingleton, Z_Construct_UClass_UAutoLoginUserCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoLoginUserCallbackProxy.OuterSingleton;
}
template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAutoLoginUserCallbackProxy>()
{
	return UAutoLoginUserCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoLoginUserCallbackProxy);
UAutoLoginUserCallbackProxy::~UAutoLoginUserCallbackProxy() {}
// End Class UAutoLoginUserCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AutoLoginUserCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoLoginUserCallbackProxy, UAutoLoginUserCallbackProxy::StaticClass, TEXT("UAutoLoginUserCallbackProxy"), &Z_Registration_Info_UClass_UAutoLoginUserCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoLoginUserCallbackProxy), 660773183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AutoLoginUserCallbackProxy_h_811051021(TEXT("/Script/AdvancedSessions"),
	Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AutoLoginUserCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AutoLoginUserCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
