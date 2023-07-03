#include "HUDIconPanelWidget.h"

UHUDIconPanelWidget::UHUDIconPanelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IconContainerWidgetClass = NULL;
    this->InteractionWidgetClass = NULL;
    this->IconDomain = EHUDIconDomain::Map;
}

