// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PerceptionSubsys_CPP/PerceptionSubsys_CPPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerceptionSubsys_CPPGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PERCEPTIONSUBSYS_CPP_API UClass* Z_Construct_UClass_APerceptionSubsys_CPPGameMode();
PERCEPTIONSUBSYS_CPP_API UClass* Z_Construct_UClass_APerceptionSubsys_CPPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PerceptionSubsys_CPP();
// End Cross Module References

// Begin Class APerceptionSubsys_CPPGameMode
void APerceptionSubsys_CPPGameMode::StaticRegisterNativesAPerceptionSubsys_CPPGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APerceptionSubsys_CPPGameMode);
UClass* Z_Construct_UClass_APerceptionSubsys_CPPGameMode_NoRegister()
{
	return APerceptionSubsys_CPPGameMode::StaticClass();
}
struct Z_Construct_UClass_APerceptionSubsys_CPPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PerceptionSubsys_CPPGameMode.h" },
		{ "ModuleRelativePath", "PerceptionSubsys_CPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APerceptionSubsys_CPPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APerceptionSubsys_CPPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PerceptionSubsys_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APerceptionSubsys_CPPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APerceptionSubsys_CPPGameMode_Statics::ClassParams = {
	&APerceptionSubsys_CPPGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APerceptionSubsys_CPPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APerceptionSubsys_CPPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APerceptionSubsys_CPPGameMode()
{
	if (!Z_Registration_Info_UClass_APerceptionSubsys_CPPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APerceptionSubsys_CPPGameMode.OuterSingleton, Z_Construct_UClass_APerceptionSubsys_CPPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APerceptionSubsys_CPPGameMode.OuterSingleton;
}
template<> PERCEPTIONSUBSYS_CPP_API UClass* StaticClass<APerceptionSubsys_CPPGameMode>()
{
	return APerceptionSubsys_CPPGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APerceptionSubsys_CPPGameMode);
APerceptionSubsys_CPPGameMode::~APerceptionSubsys_CPPGameMode() {}
// End Class APerceptionSubsys_CPPGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_PerceptionSubsys_CPPGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APerceptionSubsys_CPPGameMode, APerceptionSubsys_CPPGameMode::StaticClass, TEXT("APerceptionSubsys_CPPGameMode"), &Z_Registration_Info_UClass_APerceptionSubsys_CPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APerceptionSubsys_CPPGameMode), 3559060191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_PerceptionSubsys_CPPGameMode_h_2332374813(TEXT("/Script/PerceptionSubsys_CPP"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_PerceptionSubsys_CPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_PerceptionSubsys_CPPGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
