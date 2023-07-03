#include "GameModeInfo.h"

UGameModeInfo::UGameModeInfo() {
    this->bRequiresPrefixedSubLevel = true;
    this->bUsesRoundDuration = true;
    this->bIsRoundBased = false;
    this->bUsesInfiniteMoney = false;
    this->bUsesSandboxSettings = false;
    this->bSupportsSingleplayer = true;
    this->bSupportsMultiplayer = true;
}

