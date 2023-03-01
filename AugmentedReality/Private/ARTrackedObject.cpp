#include "ARTrackedObject.h"

class UARCandidateObject;

UARCandidateObject* UARTrackedObject::GetDetectedObject() const {
    return NULL;
}

UARTrackedObject::UARTrackedObject() {
    this->DetectedObject = NULL;
}

