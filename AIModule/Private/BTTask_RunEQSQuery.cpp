#include "BTTask_RunEQSQuery.h"

UBTTask_RunEQSQuery::UBTTask_RunEQSQuery() {
    this->QueryTemplate = NULL;
    this->RunMode = EEnvQueryRunMode::SingleResult;
    this->bUseBBKey = false;
}

