#include "PlayerControllerStaticInfo.h"

UPlayerControllerStaticInfo::UPlayerControllerStaticInfo() {
    this->MaxNumChatMessages = 10;
    this->MaxInteractionAngle = 20.00f;
    this->MaxCharacterInteractionDistance = 400.00f;
    this->VehicleHUDIconDrawDistanceScale = 3.00f;
    this->SpectatorHUDIconDrawDistanceScale = 2.00f;
    this->DeathSoundMix = NULL;
    this->NoAtmosphereSoundMix = NULL;
    this->HurtSound = NULL;
    this->VehicleEditorClass = NULL;
    this->EditorEntryGarageInflation = 500.00f;
}

