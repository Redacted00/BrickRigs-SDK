#pragma once
#include "CoreMinimal.h"
#include "InventoryItemRef.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FInventoryItemRef {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ItemClass;
    
public:
    BRICKRIGS_API FInventoryItemRef();
};

