#include "ChatWidget.h"

void UChatWidget::UpdateScrollBoxVisibility_Implementation(bool bNewVisible) {
}



void UChatWidget::OnTextChanged(const FText& Text, EValueChangedEventType EventType) {
}

UWidget* UChatWidget::GetWidgetToFocus_Implementation() {
    return NULL;
}

UChatWidget::UChatWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ChatScrollBox = NULL;
    this->ChatContextControlHint = NULL;
    this->TextBox = NULL;
    this->FadeOutDelay = 5.00f;
    this->ChatMessageWidgetClass = NULL;
}

