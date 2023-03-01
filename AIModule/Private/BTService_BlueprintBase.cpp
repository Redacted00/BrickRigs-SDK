#include "BTService_BlueprintBase.h"









bool UBTService_BlueprintBase::IsServiceActive() const {
    return false;
}

UBTService_BlueprintBase::UBTService_BlueprintBase() {
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->bShowPropertyDetails = true;
    this->bShowEventDetails = false;
}

