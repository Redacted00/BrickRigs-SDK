#include "WindowManagerWidget.h"

UWindowManagerWidget::UWindowManagerWidget() {
    this->MenuAnchorWidget = NULL;
    this->CurrentTooltipWidget = NULL;
    this->TooltipOwner = NULL;
    this->MainCanvasPanel = NULL;
    this->PopupContainerClass = NULL;
    this->ContextMenuWidgetClass = NULL;
    this->TooltipWidgetClass = NULL;
    this->TooltipOffset = 30.00f;
}

