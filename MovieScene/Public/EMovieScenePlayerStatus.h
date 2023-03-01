#pragma once
#include "CoreMinimal.h"
#include "EMovieScenePlayerStatus.generated.h"

UENUM(BlueprintType)
namespace EMovieScenePlayerStatus {
    enum Type {
        Stopped,
        Playing,
        Scrubbing,
        Jumping,
        Stepping,
        Paused,
        MAX,
    };
}

