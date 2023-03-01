#pragma once
#include "CoreMinimal.h"
#include "MediaTextureOutputFormat.generated.h"

UENUM(BlueprintType)
enum MediaTextureOutputFormat {
    MTOF_Default,
    MTOF_SRGB_LINOUT,
    MTOF_MAX UMETA(Hidden),
};

