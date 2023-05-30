// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorAnimationSystemEditor/Public/MirrorAnimAssetSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorAnimAssetSettings() {}
// Cross Module References
	MIRRORANIMATIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UMirrorAnimAssetSettings_NoRegister();
	MIRRORANIMATIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UMirrorAnimAssetSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MirrorAnimationSystemEditor();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	MIRRORANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UMirrorTable_NoRegister();
// End Cross Module References
	void UMirrorAnimAssetSettings::StaticRegisterNativesUMirrorAnimAssetSettings()
	{
	}
	UClass* Z_Construct_UClass_UMirrorAnimAssetSettings_NoRegister()
	{
		return UMirrorAnimAssetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorAnimAssetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MirrorTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MirrorAnimationSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*class used in Mirror AnimAsset Dialog for choosing the Mirror Table asset in a details view*/" },
		{ "IncludePath", "MirrorAnimAssetSettings.h" },
		{ "ModuleRelativePath", "Public/MirrorAnimAssetSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "class used in Mirror AnimAsset Dialog for choosing the Mirror Table asset in a details view" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "ComponentSpaceMirrorSettings" },
		{ "ModuleRelativePath", "Public/MirrorAnimAssetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMirrorAnimAssetSettings, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_MirrorAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_CompletlySymmetrical_MetaData[] = {
		{ "Category", "ComponentSpaceMirrorSettings" },
		{ "ModuleRelativePath", "Public/MirrorAnimAssetSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_CompletlySymmetrical_SetBit(void* Obj)
	{
		((UMirrorAnimAssetSettings*)Obj)->CompletlySymmetrical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_CompletlySymmetrical = { "CompletlySymmetrical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMirrorAnimAssetSettings), &Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_CompletlySymmetrical_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_CompletlySymmetrical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_CompletlySymmetrical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_Substring_A_MetaData[] = {
		{ "Category", "ComponentSpaceMirrorSettings" },
		{ "ModuleRelativePath", "Public/MirrorAnimAssetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_Substring_A = { "Substring_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMirrorAnimAssetSettings, Substring_A), METADATA_PARAMS(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_Substring_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_Substring_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_Substring_B_MetaData[] = {
		{ "Category", "ComponentSpaceMirrorSettings" },
		{ "ModuleRelativePath", "Public/MirrorAnimAssetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_Substring_B = { "Substring_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMirrorAnimAssetSettings, Substring_B), METADATA_PARAMS(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_Substring_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_Substring_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_MirrorTable_MetaData[] = {
		{ "Category", "BoneSpaceMirrorSettings" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/MirrorAnimAssetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_MirrorTable = { "MirrorTable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMirrorAnimAssetSettings, MirrorTable), Z_Construct_UClass_UMirrorTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_MirrorTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_MirrorTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_MirrorAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_CompletlySymmetrical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_Substring_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_Substring_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::NewProp_MirrorTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorAnimAssetSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::ClassParams = {
		&UMirrorAnimAssetSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorAnimAssetSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMirrorAnimAssetSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMirrorAnimAssetSettings, 2130124879);
	template<> MIRRORANIMATIONSYSTEMEDITOR_API UClass* StaticClass<UMirrorAnimAssetSettings>()
	{
		return UMirrorAnimAssetSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMirrorAnimAssetSettings(Z_Construct_UClass_UMirrorAnimAssetSettings, &UMirrorAnimAssetSettings::StaticClass, TEXT("/Script/MirrorAnimationSystemEditor"), TEXT("UMirrorAnimAssetSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorAnimAssetSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
