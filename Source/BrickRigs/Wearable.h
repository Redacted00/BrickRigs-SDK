// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "Wearable.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API AWearable : public AInventoryItem
{
	GENERATED_BODY()

protected:
	// ~Properties
	// Name displayed for the type of color
	UPROPERTY(EditDefaultsOnly, Category = Wearable)
	FText ColorDisplayName;
	// Color of the wearable
	UPROPERTY(EditDefaultsOnly, Category = Wearable)
	FLinearColor Color;
	// ~Properties
};
