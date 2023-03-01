#include "ScrollBoxSlot.h"

void UScrollBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UScrollBoxSlot::SetPadding(FMargin InPadding) {
}

void UScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UScrollBoxSlot::UScrollBoxSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

