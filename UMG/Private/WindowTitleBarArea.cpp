#include "WindowTitleBarArea.h"

void UWindowTitleBarArea::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UWindowTitleBarArea::SetPadding(FMargin InPadding) {
}

void UWindowTitleBarArea::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UWindowTitleBarArea::UWindowTitleBarArea() {
    this->bWindowButtonsEnabled = false;
    this->bDoubleClickTogglesFullscreen = false;
}

