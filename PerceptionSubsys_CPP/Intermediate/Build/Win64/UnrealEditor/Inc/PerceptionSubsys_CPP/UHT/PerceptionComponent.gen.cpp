// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PerceptionSubsys_CPP/Perception/PerceptionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerceptionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PERCEPTIONSUBSYS_CPP_API UClass* Z_Construct_UClass_UPerceptionComponent();
PERCEPTIONSUBSYS_CPP_API UClass* Z_Construct_UClass_UPerceptionComponent_NoRegister();
PERCEPTIONSUBSYS_CPP_API UFunction* Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_OnActorDetected__DelegateSignature();
PERCEPTIONSUBSYS_CPP_API UScriptStruct* Z_Construct_UScriptStruct_FPerceptionInfo();
UPackage* Z_Construct_UPackage__Script_PerceptionSubsys_CPP();
// End Cross Module References

// Begin Delegate FOnActorDetected
struct Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_OnActorDetected__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Perception/PerceptionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_OnActorDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PerceptionSubsys_CPP, nullptr, "OnActorDetected__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_OnActorDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_OnActorDetected__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_OnActorDetected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_OnActorDetected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActorDetected_DelegateWrapper(const FMulticastScriptDelegate& OnActorDetected)
{
	OnActorDetected.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnActorDetected

// Begin ScriptStruct FPerceptionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerceptionInfo;
class UScriptStruct* FPerceptionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerceptionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerceptionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerceptionInfo, (UObject*)Z_Construct_UPackage__Script_PerceptionSubsys_CPP(), TEXT("PerceptionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PerceptionInfo.OuterSingleton;
}
template<> PERCEPTIONSUBSYS_CPP_API UScriptStruct* StaticStruct<FPerceptionInfo>()
{
	return FPerceptionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerceptionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Perception/PerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRadius_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Perception/PerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionInterval_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Perception/PerceptionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerceptionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_DetectionRadius = { "DetectionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerceptionInfo, DetectionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRadius_MetaData), NewProp_DetectionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_DetectionInterval = { "DetectionInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerceptionInfo, DetectionInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionInterval_MetaData), NewProp_DetectionInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_DetectionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_DetectionInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PerceptionSubsys_CPP,
	nullptr,
	&NewStructOps,
	"PerceptionInfo",
	Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers),
	sizeof(FPerceptionInfo),
	alignof(FPerceptionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerceptionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerceptionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PerceptionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerceptionInfo.InnerSingleton, Z_Construct_UScriptStruct_FPerceptionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerceptionInfo.InnerSingleton;
}
// End ScriptStruct FPerceptionInfo

// Begin Class UPerceptionComponent Function SetPerceptionEnable
struct Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics
{
	struct PerceptionComponent_eventSetPerceptionEnable_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Activar o desactivar percepci\xc3\xb3n\n" },
#endif
		{ "ModuleRelativePath", "Perception/PerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activar o desactivar percepci\xc3\xb3n" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((PerceptionComponent_eventSetPerceptionEnable_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionComponent_eventSetPerceptionEnable_Parms), &Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionComponent, nullptr, "SetPerceptionEnable", nullptr, nullptr, Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::PerceptionComponent_eventSetPerceptionEnable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::PerceptionComponent_eventSetPerceptionEnable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPerceptionComponent::execSetPerceptionEnable)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPerceptionEnable(Z_Param_bActive);
	P_NATIVE_END;
}
// End Class UPerceptionComponent Function SetPerceptionEnable

// Begin Class UPerceptionComponent
void UPerceptionComponent::StaticRegisterNativesUPerceptionComponent()
{
	UClass* Class = UPerceptionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPerceptionEnable", &UPerceptionComponent::execSetPerceptionEnable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerceptionComponent);
UClass* Z_Construct_UClass_UPerceptionComponent_NoRegister()
{
	return UPerceptionComponent::StaticClass();
}
struct Z_Construct_UClass_UPerceptionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Perception/PerceptionComponent.h" },
		{ "ModuleRelativePath", "Perception/PerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionSettings_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuraci\xc3\xb3n de la percepci\xc3\xb3n\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Perception/PerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuraci\xc3\xb3n de la percepci\xc3\xb3n" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectedActors_MetaData[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lista de actores detectados\n" },
#endif
		{ "ModuleRelativePath", "Perception/PerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lista de actores detectados" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActorDetected_MetaData[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate para notificar detecciones\n" },
#endif
		{ "ModuleRelativePath", "Perception/PerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate para notificar detecciones" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerceptionSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DetectedActors;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorDetected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerceptionComponent_SetPerceptionEnable, "SetPerceptionEnable" }, // 1307933178
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerceptionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_PerceptionSettings = { "PerceptionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerceptionComponent, PerceptionSettings), Z_Construct_UScriptStruct_FPerceptionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionSettings_MetaData), NewProp_PerceptionSettings_MetaData) }; // 1062122130
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_DetectedActors_Inner = { "DetectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_DetectedActors = { "DetectedActors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerceptionComponent, DetectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectedActors_MetaData), NewProp_DetectedActors_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_OnActorDetected = { "OnActorDetected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPerceptionComponent, OnActorDetected), Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_OnActorDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActorDetected_MetaData), NewProp_OnActorDetected_MetaData) }; // 1293411974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerceptionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_PerceptionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_DetectedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_DetectedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerceptionComponent_Statics::NewProp_OnActorDetected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPerceptionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PerceptionSubsys_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerceptionComponent_Statics::ClassParams = {
	&UPerceptionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPerceptionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerceptionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPerceptionComponent()
{
	if (!Z_Registration_Info_UClass_UPerceptionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerceptionComponent.OuterSingleton, Z_Construct_UClass_UPerceptionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPerceptionComponent.OuterSingleton;
}
template<> PERCEPTIONSUBSYS_CPP_API UClass* StaticClass<UPerceptionComponent>()
{
	return UPerceptionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPerceptionComponent);
UPerceptionComponent::~UPerceptionComponent() {}
// End Class UPerceptionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPerceptionInfo::StaticStruct, Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewStructOps, TEXT("PerceptionInfo"), &Z_Registration_Info_UScriptStruct_PerceptionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerceptionInfo), 1062122130U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPerceptionComponent, UPerceptionComponent::StaticClass, TEXT("UPerceptionComponent"), &Z_Registration_Info_UClass_UPerceptionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerceptionComponent), 3675914612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_2571974106(TEXT("/Script/PerceptionSubsys_CPP"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
