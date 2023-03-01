#include "InputChordWidget.h"


void UInputChordWidget::SetStyleState(EBrickUIStyleState NewState) {
}

void UInputChordWidget::SetShowUnboundKey(bool bShow) {
}

void UInputChordWidget::SetInputChord(FInputChord InInputChord, bool bShowAsGamepadKey) {
}

void UInputChordWidget::SetColorStyle(EBrickUIColorStyle NewStyle) {
}




UInputChordWidget::UInputChordWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->KeyWidgetClass = NULL;
    this->bShowUnboundKey = true;
}

