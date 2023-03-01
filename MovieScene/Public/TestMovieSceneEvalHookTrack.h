#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "TestMovieSceneEvalHookTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> SectionArray;
    
    UTestMovieSceneEvalHookTrack();
};

