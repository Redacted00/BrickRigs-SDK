#include "LiveLinkCameraStaticData.h"

FLiveLinkCameraStaticData::FLiveLinkCameraStaticData() {
    this->bIsFieldOfViewSupported = false;
    this->bIsAspectRatioSupported = false;
    this->bIsFocalLengthSupported = false;
    this->bIsProjectionModeSupported = false;
    this->FilmBackWidth = 0.00f;
    this->FilmBackHeight = 0.00f;
    this->bIsApertureSupported = false;
    this->bIsFocusDistanceSupported = false;
}

