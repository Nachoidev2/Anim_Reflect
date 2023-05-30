// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorAnimationSystem/Public/AnimNode_Mirror.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Mirror() {}
// Cross Module References
	MIRRORANIMATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror();
	UPackage* Z_Construct_UPackage__Script_MirrorAnimationSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	MIRRORANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UMirrorTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_Mirror>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_Mirror cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FAnimNode_Mirror::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MIRRORANIMATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror, Z_Construct_UPackage__Script_MirrorAnimationSystem(), TEXT("AnimNode_Mirror"), sizeof(FAnimNode_Mirror), Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_Hash());
	}
	return Singleton;
}
template<> MIRRORANIMATIONSYSTEM_API UScriptStruct* StaticStruct<FAnimNode_Mirror>()
{
	return FAnimNode_Mirror::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Mirror(FAnimNode_Mirror::StaticStruct, TEXT("/Script/MirrorAnimationSystem"), TEXT("AnimNode_Mirror"), false, nullptr, nullptr);
static struct FScriptStruct_MirrorAnimationSystem_StaticRegisterNativesFAnimNode_Mirror
{
	FScriptStruct_MirrorAnimationSystem_StaticRegisterNativesFAnimNode_Mirror()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_Mirror>(FName(TEXT("AnimNode_Mirror")));
	}
} ScriptStruct_MirrorAnimationSystem_StaticRegisterNativesFAnimNode_Mirror;
	struct Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MirrorTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*Runtime code for the AnimGraph Node Mirror Pose, \ntakes in a pose in local space and Mirrors each bone according to a Mirror Table*/" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "ToolTip", "Runtime code for the AnimGraph Node Mirror Pose,\ntakes in a pose in local space and Mirrors each bone according to a Mirror Table" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Mirror>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Mirror, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BasePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorTable_MetaData[] = {
		{ "Category", "MirrorTable" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorTable = { "MirrorTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Mirror, MirrorTable), Z_Construct_UClass_UMirrorTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BasePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MirrorAnimationSystem,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_Mirror",
		sizeof(FAnimNode_Mirror),
		alignof(FAnimNode_Mirror),
		Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MirrorAnimationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Mirror"), sizeof(FAnimNode_Mirror), Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_Hash() { return 3568679523U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
