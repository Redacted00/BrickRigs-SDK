#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertySystem.h"
#include "MovieSceneComponentTransformSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem {
    GENERATED_BODY()
public:
    UMovieSceneComponentTransformSystem();
};

