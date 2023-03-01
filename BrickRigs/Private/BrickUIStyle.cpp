#include "BrickUIStyle.h"

EBrickUIStyleState UBrickUIStyle::SwitchButtonStyleState(EBrickUIStyleState StyleState) {
    return EBrickUIStyleState::Default;
}

void UBrickUIStyle::SetTextStyle(EBrickUITextStyle TextStyle, const FTextBlockStyle& InTextStyle) {
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

FTextBlockStyle UBrickUIStyle::GetTextStyle(EBrickUITextStyle TextStyle, const FTextBlockStyle& Fallback) const {
    return FTextBlockStyle{};
}

EBrickUITextStyle UBrickUIStyle::GetTeamAttitudeTextStyle(TEnumAsByte<ETeamAttitude::Type> TeamAttitude) {
    return EBrickUITextStyle::Default;
}

EBrickUIColorStyle UBrickUIStyle::GetTeamAttitudeColorStyle(TEnumAsByte<ETeamAttitude::Type> TeamAttitude) {
    return EBrickUIColorStyle::Default;
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

void UBrickUIStyle::BuildStyle_Implementation() {
}

UBrickUIStyle::UBrickUIStyle() {
    this->ThrobberRotationSpeed = 360.00f;
}

