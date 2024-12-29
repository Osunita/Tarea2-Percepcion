// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerceptionComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActorDetected);

USTRUCT(BlueprintType, Blueprintable)
struct FPerceptionInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Perception")
	float DetectionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Perception")
	float DetectionInterval;

	FPerceptionInfo()
	{
		DetectionRadius = 200.0f;
		DetectionInterval = 1.0f;
	}
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PERCEPTIONSUBSYS_CPP_API UPerceptionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPerceptionComponent();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Blueprintable, Category="Perception")
	FPerceptionInfo PerceptionSettings;
	
	UPROPERTY(BlueprintReadOnly, Category="Perception")
	TArray<AActor*> DetectedActors;
	
	UPROPERTY(BlueprintAssignable, Category="Perception")
	FOnActorDetected OnActorDetected;
	
	UFUNCTION(BlueprintCallable, Category="Perception")
	void SetPerceptionEnable(bool bActive);
	
	void DetectActors();

protected:
	virtual void BeginPlay() override;

private:
	bool bcanDetect = true;
	FTimerHandle DetectionTimer;
	
};
