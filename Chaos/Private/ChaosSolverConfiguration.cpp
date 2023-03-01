#include "ChaosSolverConfiguration.h"

FChaosSolverConfiguration::FChaosSolverConfiguration() {
    this->Iterations = 0;
    this->CollisionPairIterations = 0;
    this->PushOutIterations = 0;
    this->CollisionPushOutPairIterations = 0;
    this->CollisionMarginFraction = 0.00f;
    this->CollisionMarginMax = 0.00f;
    this->CollisionCullDistance = 0.00f;
    this->JointPairIterations = 0;
    this->JointPushOutPairIterations = 0;
    this->ClusterConnectionFactor = 0.00f;
    this->ClusterUnionConnectionType = EClusterUnionMethod::PointImplicit;
    this->bGenerateCollisionData = false;
    this->bGenerateBreakData = false;
    this->bGenerateTrailingData = false;
    this->bGenerateContactGraph = false;
}

