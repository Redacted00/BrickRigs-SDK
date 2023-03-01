#pragma once
#include "CoreMinimal.h"
#include "ELandscapeClearMode.generated.h"

UENUM(BlueprintType)
enum ELandscapeClearMode {
    Clear_Weightmap = 0x1,
    Clear_Heightmap,
    Clear_All,
    Clear_MAX UMETA(Hidden),
};

