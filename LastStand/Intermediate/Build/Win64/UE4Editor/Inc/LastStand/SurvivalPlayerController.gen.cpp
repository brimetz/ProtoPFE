// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastStand/Survival/Player/SurvivalPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalPlayerController() {}
// Cross Module References
	LASTSTAND_API UClass* Z_Construct_UClass_ASurvivalPlayerController_NoRegister();
	LASTSTAND_API UClass* Z_Construct_UClass_ASurvivalPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_LastStand();
// End Cross Module References
	void ASurvivalPlayerController::StaticRegisterNativesASurvivalPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASurvivalPlayerController_NoRegister()
	{
		return ASurvivalPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_iEpsilonWheelClickMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iEpsilonWheelClickMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fScreenMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fScreenMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fCameraSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fCameraSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fZoomCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fZoomCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_iZoomMinRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iZoomMinRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_iZoomMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iZoomMaxRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_LastStand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Survival/Player/SurvivalPlayerController.h" },
		{ "ModuleRelativePath", "Survival/Player/SurvivalPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iEpsilonWheelClickMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Screen" },
		{ "ModuleRelativePath", "Survival/Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iEpsilonWheelClickMovement = { "m_iEpsilonWheelClickMovement", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalPlayerController, m_iEpsilonWheelClickMovement), METADATA_PARAMS(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iEpsilonWheelClickMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iEpsilonWheelClickMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fScreenMargin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Screen" },
		{ "ModuleRelativePath", "Survival/Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fScreenMargin = { "m_fScreenMargin", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalPlayerController, m_fScreenMargin), METADATA_PARAMS(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fScreenMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fScreenMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fCameraSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Survival/Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fCameraSpeed = { "m_fCameraSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalPlayerController, m_fCameraSpeed), METADATA_PARAMS(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fCameraSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fCameraSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fZoomCoefficient_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zoom" },
		{ "ModuleRelativePath", "Survival/Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fZoomCoefficient = { "m_fZoomCoefficient", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalPlayerController, m_fZoomCoefficient), METADATA_PARAMS(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fZoomCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fZoomCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iZoomMinRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zoom" },
		{ "ModuleRelativePath", "Survival/Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iZoomMinRange = { "m_iZoomMinRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalPlayerController, m_iZoomMinRange), METADATA_PARAMS(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iZoomMinRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iZoomMinRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iZoomMaxRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zoom" },
		{ "ModuleRelativePath", "Survival/Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iZoomMaxRange = { "m_iZoomMaxRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalPlayerController, m_iZoomMaxRange), METADATA_PARAMS(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iZoomMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iZoomMaxRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivalPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iEpsilonWheelClickMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fScreenMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fCameraSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_fZoomCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iZoomMinRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalPlayerController_Statics::NewProp_m_iZoomMaxRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalPlayerController_Statics::ClassParams = {
		&ASurvivalPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASurvivalPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurvivalPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivalPlayerController, 1150927387);
	template<> LASTSTAND_API UClass* StaticClass<ASurvivalPlayerController>()
	{
		return ASurvivalPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivalPlayerController(Z_Construct_UClass_ASurvivalPlayerController, &ASurvivalPlayerController::StaticClass, TEXT("/Script/LastStand"), TEXT("ASurvivalPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
