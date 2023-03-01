#include "LandscapeMeshProxyActor.h"
#include "LandscapeMeshProxyComponent.h"

ALandscapeMeshProxyActor::ALandscapeMeshProxyActor() {
    this->LandscapeMeshProxyComponent = CreateDefaultSubobject<ULandscapeMeshProxyComponent>(TEXT("LandscapeMeshProxyComponent0"));
}

