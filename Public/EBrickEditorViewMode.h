#pragma once
#include "CoreMinimal.h"
#include "EBrickEditorViewMode.generated.h"

UENUM(BlueprintType)
enum class EBrickEditorViewMode : uint8 {
    Default,
    Wireframe,
    Physics,
    Max,
};

