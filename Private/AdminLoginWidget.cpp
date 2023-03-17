#include "AdminLoginWidget.h"

void UAdminLoginWidget::UpdateIsAdmin_Implementation(bool bNewIsAdmin) {
}

void UAdminLoginWidget::UpdateCanEverBeAdmin_Implementation(bool bCanBeAdmin) {
}

void UAdminLoginWidget::OnTextChanged(const FText& Text, EValueChangedEventType EventType) {
}

UAdminLoginWidget::UAdminLoginWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TextBox = NULL;
}

