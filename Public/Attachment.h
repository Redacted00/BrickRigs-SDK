#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "Attachment.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AAttachment : public AInventoryItem {
    GENERATED_BODY()
public:
    AAttachment();
};

