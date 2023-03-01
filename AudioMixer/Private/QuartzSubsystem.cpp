#include "QuartzSubsystem.h"

class UObject;
class UQuartzClockHandle;

bool UQuartzSubsystem::IsQuartzEnabled() {
    return false;
}

bool UQuartzSubsystem::IsClockRunning(const UObject* WorldContextObject, FName ClockName) {
    return false;
}

float UQuartzSubsystem::GetRoundTripMinLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzSubsystem::GetRoundTripMaxLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzSubsystem::GetRoundTripAverageLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(const UObject* WorldContextObject, FName ClockName) {
    return NULL;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzSubsystem::GetEstimatedClockRunTime(const UObject* WorldContextObject, const FName& InClockName) {
    return 0.0f;
}

float UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(const UObject* WorldContextObject, FName ClockName, const EQuartzCommandQuantization& QuantizationType, float Multiplier) {
    return 0.0f;
}

FQuartzTransportTimeStamp UQuartzSubsystem::GetCurrentClockTimestamp(const UObject* WorldContextObject, const FName& InClockName) {
    return FQuartzTransportTimeStamp{};
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency() {
    return 0.0f;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency() {
    return 0.0f;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency() {
    return 0.0f;
}

bool UQuartzSubsystem::DoesClockExist(const UObject* WorldContextObject, FName ClockName) {
    return false;
}

void UQuartzSubsystem::DeleteClockByName(const UObject* WorldContextObject, FName ClockName) {
}

void UQuartzSubsystem::DeleteClockByHandle(const UObject* WorldContextObject, UQuartzClockHandle*& InClockHandle) {
}

UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(const UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager) {
    return NULL;
}

UQuartzSubsystem::UQuartzSubsystem() {
}

