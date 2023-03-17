#pragma once
#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "LoadoutInventoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API ULoadoutInventoryComponent : public UInventoryComponent {
    GENERATED_BODY()
public:
    ULoadoutInventoryComponent();
};

