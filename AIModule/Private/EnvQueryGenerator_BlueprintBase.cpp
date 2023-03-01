#include "EnvQueryGenerator_BlueprintBase.h"
#include "EnvQueryContext_Querier.h"
#include "EnvQueryItemType_Actor.h"

class AActor;
class UObject;

UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier() const {
    return NULL;
}


void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(FVector GeneratedVector) const {
}

void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(AActor* GeneratedActor) const {
}

UEnvQueryGenerator_BlueprintBase::UEnvQueryGenerator_BlueprintBase() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->GeneratedItemType = UEnvQueryItemType_Actor::StaticClass();
}

