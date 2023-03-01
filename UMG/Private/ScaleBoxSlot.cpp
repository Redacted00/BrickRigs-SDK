#include "ScaleBoxSlot.h"

void UScaleBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UScaleBoxSlot::SetPadding(FMargin InPadding) {
}

void UScaleBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UScaleBoxSlot::UScaleBoxSlot() {
    this->HorizontalAlignment = HAlign_Center;
    this->VerticalAlignment = VAlign_Center;
}

