#include "ButtonSlot.h"

void UButtonSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UButtonSlot::SetPadding(FMargin InPadding) {
}

void UButtonSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UButtonSlot::UButtonSlot() {
    this->HorizontalAlignment = HAlign_Center;
    this->VerticalAlignment = VAlign_Center;
}

