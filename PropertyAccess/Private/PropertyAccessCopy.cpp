#include "PropertyAccessCopy.h"

FPropertyAccessCopy::FPropertyAccessCopy() {
    this->AccessIndex = 0;
    this->DestAccessStartIndex = 0;
    this->DestAccessEndIndex = 0;
    this->Type = EPropertyAccessCopyType::None;
}

