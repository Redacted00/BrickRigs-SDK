#include "PhysicsSettingsCore.h"

UPhysicsSettingsCore::UPhysicsSettingsCore() {
    this->DefaultGravityZ = -980.00f;
    this->DefaultTerminalVelocity = 4000.00f;
    this->DefaultFluidFriction = 0.30f;
    this->SimulateScratchMemorySize = 262144;
    this->RagdollAggregateThreshold = 4;
    this->TriangleMeshTriangleMinAreaThreshold = 5.00f;
    this->bEnableShapeSharing = false;
    this->bEnablePCM = true;
    this->bEnableStabilization = false;
    this->bWarnMissingLocks = true;
    this->bEnable2DPhysics = false;
    this->bDefaultHasComplexCollision = true;
    this->BounceThresholdVelocity = 200.00f;
    this->FrictionCombineMode = EFrictionCombineMode::Average;
    this->RestitutionCombineMode = EFrictionCombineMode::Average;
    this->MaxAngularVelocity = 3600.00f;
    this->MaxDepenetrationVelocity = 0.00f;
    this->ContactOffsetMultiplier = 0.02f;
    this->MinContactOffset = 2.00f;
    this->MaxContactOffset = 8.00f;
    this->bSimulateSkeletalMeshOnDedicatedServer = true;
    this->DefaultShapeComplexity = CTF_UseSimpleAndComplex;
}

