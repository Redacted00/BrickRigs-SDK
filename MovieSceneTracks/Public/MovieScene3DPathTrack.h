#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieScene3DConstraintTrack.h"
#include "MovieScene3DPathTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieScene3DPathTrack();
    
    // Fix for true pure virtual functions not being implemented
};

