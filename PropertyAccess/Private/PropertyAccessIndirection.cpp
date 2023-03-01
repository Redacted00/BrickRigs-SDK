#include "PropertyAccessIndirection.h"

FPropertyAccessIndirection::FPropertyAccessIndirection() {
    this->Function = NULL;
    this->ReturnBufferSize = 0;
    this->ReturnBufferAlignment = 0;
    this->ArrayIndex = 0;
    this->Offset = 0;
    this->ObjectType = EPropertyAccessObjectType::None;
    this->Type = EPropertyAccessIndirectionType::Offset;
}

