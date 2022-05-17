// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BrickTeam.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FInventoryLoadoutSlot
{
	GENERATED_BODY();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowedClasses = "InventoryItem"))
	UClass* ItemClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0))
	int32 Amount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowedClasses = "InventoryItem"))
	TArray<UClass*> Attachments;
};

// This struct can be used to build a loadout via blueprints
USTRUCT(BlueprintType)
struct FInventoryLoadout
{
	GENERATED_BODY();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInventoryLoadoutSlot> Slots;
};

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBrickTeam : public UObject
{
	GENERATED_BODY()

	// ~Properties
	UPROPERTY(EditDefaultsOnly, Category = Team)
	FText DisplayName;
public:
	// Texture displayed on the players' badge
	UPROPERTY(EditDefaultsOnly, Category = Team)
	TSoftObjectPtr<UTexture2D> BadgeTexture;
	// Color to be displayed on flags for example
	UPROPERTY(EditDefaultsOnly, Category = Team)
	FLinearColor TeamColor;
	// ~Properties
	UPROPERTY(EditDefaultsOnly, Category = Team)
	FInventoryLoadout DefaultLoadout;
};
