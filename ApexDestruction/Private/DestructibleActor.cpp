#include "DestructibleActor.h"
#include "DestructibleComponent.h"

ADestructibleActor::ADestructibleActor() {
    this->DestructibleComponent = CreateDefaultSubobject<UDestructibleComponent>(TEXT("DestructibleComponent0"));
}

