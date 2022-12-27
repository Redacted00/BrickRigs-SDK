// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StaticMeshProp.generated.h"
UCLASS()
class BRICKRIGS_API AStaticMeshProp : public AActor
{
    GENERATED_BODY()

protected:
    // ~Components
    UPROPERTY(Transient, BlueprintReadOnly)
        UStaticMeshComponent* StaticMeshComponent;
    // ~Components

    // ~Properties
    UPROPERTY(EditDefaultsOnly, Category = Prop)
        UStaticMesh* StaticMesh;
    UPROPERTY(EditDefaultsOnly, Category = Prop)
        float MaxDrawDistance;
    // Whether players should be able to climb this prop
    UPROPERTY(EditDefaultsOnly, Category = Prop)
        bool bIsClimbable;

    // ~Constructor
    AStaticMeshProp();

};