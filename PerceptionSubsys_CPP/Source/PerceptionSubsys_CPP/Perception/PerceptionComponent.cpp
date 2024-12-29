// Fill out your copyright notice in the Description page of Project Settings.


#include "PerceptionComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "EngineUtils.h"
#include "PerceptionSubsystem.h"

UPerceptionComponent::UPerceptionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	PerceptionSettings = FPerceptionInfo();
}

void UPerceptionComponent::SetPerceptionEnable(bool bActive)
{
	SetComponentTickEnabled(bActive);
	bcanDetect = bActive;
	UE_LOG(LogTemp, Warning, TEXT("Perception %s"), bActive ? TEXT("Activated") : TEXT("Deactivated"));
}

void UPerceptionComponent::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorld()->GetTimerManager().SetTimer(DetectionTimer, this, &UPerceptionComponent::DetectActors, PerceptionSettings.DetectionInterval, true);
}

void UPerceptionComponent::DetectActors()
{
	if(bcanDetect)
	{
		FVector Origin = GetOwner()->GetActorLocation();
		TArray<AActor*> OverlappingActors;

		DrawDebugSphere(GetWorld(), Origin, PerceptionSettings.DetectionRadius, 16, FColor::Green, false, PerceptionSettings.DetectionInterval);

		for (TActorIterator<AActor> It(GetWorld()); It; ++It)
		{
			AActor* OtherActor = *It;

			if (OtherActor && OtherActor != GetOwner())
			{
				float Distance = FVector::Dist(Origin, OtherActor->GetActorLocation());
				if (Distance <= PerceptionSettings.DetectionRadius)
				{
					if (!DetectedActors.Contains(OtherActor) && OtherActor->GetComponentByClass(UPerceptionComponent::StaticClass())) 
					{
						DetectedActors.Add(OtherActor);
						OnActorDetected.Broadcast();
						if (UPerceptionSubsystem* Subsystem = GetWorld()->GetGameInstance()->GetSubsystem<UPerceptionSubsystem>())
						{
							Subsystem->NotifyActorDetected(GetOwner(), OtherActor);
						}
						UE_LOG(LogTemp, Warning, TEXT("Actor Detectado: %s"), *OtherActor->GetName());
					}
				}
			}
		}
	}
}