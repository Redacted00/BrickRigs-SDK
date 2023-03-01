#pragma once
#include "CoreMinimal.h"
#include "EFreeCamMode.generated.h"

UENUM(BlueprintType)
enum class EFreeCamMode : uint8 {
    None,
    Default,
    FollowLocation,
    FollowLocationAndRotation,
    LookAt,
    Max,
};

