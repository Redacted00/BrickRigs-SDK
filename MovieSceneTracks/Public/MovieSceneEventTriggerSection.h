#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "MovieSceneEventChannel.h"
#include "MovieSceneEventSectionBase.h"
#include "MovieSceneEventTriggerSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEventChannel EventChannel;
    
    UMovieSceneEventTriggerSection();
    
    // Fix for true pure virtual functions not being implemented
};

