#include "GunBrickStaticInfo.h"

UGunBrickStaticInfo::UGunBrickStaticInfo() {
    this->ReloadTime = 2.00f;
    this->RecoilImpulse = 1000.00f;
    this->MaxBarrelLength = 240.00f;
    this->MinSpreadRadiusScale = 0.10f;
    this->MinMuzzleVelocityScale = 0.35f;
    this->MinDamageScale = 0.50f;
    this->ShellEmitterDetailMode = DM_Medium;
    this->MaxShellEmitterDrawDistance = 10000.00f;
}

