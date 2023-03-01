#include "CableActor.h"
#include "CableComponent.h"

ACableActor::ACableActor() {
    this->CableComponent = CreateDefaultSubobject<UCableComponent>(TEXT("CableComponent0"));
}

