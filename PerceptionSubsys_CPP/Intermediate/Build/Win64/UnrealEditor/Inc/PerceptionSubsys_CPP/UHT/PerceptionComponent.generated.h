// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/PerceptionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERCEPTIONSUBSYS_CPP_PerceptionComponent_generated_h
#error "PerceptionComponent.generated.h already included, missing '#pragma once' in PerceptionComponent.h"
#endif
#define PERCEPTIONSUBSYS_CPP_PerceptionComponent_generated_h

#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_9_DELEGATE \
PERCEPTIONSUBSYS_CPP_API void FOnActorDetected_DelegateWrapper(const FMulticastScriptDelegate& OnActorDetected);


#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerceptionInfo_Statics; \
	PERCEPTIONSUBSYS_CPP_API static class UScriptStruct* StaticStruct();


template<> PERCEPTIONSUBSYS_CPP_API UScriptStruct* StaticStruct<struct FPerceptionInfo>();

#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPerceptionEnable);


#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerceptionComponent(); \
	friend struct Z_Construct_UClass_UPerceptionComponent_Statics; \
public: \
	DECLARE_CLASS(UPerceptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PerceptionSubsys_CPP"), NO_API) \
	DECLARE_SERIALIZER(UPerceptionComponent)


#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPerceptionComponent(UPerceptionComponent&&); \
	UPerceptionComponent(const UPerceptionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerceptionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerceptionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerceptionComponent) \
	NO_API virtual ~UPerceptionComponent();


#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_29_PROLOG
#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERCEPTIONSUBSYS_CPP_API UClass* StaticClass<class UPerceptionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
