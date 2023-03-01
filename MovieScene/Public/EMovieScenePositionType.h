#pragma once
#include "CoreMinimal.h"
#include "EMovieScenePositionType.generated.h"

UENUM(BlueprintType)
enum class EMovieScenePositionType : uint8 {
    Frame,
    Time,
    MarkedFrame,
};

