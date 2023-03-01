#pragma once
#include "CoreMinimal.h"
#include "ItemStaticInfo.h"
#include "AttachmentStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UAttachmentStaticInfo : public UItemStaticInfo {
    GENERATED_BODY()
public:
    UAttachmentStaticInfo();
};

