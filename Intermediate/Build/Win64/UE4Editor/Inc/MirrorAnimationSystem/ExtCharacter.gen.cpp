// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorAnimationSystem/Public/ExtCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtCharacter() {}
// Cross Module References
	MIRRORANIMATIONSYSTEM_API UClass* Z_Construct_UClass_AExtCharacter_NoRegister();
	MIRRORANIMATIONSYSTEM_API UClass* Z_Construct_UClass_AExtCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MirrorAnimationSystem();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
// End Cross Module References
	DEFINE_FUNCTION(AExtCharacter::execGetRootMotionMirrorAndFlipAxis)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_MirrorAxis);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_FlipAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRootMotionMirrorAndFlipAxis((TEnumAsByte<EAxis::Type>&)(Z_Param_Out_MirrorAxis),(TEnumAsByte<EAxis::Type>&)(Z_Param_Out_FlipAxis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExtCharacter::execSetRootMotionMirrorAndFlipAxis)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_MirrorAxis);
		P_GET_PROPERTY(FByteProperty,Z_Param_FlipAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootMotionMirrorAndFlipAxis(EAxis::Type(Z_Param_MirrorAxis),EAxis::Type(Z_Param_FlipAxis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExtCharacter::execGetMirrorRootMotion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMirrorRootMotion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExtCharacter::execSetMirrorRootMotion)
	{
		P_GET_UBOOL(Z_Param_Mirror);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMirrorRootMotion(Z_Param_Mirror);
		P_NATIVE_END;
	}
	void AExtCharacter::StaticRegisterNativesAExtCharacter()
	{
		UClass* Class = AExtCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMirrorRootMotion", &AExtCharacter::execGetMirrorRootMotion },
			{ "GetRootMotionMirrorAndFlipAxis", &AExtCharacter::execGetRootMotionMirrorAndFlipAxis },
			{ "SetMirrorRootMotion", &AExtCharacter::execSetMirrorRootMotion },
			{ "SetRootMotionMirrorAndFlipAxis", &AExtCharacter::execSetRootMotionMirrorAndFlipAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics
	{
		struct ExtCharacter_eventGetMirrorRootMotion_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExtCharacter_eventGetMirrorRootMotion_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExtCharacter_eventGetMirrorRootMotion_Parms), &Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/ExtCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExtCharacter, nullptr, "GetMirrorRootMotion", nullptr, nullptr, sizeof(ExtCharacter_eventGetMirrorRootMotion_Parms), Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics
	{
		struct ExtCharacter_eventGetRootMotionMirrorAndFlipAxis_Parms
		{
			TEnumAsByte<EAxis::Type> MirrorAxis;
			TEnumAsByte<EAxis::Type> FlipAxis;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlipAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExtCharacter_eventGetRootMotionMirrorAndFlipAxis_Parms, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::NewProp_FlipAxis = { "FlipAxis", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExtCharacter_eventGetRootMotionMirrorAndFlipAxis_Parms, FlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::NewProp_MirrorAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::NewProp_FlipAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/ExtCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExtCharacter, nullptr, "GetRootMotionMirrorAndFlipAxis", nullptr, nullptr, sizeof(ExtCharacter_eventGetRootMotionMirrorAndFlipAxis_Parms), Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics
	{
		struct ExtCharacter_eventSetMirrorRootMotion_Parms
		{
			bool Mirror;
		};
		static void NewProp_Mirror_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Mirror;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::NewProp_Mirror_SetBit(void* Obj)
	{
		((ExtCharacter_eventSetMirrorRootMotion_Parms*)Obj)->Mirror = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::NewProp_Mirror = { "Mirror", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExtCharacter_eventSetMirrorRootMotion_Parms), &Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::NewProp_Mirror_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::NewProp_Mirror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/ExtCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExtCharacter, nullptr, "SetMirrorRootMotion", nullptr, nullptr, sizeof(ExtCharacter_eventSetMirrorRootMotion_Parms), Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics
	{
		struct ExtCharacter_eventSetRootMotionMirrorAndFlipAxis_Parms
		{
			TEnumAsByte<EAxis::Type> MirrorAxis;
			TEnumAsByte<EAxis::Type> FlipAxis;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlipAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExtCharacter_eventSetRootMotionMirrorAndFlipAxis_Parms, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::NewProp_FlipAxis = { "FlipAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExtCharacter_eventSetRootMotionMirrorAndFlipAxis_Parms, FlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::NewProp_MirrorAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::NewProp_FlipAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/ExtCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExtCharacter, nullptr, "SetRootMotionMirrorAndFlipAxis", nullptr, nullptr, sizeof(ExtCharacter_eventSetRootMotionMirrorAndFlipAxis_Parms), Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExtCharacter_NoRegister()
	{
		return AExtCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AExtCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExtCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MirrorAnimationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExtCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExtCharacter_GetMirrorRootMotion, "GetMirrorRootMotion" }, // 2491420395
		{ &Z_Construct_UFunction_AExtCharacter_GetRootMotionMirrorAndFlipAxis, "GetRootMotionMirrorAndFlipAxis" }, // 1692441550
		{ &Z_Construct_UFunction_AExtCharacter_SetMirrorRootMotion, "SetMirrorRootMotion" }, // 828408429
		{ &Z_Construct_UFunction_AExtCharacter_SetRootMotionMirrorAndFlipAxis, "SetRootMotionMirrorAndFlipAxis" }, // 2598878792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExtCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*Character class that merely implements ExtCharacterMovementComponent and some blueprint functions to set the Mirror Root Motion Parameters*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ExtCharacter.h" },
		{ "ModuleRelativePath", "Public/ExtCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Character class that merely implements ExtCharacterMovementComponent and some blueprint functions to set the Mirror Root Motion Parameters" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExtCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExtCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExtCharacter_Statics::ClassParams = {
		&AExtCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExtCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExtCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExtCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExtCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExtCharacter, 1691035930);
	template<> MIRRORANIMATIONSYSTEM_API UClass* StaticClass<AExtCharacter>()
	{
		return AExtCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExtCharacter(Z_Construct_UClass_AExtCharacter, &AExtCharacter::StaticClass, TEXT("/Script/MirrorAnimationSystem"), TEXT("AExtCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExtCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
