#include "EyeTrackerFunctionLibrary.h"

class APlayerController;

void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(APlayerController* PlayerController) {
}

bool UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable() {
    return false;
}

bool UEyeTrackerFunctionLibrary::IsEyeTrackerConnected() {
    return false;
}

bool UEyeTrackerFunctionLibrary::GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData) {
    return false;
}

bool UEyeTrackerFunctionLibrary::GetGazeData(FEyeTrackerGazeData& OutGazeData) {
    return false;
}

UEyeTrackerFunctionLibrary::UEyeTrackerFunctionLibrary() {
}

