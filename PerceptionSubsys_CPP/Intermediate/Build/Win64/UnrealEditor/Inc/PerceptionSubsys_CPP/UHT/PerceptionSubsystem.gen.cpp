// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PerceptionSubsys_CPP/Perception/PerceptionSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerceptionSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
PERCEPTIONSUBSYS_CPP_API UClass* Z_Construct_UClass_UPerceptionSubsystem();
PERCEPTIONSUBSYS_CPP_API UClass* Z_Construct_UClass_UPerceptionSubsystem_NoRegister();
PERCEPTIONSUBSYS_CPP_API UFunction* Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PerceptionSubsys_CPP();
// End Cross Module References

// Begin Delegate FActorDetectedDelegate
struct Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics
{
	struct _Script_PerceptionSubsys_CPP_eventActorDetectedDelegate_Parms
	{
		AActor* Detector;
		AActor* DetectedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09\n */" },
#endif
		{ "ModuleRelativePath", "Perception/PerceptionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Detector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::NewProp_Detector = { "Detector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PerceptionSubsys_CPP_eventActorDetectedDelegate_Parms, Detector), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::NewProp_DetectedActor = { "DetectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PerceptionSubsys_CPP_eventActorDetectedDelegate_Parms, DetectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::NewProp_Detector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::NewProp_DetectedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PerceptionSubsys_CPP, nullptr, "ActorDetectedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::_Script_PerceptionSubsys_CPP_eventActorDetectedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::_Script_PerceptionSubsys_CPP_eventActorDetectedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActorDetectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorDetectedDelegate, AActor* Detector, AActor* DetectedActor)
{
	struct _Script_PerceptionSubsys_CPP_eventActorDetectedDelegate_Parms
	{
		AActor* Detector;
		AActor* DetectedActor;
	};
	_Script_PerceptionSubsys_CPP_eventActorDetectedDelegate_Parms Parms;
	Parms.Detector=Detector;
	Parms.DetectedActor=DetectedActor;
	ActorDetectedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActorDetectedDelegate

// Begin Class UPerceptionSubsystem
void UPerceptionSubsystem::StaticRegisterNativesUPerceptionSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerceptionSubsystem);
UClass* Z_Construct_UClass_UPerceptionSubsystem_NoRegister()
{
	return UPerceptionSubsystem::StaticClass();
}
struct Z_Construct_UClass_UPerceptionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Perception/PerceptionSubsystem.h" },
		{ "ModuleRelativePath", "Perception/PerceptionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActorDetected_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegado para notificar detecciones\n" },
#endif
		{ "ModuleRelativePath", "Perception/PerceptionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegado para notificar detecciones" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorDetected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerceptionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPerceptionSubsystem_Statics::NewProp_OnActorDetected = { "OnActorDetected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerceptionSubsystem, OnActorDetected), Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActorDetected_MetaData), NewProp_OnActorDetected_MetaData) }; // 2960458032
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerceptionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerceptionSubsystem_Statics::NewProp_OnActorDetected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPerceptionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PerceptionSubsys_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerceptionSubsystem_Statics::ClassParams = {
	&UPerceptionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPerceptionSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerceptionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerceptionSubsystem()
{
	if (!Z_Registration_Info_UClass_UPerceptionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerceptionSubsystem.OuterSingleton, Z_Construct_UClass_UPerceptionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerceptionSubsystem.OuterSingleton;
}
template<> PERCEPTIONSUBSYS_CPP_API UClass* StaticClass<UPerceptionSubsystem>()
{
	return UPerceptionSubsystem::StaticClass();
}
UPerceptionSubsystem::UPerceptionSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerceptionSubsystem);
UPerceptionSubsystem::~UPerceptionSubsystem() {}
// End Class UPerceptionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerceptionSubsystem, UPerceptionSubsystem::StaticClass, TEXT("UPerceptionSubsystem"), &Z_Registration_Info_UClass_UPerceptionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerceptionSubsystem), 3247929970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_3588837269(TEXT("/Script/PerceptionSubsys_CPP"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
