#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "TemplateSequenceSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UTemplateSequenceSystem();
};

