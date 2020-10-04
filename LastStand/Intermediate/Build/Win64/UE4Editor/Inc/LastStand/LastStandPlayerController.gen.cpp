// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastStand/LastStandPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLastStandPlayerController() {}
// Cross Module References
	LASTSTAND_API UClass* Z_Construct_UClass_ALastStandPlayerController_NoRegister();
	LASTSTAND_API UClass* Z_Construct_UClass_ALastStandPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_LastStand();
// End Cross Module References
	void ALastStandPlayerController::StaticRegisterNativesALastStandPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ALastStandPlayerController_NoRegister()
	{
		return ALastStandPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALastStandPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALastStandPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_LastStand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastStandPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LastStandPlayerController.h" },
		{ "ModuleRelativePath", "LastStandPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALastStandPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALastStandPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALastStandPlayerController_Statics::ClassParams = {
		&ALastStandPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALastStandPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALastStandPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALastStandPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALastStandPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALastStandPlayerController, 2942707709);
	template<> LASTSTAND_API UClass* StaticClass<ALastStandPlayerController>()
	{
		return ALastStandPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALastStandPlayerController(Z_Construct_UClass_ALastStandPlayerController, &ALastStandPlayerController::StaticClass, TEXT("/Script/LastStand"), TEXT("ALastStandPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALastStandPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
