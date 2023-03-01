#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackInstanceEntry.generated.h"

class UMovieSceneTrackInstance;
class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneTrackInstanceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* BoundObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneTrackInstance* TrackInstance;
    
    MOVIESCENE_API FMovieSceneTrackInstanceEntry();
};

