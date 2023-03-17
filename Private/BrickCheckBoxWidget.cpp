#include "BrickCheckBoxWidget.h"

void UBrickCheckBoxWidget::UpdateCheckBoxText_Implementation(const FText& NewText) {
}

void UBrickCheckBoxWidget::UpdateCheckBoxAnimation_Implementation(float AnimPos) {
}

void UBrickCheckBoxWidget::SetIsChecked(bool bNewChecked) {
}

bool UBrickCheckBoxWidget::GetIsChecked() const {
    return false;
}

UBrickCheckBoxWidget::UBrickCheckBoxWidget() {
    this->TextBlock = NULL;
    this->ContentHorizontalBox = NULL;
    this->LeftSpacer = NULL;
    this->RightSpacer = NULL;
    this->bIsChecked = false;
}

