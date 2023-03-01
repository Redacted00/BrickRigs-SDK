#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneCameraShakeEvaluator -FallbackName=MovieSceneCameraShakeEvaluator
#include "MovieSceneMatineeCameraShakeEvaluator.generated.h"

UCLASS(Blueprintable)
class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator {
    GENERATED_BODY()
public:
    UMovieSceneMatineeCameraShakeEvaluator();
};

