#include "ARLifeCycleComponent.h"

class AARActor;

void UARLifeCycleComponent::ServerSpawnARActor_Implementation(UClass* ComponentClass, FGuid NativeID) {
}
bool UARLifeCycleComponent::ServerSpawnARActor_Validate(UClass* ComponentClass, FGuid NativeID) {
    return true;
}

void UARLifeCycleComponent::ServerDestroyARActor_Implementation(AARActor* Actor) {
}
bool UARLifeCycleComponent::ServerDestroyARActor_Validate(AARActor* Actor) {
    return true;
}

UARLifeCycleComponent::UARLifeCycleComponent() {
}

