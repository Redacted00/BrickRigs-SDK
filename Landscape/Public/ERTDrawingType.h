#pragma once
#include "CoreMinimal.h"
#include "ERTDrawingType.generated.h"

UENUM(BlueprintType)
enum class ERTDrawingType : uint8 {
    RTAtlas,
    RTAtlasToNonAtlas,
    RTNonAtlasToAtlas,
    RTNonAtlas,
    RTMips,
};

