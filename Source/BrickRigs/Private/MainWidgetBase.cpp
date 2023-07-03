#include "MainWidgetBase.h"

void UMainWidgetBase::OnFadedOut() {
}

UWindowManagerWidget* UMainWidgetBase::GetWindowManager() const {
    return NULL;
}

UWidget* UMainWidgetBase::GetWidgetToFocus_Implementation() const {
    return NULL;
}

UMenuButtonPanelWidget* UMainWidgetBase::GetButtonPanel() const {
    return NULL;
}

UMainWidgetBase::UMainWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->FadingPanel = NULL;
    this->ButtonPanel = NULL;
}

