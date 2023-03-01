#include "OpenXRHandTrackingLiveLinkRemapAsset.h"

UOpenXRHandTrackingLiveLinkRemapAsset::UOpenXRHandTrackingLiveLinkRemapAsset() {
    this->bHasMetacarpals = true;
    this->bRetargetRotationOnly = false;
    this->SwizzleX = EQuatSwizzleAxisB::X;
    this->SwizzleY = EQuatSwizzleAxisB::Y;
    this->SwizzleZ = EQuatSwizzleAxisB::Z;
    this->SwizzleW = EQuatSwizzleAxisB::W;
}

