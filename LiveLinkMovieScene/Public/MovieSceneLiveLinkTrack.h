#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieScenePropertyTrack -FallbackName=MovieScenePropertyTrack
#include "Templates/SubclassOf.h"
#include "MovieSceneLiveLinkTrack.generated.h"

class ULiveLinkRole;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkRole> TrackRole;
    
public:
    UMovieSceneLiveLinkTrack();
    
    // Fix for true pure virtual functions not being implemented
};

