#include "DashboardWidget.h"




UDashboardWidget::UDashboardWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Vehicle = NULL;
    this->IconWidgetClass = NULL;
    this->SliderWidgetClass = NULL;
    this->LowResourceWarningThreshold = 0.10f;
}

