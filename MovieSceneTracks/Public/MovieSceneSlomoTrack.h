#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneFloatTrack.h"
#include "MovieSceneSlomoTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneSlomoTrack();
    
    // Fix for true pure virtual functions not being implemented
};

