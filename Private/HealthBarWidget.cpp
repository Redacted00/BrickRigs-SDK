#include "HealthBarWidget.h"




void UHealthBarWidget::OnHUDVisibilityChanged(EHUDVisibility NewVisibility) {
}

UHealthBarWidget::UHealthBarWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HealthInterpSpeed = 4.00f;
}

