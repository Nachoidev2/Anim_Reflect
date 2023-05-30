// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorAnimationSystem/Public/ExtCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtCharacterMovementComponent() {}
// Cross Module References
	MIRRORANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UExtCharacterMovementComponent_NoRegister();
	MIRRORANIMATIONSYSTEM_API UClass* Z_Construct_UClass_UExtCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_MirrorAnimationSystem();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
// End Cross Module References
	void UExtCharacterMovementComponent::StaticRegisterNativesUExtCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UExtCharacterMovementComponent_NoRegister()
	{
		return UExtCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExtCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorRootMotion_MetaData[];
#endif
		static void NewProp_MirrorRootMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MirrorRootMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlipAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MirrorAnimationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*CharacterMovementComponent Class just carries the Mirror Root Motion parameters and applies them when root motion is received from an animation*/" },
		{ "IncludePath", "ExtCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/ExtCharacterMovementComponent.h" },
		{ "ToolTip", "CharacterMovementComponent Class just carries the Mirror Root Motion parameters and applies them when root motion is received from an animation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorRootMotion_MetaData[] = {
		{ "Category", "Character Movement: Root Motion" },
		{ "ModuleRelativePath", "Public/ExtCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorRootMotion_SetBit(void* Obj)
	{
		((UExtCharacterMovementComponent*)Obj)->MirrorRootMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorRootMotion = { "MirrorRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExtCharacterMovementComponent), &Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorRootMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Character Movement: Root Motion" },
		{ "ModuleRelativePath", "Public/ExtCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExtCharacterMovementComponent, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_FlipAxis_MetaData[] = {
		{ "Category", "Character Movement: Root Motion" },
		{ "ModuleRelativePath", "Public/ExtCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_FlipAxis = { "FlipAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExtCharacterMovementComponent, FlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_FlipAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_FlipAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExtCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorRootMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_MirrorAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtCharacterMovementComponent_Statics::NewProp_FlipAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExtCharacterMovementComponent_Statics::ClassParams = {
		&UExtCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExtCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExtCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UExtCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExtCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExtCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExtCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExtCharacterMovementComponent, 1216486335);
	template<> MIRRORANIMATIONSYSTEM_API UClass* StaticClass<UExtCharacterMovementComponent>()
	{
		return UExtCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExtCharacterMovementComponent(Z_Construct_UClass_UExtCharacterMovementComponent, &UExtCharacterMovementComponent::StaticClass, TEXT("/Script/MirrorAnimationSystem"), TEXT("UExtCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
