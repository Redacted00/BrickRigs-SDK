#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlayer -FallbackName=MovieSceneSequencePlayer
#include "TemplateSequencePlayer.generated.h"

class ATemplateSequenceActor;
class UObject;
class UTemplateSequence;
class UTemplateSequencePlayer;

UCLASS(Blueprintable)
class TEMPLATESEQUENCE_API UTemplateSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UTemplateSequencePlayer();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor);
    
};

