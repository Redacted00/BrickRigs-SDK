#include "MenuAnchorWidget.h"

class UWidget;

UWidget* UMenuAnchorWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}

void UMenuAnchorWidget::CloseMenu() {
}

UMenuAnchorWidget::UMenuAnchorWidget() : UUserWidget(FObjectInitializer::Get()) {
}

