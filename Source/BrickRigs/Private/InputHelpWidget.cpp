#include "InputHelpWidget.h"

UWidget* UInputHelpWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}

UGameOverlayWidget* UInputHelpWidget::GetGameOverlay() const {
    return NULL;
}

UInputHelpWidget::UInputHelpWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ActionListWidget = NULL;
}

