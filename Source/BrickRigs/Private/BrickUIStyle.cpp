#include "BrickUIStyle.h"

void UBrickUIStyle::UnbindUIStyle(UObject* Object) {
}

EBrickUIStyleState UBrickUIStyle::SwitchButtonStyleState(EBrickUIStyleState StyleState) {
    return EBrickUIStyleState::Default;
}

void UBrickUIStyle::SetTextStyle(EBrickUITextStyle TextStyle, const FTextBlockStyle& InTextStyle) {
}

void UBrickUIStyle::SetSpacingStyle(EBrickUISpacingStyle SpacingStyle, float InSpacing) {
}

void UBrickUIStyle::SetPaddingStyle(EBrickUIPaddingStyle PaddingStyle, FMargin InPadding) {
}

void UBrickUIStyle::SetIconAtlas(EBrickUIIconAtlas InIconAtlas, FBrickUIIconAtlas InAtlas) {
}

void UBrickUIStyle::SetColor(EBrickUIColorStyle ColorStyle, EBrickUIStyleState StyleState, const FLinearColor& InColor) {
}

void UBrickUIStyle::SetBrush(EBrickUIBrushStyle BrushStyle, EBrickUIStyleState StyleState, const FSlateBrush& InBrush) {
}

EBrickUIColorStyle UBrickUIStyle::InvertTeamAttitudeColorStyle(EBrickUIColorStyle ColorStyle) {
    return EBrickUIColorStyle::Default;
}

void UBrickUIStyle::GetUIStyle(UBrickUIStyle::FOnUIStyleChangedDynamic Delegate) {
}

FTextBlockStyle UBrickUIStyle::GetTextStyle(EBrickUITextStyle TextStyle, const FTextBlockStyle& Fallback) const {
    return FTextBlockStyle{};
}

EBrickUITextStyle UBrickUIStyle::GetTeamAttitudeTextStyle(TEnumAsByte<ETeamAttitude::Type> TeamAttitude) {
    return EBrickUITextStyle::Default;
}

EBrickUIColorStyle UBrickUIStyle::GetTeamAttitudeColorStyle(TEnumAsByte<ETeamAttitude::Type> TeamAttitude) {
    return EBrickUIColorStyle::Default;
}

float UBrickUIStyle::GetSpacing(EBrickUISpacingStyle SpacingStyle, float Fallback) const {
    return 0.0f;
}

FMargin UBrickUIStyle::GetPadding(EBrickUIPaddingStyle PaddingStyle, const FMargin& Fallback) const {
    return FMargin{};
}

FLinearColor UBrickUIStyle::GetColor(EBrickUIColorStyle ColorStyle, EBrickUIStyleState StyleState, const FLinearColor& Fallback) const {
    return FLinearColor{};
}

FSlateBrush UBrickUIStyle::GetBrush(EBrickUIBrushStyle BrushStyle, EBrickUIStyleState StyleState, const FSlateBrush& Fallback) const {
    return FSlateBrush{};
}

FText UBrickUIStyle::FormatRichTextStyle(EBrickUITextStyle Style, const FText& InText) {
    return FText::GetEmpty();
}


UBrickUIStyle::UBrickUIStyle() {
    this->ThrobberRotationSpeed = 360.00f;
    this->SpacingStyles[0] = 0.00f;
    this->SpacingStyles[1] = 0.00f;
    this->SpacingStyles[2] = 0.00f;
}

