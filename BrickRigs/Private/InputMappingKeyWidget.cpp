#include "InputMappingKeyWidget.h"


void UInputMappingKeyWidget::OnClickedButton() {
}

UInputMappingKeyWidget::UInputMappingKeyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Button = NULL;
    this->InputChordWidget = NULL;
}

