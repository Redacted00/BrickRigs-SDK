#include "ScaleBox.h"

void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale) {
}

void UScaleBox::SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection) {
}

void UScaleBox::SetStretch(TEnumAsByte<EStretch::Type> InStretch) {
}

void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale) {
}

UScaleBox::UScaleBox() {
    this->Stretch = EStretch::ScaleToFit;
    this->StretchDirection = EStretchDirection::Both;
    this->UserSpecifiedScale = 1.00f;
    this->IgnoreInheritedScale = false;
}

