// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AdvancedFriendsLibrary.h"
#include "../../../SteamTemplate/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/BlueprintDataDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedFriendsLibrary() {}

// Begin Cross Module References
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsLibrary();
ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsLibrary_NoRegister();
ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo();
ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer();
ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References

// Begin Class UAdvancedFriendsLibrary Function GetFriend
struct Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics
{
	struct AdvancedFriendsLibrary_eventGetFriend_Parms
	{
		APlayerController* PlayerController;
		FBPUniqueNetId FriendUniqueNetId;
		FBPFriendInfo Friend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedFriends|FriendsList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a friend from the previously read/saved friends list (Must Call GetFriends first for this to return anything)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedFriendsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a friend from the previously read/saved friends list (Must Call GetFriends first for this to return anything)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendUniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendUniqueNetId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Friend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventGetFriend_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::NewProp_FriendUniqueNetId = { "FriendUniqueNetId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventGetFriend_Parms, FriendUniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendUniqueNetId_MetaData), NewProp_FriendUniqueNetId_MetaData) }; // 700456651
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::NewProp_Friend = { "Friend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventGetFriend_Parms, Friend), Z_Construct_UScriptStruct_FBPFriendInfo, METADATA_PARAMS(0, nullptr) }; // 3265087352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::NewProp_FriendUniqueNetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::NewProp_Friend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsLibrary, nullptr, "GetFriend", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::AdvancedFriendsLibrary_eventGetFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::AdvancedFriendsLibrary_eventGetFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedFriendsLibrary::execGetFriend)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_STRUCT(FBPUniqueNetId,Z_Param_FriendUniqueNetId);
	P_GET_STRUCT_REF(FBPFriendInfo,Z_Param_Out_Friend);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAdvancedFriendsLibrary::GetFriend(Z_Param_PlayerController,Z_Param_FriendUniqueNetId,Z_Param_Out_Friend);
	P_NATIVE_END;
}
// End Class UAdvancedFriendsLibrary Function GetFriend

// Begin Class UAdvancedFriendsLibrary Function GetStoredFriendsList
struct Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics
{
	struct AdvancedFriendsLibrary_eventGetStoredFriendsList_Parms
	{
		APlayerController* PlayerController;
		TArray<FBPFriendInfo> FriendsList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedFriends|FriendsList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the previously read/saved friends list (Must Call GetFriends first for this to return anything)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedFriendsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the previously read/saved friends list (Must Call GetFriends first for this to return anything)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FriendsList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventGetStoredFriendsList_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::NewProp_FriendsList_Inner = { "FriendsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPFriendInfo, METADATA_PARAMS(0, nullptr) }; // 3265087352
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::NewProp_FriendsList = { "FriendsList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventGetStoredFriendsList_Parms, FriendsList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3265087352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::NewProp_FriendsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::NewProp_FriendsList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsLibrary, nullptr, "GetStoredFriendsList", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::AdvancedFriendsLibrary_eventGetStoredFriendsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::AdvancedFriendsLibrary_eventGetStoredFriendsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedFriendsLibrary::execGetStoredFriendsList)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_TARRAY_REF(FBPFriendInfo,Z_Param_Out_FriendsList);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAdvancedFriendsLibrary::GetStoredFriendsList(Z_Param_PlayerController,Z_Param_Out_FriendsList);
	P_NATIVE_END;
}
// End Class UAdvancedFriendsLibrary Function GetStoredFriendsList

// Begin Class UAdvancedFriendsLibrary Function GetStoredRecentPlayersList
struct Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics
{
	struct AdvancedFriendsLibrary_eventGetStoredRecentPlayersList_Parms
	{
		FBPUniqueNetId UniqueNetId;
		TArray<FBPOnlineRecentPlayer> PlayersList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedFriends|RecentPlayersList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the previously read/saved recent players list (Must Call GetRecentPlayers first for this to return anything)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedFriendsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the previously read/saved recent players list (Must Call GetRecentPlayers first for this to return anything)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayersList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayersList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventGetStoredRecentPlayersList_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 700456651
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::NewProp_PlayersList_Inner = { "PlayersList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPOnlineRecentPlayer, METADATA_PARAMS(0, nullptr) }; // 2416626344
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::NewProp_PlayersList = { "PlayersList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventGetStoredRecentPlayersList_Parms, PlayersList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2416626344
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::NewProp_UniqueNetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::NewProp_PlayersList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::NewProp_PlayersList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsLibrary, nullptr, "GetStoredRecentPlayersList", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::AdvancedFriendsLibrary_eventGetStoredRecentPlayersList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::AdvancedFriendsLibrary_eventGetStoredRecentPlayersList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedFriendsLibrary::execGetStoredRecentPlayersList)
{
	P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId);
	P_GET_TARRAY_REF(FBPOnlineRecentPlayer,Z_Param_Out_PlayersList);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAdvancedFriendsLibrary::GetStoredRecentPlayersList(Z_Param_UniqueNetId,Z_Param_Out_PlayersList);
	P_NATIVE_END;
}
// End Class UAdvancedFriendsLibrary Function GetStoredRecentPlayersList

// Begin Class UAdvancedFriendsLibrary Function IsAFriend
struct Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics
{
	struct AdvancedFriendsLibrary_eventIsAFriend_Parms
	{
		APlayerController* PlayerController;
		FBPUniqueNetId UniqueNetId;
		bool IsFriend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedFriends|FriendsList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if a UniqueNetId is a friend\n" },
#endif
		{ "ModuleRelativePath", "Classes/AdvancedFriendsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a UniqueNetId is a friend" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
	static void NewProp_IsFriend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFriend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventIsAFriend_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventIsAFriend_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueNetId_MetaData), NewProp_UniqueNetId_MetaData) }; // 700456651
void Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::NewProp_IsFriend_SetBit(void* Obj)
{
	((AdvancedFriendsLibrary_eventIsAFriend_Parms*)Obj)->IsFriend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::NewProp_IsFriend = { "IsFriend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AdvancedFriendsLibrary_eventIsAFriend_Parms), &Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::NewProp_IsFriend_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::NewProp_UniqueNetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::NewProp_IsFriend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsLibrary, nullptr, "IsAFriend", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::AdvancedFriendsLibrary_eventIsAFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::AdvancedFriendsLibrary_eventIsAFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedFriendsLibrary::execIsAFriend)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId);
	P_GET_UBOOL_REF(Z_Param_Out_IsFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAdvancedFriendsLibrary::IsAFriend(Z_Param_PlayerController,Z_Param_UniqueNetId,Z_Param_Out_IsFriend);
	P_NATIVE_END;
}
// End Class UAdvancedFriendsLibrary Function IsAFriend

// Begin Class UAdvancedFriendsLibrary Function SendSessionInviteToFriend
struct Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics
{
	struct AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms
	{
		APlayerController* PlayerController;
		FBPUniqueNetId FriendUniqueNetId;
		EBlueprintResultSwitch Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedFriends|FriendsList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sends an Invite to the current online session to a friend\n" },
#endif
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sends an Invite to the current online session to a friend" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendUniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendUniqueNetId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::NewProp_FriendUniqueNetId = { "FriendUniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms, FriendUniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendUniqueNetId_MetaData), NewProp_FriendUniqueNetId_MetaData) }; // 700456651
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(0, nullptr) }; // 1157740906
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::NewProp_FriendUniqueNetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsLibrary, nullptr, "SendSessionInviteToFriend", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::AdvancedFriendsLibrary_eventSendSessionInviteToFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedFriendsLibrary::execSendSessionInviteToFriend)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_FriendUniqueNetId);
	P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAdvancedFriendsLibrary::SendSessionInviteToFriend(Z_Param_PlayerController,Z_Param_Out_FriendUniqueNetId,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UAdvancedFriendsLibrary Function SendSessionInviteToFriend

// Begin Class UAdvancedFriendsLibrary Function SendSessionInviteToFriends
struct Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics
{
	struct AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms
	{
		APlayerController* PlayerController;
		TArray<FBPUniqueNetId> Friends;
		EBlueprintResultSwitch Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedFriends|FriendsList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sends an Invite to the current online session to a list of friends\n" },
#endif
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sends an Invite to the current online session to a list of friends" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friends_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Friends_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Friends;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::NewProp_Friends_Inner = { "Friends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(0, nullptr) }; // 700456651
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::NewProp_Friends = { "Friends", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms, Friends), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friends_MetaData), NewProp_Friends_MetaData) }; // 700456651
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(0, nullptr) }; // 1157740906
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::NewProp_Friends_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::NewProp_Friends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsLibrary, nullptr, "SendSessionInviteToFriends", nullptr, nullptr, Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::AdvancedFriendsLibrary_eventSendSessionInviteToFriends_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAdvancedFriendsLibrary::execSendSessionInviteToFriends)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_TARRAY_REF(FBPUniqueNetId,Z_Param_Out_Friends);
	P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAdvancedFriendsLibrary::SendSessionInviteToFriends(Z_Param_PlayerController,Z_Param_Out_Friends,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UAdvancedFriendsLibrary Function SendSessionInviteToFriends

// Begin Class UAdvancedFriendsLibrary
void UAdvancedFriendsLibrary::StaticRegisterNativesUAdvancedFriendsLibrary()
{
	UClass* Class = UAdvancedFriendsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFriend", &UAdvancedFriendsLibrary::execGetFriend },
		{ "GetStoredFriendsList", &UAdvancedFriendsLibrary::execGetStoredFriendsList },
		{ "GetStoredRecentPlayersList", &UAdvancedFriendsLibrary::execGetStoredRecentPlayersList },
		{ "IsAFriend", &UAdvancedFriendsLibrary::execIsAFriend },
		{ "SendSessionInviteToFriend", &UAdvancedFriendsLibrary::execSendSessionInviteToFriend },
		{ "SendSessionInviteToFriends", &UAdvancedFriendsLibrary::execSendSessionInviteToFriends },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedFriendsLibrary);
UClass* Z_Construct_UClass_UAdvancedFriendsLibrary_NoRegister()
{
	return UAdvancedFriendsLibrary::StaticClass();
}
struct Z_Construct_UClass_UAdvancedFriendsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedFriendsLibrary.h" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedFriendsLibrary_GetFriend, "GetFriend" }, // 2884153380
		{ &Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredFriendsList, "GetStoredFriendsList" }, // 3655255204
		{ &Z_Construct_UFunction_UAdvancedFriendsLibrary_GetStoredRecentPlayersList, "GetStoredRecentPlayersList" }, // 1650288006
		{ &Z_Construct_UFunction_UAdvancedFriendsLibrary_IsAFriend, "IsAFriend" }, // 3592172979
		{ &Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriend, "SendSessionInviteToFriend" }, // 2581767559
		{ &Z_Construct_UFunction_UAdvancedFriendsLibrary_SendSessionInviteToFriends, "SendSessionInviteToFriends" }, // 121423962
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedFriendsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAdvancedFriendsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedFriendsLibrary_Statics::ClassParams = {
	&UAdvancedFriendsLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedFriendsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAdvancedFriendsLibrary()
{
	if (!Z_Registration_Info_UClass_UAdvancedFriendsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedFriendsLibrary.OuterSingleton, Z_Construct_UClass_UAdvancedFriendsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAdvancedFriendsLibrary.OuterSingleton;
}
template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAdvancedFriendsLibrary>()
{
	return UAdvancedFriendsLibrary::StaticClass();
}
UAdvancedFriendsLibrary::UAdvancedFriendsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFriendsLibrary);
UAdvancedFriendsLibrary::~UAdvancedFriendsLibrary() {}
// End Class UAdvancedFriendsLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedFriendsLibrary, UAdvancedFriendsLibrary::StaticClass, TEXT("UAdvancedFriendsLibrary"), &Z_Registration_Info_UClass_UAdvancedFriendsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedFriendsLibrary), 682237511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_1138374442(TEXT("/Script/AdvancedSessions"),
	Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamTemplate_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
