#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieScenePropertySystem -FallbackName=MovieScenePropertySystem
#include "MovieScene2DTransformPropertySystem.generated.h"

UCLASS(Blueprintable)
class UMG_API UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem {
    GENERATED_BODY()
public:
    UMovieScene2DTransformPropertySystem();
};

