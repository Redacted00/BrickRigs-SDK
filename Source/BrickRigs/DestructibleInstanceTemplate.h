// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DestructibleInstanceTemplate.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class BRICKRIGS_API UDestructibleInstanceTemplate : public UObject
{
	GENERATED_BODY()

public:
	// ~Properties
	UPROPERTY(EditAnywhere, Category = Defaults)
	UStaticMesh* Mesh;
	// The mesh displayed when the instance has been broken
	UPROPERTY(EditAnywhere, Category = Defaults)
	UStaticMesh* BrokenMesh;
	// Whether the broken mesh should simulate physics
	UPROPERTY(EditAnywhere, Category = Defaults)
	bool bSimulateBrokenMesh;
	// The maximum randomized linear speed
	UPROPERTY(EditAnywhere, Category = Defaults)
	float BrokenMeshMaxLinearSpeed;
	// The maximum randomized angular speed in degrees/s
	UPROPERTY(EditAnywhere, Category = Defaults)
	float BrokenMeshMaxAngularSpeed;
	// The damage needed to break the instance, < 0 means it can't be broken
	UPROPERTY(EditAnywhere, Category = Defaults)
	float MinDamage;
	// Max render distance for the instances
	UPROPERTY(EditAnywhere, Category = Defaults)
	float MaxDrawDistance;
	// Max distance at which the emitter will be spawned
	UPROPERTY(EditAnywhere, Category = Defaults)
	float MaxBreakEmitterSpawnDistance;
	// Emitter spawned when the instance has been broken
	UPROPERTY(EditAnywhere, Category = Defaults)
	UParticleSystem* BreakEmitter;
	// Sound spawned when the instance has been broken
	UPROPERTY(EditAnywhere, Category = Defaults)
	USoundBase* BreakSound;
	// ~Properties
}; 
