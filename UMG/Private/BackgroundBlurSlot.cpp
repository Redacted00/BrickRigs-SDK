#include "BackgroundBlurSlot.h"

void UBackgroundBlurSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UBackgroundBlurSlot::SetPadding(FMargin InPadding) {
}

void UBackgroundBlurSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UBackgroundBlurSlot::UBackgroundBlurSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

