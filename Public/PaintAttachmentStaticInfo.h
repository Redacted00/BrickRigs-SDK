#pragma once
#include "CoreMinimal.h"
#include "AttachmentStaticInfo.h"
#include "PaintAttachmentStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UPaintAttachmentStaticInfo : public UAttachmentStaticInfo {
    GENERATED_BODY()
public:
    UPaintAttachmentStaticInfo();
};

