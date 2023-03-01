#pragma once
#include "CoreMinimal.h"
#include "EMediaAudioCaptureDeviceFilter.generated.h"

UENUM(BlueprintType)
enum class EMediaAudioCaptureDeviceFilter : uint8 {
    None,
    Card,
    Microphone,
    Software = 0x4,
    Unknown = 0x8,
};

