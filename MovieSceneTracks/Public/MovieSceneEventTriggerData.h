#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneEventPtrs.h"
#include "MovieSceneEventTriggerData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEventTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEventPtrs Ptrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ObjectBindingId;
    
    MOVIESCENETRACKS_API FMovieSceneEventTriggerData();
};

