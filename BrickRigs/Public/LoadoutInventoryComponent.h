#pragma once
#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "LoadoutInventoryComponent.generated.h"

class ALoadoutContainer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API ULoadoutInventoryComponent : public UInventoryComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALoadoutContainer* CurrentLoadoutContainer;
    
public:
    ULoadoutInventoryComponent();
};

