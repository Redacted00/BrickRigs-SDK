#pragma once
#include "CoreMinimal.h"
#include "EARSceneReconstruction.generated.h"

UENUM(BlueprintType)
enum class EARSceneReconstruction : uint8 {
    None,
    MeshOnly,
    MeshWithClassification,
};

