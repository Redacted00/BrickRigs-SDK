#pragma once
#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "CharacterInventoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UCharacterInventoryComponent : public UInventoryComponent {
    GENERATED_BODY()
public:
    UCharacterInventoryComponent();
};

