#include "MenuPageWidget.h"

class UMenuWidget;
class UWidget;

bool UMenuPageWidget::StepBack_Implementation() {
    return false;
}

UWidget* UMenuPageWidget::GetWidgetToFocus_Implementation() const {
    return NULL;
}

UMenuWidget* UMenuPageWidget::GetMenuWidget() const {
    return NULL;
}

UMenuPageWidget::UMenuPageWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MenuPageSize = EMenuPageSize::Default;
}

