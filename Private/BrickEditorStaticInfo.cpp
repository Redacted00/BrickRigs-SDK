#include "BrickEditorStaticInfo.h"
#include "BrickConnectorsISMComponent.h"

UBrickEditorStaticInfo::UBrickEditorStaticInfo() {
    this->BoundsMesh = NULL;
    this->CenterOfMassMesh = NULL;
    this->GridMesh = NULL;
    this->GizmoMesh = NULL;
    this->GizmoSize = 0.01f;
    this->GizmoCenterHitRadius = 100.00f;
    this->GizmoRotationArrowHitRadius = 25.00f;
    this->GizmoSweepSphereRadius = 1.00f;
    this->OutlineMaterial = NULL;
    this->NewObjectPlacementDistance = 1000.00f;
    this->NewObjectPlacementSweepRadius = 30.00f;
    this->MoveSpeed = 120.00f;
    this->MoveSpeedDistanceScale = 0.01f;
    this->RotateSpeed = 90.00f;
    this->MouseRotateSpeed = 22.50f;
    this->MaxUndoSteps = 25;
    this->AutoSaveTime = 60.00f;
    this->VisualizationArrowComponentClass = NULL;
    this->ConnectorsISMComponentClass = UBrickConnectorsISMComponent::StaticClass();
    this->PointLightFrustumMesh = NULL;
    this->SpotLightFrustumMesh = NULL;
    this->FluidDynamicsVisualizationMaterial = NULL;
}

