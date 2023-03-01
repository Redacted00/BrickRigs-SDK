#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneNiagaraParameterTrack.h"
#include "MovieSceneNiagaraVectorParameterTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChannelsUsed;
    
public:
    UMovieSceneNiagaraVectorParameterTrack();
    
    // Fix for true pure virtual functions not being implemented
};

