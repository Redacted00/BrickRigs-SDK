#include "WinchBrickStaticInfo.h"

UWinchBrickStaticInfo::UWinchBrickStaticInfo() {
    this->HookMesh = NULL;
    this->RopeMesh = NULL;
    this->MinRopeLength = 30.00f;
    this->MaxRopeLength = 5000.00f;
    this->WinchSpeed = 100.00f;
}

