// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProtoRTSPFE/ProtoRTSPFEGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtoRTSPFEGameMode() {}
// Cross Module References
	PROTORTSPFE_API UClass* Z_Construct_UClass_AProtoRTSPFEGameMode_NoRegister();
	PROTORTSPFE_API UClass* Z_Construct_UClass_AProtoRTSPFEGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProtoRTSPFE();
// End Cross Module References
	void AProtoRTSPFEGameMode::StaticRegisterNativesAProtoRTSPFEGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProtoRTSPFEGameMode_NoRegister()
	{
		return AProtoRTSPFEGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProtoRTSPFEGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProtoRTSPFEGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProtoRTSPFE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtoRTSPFEGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProtoRTSPFEGameMode.h" },
		{ "ModuleRelativePath", "ProtoRTSPFEGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProtoRTSPFEGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtoRTSPFEGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProtoRTSPFEGameMode_Statics::ClassParams = {
		&AProtoRTSPFEGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AProtoRTSPFEGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProtoRTSPFEGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProtoRTSPFEGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProtoRTSPFEGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProtoRTSPFEGameMode, 669349491);
	template<> PROTORTSPFE_API UClass* StaticClass<AProtoRTSPFEGameMode>()
	{
		return AProtoRTSPFEGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProtoRTSPFEGameMode(Z_Construct_UClass_AProtoRTSPFEGameMode, &AProtoRTSPFEGameMode::StaticClass, TEXT("/Script/ProtoRTSPFE"), TEXT("AProtoRTSPFEGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProtoRTSPFEGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
