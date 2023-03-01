#pragma once
#include "CoreMinimal.h"
#include "TrackInstanceInputComponent.generated.h"

class UMovieSceneSection;

USTRUCT(BlueprintType)
struct FTrackInstanceInputComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneSection* Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputIndex;
    
    MOVIESCENE_API FTrackInstanceInputComponent();
};

