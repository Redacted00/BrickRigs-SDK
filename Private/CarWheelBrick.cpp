#include "CarWheelBrick.h"

void UCarWheelBrick::OnRootComponentWake(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

UCarWheelBrick::UCarWheelBrick() {
    this->TirePressureRatio = 0.80f;
}

