// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorAnimationSystemEditor/Public/AnimGraphNode_MirrorCS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_MirrorCS() {}
// Cross Module References
	MIRRORANIMATIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_MirrorCS_NoRegister();
	MIRRORANIMATIONSYSTEMEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_MirrorCS();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_MirrorAnimationSystemEditor();
	MIRRORANIMATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MirrorCS();
// End Cross Module References
	void UAnimGraphNode_MirrorCS::StaticRegisterNativesUAnimGraphNode_MirrorCS()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_MirrorCS_NoRegister()
	{
		return UAnimGraphNode_MirrorCS::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MirrorAnimationSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*class that holds Editor version of the AnimGraph Node Mirror Pose, along its tittle, tooltip, Node Color, and the category of the node*/" },
		{ "IncludePath", "AnimGraphNode_MirrorCS.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_MirrorCS.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "class that holds Editor version of the AnimGraph Node Mirror Pose, along its tittle, tooltip, Node Color, and the category of the node" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_MirrorCS.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_MirrorCS, Node), Z_Construct_UScriptStruct_FAnimNode_MirrorCS, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_MirrorCS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::ClassParams = {
		&UAnimGraphNode_MirrorCS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_MirrorCS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_MirrorCS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_MirrorCS, 4250567279);
	template<> MIRRORANIMATIONSYSTEMEDITOR_API UClass* StaticClass<UAnimGraphNode_MirrorCS>()
	{
		return UAnimGraphNode_MirrorCS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_MirrorCS(Z_Construct_UClass_UAnimGraphNode_MirrorCS, &UAnimGraphNode_MirrorCS::StaticClass, TEXT("/Script/MirrorAnimationSystemEditor"), TEXT("UAnimGraphNode_MirrorCS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_MirrorCS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
