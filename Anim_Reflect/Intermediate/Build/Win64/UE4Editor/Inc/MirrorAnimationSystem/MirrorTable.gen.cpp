// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorAnimationSystem/Public/MirrorTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorTable() {}
// Cross Module References
	MIRRORANIMATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMirrorBone();
	UPackage* Z_Construct_UPackage__Script_MirrorAnimationSystem();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MIRRORANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UMirrorTable_NoRegister();
	MIRRORANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UMirrorTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FMirrorBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MIRRORANIMATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FMirrorBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMirrorBone, Z_Construct_UPackage__Script_MirrorAnimationSystem(), TEXT("MirrorBone"), sizeof(FMirrorBone), Get_Z_Construct_UScriptStruct_FMirrorBone_Hash());
	}
	return Singleton;
}
template<> MIRRORANIMATIONSYSTEM_API UScriptStruct* StaticStruct<FMirrorBone>()
{
	return FMirrorBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMirrorBone(FMirrorBone::StaticStruct, TEXT("/Script/MirrorAnimationSystem"), TEXT("MirrorBone"), false, nullptr, nullptr);
static struct FScriptStruct_MirrorAnimationSystem_StaticRegisterNativesFMirrorBone
{
	FScriptStruct_MirrorAnimationSystem_StaticRegisterNativesFMirrorBone()
	{
		UScriptStruct::DeferCppStructOps<FMirrorBone>(FName(TEXT("MirrorBone")));
	}
} ScriptStruct_MirrorAnimationSystem_StaticRegisterNativesFMirrorBone;
	struct Z_Construct_UScriptStruct_FMirrorBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlipAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTwinBone_MetaData[];
#endif
		static void NewProp_IsTwinBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTwinBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwinBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TwinBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorTranslation_MetaData[];
#endif
		static void NewProp_MirrorTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MirrorTranslation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Struct that contains the setup data for Mirroring a single bone or a pair of bones*/" },
		{ "ModuleRelativePath", "Public/MirrorTable.h" },
		{ "ToolTip", "Struct that contains the setup data for Mirroring a single bone or a pair of bones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMirrorBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMirrorBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "MirrorAnimation" },
		{ "ModuleRelativePath", "Public/MirrorTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMirrorBone, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "MirrorAnimation" },
		{ "ModuleRelativePath", "Public/MirrorTable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMirrorBone, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_FlipAxis_MetaData[] = {
		{ "Category", "MirrorAnimation" },
		{ "ModuleRelativePath", "Public/MirrorTable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_FlipAxis = { "FlipAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMirrorBone, FlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_FlipAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_FlipAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "MirrorAnimation" },
		{ "ModuleRelativePath", "Public/MirrorTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMirrorBone, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_IsTwinBone_MetaData[] = {
		{ "Category", "MirrorAnimation" },
		{ "ModuleRelativePath", "Public/MirrorTable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_IsTwinBone_SetBit(void* Obj)
	{
		((FMirrorBone*)Obj)->IsTwinBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_IsTwinBone = { "IsTwinBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMirrorBone), &Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_IsTwinBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_IsTwinBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_IsTwinBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_TwinBoneName_MetaData[] = {
		{ "Category", "MirrorAnimation" },
		{ "ModuleRelativePath", "Public/MirrorTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_TwinBoneName = { "TwinBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMirrorBone, TwinBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_TwinBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_TwinBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorTranslation_MetaData[] = {
		{ "Category", "MirrorAnimation" },
		{ "ModuleRelativePath", "Public/MirrorTable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorTranslation_SetBit(void* Obj)
	{
		((FMirrorBone*)Obj)->MirrorTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorTranslation = { "MirrorTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMirrorBone), &Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorTranslation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMirrorBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_FlipAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_IsTwinBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_TwinBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorBone_Statics::NewProp_MirrorTranslation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMirrorBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MirrorAnimationSystem,
		nullptr,
		&NewStructOps,
		"MirrorBone",
		sizeof(FMirrorBone),
		alignof(FMirrorBone),
		Z_Construct_UScriptStruct_FMirrorBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMirrorBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMirrorBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMirrorBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MirrorAnimationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MirrorBone"), sizeof(FMirrorBone), Get_Z_Construct_UScriptStruct_FMirrorBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMirrorBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMirrorBone_Hash() { return 1854038668U; }
	void UMirrorTable::StaticRegisterNativesUMirrorTable()
	{
	}
	UClass* Z_Construct_UClass_UMirrorTable_NoRegister()
	{
		return UMirrorTable::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MirrorBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MirrorBones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MirrorAnimationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorTable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*Data asset class that holds the MirrorBone's parameters for an entire skeleton, \nthis class is used for both the Mirror Pose Animgraph Node and when selecting a Mirror Table inside the Mirror AnimAsset dialog*/" },
		{ "IncludePath", "MirrorTable.h" },
		{ "ModuleRelativePath", "Public/MirrorTable.h" },
		{ "ToolTip", "Data asset class that holds the MirrorBone's parameters for an entire skeleton,\nthis class is used for both the Mirror Pose Animgraph Node and when selecting a Mirror Table inside the Mirror AnimAsset dialog" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMirrorTable_Statics::NewProp_MirrorBones_Inner = { "MirrorBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMirrorBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorTable_Statics::NewProp_MirrorBones_MetaData[] = {
		{ "Category", "MirrorBoneSettings" },
		{ "ModuleRelativePath", "Public/MirrorTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMirrorTable_Statics::NewProp_MirrorBones = { "MirrorBones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMirrorTable, MirrorBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMirrorTable_Statics::NewProp_MirrorBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTable_Statics::NewProp_MirrorBones_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTable_Statics::NewProp_MirrorBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTable_Statics::NewProp_MirrorBones,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMirrorTable_Statics::ClassParams = {
		&UMirrorTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMirrorTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMirrorTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMirrorTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMirrorTable, 2163196340);
	template<> MIRRORANIMATIONSYSTEM_API UClass* StaticClass<UMirrorTable>()
	{
		return UMirrorTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMirrorTable(Z_Construct_UClass_UMirrorTable, &UMirrorTable::StaticClass, TEXT("/Script/MirrorAnimationSystem"), TEXT("UMirrorTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
