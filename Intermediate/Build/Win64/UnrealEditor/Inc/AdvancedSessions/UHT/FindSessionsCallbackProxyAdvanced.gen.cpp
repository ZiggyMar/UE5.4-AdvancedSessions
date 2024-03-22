// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/FindSessionsCallbackProxyAdvanced.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/BlueprintDataDefinitions.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindSessionsCallbackProxyAdvanced() {}

// Begin Cross Module References
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced();
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister();
ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType();
ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References

// Begin Class UFindSessionsCallbackProxyAdvanced Function FilterSessionResults
struct Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics
{
	struct FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms
	{
		TArray<FBlueprintSessionResult> SessionResults;
		TArray<FSessionsSearchSetting> Filters;
		TArray<FBlueprintSessionResult> FilteredResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Filters an array of session results by the given search parameters, returns a new array with the filtered results\n" },
#endif
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filters an array of session results by the given search parameters, returns a new array with the filtered results" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionResults_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Filters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilteredResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_Inner = { "SessionResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 1307808723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults = { "SessionResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, SessionResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionResults_MetaData), NewProp_SessionResults_MetaData) }; // 1307808723
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionsSearchSetting, METADATA_PARAMS(0, nullptr) }; // 4243169235
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) }; // 4243169235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults_Inner = { "FilteredResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 1307808723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults = { "FilteredResults", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, FilteredResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1307808723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, nullptr, "FilterSessionResults", nullptr, nullptr, Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFindSessionsCallbackProxyAdvanced::execFilterSessionResults)
{
	P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_SessionResults);
	P_GET_TARRAY_REF(FSessionsSearchSetting,Z_Param_Out_Filters);
	P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_FilteredResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFindSessionsCallbackProxyAdvanced::FilterSessionResults(Z_Param_Out_SessionResults,Z_Param_Out_Filters,Z_Param_Out_FilteredResults);
	P_NATIVE_END;
}
// End Class UFindSessionsCallbackProxyAdvanced Function FilterSessionResults

// Begin Class UFindSessionsCallbackProxyAdvanced Function FindSessionsAdvanced
struct Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics
{
	struct FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		int32 MaxResults;
		bool bUseLAN;
		EBPServerPresenceSearchType ServerTypeToSearch;
		TArray<FSessionsSearchSetting> Filters;
		bool bEmptyServersOnly;
		bool bNonEmptyServersOnly;
		bool bSecureServersOnly;
		bool bSearchLobbies;
		int32 MinSlotsAvailable;
		UFindSessionsCallbackProxyAdvanced* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Filters" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedSessions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Searches for advertised sessions with the default online subsystem and includes an array of filters\n" },
