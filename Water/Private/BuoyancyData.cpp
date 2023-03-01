#include "BuoyancyData.h"

FBuoyancyData::FBuoyancyData() {
    this->BuoyancyCoefficient = 0.00f;
    this->BuoyancyDamp = 0.00f;
    this->BuoyancyDamp2 = 0.00f;
    this->BuoyancyRampMinVelocity = 0.00f;
    this->BuoyancyRampMaxVelocity = 0.00f;
    this->BuoyancyRampMax = 0.00f;
    this->MaxBuoyantForce = 0.00f;
    this->WaterShorePushFactor = 0.00f;
    this->WaterVelocityStrength = 0.00f;
    this->MaxWaterForce = 0.00f;
    this->DragCoefficient = 0.00f;
    this->DragCoefficient2 = 0.00f;
    this->AngularDragCoefficient = 0.00f;
    this->MaxDragSpeed = 0.00f;
    this->bApplyDragForcesInWater = false;
}

