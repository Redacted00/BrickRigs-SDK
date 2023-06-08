#include "MenuButtonPanelWidget.h"

void UMenuButtonPanelWidget::SetNumButtonsPerRow(int32 NewNum) {
}

void UMenuButtonPanelWidget::RemoveUnusedButtons() {
}

UWidget* UMenuButtonPanelWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}

UMenuButtonWidget* UMenuButtonPanelWidget::CreateButton(FText DisplayText, int32 IconIndex, const FOnClickedMenuButton& Delegate) {
    return NULL;
}

void UMenuButtonPanelWidget::ClearButtons(bool bManualRemove) {
}

UMenuButtonPanelWidget::UMenuButtonPanelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ButtonPanel = NULL;
    this->ButtonClass = NULL;
    this->NumButtonsPerRow = 0;
    this->ButtonSpacing = 15.00f;
}

