#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventSystem.h"
#include "MovieScenePostEvalEventSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem {
    GENERATED_BODY()
public:
    UMovieScenePostEvalEventSystem();
};

