#include "WrapBox.h"

class UWidget;
class UWrapBoxSlot;

void UWrapBox::SetInnerSlotPadding(FVector2D InPadding) {
}

UWrapBoxSlot* UWrapBox::AddChildToWrapBox(UWidget* Content) {
    return NULL;
}

UWrapBox::UWrapBox() {
    this->WrapWidth = 0.00f;
    this->WrapSize = 500.00f;
    this->bExplicitWrapWidth = false;
    this->bExplicitWrapSize = false;
    this->Orientation = Orient_Horizontal;
}

