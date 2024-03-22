// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/GetUserPrivilegeCallbackProxy.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/BlueprintDataDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetUserPrivilegeCallbackProxy() {}

// Begin Cross Module References
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy();
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister();
ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges();
ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature();
ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References

// Begin Delegate FBlueprintGetUserPrivilegeDelegate
struct Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics
{
	struct _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms
	{
		EBPUserPrivileges QueriedPrivilege;
		bool HadPrivilege;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* const &FBPUniqueNetId, PlayerID,*/" },
#endif
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "const &FBPUniqueNetId, PlayerID," },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_QueriedPrivilege_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QueriedPrivilege;
	static void NewProp_HadPrivilege_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HadPrivilege;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege = { "QueriedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms, QueriedPrivilege), Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges, METADATA_PARAMS(0, nullptr) }; // 3561584933
void Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege_SetBit(void* Obj)
{
	((_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms*)Obj)->HadPrivilege = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege = { "HadPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms), &Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions, nullptr, "BlueprintGetUserPrivilegeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBlueprintGetUserPrivilegeDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGetUserPrivilegeDelegate, EBPUserPrivileges QueriedPrivilege, bool HadPrivilege)
{
	struct _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms
	{
		EBPUserPrivileges QueriedPrivilege;
		bool HadPrivilege;
	};
	_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms Parms;
	Parms.QueriedPrivilege=QueriedPrivilege;
	Parms.HadPrivilege=HadPrivilege ? true : false;
	BlueprintGetUserPrivilegeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBlueprintGetUserPrivilegeDelegate

// Begin Class UGetUserPrivilegeCallbackProxy Function GetUserPrivilege
struct Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics
{
	struct GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms
	{
		UObject* WorldContextObject;
		EBPUserPrivileges PrivilegeToCheck;
		FBPUniqueNetId PlayerUniqueNetID;
		UGetUserPrivilegeCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedIdentity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the privilage of the user\n" },
#endif
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the privilage of the user" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivilegeToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerUniqueNetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrivilegeToCheck_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrivilegeToCheck;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerUniqueNetID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck = { "PrivilegeToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, PrivilegeToCheck), Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivilegeToCheck_MetaData), NewProp_PrivilegeToCheck_MetaData) }; // 3561584933
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID = { "PlayerUniqueNetID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, PlayerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerUniqueNetID_MetaData), NewProp_PlayerUniqueNetID_MetaData) }; // 700456651
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, ReturnValue), Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetUserPrivilegeCallbackProxy, nullptr, "GetUserPrivilege", nullptr, nullptr, Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGetUserPrivilegeCallbackProxy::execGetUserPrivilege)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EBPUserPrivileges,Z_Param_Out_PrivilegeToCheck);
	P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_PlayerUniqueNetID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGetUserPrivilegeCallbackProxy**)Z_Param__Result=UGetUserPrivilegeCallbackProxy::GetUserPrivilege(Z_Param_WorldContextObject,(EBPUserPrivileges&)(Z_Param_Out_PrivilegeToCheck),Z_Param_Out_PlayerUniqueNetID);
	P_NATIVE_END;
}
// End Class UGetUserPrivilegeCallbackProxy Function GetUserPrivilege

// Begin Class UGetUserPrivilegeCallbackProxy
void UGetUserPrivilegeCallbackProxy::StaticRegisterNativesUGetUserPrivilegeCallbackProxy()
{
	UClass* Class = UGetUserPrivilegeCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserPrivilege", &UGetUserPrivilegeCallbackProxy::execGetUserPrivilege },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetUserPrivilegeCallbackProxy);
UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister()
{
	return UGetUserPrivilegeCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GetUserPrivilegeCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is a successful destroy\n" },
#endif
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is a successful destroy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
#endif
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
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
		{ &Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege, "GetUserPrivilege" }, // 369398459
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetUserPrivilegeCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGetUserPrivilegeCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1709321173
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGetUserPrivilegeCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::ClassParams = {
	&UGetUserPrivilegeCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UGetUserPrivilegeCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetUserPrivilegeCallbackProxy.OuterSingleton, Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGetUserPrivilegeCallbackProxy.OuterSingleton;
}
template<> ADVANCEDSESSIONS_API UClass* StaticClass<UGetUserPrivilegeCallbackProxy>()
{
	return UGetUserPrivilegeCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGetUserPrivilegeCallbackProxy);
UGetUserPrivilegeCallbackProxy::~UGetUserPrivilegeCallbackProxy() {}
// End Class UGetUserPrivilegeCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGetUserPrivilegeCallbackProxy, UGetUserPrivilegeCallbackProxy::StaticClass, TEXT("UGetUserPrivilegeCallbackProxy"), &Z_Registration_Info_UClass_UGetUserPrivilegeCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetUserPrivilegeCallbackProxy), 1750089237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_3526518040(TEXT("/Script/AdvancedSessions"),
	Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
