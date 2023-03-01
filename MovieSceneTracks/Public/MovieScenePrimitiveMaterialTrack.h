#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieScenePropertyTrack.h"
#include "MovieScenePrimitiveMaterialTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UMovieScenePrimitiveMaterialTrack();
    
    // Fix for true pure virtual functions not being implemented
};

