// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProtoRTSPFE/ProtoRTSPFEPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtoRTSPFEPlayerController() {}
// Cross Module References
	PROTORTSPFE_API UClass* Z_Construct_UClass_AProtoRTSPFEPlayerController_NoRegister();
	PROTORTSPFE_API UClass* Z_Construct_UClass_AProtoRTSPFEPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ProtoRTSPFE();
// End Cross Module References
	void AProtoRTSPFEPlayerController::StaticRegisterNativesAProtoRTSPFEPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AProtoRTSPFEPlayerController_NoRegister()
	{
		return AProtoRTSPFEPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AProtoRTSPFEPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProtoRTSPFEPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProtoRTSPFE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtoRTSPFEPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProtoRTSPFEPlayerController.h" },
		{ "ModuleRelativePath", "ProtoRTSPFEPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProtoRTSPFEPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtoRTSPFEPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProtoRTSPFEPlayerController_Statics::ClassParams = {
		&AProtoRTSPFEPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProtoRTSPFEPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProtoRTSPFEPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProtoRTSPFEPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProtoRTSPFEPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProtoRTSPFEPlayerController, 3258183790);
	template<> PROTORTSPFE_API UClass* StaticClass<AProtoRTSPFEPlayerController>()
	{
		return AProtoRTSPFEPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProtoRTSPFEPlayerController(Z_Construct_UClass_AProtoRTSPFEPlayerController, &AProtoRTSPFEPlayerController::StaticClass, TEXT("/Script/ProtoRTSPFE"), TEXT("AProtoRTSPFEPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProtoRTSPFEPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
