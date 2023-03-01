#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneNiagaraParameterTrack.h"
#include "MovieSceneNiagaraFloatParameterTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneNiagaraFloatParameterTrack();
    
    // Fix for true pure virtual functions not being implemented
};

