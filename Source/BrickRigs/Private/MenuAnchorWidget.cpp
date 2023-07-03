#include "MenuAnchorWidget.h"

UWidget* UMenuAnchorWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}

void UMenuAnchorWidget::CloseMenu() {
}

UMenuAnchorWidget::UMenuAnchorWidget() : UUserWidget(FObjectInitializer::Get()) {
}

