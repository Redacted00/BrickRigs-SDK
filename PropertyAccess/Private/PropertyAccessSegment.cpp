#include "PropertyAccessSegment.h"

FPropertyAccessSegment::FPropertyAccessSegment() {
    this->Struct = NULL;
    this->Function = NULL;
    this->ArrayIndex = 0;
    this->Flags = 0;
}

