#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "TemplateSequencePropertyScalingInstantiatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UTemplateSequencePropertyScalingInstantiatorSystem();
};

