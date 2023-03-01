#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkSourceMode.generated.h"

UENUM(BlueprintType)
enum class ELiveLinkSourceMode : uint8 {
    Latest,
    EngineTime,
    Timecode,
};

