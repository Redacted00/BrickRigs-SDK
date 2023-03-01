#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneNiagaraParameterTrack.h"
#include "MovieSceneNiagaraBoolParameterTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneNiagaraBoolParameterTrack();
    
    // Fix for true pure virtual functions not being implemented
};

