#include "PropertyWidget.h"

void UPropertyWidget::UpdateIsReadOnly_Implementation(bool bNewReadOnly) {
}


UWidget* UPropertyWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}

UPropertyWidget::UPropertyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bSupportsReadOnly = false;
}

