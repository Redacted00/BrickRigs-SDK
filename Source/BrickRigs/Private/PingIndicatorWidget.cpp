#include "PingIndicatorWidget.h"

void UPingIndicatorWidget::UpdatePing_Implementation(int32 InPing) {
}

void UPingIndicatorWidget::SetTextStyle(EBrickUITextStyle NewStyle) {
}

void UPingIndicatorWidget::SetStyleState(EBrickUIStyleState NewState) {
}

void UPingIndicatorWidget::SetPlayerState(ABrickPlayerState* InPlayerState) {
}

void UPingIndicatorWidget::SetPing(int32 InPing) {
}

void UPingIndicatorWidget::SetMinDisplayPing(int32 InPing) {
}

void UPingIndicatorWidget::SetColorStyle(EBrickUIColorStyle NewStyle) {
}

UPingIndicatorWidget::UPingIndicatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerState = NULL;
    this->PingTextBlock = NULL;
    this->MinDisplayPing = 0;
    this->bDisplayFrameRate = false;
}

