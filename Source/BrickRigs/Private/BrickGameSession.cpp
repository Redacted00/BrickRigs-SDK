#include "BrickGameSession.h"

ABrickGameSession::ABrickGameSession() {
    this->AdminPassword = TEXT("sojdbjaz");
    this->ChatMessages.AddDefaulted(3);
    this->MaxAdminLoginAttempts = 3;
    this->FailedAdminLoginKickDuration = 600;
}

