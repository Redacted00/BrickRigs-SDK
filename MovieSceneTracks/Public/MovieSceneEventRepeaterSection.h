#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "MovieSceneEvent.h"
#include "MovieSceneEventSectionBase.h"
#include "MovieSceneEventRepeaterSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvent Event;
    
    UMovieSceneEventRepeaterSection();
    
    // Fix for true pure virtual functions not being implemented
};

