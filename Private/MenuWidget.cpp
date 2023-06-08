#include "MenuWidget.h"

bool UMenuWidget::StepBack() {
    return false;
}

void UMenuWidget::ShowMenuPage(TSoftClassPtr<UMenuPageWidget> WidgetClass, FText TitleText) {
}



void UMenuWidget::PlayMenuTransition_Implementation() {
}

void UMenuWidget::OpenMenu(FName InMenu) {
}



void UMenuWidget::OnClickedBack() {
}

bool UMenuWidget::IsMainMenu() const {
    return false;
}


void UMenuWidget::CloseMenu() {
}


UMenuWidget::UMenuWidget() {
    this->CurrentMenuPage = NULL;
}

