#pragma once
#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "FirearmInventoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=Firearm, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UFirearmInventoryComponent : public UInventoryComponent {
    GENERATED_BODY()
public:
    UFirearmInventoryComponent();
};

