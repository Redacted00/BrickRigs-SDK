#include "ScrollBar.h"

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction) {
}

UScrollBar::UScrollBar() {
    this->Style = NULL;
    this->bAlwaysShowScrollbar = true;
    this->bAlwaysShowScrollbarTrack = true;
    this->Orientation = Orient_Vertical;
}

