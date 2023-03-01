#include "MockDataMeshTrackerComponent.h"

class UMRMeshComponent;

void UMockDataMeshTrackerComponent::DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
}

void UMockDataMeshTrackerComponent::ConnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
}

UMockDataMeshTrackerComponent::UMockDataMeshTrackerComponent() {
    this->ScanWorld = true;
    this->RequestNormals = true;
    this->RequestVertexConfidence = false;
    this->VertexColorMode = EMeshTrackerVertexColorMode::None;
    this->BlockVertexColors.AddDefaulted(6);
    this->UpdateInterval = 3.00f;
    this->MRMesh = NULL;
}

