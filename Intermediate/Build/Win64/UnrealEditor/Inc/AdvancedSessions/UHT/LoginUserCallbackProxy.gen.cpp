// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/LoginUserCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoginUserCallbackProxy() {}

// Begin Cross Module References
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_ULoginUserCallbackProxy();
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_ULoginUserCallbackProxy_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References

// Begin Class ULoginUserCallbackProxy Function LoginUser
struct Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics
{
	struct LoginUserCallbackProxy_eventLoginUser_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		FString UserID;
		FString UserToken;
		FString AuthType;
		ULoginUserCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AuthType" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedIdentity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Logs into the identity interface\n" },
#endif
		{ "ModuleRelativePath", "Classes/LoginUserCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logs into the identity interface" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserToken;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AuthType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoginUserCallbackProxy_eventLoginUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoginUserCallbackProxy_eventLoginUser_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoginUserCallbackProxy_eventLoginUser_Parms, UserID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_UserToken = { "UserToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoginUserCallbackProxy_eventLoginUser_Parms, UserToken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_AuthType = { "AuthType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoginUserCallbackProxy_eventLoginUser_Parms, AuthType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoginUserCallbackProxy_eventLoginUser_Parms, ReturnValue), Z_Construct_UClass_ULoginUserCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_UserToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_AuthType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoginUserCallbackProxy, nullptr, "LoginUser", nullptr, nullptr, Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::LoginUserCallbackProxy_eventLoginUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::LoginUserCallbackProxy_eventLoginUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoginUserCallbackProxy::execLoginUser)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserToken);
	P_GET_PROPERTY(FStrProperty,Z_Param_AuthType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULoginUserCallbackProxy**)Z_Param__Result=ULoginUserCallbackProxy::LoginUser(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_UserID,Z_Param_UserToken,Z_Param_AuthType);
	P_NATIVE_END;
}
// End Class ULoginUserCallbackProxy Function LoginUser

// Begin Class ULoginUserCallbackProxy
void ULoginUserCallbackProxy::StaticRegisterNativesULoginUserCallbackProxy()
{
	UClass* Class = ULoginUserCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoginUser", &ULoginUserCallbackProxy::execLoginUser },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoginUserCallbackProxy);
UClass* Z_Construct_UClass_ULoginUserCallbackProxy_NoRegister()
{
	return ULoginUserCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_ULoginUserCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LoginUserCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/LoginUserCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is a successful destroy\n" },
#endif
		{ "ModuleRelativePath", "Classes/LoginUserCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is a successful destroy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
#endif
		{ "ModuleRelativePath", "Classes/LoginUserCallbackProxy.h" },
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
		{ &Z_Construct_UFunction_ULoginUserCallbackProxy_LoginUser, "LoginUser" }, // 795321679
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoginUserCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoginUserCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoginUserCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoginUserCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoginUserCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoginUserCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginUserCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginUserCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoginUserCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoginUserCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoginUserCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoginUserCallbackProxy_Statics::ClassParams = {
	&ULoginUserCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoginUserCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoginUserCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoginUserCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoginUserCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoginUserCallbackProxy()
{
	if (!Z_Registration_Info_UClass_ULoginUserCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoginUserCallbackProxy.OuterSingleton, Z_Construct_UClass_ULoginUserCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoginUserCallbackProxy.OuterSingleton;
}
template<> ADVANCEDSESSIONS_API UClass* StaticClass<ULoginUserCallbackProxy>()
{
	return ULoginUserCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoginUserCallbackProxy);
ULoginUserCallbackProxy::~ULoginUserCallbackProxy() {}
// End Class ULoginUserCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoginUserCallbackProxy, ULoginUserCallbackProxy::StaticClass, TEXT("ULoginUserCallbackProxy"), &Z_Registration_Info_UClass_ULoginUserCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoginUserCallbackProxy), 3141059391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_1201621696(TEXT("/Script/AdvancedSessions"),
	Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
