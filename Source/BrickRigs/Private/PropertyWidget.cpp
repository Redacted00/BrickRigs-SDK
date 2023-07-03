#include "PropertyWidget.h"

void UPropertyWidget::UpdateIsReadOnly_Implementation(bool bNewReadOnly) {
}

UPropertyWidget::UPropertyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bSupportsReadOnly = false;
}

