#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "AmmoBox.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AAmmoBox : public AInventoryItem {
    GENERATED_BODY()
public:
    AAmmoBox();
};

