#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityInstantiatorSystem -FallbackName=MovieSceneEntityInstantiatorSystem
#include "MovieSceneHierarchicalBiasSystem.generated.h"

UCLASS(Blueprintable)
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneHierarchicalBiasSystem();
};

