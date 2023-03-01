#include "InputKeyWidget.h"

void UInputKeyWidget::SetKey(const FKey& InKey, bool bInUsedAsModifier) {
}

UInputKeyWidget::UInputKeyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->KeyBorder = NULL;
    this->KeyTextBlock = NULL;
    this->KeyImage = NULL;
    this->bIsUsedAsModifier = false;
    this->UnboundRenderOpacity = 0.50f;
}

