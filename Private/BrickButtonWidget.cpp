#include "BrickButtonWidget.h"

void UBrickButtonWidget::SetContentVerticalAlignment(TEnumAsByte<EVerticalAlignment> InAlignment) {
}

void UBrickButtonWidget::SetContentPadding(const FMargin& InPadding) {
}

void UBrickButtonWidget::SetContentHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InAlignment) {
}

void UBrickButtonWidget::AddContentWidget(UWidget* InWidget) {
}

UBrickButtonWidget::UBrickButtonWidget() {
    this->ContentHorizontalAlignment = HAlign_Center;
    this->ContentVerticalAlignment = VAlign_Center;
    this->ContentSlot = NULL;
}

