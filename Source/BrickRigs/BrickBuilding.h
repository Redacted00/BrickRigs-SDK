// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BrickBuilding.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ABrickBuilding : public AActor
{
	GENERATED_BODY()

	// ~Properties
public:
	ABrickBuilding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void GetBuildingLocalBounds(FVector& OutOrigin, FVector& OutExtent) const;


#if WITH_EDITORONLY_DATA
	// The layer the foundation of the building should be painted on
	UPROPERTY(EditAnywhere, Category = Building)
		FName LandscapeLayerName;
	UPROPERTY(EditAnywhere, Category = Building)
		float LandscapeLayerInflation;
	UPROPERTY(EditAnywhere, Category = Building)
		FVector BuildingBoundsOrigin;
	UPROPERTY(EditAnywhere, Category = Building)
		FVector BuildingBoundsExtent;
#endif
};
