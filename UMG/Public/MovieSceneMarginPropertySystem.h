#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieScenePropertySystem -FallbackName=MovieScenePropertySystem
#include "MovieSceneMarginPropertySystem.generated.h"

UCLASS(Blueprintable)
class UMG_API UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem {
    GENERATED_BODY()
public:
    UMovieSceneMarginPropertySystem();
};

