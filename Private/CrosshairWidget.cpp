#include "CrosshairWidget.h"




void UCrosshairWidget::OnHUDVisibilityChanged(EHUDVisibility NewVisibility) {
}

UCrosshairWidget::UCrosshairWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Character = NULL;
    this->CurrentItem = NULL;
    this->CrosshairCanvas = NULL;
    this->HitMarkerImage = NULL;
    this->CrosshairHUDVisibility = EHUDVisibility::Full;
    this->HitMarkerHUDVisibility = EHUDVisibility::Full;
    this->CrosshairWidgetClass = NULL;
    this->NumCrosshairWidgets = 4;
    this->CrosshairRotationOffset = 0.00f;
    this->CrosshairAngleStep = 90.00f;
    this->CrosshairRadiusScale = 2.00f;
    this->MinCrosshairRadius = 0.00f;
}

