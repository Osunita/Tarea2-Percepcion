// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerceptionSubsys_CPP_init() {}
	PERCEPTIONSUBSYS_CPP_API UFunction* Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature();
	PERCEPTIONSUBSYS_CPP_API UFunction* Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_OnActorDetected__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PerceptionSubsys_CPP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PerceptionSubsys_CPP()
	{
		if (!Z_Registration_Info_UPackage__Script_PerceptionSubsys_CPP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_ActorDetectedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PerceptionSubsys_CPP_OnActorDetected__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PerceptionSubsys_CPP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x637B518D,
				0x66EB0A15,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PerceptionSubsys_CPP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PerceptionSubsys_CPP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PerceptionSubsys_CPP(Z_Construct_UPackage__Script_PerceptionSubsys_CPP, TEXT("/Script/PerceptionSubsys_CPP"), Z_Registration_Info_UPackage__Script_PerceptionSubsys_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x637B518D, 0x66EB0A15));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
