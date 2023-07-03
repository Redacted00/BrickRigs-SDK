#include "InputActionListWidget.h"


UWidget* UInputActionListWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}


void UInputActionListWidget::AddCategoryWidget_Implementation(UInputActionCategoryWidget* Widget, int32 CategoryIndex) {
}

void UInputActionListWidget::AddActionWidget_Implementation(UInputActionWidget* Widget, int32 ActionIndex) {
}

UInputActionListWidget::UInputActionListWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainGridPanel = NULL;
    this->CategoryWidgetClass = NULL;
    this->ActionWidgetClass = NULL;
    this->InputActionListMode = EInputActionListMode::InputHelpClosed;
    this->QuickAccessDisplayTime = 4.00f;
}

