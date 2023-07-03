#include "HUDNotificationWidget.h"




void UHUDNotificationWidget::OnFadedOut() {
}

void UHUDNotificationWidget::InitializeNotification_Implementation(FBrickUIIconSlot InIconSlot, const FText& InText, EBrickUIColorStyle InColorStyle) {
}

UHUDNotificationWidget::UHUDNotificationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TextBlock = NULL;
    this->IconImage = NULL;
    this->ThumbnailImage = NULL;
    this->NotificationDisplayTime = 2.00f;
}

