#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "TemplateSequencePropertyScalingEvaluatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UTemplateSequencePropertyScalingEvaluatorSystem();
};

