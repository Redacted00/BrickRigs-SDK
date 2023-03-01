#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertySystem.h"
#include "MovieSceneEulerTransformPropertySystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem {
    GENERATED_BODY()
public:
    UMovieSceneEulerTransformPropertySystem();
};

