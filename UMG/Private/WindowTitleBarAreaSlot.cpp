#include "WindowTitleBarAreaSlot.h"

void UWindowTitleBarAreaSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UWindowTitleBarAreaSlot::SetPadding(FMargin InPadding) {
}

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UWindowTitleBarAreaSlot::UWindowTitleBarAreaSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

