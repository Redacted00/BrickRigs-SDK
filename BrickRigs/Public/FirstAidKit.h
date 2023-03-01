#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "FirstAidKit.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AFirstAidKit : public AInventoryItem {
    GENERATED_BODY()
public:
    AFirstAidKit();
};

