#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneMotionVectorSimulationSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneMotionVectorSimulationSystem();
};

