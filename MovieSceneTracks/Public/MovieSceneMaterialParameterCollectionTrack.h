#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneMaterialTrack.h"
#include "MovieSceneMaterialParameterCollectionTrack.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC;
    
    UMovieSceneMaterialParameterCollectionTrack();
    
    // Fix for true pure virtual functions not being implemented
};

