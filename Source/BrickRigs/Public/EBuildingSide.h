#pragma once
#include "CoreMinimal.h"
#include "EBuildingSide.generated.h"

UENUM(BlueprintType)
enum class EBuildingSide : uint8 {
    Left,
    Right,
    Front,
    Back,
};

