#pragma once
#include "CoreMinimal.h"
#include "EBrickEditorMirrorMode.generated.h"

UENUM(BlueprintType)
enum class EBrickEditorMirrorMode : uint8 {
    None,
    X,
    Y,
    Z,
    Max,
};

