#include "ControlHintWidget.h"

void UControlHintWidget::UpdateTextVisibility_Implementation(bool bNewVisible) {
}

void UControlHintWidget::UpdateIsHoldAction_Implementation(bool bIsHoldAction) {
}

void UControlHintWidget::UpdateInputChordVisibility_Implementation(bool bNewVisible) {
}

void UControlHintWidget::UpdateInputChordStyleState_Implementation(EBrickUIStyleState InStyleState, bool bInIsHoldAction) {
}

void UControlHintWidget::UpdateIconVisibility_Implementation(bool bNewVisible) {
}

void UControlHintWidget::UpdateHoldProgress_Implementation(float InHoldProgress) {
}

void UControlHintWidget::UpdateDisplayInfo_Implementation(const FDisplayInfo& NewDisplayInfo) {
}

void UControlHintWidget::SetTextStyle_Implementation(EBrickUITextStyle NewStyle) {
}

void UControlHintWidget::SetStyleState_Implementation(EBrickUIStyleState NewState) {
}

void UControlHintWidget::SetShowUnboundKey(bool bShow) {
}

void UControlHintWidget::SetShowInputChord(bool bShow) {
}

void UControlHintWidget::SetInputChordScale_Implementation(float InScale) {
}

void UControlHintWidget::SetDisplayInfoMode(EControlHintDisplayInfoMode NewMode) {
}

void UControlHintWidget::SetDisplayInfo(const FDisplayInfo& InDisplayInfo) {
}

void UControlHintWidget::SetColorStyle_Implementation(EBrickUIColorStyle NewStyle) {
}

void UControlHintWidget::SetAction(FName InActionName, EInputActionTriggerType InTriggerType) {
}

void UControlHintWidget::OnInputMethodChanged(EInputMethod NewInputMethod) {
}

UControlHintWidget::UControlHintWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InputChordScaleBox = NULL;
    this->InputChordWidget = NULL;
    this->TextBlock = NULL;
    this->IconImage = NULL;
    this->HoldProgressBar = NULL;
    this->TriggerType = EInputActionTriggerType::Press;
    this->bShowUnboundKey = true;
    this->bShowInputChord = true;
    this->DisplayInfoMode = EControlHintDisplayInfoMode::Auto;
    this->ColorStyle = EBrickUIColorStyle::Default;
    this->StyleState = EBrickUIStyleState::Default;
    this->TextSpacing = 5.00f;
    this->HoldProgressInterpSpeed = 12.00f;
    this->KeyPaddingInterpSpeed = 8.00f;
}

