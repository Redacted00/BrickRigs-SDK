#include "InputActionWidget.h"

void UInputActionWidget::UpdateIsActionEnabled_Implementation(bool bInCanBeExecuted) {
}


void UInputActionWidget::UpdateDisplayInfo_Implementation(const FDisplayInfo& InDisplayInfo) {
}


void UInputActionWidget::RebindAction() {
}

void UInputActionWidget::OnActionReleased() {
}

void UInputActionWidget::OnActionPressed() {
}

void UInputActionWidget::OnActionClicked() {
}


UInputActionWidget::UInputActionWidget() {
    this->Button = NULL;
    this->ControlHintWidget = NULL;
}

