#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSubTrack -FallbackName=MovieSceneSubTrack
#include "TemplateSequenceTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTemplateSequenceTrack : public UMovieSceneSubTrack {
    GENERATED_BODY()
public:
    UTemplateSequenceTrack();
};

