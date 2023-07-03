#include "BrickTextBoxWidget.h"



void UBrickTextBoxWidget::TogglePasswordVisible() {
}

void UBrickTextBoxWidget::StartTyping(bool bSelectAllText) {
}

void UBrickTextBoxWidget::SetTextStyle(EBrickUITextStyle InTextStyle) {
}

void UBrickTextBoxWidget::SetText(const FText& InText, bool bValidateText) {
}

void UBrickTextBoxWidget::SetPasswordVisible(bool bNewVisible) {
}

void UBrickTextBoxWidget::SetPaddingStyle(EBrickUIPaddingStyle InPaddingStyle) {
}

void UBrickTextBoxWidget::SetMaxTextLength(int32 InMaxLength) {
}

void UBrickTextBoxWidget::SetJustification(TEnumAsByte<ETextJustify::Type> NewJustification) {
}

void UBrickTextBoxWidget::SetIsReadOnly(bool bNewReadOnly) {
}

void UBrickTextBoxWidget::SetIsPassword(bool bNewIsPassword) {
}

void UBrickTextBoxWidget::SetIsMarquee(bool bNewMarquee) {
}

void UBrickTextBoxWidget::SetHintText(const FText& InText) {
}

void UBrickTextBoxWidget::SetCustomFocus(bool bNewUseCustomFocus, bool bNewFocused) {
}

void UBrickTextBoxWidget::SetColorStyle(EBrickUIColorStyle InColorStyle) {
}

void UBrickTextBoxWidget::SetBrushStyle(EBrickUIBrushStyle InBrushStyle) {
}

void UBrickTextBoxWidget::SetAllowMultiLine(bool bInAllowMultiLine) {
}

void UBrickTextBoxWidget::OnTextChanged(const FText& NewText) {
}

bool UBrickTextBoxWidget::IsTyping() const {
    return false;
}

bool UBrickTextBoxWidget::IsReadOnly() const {
    return false;
}

bool UBrickTextBoxWidget::IsPasswordVisible() const {
    return false;
}

bool UBrickTextBoxWidget::IsMarquee() const {
    return false;
}

FText UBrickTextBoxWidget::GetText() const {
    return FText::GetEmpty();
}

UBrickTextBoxWidget::UBrickTextBoxWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MultiLineTextBox = NULL;
    this->ShowPasswordButton = NULL;
    this->MaxTextLength = 0;
    this->bAllowMultiLine = false;
    this->bIsPassword = false;
    this->bIsNumeric = false;
}

