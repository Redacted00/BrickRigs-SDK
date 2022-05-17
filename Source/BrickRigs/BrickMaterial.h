// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialInstanceConstant.h"
#include "UObject/NoExportTypes.h"
#include "BrickMaterial.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, HideCategories = Object)
class BRICKRIGS_API UBrickMaterial : public UObject
{
	GENERATED_BODY()

public:
	// ~Properties
	UPROPERTY(EditDefaultsOnly)
	FText DisplayName;
	// The optional override material
	UPROPERTY(EditDefaultsOnly)
	UMaterialInterface* MaterialOverride;
	// Whether the material used is translucent
	UPROPERTY(EditDefaultsOnly)
	bool bIsTranslucentMaterial;
	// Whether the material uses a diffuse map
	UPROPERTY(EditDefaultsOnly)
	bool bHasDiffuseMap;
	// Default diffuse color of the material
	UPROPERTY(EditDefaultsOnly)
	FLinearColor DiffuseColor;
	// ~Properties
};
