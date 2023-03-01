#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSubTrack.h"
#include "TestMovieSceneSubTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> SectionArray;
    
    UTestMovieSceneSubTrack();
};

