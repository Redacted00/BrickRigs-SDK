#include "InputHelpWidget.h"

void UInputHelpWidget::ToggleInputHelpOpen() {
}

void UInputHelpWidget::OpenInputHelp() {
}



void UInputHelpWidget::OnFadedOut() {
}

UWidget* UInputHelpWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}

bool UInputHelpWidget::CloseInputHelp() {
    return false;
}

UInputHelpWidget::UInputHelpWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ActionListWidget = NULL;
}

