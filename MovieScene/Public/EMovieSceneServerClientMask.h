#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneServerClientMask.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneServerClientMask : uint8 {
    None,
    Server,
    Client,
    All,
};

