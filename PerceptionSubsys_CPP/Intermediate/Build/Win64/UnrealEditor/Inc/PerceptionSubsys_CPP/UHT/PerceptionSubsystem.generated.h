// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/PerceptionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PERCEPTIONSUBSYS_CPP_PerceptionSubsystem_generated_h
#error "PerceptionSubsystem.generated.h already included, missing '#pragma once' in PerceptionSubsystem.h"
#endif
#define PERCEPTIONSUBSYS_CPP_PerceptionSubsystem_generated_h

#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_14_DELEGATE \
PERCEPTIONSUBSYS_CPP_API void FActorDetectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorDetectedDelegate, AActor* Detector, AActor* DetectedActor);


#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerceptionSubsystem(); \
	friend struct Z_Construct_UClass_UPerceptionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPerceptionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerceptionSubsys_CPP"), NO_API) \
	DECLARE_SERIALIZER(UPerceptionSubsystem)


#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerceptionSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPerceptionSubsystem(UPerceptionSubsystem&&); \
	UPerceptionSubsystem(const UPerceptionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerceptionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerceptionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerceptionSubsystem) \
	NO_API virtual ~UPerceptionSubsystem();


#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_16_PROLOG
#define FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERCEPTIONSUBSYS_CPP_API UClass* StaticClass<class UPerceptionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_LocalRepository_Tarea2_Percepcion_PerceptionSubsys_CPP_Source_PerceptionSubsys_CPP_Perception_PerceptionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
