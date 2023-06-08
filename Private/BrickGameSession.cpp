#include "BrickGameSession.h"

ABrickGameSession::ABrickGameSession() {
    this->AdminPassword = TEXT("sktcsrom");
    this->KickedPlayers.AddDefaulted(12);
    this->MaxAdminLoginAttempts = 3;
    this->FailedAdminLoginKickDuration = 600;
}

