#include "InputKeyWidget.h"


void UInputKeyWidget::SetKey(const FKey& InKey, bool bInUsedAsModifier) {
}

UInputKeyWidget::UInputKeyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsUsedAsModifier = false;
    this->UnboundRenderOpacity = 0.50f;
}

