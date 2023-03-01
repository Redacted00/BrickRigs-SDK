#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrack -FallbackName=MovieSceneTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneCameraShakeSourceTriggerTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneCameraShakeSourceTriggerTrack();
    
    // Fix for true pure virtual functions not being implemented
};