#endif
		{ "CPP_Default_bEmptyServersOnly", "false" },
		{ "CPP_Default_bNonEmptyServersOnly", "false" },
		{ "CPP_Default_bSearchLobbies", "true" },
		{ "CPP_Default_bSecureServersOnly", "false" },
		{ "CPP_Default_MinSlotsAvailable", "0" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Searches for advertised sessions with the default online subsystem and includes an array of filters" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bUseLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ServerTypeToSearch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ServerTypeToSearch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Filters;
	static void NewProp_bEmptyServersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmptyServersOnly;
	static void NewProp_bNonEmptyServersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNonEmptyServersOnly;
	static void NewProp_bSecureServersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecureServersOnly;
	static void NewProp_bSearchLobbies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchLobbies;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinSlotsAvailable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN_SetBit(void* Obj)
{
	((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bUseLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch = { "ServerTypeToSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, ServerTypeToSearch), Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType, METADATA_PARAMS(0, nullptr) }; // 3772256249
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionsSearchSetting, METADATA_PARAMS(0, nullptr) }; // 4243169235
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) }; // 4243169235
void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly_SetBit(void* Obj)
{
	((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bEmptyServersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly = { "bEmptyServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly_SetBit(void* Obj)
{
	((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bNonEmptyServersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly = { "bNonEmptyServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly_SetBit(void* Obj)
{
	((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bSecureServersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly = { "bSecureServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSearchLobbies_SetBit(void* Obj)
{
	((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bSearchLobbies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSearchLobbies = { "bSearchLobbies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSearchLobbies_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MinSlotsAvailable = { "MinSlotsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, MinSlotsAvailable), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, ReturnValue), Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSearchLobbies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MinSlotsAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, nullptr, "FindSessionsAdvanced", nullptr, nullptr, Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFindSessionsCallbackProxyAdvanced::execFindSessionsAdvanced)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bUseLAN);
	P_GET_ENUM(EBPServerPresenceSearchType,Z_Param_ServerTypeToSearch);
	P_GET_TARRAY_REF(FSessionsSearchSetting,Z_Param_Out_Filters);
	P_GET_UBOOL(Z_Param_bEmptyServersOnly);
	P_GET_UBOOL(Z_Param_bNonEmptyServersOnly);
	P_GET_UBOOL(Z_Param_bSecureServersOnly);
	P_GET_UBOOL(Z_Param_bSearchLobbies);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinSlotsAvailable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFindSessionsCallbackProxyAdvanced**)Z_Param__Result=UFindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults,Z_Param_bUseLAN,EBPServerPresenceSearchType(Z_Param_ServerTypeToSearch),Z_Param_Out_Filters,Z_Param_bEmptyServersOnly,Z_Param_bNonEmptyServersOnly,Z_Param_bSecureServersOnly,Z_Param_bSearchLobbies,Z_Param_MinSlotsAvailable);
	P_NATIVE_END;
}
// End Class UFindSessionsCallbackProxyAdvanced Function FindSessionsAdvanced

// Begin Class UFindSessionsCallbackProxyAdvanced
void UFindSessionsCallbackProxyAdvanced::StaticRegisterNativesUFindSessionsCallbackProxyAdvanced()
{
	UClass* Class = UFindSessionsCallbackProxyAdvanced::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FilterSessionResults", &UFindSessionsCallbackProxyAdvanced::execFilterSessionResults },
		{ "FindSessionsAdvanced", &UFindSessionsCallbackProxyAdvanced::execFindSessionsAdvanced },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindSessionsCallbackProxyAdvanced);
UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister()
{
	return UFindSessionsCallbackProxyAdvanced::StaticClass();
}
struct Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FindSessionsCallbackProxyAdvanced.h" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is a successful query\n" },
#endif
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is a successful query" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is an unsuccessful query\n" },
#endif
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is an unsuccessful query" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults, "FilterSessionResults" }, // 4257568150
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced, "FindSessionsAdvanced" }, // 885134023
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindSessionsCallbackProxyAdvanced>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFindSessionsCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 367169487
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFindSessionsCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 367169487
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::ClassParams = {
	&UFindSessionsCallbackProxyAdvanced::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::Class_MetaDataParams), Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced()
{
	if (!Z_Registration_Info_UClass_UFindSessionsCallbackProxyAdvanced.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindSessionsCallbackProxyAdvanced.OuterSingleton, Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFindSessionsCallbackProxyAdvanced.OuterSingleton;
}
template<> ADVANCEDSESSIONS_API UClass* StaticClass<UFindSessionsCallbackProxyAdvanced>()
{
	return UFindSessionsCallbackProxyAdvanced::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFindSessionsCallbackProxyAdvanced);
UFindSessionsCallbackProxyAdvanced::~UFindSessionsCallbackProxyAdvanced() {}
// End Class UFindSessionsCallbackProxyAdvanced

// Begin Registration
struct Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, UFindSessionsCallbackProxyAdvanced::StaticClass, TEXT("UFindSessionsCallbackProxyAdvanced"), &Z_Registration_Info_UClass_UFindSessionsCallbackProxyAdvanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindSessionsCallbackProxyAdvanced), 3048125255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_4029607848(TEXT("/Script/AdvancedSessions"),
	Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
