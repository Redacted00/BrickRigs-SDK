#include "FirearmStaticInfo.h"

UFirearmStaticInfo::UFirearmStaticInfo() {
    this->BulletsBoneName = TEXT("magazine_bullets");
    this->bCanAimWhileCocking = false;
    this->RecoilDuration = 0.25f;
    this->CameraShakeScale = 1.00f;
    this->bSightRailRearBlocked = false;
    this->bSightRailFrontBlocked = false;
    this->SightRailLength = 0.00f;
    this->PaintLayerIndex = 1;
    this->ManualShellEjectionSpeed = 0.25f;
    this->ShellEjectionSpeedDeviation = 0.25f;
}

