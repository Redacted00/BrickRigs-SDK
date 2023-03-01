#include "LoudnessNRT.h"
#include "LoudnessNRTSettings.h"

void ULoudnessNRT::GetNormalizedLoudnessAtTime(const float InSeconds, float& OutLoudness) const {
}

void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float& OutLoudness) const {
}

void ULoudnessNRT::GetLoudnessAtTime(const float InSeconds, float& OutLoudness) const {
}

void ULoudnessNRT::GetChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float& OutLoudness) const {
}

ULoudnessNRT::ULoudnessNRT() {
    this->Settings = CreateDefaultSubobject<ULoudnessNRTSettings>(TEXT("DefaultLoudnessNRTSettings"));
}

