#include "MainWidgetBase.h"

void UMainWidgetBase::OnFadedOut() {
}

UWidget* UMainWidgetBase::GetWidgetToFocus_Implementation() const {
    return NULL;
}

UMainWidgetBase::UMainWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->FadingPanel = NULL;
    this->ButtonPanel = NULL;
}

