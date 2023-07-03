#include "DistanceConstraint.h"

FDistanceConstraint::FDistanceConstraint() {
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->SpringStiffness = 0.00f;
    this->SpringDampening = 0.00f;
    this->BreakingForce = 0.00f;
    this->InvMassScale0 = 0.00f;
    this->InvMassScale1 = 0.00f;
}

