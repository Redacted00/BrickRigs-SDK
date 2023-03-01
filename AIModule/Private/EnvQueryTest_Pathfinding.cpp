#include "EnvQueryTest_Pathfinding.h"
#include "EnvQueryContext_Querier.h"

UEnvQueryTest_Pathfinding::UEnvQueryTest_Pathfinding() {
    this->TestMode = EEnvTestPathfinding::PathExist;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
}

