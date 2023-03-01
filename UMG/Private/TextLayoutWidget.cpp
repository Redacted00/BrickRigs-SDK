#include "TextLayoutWidget.h"

void UTextLayoutWidget::SetJustification(TEnumAsByte<ETextJustify::Type> InJustification) {
}

UTextLayoutWidget::UTextLayoutWidget() {
    this->Justification = ETextJustify::Left;
    this->WrappingPolicy = ETextWrappingPolicy::DefaultWrapping;
    this->AutoWrapText = false;
    this->WrapTextAt = 0.00f;
    this->LineHeightPercentage = 1.00f;
}

