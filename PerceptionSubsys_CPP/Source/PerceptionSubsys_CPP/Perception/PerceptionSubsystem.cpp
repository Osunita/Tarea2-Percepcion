// Fill out your copyright notice in the Description page of Project Settings.


#include "PerceptionSubsystem.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"

void UPerceptionSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Delegados para inicialización del mundo y creación de actores
	FWorldDelegates::OnPostWorldInitialization.AddUObject(this, &UPerceptionSubsystem::OnWorldInitialized);
}

void UPerceptionSubsystem::OnWorldInitialized(UWorld* World, const UWorld::InitializationValues IVS)
{
	if (World)
	{
		// Registra un manejador para eventos de creación de actores
		World->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateUObject(this, &UPerceptionSubsystem::OnActorSpawned));

		// Registra actores existentes
		for (TActorIterator<AActor> It(World); It; ++It)
		{
			RegisterActor(*It);
		}
	}
}

void UPerceptionSubsystem::OnActorSpawned(AActor* SpawnedActor)
{
	RegisterActor(SpawnedActor);
}

void UPerceptionSubsystem::RegisterActor(AActor* Actor)
{
	if (Actor && Actor->FindComponentByClass<UPerceptionComponent>())
	{
		RegisteredActors.Add(Actor);
	}
}

void UPerceptionSubsystem::InitPerceptionInfo(AActor* Actor, const FPerceptionInfo& Info)
{
	if (UPerceptionComponent* PerceptionComp = Actor->FindComponentByClass<UPerceptionComponent>())
	{
		PerceptionComp->PerceptionSettings = Info;
	}
}

void UPerceptionSubsystem::SetPerceptionActive(AActor* Actor, bool bActive)
{
	if (UPerceptionComponent* PerceptionComp = Actor->FindComponentByClass<UPerceptionComponent>())
	{
		PerceptionComp->SetPerceptionEnable(bActive);
	}
}

void UPerceptionSubsystem::SetPerceptionActiveForActors(const TArray<AActor*>& Actors, bool bActive)
{
	for (AActor* Actor : Actors)
	{
		SetPerceptionActive(Actor, bActive);
	}
}

void UPerceptionSubsystem::NotifyActorDetected(AActor* Detector, AActor* DetectedActor)
{
	OnActorDetected.Broadcast(Detector, DetectedActor);
}