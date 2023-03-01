#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneMaterialTrack -FallbackName=MovieSceneMaterialTrack
#include "MovieSceneWidgetMaterialTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BrushPropertyNamePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackName;
    
public:
    UMovieSceneWidgetMaterialTrack();
    
    // Fix for true pure virtual functions not being implemented
};

