#include "ARTrackedImage.h"

class UARCandidateImage;

FVector2D UARTrackedImage::GetEstimateSize() {
    return FVector2D{};
}

UARCandidateImage* UARTrackedImage::GetDetectedImage() const {
    return NULL;
}

UARTrackedImage::UARTrackedImage() {
    this->DetectedImage = NULL;
}

