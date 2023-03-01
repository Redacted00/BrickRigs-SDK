#pragma once
#include "CoreMinimal.h"
#include "Attachment.h"
#include "BarrelAttachment.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ABarrelAttachment : public AAttachment {
    GENERATED_BODY()
public:
    ABarrelAttachment();
};

