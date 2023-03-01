#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneTransformOriginSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneTransformOriginSystem();
};

