#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "InventoryItemRef.h"
#include "InventorySlot.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FInventorySlot : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItemRef ItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* LocalItem;
    
public:
    BRICKRIGS_API FInventorySlot();
};

