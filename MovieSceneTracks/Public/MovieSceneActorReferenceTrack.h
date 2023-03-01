#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieScenePropertyTrack.h"
#include "MovieSceneActorReferenceTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneActorReferenceTrack();
    
    // Fix for true pure virtual functions not being implemented
};

