#include "BTDecorator_DoesPathExist.h"

UBTDecorator_DoesPathExist::UBTDecorator_DoesPathExist() {
    this->bUseSelf = false;
    this->PathQueryType = EPathExistanceQueryType::HierarchicalQuery;
    this->FilterClass = NULL;
}

