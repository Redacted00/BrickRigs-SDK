#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneCustomClockSource -FallbackName=MovieSceneCustomClockSource
#include "LevelSequenceMediaController.generated.h"

class ALevelSequenceActor;
class UMediaComponent;

UCLASS(Blueprintable)
class LEVELSEQUENCE_API ALevelSequenceMediaController : public AActor, public IMovieSceneCustomClockSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaComponent* MediaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerStartTimeSeconds, meta=(AllowPrivateAccess=true))
    float ServerStartTimeSeconds;
    
public:
    ALevelSequenceMediaController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SynchronizeToServer(float DesyncThresholdSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerStartTimeSeconds();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelSequenceActor* GetSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaComponent* GetMediaComponent() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void OnTick(float DeltaSeconds, float InPlayRate) override PURE_VIRTUAL(OnTick,);
    
    UFUNCTION()
    void OnStopPlaying(const FQualifiedFrameTime& InStopTime) override PURE_VIRTUAL(OnStopPlaying,);
    
    UFUNCTION()
    void OnStartPlaying(const FQualifiedFrameTime& InStartTime) override PURE_VIRTUAL(OnStartPlaying,);
    
    UFUNCTION()
    FFrameTime OnRequestCurrentTime(const FQualifiedFrameTime& InCurrentTime, float InPlayRate) override PURE_VIRTUAL(OnRequestCurrentTime, return FFrameTime{};);
    
};

