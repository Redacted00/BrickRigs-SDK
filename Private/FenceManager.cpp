#include "FenceManager.h"
#include "DestructibleInstancesComponent.h"

AFenceManager::AFenceManager() {
    this->InstancesComponent = CreateDefaultSubobject<UDestructibleInstancesComponent>(TEXT("InstancesComponent"));
}

