#include "PlayerWidget.h"

void UPlayerWidget::OnHUDVisibilityChanged(EHUDVisibility NewVisibility) {
}







UPlayerWidget::UPlayerWidget() {
    this->Character = NULL;
    this->Vehicle = NULL;
    this->CurrentItemWidget = NULL;
    this->HealthBarWidget = NULL;
    this->CrosshairWidget = NULL;
    this->RestrictedAreaWidget = NULL;
    this->DashboardWidget = NULL;
    this->CameraBrickWidget = NULL;
    this->CurrentItemWidgetClass = NULL;
    this->CurrentItemFadeOutDelay = 5.00f;
    this->HealthBarWidgetClass = NULL;
    this->CrosshairWidgetClass = NULL;
    this->HurtMarkerClass = NULL;
    this->MaxNumHurtMarkers = 4;
    this->RestrictedAreaWidgetClass = NULL;
}

