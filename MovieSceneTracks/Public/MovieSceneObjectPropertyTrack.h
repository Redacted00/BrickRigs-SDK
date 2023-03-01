#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieScenePropertyTrack.h"
#include "MovieSceneObjectPropertyTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PropertyClass;
    
    UMovieSceneObjectPropertyTrack();
    
    // Fix for true pure virtual functions not being implemented
};

