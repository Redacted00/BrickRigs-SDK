// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Runtime/Engine/Classes/Components/PostProcessComponent.h>
#include <Runtime/Engine/Classes/Components/DirectionalLightComponent.h>
#include "Runtime/Engine/Classes/Components/SkyLightComponent.h"
#include "WorldSetupActor.generated.h"


UCLASS()
class BRICKRIGS_API AWorldSetupActor : public AActor
{
    GENERATED_BODY()
public:
    // Sets default values for this actor's properties
    AWorldSetupActor();
    UPROPERTY(EditDefaultsOnly, Category = Components)
        UDirectionalLightComponent* SunLightComponent;
    UPROPERTY(EditDefaultsOnly, Category = Components)
        USkyLightComponent* SkyLightComponent;
    UPROPERTY(EditDefaultsOnly, Category = Components)
        UPostProcessComponent* PostProcessComponent;
};