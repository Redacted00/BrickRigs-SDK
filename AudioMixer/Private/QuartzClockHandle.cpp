#include "QuartzClockHandle.h"

class UObject;
class UQuartzClockHandle;

void UQuartzClockHandle::UnsubscribeFromTimeDivision(const UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, UQuartzClockHandle*& ClockHandle) {
}

void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(const UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle) {
}

void UQuartzClockHandle::SubscribeToQuantizationEvent(const UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const FOnQuartzMetronomeEventBP& OnQuantizationEvent, UQuartzClockHandle*& ClockHandle) {
}

void UQuartzClockHandle::SubscribeToAllQuantizationEvents(const UObject* WorldContextObject, const FOnQuartzMetronomeEventBP& OnQuantizationEvent, UQuartzClockHandle*& ClockHandle) {
}

void UQuartzClockHandle::StopClock(const UObject* WorldContextObject, bool CancelPendingEvents, UQuartzClockHandle*& ClockHandle) {
}

void UQuartzClockHandle::StartOtherClock(const UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, const FOnQuartzCommandEventBP& InDelegate) {
}

void UQuartzClockHandle::StartClock(const UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle) {
}

void UQuartzClockHandle::SetTicksPerSecond(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float TicksPerSecond) {
}

void UQuartzClockHandle::SetThirtySecondNotesPerMinute(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute) {
}

void UQuartzClockHandle::SetSecondsPerTick(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float SecondsPerTick) {
}

void UQuartzClockHandle::SetMillisecondsPerTick(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick) {
}

void UQuartzClockHandle::SetBeatsPerMinute(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float BeatsPerMinute) {
}

void UQuartzClockHandle::ResumeClock(const UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle) {
}

void UQuartzClockHandle::ResetTransportQuantized(const UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, const FOnQuartzCommandEventBP& InDelegate, UQuartzClockHandle*& ClockHandle) {
}

void UQuartzClockHandle::ResetTransport(const UObject* WorldContextObject, const FOnQuartzCommandEventBP& InDelegate) {
}

void UQuartzClockHandle::PauseClock(const UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle) {
}

bool UQuartzClockHandle::IsClockRunning(const UObject* WorldContextObject) {
    return false;
}

float UQuartzClockHandle::GetTicksPerSecond(const UObject* WorldContextObject) const {
    return 0.0f;
}

float UQuartzClockHandle::GetThirtySecondNotesPerMinute(const UObject* WorldContextObject) const {
    return 0.0f;
}

float UQuartzClockHandle::GetSecondsPerTick(const UObject* WorldContextObject) const {
    return 0.0f;
}

float UQuartzClockHandle::GetMillisecondsPerTick(const UObject* WorldContextObject) const {
    return 0.0f;
}

float UQuartzClockHandle::GetEstimatedRunTime(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(const UObject* WorldContextObject, const EQuartzCommandQuantization& QuantizationType, float Multiplier) {
    return 0.0f;
}

FQuartzTransportTimeStamp UQuartzClockHandle::GetCurrentTimestamp(const UObject* WorldContextObject) {
    return FQuartzTransportTimeStamp{};
}

float UQuartzClockHandle::GetBeatsPerMinute(const UObject* WorldContextObject) const {
    return 0.0f;
}

UQuartzClockHandle::UQuartzClockHandle() {
    this->QuartzSubsystem = NULL;
    this->WorldPtr = NULL;
}

