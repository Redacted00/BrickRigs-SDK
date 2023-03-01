#include "MenuButtonWidget.h"

void UMenuButtonWidget::UpdateDisplayText_Implementation(const FText& InText) {
}

void UMenuButtonWidget::SetDisplayText(FText InText) {
}

void UMenuButtonWidget::SetDisplayIcon(int32 InIconIndex) {
}

void UMenuButtonWidget::SetColorStyle(EBrickUIColorStyle InColorStyle) {
}

void UMenuButtonWidget::OnClicked() {
}

UMenuButtonWidget::UMenuButtonWidget() {
    this->Button = NULL;
    this->TextBlock = NULL;
    this->IconImage = NULL;
}

