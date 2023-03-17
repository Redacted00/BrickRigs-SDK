#include "CharacterAction.h"

UCharacterAction::UCharacterAction() {
    this->ItemMontage = NULL;
    this->ActionLength = 0.50f;
    this->PlayRate = 1.00f;
    this->ActionLayer = ECharacterActionLayer::UpperBody;
    this->CharacterMontage = NULL;
    this->FoleySound = NULL;
}

