#include "BrickOnlineSessionInfo.h"

FBrickOnlineSessionInfo::FBrickOnlineSessionInfo() {
    this->Level = NULL;
    this->GameMode = NULL;
    this->CurrentPlayers = 0;
    this->MaxPlayers = 0;
    this->Ping = 0;
    this->AverageFrameRate = 0;
    this->bIsDedicated = false;
    this->bIsPasswordProtected = false;
}

