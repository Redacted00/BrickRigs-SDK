#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneNiagaraParameterTrack.h"
#include "MovieSceneNiagaraColorParameterTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneNiagaraColorParameterTrack();
    
    // Fix for true pure virtual functions not being implemented
};

