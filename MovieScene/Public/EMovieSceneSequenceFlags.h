#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneSequenceFlags.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneSequenceFlags : uint8 {
    None,
    Volatile,
    BlockingEvaluation,
    InheritedFlags = 0x1,
    EMovieSceneSequenceFlags_MAX = 0x3,
};

