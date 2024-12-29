// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PerceptionComponent.h"
#include "PerceptionSubsystem.generated.h"

/**
 *	
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActorDetectedDelegate, AActor*, Detector, AActor*, DetectedActor);

UCLASS()
class PERCEPTIONSUBSYS_CPP_API UPerceptionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FActorDetectedDelegate OnActorDetected;
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	void RegisterActor(AActor* Actor);
	
	void InitPerceptionInfo(AActor* Actor, const FPerceptionInfo& Info);
	
	void SetPerceptionActive(AActor* Actor, bool bActive);
	
	void SetPerceptionActiveForActors(const TArray<AActor*>& Actors, bool bActive);

	// Notifica cuando un actor detecta a otro
	void NotifyActorDetected(AActor* Detector, AActor* DetectedActor);

private:
	TArray<AActor*> RegisteredActors;
	
	void OnWorldInitialized(UWorld* World, const UWorld::InitializationValues IVS);
	
	void OnActorSpawned(AActor* SpawnedActor);
};
