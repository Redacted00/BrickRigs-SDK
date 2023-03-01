#include "AsyncTask_LoadXRDeviceVisComponent.h"

class AActor;
class UAsyncTask_LoadXRDeviceVisComponent;
class UPrimitiveComponent;

UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent) {
    return NULL;
}

UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent) {
    return NULL;
}

UAsyncTask_LoadXRDeviceVisComponent::UAsyncTask_LoadXRDeviceVisComponent() {
    this->SpawnedComponent = NULL;
}

