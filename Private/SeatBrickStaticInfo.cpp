#include "SeatBrickStaticInfo.h"

USeatBrickStaticInfo::USeatBrickStaticInfo() {
    this->CharacterDamageScale = 3.00f;
    this->MinCharacterDamage = 0.25f;
    this->EditorCharacterMaterial = NULL;
    this->CharacterIdleSequence = NULL;
    this->CharacterCapsuleHalfHeight = 60.00f;
    this->NumInventorySlots = 1;
}

