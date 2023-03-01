#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneBlenderSystem.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIESCENE_API UMovieSceneBlenderSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneBlenderSystem();
};

