#include "ClientDamageInfo.h"

FClientDamageInfo::FClientDamageInfo() {
    this->TeamAttitude = ETeamAttitude::Friendly;
    this->Damage = 0.00f;
    this->bIsHeadshot = false;
    this->bIsKillshot = false;
}

