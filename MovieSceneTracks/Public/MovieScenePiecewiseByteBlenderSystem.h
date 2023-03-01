#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBlenderSystem -FallbackName=MovieSceneBlenderSystem
#include "MovieScenePiecewiseByteBlenderSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem {
    GENERATED_BODY()
public:
    UMovieScenePiecewiseByteBlenderSystem();
};

