#pragma once
#include "CoreMinimal.h"
#include "InventoryLoadoutSlot.h"
#include "InventoryLoadout.generated.h"

USTRUCT(BlueprintType)
struct FInventoryLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryLoadoutSlot> Slots;
    
    BRICKRIGS_API FInventoryLoadout();
};

