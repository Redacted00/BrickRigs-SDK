#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneEvalTimeSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneEvalTimeSystem();
};

