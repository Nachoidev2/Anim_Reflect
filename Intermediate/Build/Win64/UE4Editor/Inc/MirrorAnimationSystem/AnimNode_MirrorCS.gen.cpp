// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorAnimationSystem/Public/AnimNode_MirrorCS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MirrorCS() {}
// Cross Module References
	MIRRORANIMATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MirrorCS();
	UPackage* Z_Construct_UPackage__Script_MirrorAnimationSystem();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_MirrorCS>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_MirrorCS cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_MirrorCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MIRRORANIMATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MirrorCS, Z_Construct_UPackage__Script_MirrorAnimationSystem(), TEXT("AnimNode_MirrorCS"), sizeof(FAnimNode_MirrorCS), Get_Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Hash());
	}
	return Singleton;
}
template<> MIRRORANIMATIONSYSTEM_API UScriptStruct* StaticStruct<FAnimNode_MirrorCS>()
{
	return FAnimNode_MirrorCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_MirrorCS(FAnimNode_MirrorCS::StaticStruct, TEXT("/Script/MirrorAnimationSystem"), TEXT("AnimNode_MirrorCS"), false, nullptr, nullptr);
static struct FScriptStruct_MirrorAnimationSystem_StaticRegisterNativesFAnimNode_MirrorCS
{
	FScriptStruct_MirrorAnimationSystem_StaticRegisterNativesFAnimNode_MirrorCS()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_MirrorCS>(FName(TEXT("AnimNode_MirrorCS")));
	}
} ScriptStruct_MirrorAnimationSystem_StaticRegisterNativesFAnimNode_MirrorCS;
	struct Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletlySymmetrical_MetaData[];
#endif
		static void NewProp_CompletlySymmetrical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompletlySymmetrical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Substring_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Substring_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Substring_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Substring_B;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Component Space version of the Mirror Pose node.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_MirrorCS.h" },
		{ "ToolTip", "Component Space version of the Mirror Pose node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MirrorCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "MirrorSettings" },
		{ "ModuleRelativePath", "Public/AnimNode_MirrorCS.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MirrorCS, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_MirrorAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_CompletlySymmetrical_MetaData[] = {
		{ "Category", "MirrorSettings" },
		{ "ModuleRelativePath", "Public/AnimNode_MirrorCS.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_CompletlySymmetrical_SetBit(void* Obj)
	{
		((FAnimNode_MirrorCS*)Obj)->CompletlySymmetrical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_CompletlySymmetrical = { "CompletlySymmetrical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_MirrorCS), &Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_CompletlySymmetrical_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_CompletlySymmetrical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_CompletlySymmetrical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_Substring_A_MetaData[] = {
		{ "Category", "MirrorBones" },
		{ "ModuleRelativePath", "Public/AnimNode_MirrorCS.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_Substring_A = { "Substring_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MirrorCS, Substring_A), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_Substring_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_Substring_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_Substring_B_MetaData[] = {
		{ "Category", "MirrorBones" },
		{ "ModuleRelativePath", "Public/AnimNode_MirrorCS.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_Substring_B = { "Substring_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MirrorCS, Substring_B), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_Substring_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_Substring_B_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_MirrorAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_CompletlySymmetrical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_Substring_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::NewProp_Substring_B,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MirrorAnimationSystem,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_MirrorCS",
		sizeof(FAnimNode_MirrorCS),
		alignof(FAnimNode_MirrorCS),
		Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MirrorCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MirrorAnimationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_MirrorCS"), sizeof(FAnimNode_MirrorCS), Get_Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MirrorCS_Hash() { return 3040200659U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
