// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorAnimationSystemDev/Public/MASFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMASFunctionLibrary() {}
// Cross Module References
	MIRRORANIMATIONSYSTEMDEV_API UClass* Z_Construct_UClass_UMASFunctionLibrary_NoRegister();
	MIRRORANIMATIONSYSTEMDEV_API UClass* Z_Construct_UClass_UMASFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MirrorAnimationSystemDev();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	MIRRORANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UMirrorTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMASFunctionLibrary::execBulkMirror_CS_EditorOnly)
	{
		P_GET_TARRAY(UAnimSequence*,Z_Param_Anims);
		P_GET_PROPERTY(FByteProperty,Z_Param_MirrorAxis);
		P_GET_PROPERTY(FStrProperty,Z_Param_Substring_A);
		P_GET_PROPERTY(FStrProperty,Z_Param_Substring_B);
		P_GET_UBOOL(Z_Param_Symmetrical);
		P_GET_TARRAY_REF(UAnimSequence*,Z_Param_Out_OutNewAnims);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMASFunctionLibrary::BulkMirror_CS_EditorOnly(Z_Param_Anims,EAxis::Type(Z_Param_MirrorAxis),Z_Param_Substring_A,Z_Param_Substring_B,Z_Param_Symmetrical,Z_Param_Out_OutNewAnims);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMASFunctionLibrary::execBulkMirrorEditorOnly)
	{
		P_GET_TARRAY(UAnimSequence*,Z_Param_Anims);
		P_GET_OBJECT(UMirrorTable,Z_Param_MirrorTable);
		P_GET_TARRAY_REF(UAnimSequence*,Z_Param_Out_OutNewAnims);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMASFunctionLibrary::BulkMirrorEditorOnly(Z_Param_Anims,Z_Param_MirrorTable,Z_Param_Out_OutNewAnims);
		P_NATIVE_END;
	}
	void UMASFunctionLibrary::StaticRegisterNativesUMASFunctionLibrary()
	{
		UClass* Class = UMASFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BulkMirror_CS_EditorOnly", &UMASFunctionLibrary::execBulkMirror_CS_EditorOnly },
			{ "BulkMirrorEditorOnly", &UMASFunctionLibrary::execBulkMirrorEditorOnly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics
	{
		struct MASFunctionLibrary_eventBulkMirror_CS_EditorOnly_Parms
		{
			TArray<UAnimSequence*> Anims;
			TEnumAsByte<EAxis::Type> MirrorAxis;
			FString Substring_A;
			FString Substring_B;
			bool Symmetrical;
			TArray<UAnimSequence*> OutNewAnims;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anims_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anims_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Anims;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Substring_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Substring_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Substring_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Substring_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Symmetrical_MetaData[];
#endif
		static void NewProp_Symmetrical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Symmetrical;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutNewAnims_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewAnims;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Anims_Inner = { "Anims", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Anims_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Anims = { "Anims", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MASFunctionLibrary_eventBulkMirror_CS_EditorOnly_Parms, Anims), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Anims_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Anims_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MASFunctionLibrary_eventBulkMirror_CS_EditorOnly_Parms, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_MirrorAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Substring_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Substring_A = { "Substring_A", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MASFunctionLibrary_eventBulkMirror_CS_EditorOnly_Parms, Substring_A), METADATA_PARAMS(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Substring_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Substring_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Substring_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Substring_B = { "Substring_B", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MASFunctionLibrary_eventBulkMirror_CS_EditorOnly_Parms, Substring_B), METADATA_PARAMS(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Substring_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Substring_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Symmetrical_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Symmetrical_SetBit(void* Obj)
	{
		((MASFunctionLibrary_eventBulkMirror_CS_EditorOnly_Parms*)Obj)->Symmetrical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Symmetrical = { "Symmetrical", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MASFunctionLibrary_eventBulkMirror_CS_EditorOnly_Parms), &Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Symmetrical_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Symmetrical_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Symmetrical_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_OutNewAnims_Inner = { "OutNewAnims", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_OutNewAnims = { "OutNewAnims", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MASFunctionLibrary_eventBulkMirror_CS_EditorOnly_Parms, OutNewAnims), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Anims_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Anims,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_MirrorAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Substring_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Substring_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_Symmetrical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_OutNewAnims_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::NewProp_OutNewAnims,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/MASFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMASFunctionLibrary, nullptr, "BulkMirror_CS_EditorOnly", nullptr, nullptr, sizeof(MASFunctionLibrary_eventBulkMirror_CS_EditorOnly_Parms), Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics
	{
		struct MASFunctionLibrary_eventBulkMirrorEditorOnly_Parms
		{
			TArray<UAnimSequence*> Anims;
			const UMirrorTable* MirrorTable;
			TArray<UAnimSequence*> OutNewAnims;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anims_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anims_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Anims;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MirrorTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutNewAnims_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewAnims;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_Anims_Inner = { "Anims", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_Anims_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_Anims = { "Anims", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MASFunctionLibrary_eventBulkMirrorEditorOnly_Parms, Anims), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_Anims_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_Anims_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_MirrorTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_MirrorTable = { "MirrorTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MASFunctionLibrary_eventBulkMirrorEditorOnly_Parms, MirrorTable), Z_Construct_UClass_UMirrorTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_MirrorTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_MirrorTable_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_OutNewAnims_Inner = { "OutNewAnims", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_OutNewAnims = { "OutNewAnims", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MASFunctionLibrary_eventBulkMirrorEditorOnly_Parms, OutNewAnims), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_Anims_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_Anims,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_MirrorTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_OutNewAnims_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::NewProp_OutNewAnims,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/MASFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMASFunctionLibrary, nullptr, "BulkMirrorEditorOnly", nullptr, nullptr, sizeof(MASFunctionLibrary_eventBulkMirrorEditorOnly_Parms), Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMASFunctionLibrary_NoRegister()
	{
		return UMASFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMASFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMASFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MirrorAnimationSystemDev,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMASFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMASFunctionLibrary_BulkMirror_CS_EditorOnly, "BulkMirror_CS_EditorOnly" }, // 2227991545
		{ &Z_Construct_UFunction_UMASFunctionLibrary_BulkMirrorEditorOnly, "BulkMirrorEditorOnly" }, // 54549020
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMASFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MASFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MASFunctionLibrary.h" },
		{ "ScriptName", "MirrorLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMASFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMASFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMASFunctionLibrary_Statics::ClassParams = {
		&UMASFunctionLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMASFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMASFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMASFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMASFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMASFunctionLibrary, 3281242228);
	template<> MIRRORANIMATIONSYSTEMDEV_API UClass* StaticClass<UMASFunctionLibrary>()
	{
		return UMASFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMASFunctionLibrary(Z_Construct_UClass_UMASFunctionLibrary, &UMASFunctionLibrary::StaticClass, TEXT("/Script/MirrorAnimationSystemDev"), TEXT("UMASFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMASFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
