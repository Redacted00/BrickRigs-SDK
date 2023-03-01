#include "WidgetSwitcherSlot.h"

void UWidgetSwitcherSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UWidgetSwitcherSlot::SetPadding(FMargin InPadding) {
}

void UWidgetSwitcherSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UWidgetSwitcherSlot::UWidgetSwitcherSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

