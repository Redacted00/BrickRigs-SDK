#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MovieSceneTrackInstanceComponent.generated.h"

class UMovieSceneSection;
class UMovieSceneTrackInstance;

USTRUCT(BlueprintType)
struct FMovieSceneTrackInstanceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneSection* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieSceneTrackInstance> TrackInstanceClass;
    
    MOVIESCENE_API FMovieSceneTrackInstanceComponent();
};

