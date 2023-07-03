#include "MapWidget.h"


void UMapWidget::ResetPanAndZoom(bool bInitialize) {
}

void UMapWidget::OnMeasurementSystemChanged(EMeasurementSystem NewSystem) {
}

UWidget* UMapWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}


UMapWidget::UMapWidget() {
    this->MapMID = NULL;
    this->ButtonPanel = NULL;
    this->ScaleTextBlock = NULL;
    this->MinViewportSize = 10000.00f;
    this->PanSpeed = 1.00f;
    this->ZoomSpeed = 4.00f;
    this->ZoomStep = 25000.00f;
    this->ViewportInterpSpeed = 8.00f;
    this->MapResolutionScale = 0.25f;
    this->MapRenderInterval = 0.50f;
    this->MapMovedRenderDelay = 0.10f;
    this->GridSize = 10000.00f;
    this->CrosshairWidgetClass = NULL;
}

