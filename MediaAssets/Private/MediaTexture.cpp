#include "MediaTexture.h"

class UMediaPlayer;

void UMediaTexture::SetMediaPlayer(UMediaPlayer* NewMediaPlayer) {
}

int32 UMediaTexture::GetWidth() const {
    return 0;
}

int32 UMediaTexture::GetTextureNumMips() const {
    return 0;
}

UMediaPlayer* UMediaTexture::GetMediaPlayer() const {
    return NULL;
}

int32 UMediaTexture::GetHeight() const {
    return 0;
}

float UMediaTexture::GetAspectRatio() const {
    return 0.0f;
}

UMediaTexture::UMediaTexture() {
    this->AddressX = TA_Clamp;
    this->AddressY = TA_Clamp;
    this->AutoClear = false;
    this->EnableGenMips = false;
    this->NumMips = 1;
    this->NewStyleOutput = false;
    this->OutputFormat = MTOF_Default;
    this->CurrentAspectRatio = 0.00f;
    this->CurrentOrientation = MTORI_Original;
    this->MediaPlayer = NULL;
}

