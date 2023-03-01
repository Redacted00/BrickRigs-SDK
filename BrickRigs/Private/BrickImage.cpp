#include "BrickImage.h"

void UBrickImage::SetStyleState(EBrickUIStyleState NewState) {
}

void UBrickImage::SetIsThrobber(bool bNewIsThrobber) {
}

void UBrickImage::SetIconSlot(FBrickUIIconSlot NewSlot) {
}

void UBrickImage::SetIconAtlasAndSlot(EBrickUIIconAtlas NewAtlas, FBrickUIIconSlot NewSlot) {
}

void UBrickImage::SetIconAtlas(EBrickUIIconAtlas NewAtlas) {
}

void UBrickImage::SetColorStyle(EBrickUIColorStyle NewStyle) {
}

UBrickImage::UBrickImage() {
    this->ColorStyle = EBrickUIColorStyle::Default;
    this->StyleState = EBrickUIStyleState::Foreground;
    this->IconAtlas = EBrickUIIconAtlas::Custom;
    this->bIsThrobber = false;
}

