#pragma once
#include "CoreMinimal.h"
#include "ENiagaraMipMapGeneration.generated.h"

UENUM(BlueprintType)
enum class ENiagaraMipMapGeneration : uint8 {
    Disabled,
    PostStage,
    PostSimulate,
};

