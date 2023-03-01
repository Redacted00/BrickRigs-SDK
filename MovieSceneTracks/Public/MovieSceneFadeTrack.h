#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneFloatTrack.h"
#include "MovieSceneFadeTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneFadeTrack();
    
    // Fix for true pure virtual functions not being implemented
};

