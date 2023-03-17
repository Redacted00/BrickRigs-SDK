#include "ItemStaticInfo.h"
#include "ItemAnimInstance.h"

UItemStaticInfo::UItemStaticInfo() {
    this->StaticMesh = NULL;
    this->MaterialOverride = NULL;
    this->ThumbnailStaticMesh = NULL;
    this->MaxDrawDistance = 50000.00f;
    this->AnimInstanceClass = UItemAnimInstance::StaticClass();
    this->bCanBeEquipped = false;
    this->SortOrder = 0;
    this->Price = 1000.00f;
    this->IdleSequence = NULL;
    this->SprintSequence = NULL;
}

