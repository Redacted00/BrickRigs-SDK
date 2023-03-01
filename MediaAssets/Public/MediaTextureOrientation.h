#pragma once
#include "CoreMinimal.h"
#include "MediaTextureOrientation.generated.h"

UENUM(BlueprintType)
enum MediaTextureOrientation {
    MTORI_Original,
    MTORI_CW90,
    MTORI_CW180,
    MTORI_CW270,
    MTORI_MAX UMETA(Hidden),
};

