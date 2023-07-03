#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItem.h"
#include "Wearable.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AWearable : public AInventoryItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ColorDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
public:
    AWearable();
};

