// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemStaticInfo.h"
#include "InventoryItem.generated.h"

UCLASS()
class BRICKRIGS_API AInventoryItem : public AActor
{
	GENERATED_BODY()
	
public:
    // ~Properties
    UPROPERTY(EditDefaultsOnly, Category = Item)
        TSubclassOf<UItemStaticInfo> StaticInfoClass;
    // ~Properties

};
