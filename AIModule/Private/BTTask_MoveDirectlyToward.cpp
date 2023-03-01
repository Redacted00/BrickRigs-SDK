#include "BTTask_MoveDirectlyToward.h"

UBTTask_MoveDirectlyToward::UBTTask_MoveDirectlyToward() {
    this->bDisablePathUpdateOnGoalLocationChange = false;
    this->bProjectVectorGoalToNavigation = true;
    this->bUpdatedDeprecatedProperties = false;
}

