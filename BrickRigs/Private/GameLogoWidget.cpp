#include "GameLogoWidget.h"


void UGameLogoWidget::SetDisplayedContent(EGameLogoContent InContent) {
}

void UGameLogoWidget::SetCustomContent(FText InText, const FString& InVersion) {
}

FText UGameLogoWidget::GetLogoText() const {
    return FText::GetEmpty();
}

UGameLogoWidget::UGameLogoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LogoTextBlock = NULL;
    this->DisplayedContent = EGameLogoContent::Custom;
    this->CharacterWriteTime = 0.25f;
}

