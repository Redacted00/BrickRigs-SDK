#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertySystem.h"
#include "MovieScene3DTransformPropertySystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem {
    GENERATED_BODY()
public:
    UMovieScene3DTransformPropertySystem();
};

