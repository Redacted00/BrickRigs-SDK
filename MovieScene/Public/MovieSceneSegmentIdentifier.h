#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSegmentIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSegmentIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdentifierIndex;
    
    MOVIESCENE_API FMovieSceneSegmentIdentifier();
};

