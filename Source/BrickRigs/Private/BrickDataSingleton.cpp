#include "BrickDataSingleton.h"

UBrickDataSingleton* UBrickDataSingleton::GetGameSingleton() {
    return NULL;
}

FText UBrickDataSingleton::GetColorDisplayName(const FLinearColor& Color, bool bRoundValue) const {
    return FText::GetEmpty();
}

UBrickDataSingleton::UBrickDataSingleton() {
    this->MainSoundClass = NULL;
    this->WorldSoundClass = NULL;
    this->MusicSoundClass = NULL;
    this->MaterialThumbnailRenderBrick = NULL;
    this->TextureThumbnailRenderMaterial = NULL;
}

