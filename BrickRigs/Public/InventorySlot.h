#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
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

