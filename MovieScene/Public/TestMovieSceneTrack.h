#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "MovieSceneTrackTemplateProducer.h"
#include "TestMovieSceneTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UTestMovieSceneTrack : public UMovieSceneTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighPassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> SectionArray;
    
    UTestMovieSceneTrack();
    
    // Fix for true pure virtual functions not being implemented
};

