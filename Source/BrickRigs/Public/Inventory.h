#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "InventorySlot.h"
#include "Inventory.generated.h"

USTRUCT(BlueprintType)
struct FInventory : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventorySlot> Items;
    
    BRICKRIGS_API FInventory();
};

