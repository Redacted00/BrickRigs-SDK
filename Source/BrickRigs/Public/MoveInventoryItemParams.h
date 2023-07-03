#pragma once
#include "CoreMinimal.h"
#include "InventorySlotID.h"
#include "MoveInventoryItemParams.generated.h"

class AInventoryItem;
class UInventoryComponent;

USTRUCT(BlueprintType)
struct FMoveInventoryItemParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInventoryComponent> FromInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventorySlotID FromSlotID;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInventoryComponent> ToInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventorySlotID ToSlotID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* PickedUpItem;
    
    BRICKRIGS_API FMoveInventoryItemParams();
};

