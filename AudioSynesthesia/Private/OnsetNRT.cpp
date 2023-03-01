#include "OnsetNRT.h"
#include "OnsetNRTSettings.h"

void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths) const {
}

void UOnsetNRT::GetChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths) const {
}

UOnsetNRT::UOnsetNRT() {
    this->Settings = CreateDefaultSubobject<UOnsetNRTSettings>(TEXT("DefaultOnsetNRTSettings"));
}

