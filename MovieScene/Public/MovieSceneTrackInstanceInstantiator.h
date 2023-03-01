#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneTrackInstanceInstantiator.generated.h"

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneTrackInstanceInstantiator();
};

