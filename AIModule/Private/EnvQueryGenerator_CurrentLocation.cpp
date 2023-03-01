#include "EnvQueryGenerator_CurrentLocation.h"
#include "EnvQueryContext_Querier.h"

UEnvQueryGenerator_CurrentLocation::UEnvQueryGenerator_CurrentLocation() {
    this->QueryContext = UEnvQueryContext_Querier::StaticClass();
}

