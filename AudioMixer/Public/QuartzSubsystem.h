#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EQuartzCommandQuantization -FallbackName=EQuartzCommandQuantization
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuartzClockSettings -FallbackName=QuartzClockSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuartzTransportTimeStamp -FallbackName=QuartzTransportTimeStamp
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "QuartzSubsystem.generated.h"

class UObject;
class UQuartzClockHandle;

UCLASS(Blueprintable)
class AUDIOMIXER_API UQuartzSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UQuartzSubsystem();
    UFUNCTION(BlueprintCallable)
    bool IsQuartzEnabled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool IsClockRunning(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetRoundTripMinLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetRoundTripMaxLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetRoundTripAverageLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UQuartzClockHandle* GetHandleForClock(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetGameThreadToAudioRenderThreadMinLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetGameThreadToAudioRenderThreadMaxLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetGameThreadToAudioRenderThreadAverageLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetEstimatedClockRunTime(const UObject* WorldContextObject, const FName& InClockName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetDurationOfQuantizationTypeInSeconds(const UObject* WorldContextObject, FName ClockName, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    FQuartzTransportTimeStamp GetCurrentClockTimestamp(const UObject* WorldContextObject, const FName& InClockName);
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadMinLatency();
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadMaxLatency();
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadAverageLatency();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool DoesClockExist(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void DeleteClockByName(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void DeleteClockByHandle(const UObject* WorldContextObject, UPARAM(Ref) UQuartzClockHandle*& InClockHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UQuartzClockHandle* CreateNewClock(const UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
    
};

