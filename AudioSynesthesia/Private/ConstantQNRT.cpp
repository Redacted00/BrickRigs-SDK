#include "ConstantQNRT.h"
#include "ConstantQNRTSettings.h"

void UConstantQNRT::GetNormalizedChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ) const {
}

void UConstantQNRT::GetChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ) const {
}

UConstantQNRT::UConstantQNRT() {
    this->Settings = CreateDefaultSubobject<UConstantQNRTSettings>(TEXT("DefaultConstantQNRTSettings"));
}

