#include "EnvQueryInstanceBlueprintWrapper.h"

class AActor;

void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(FName ParamName, float Value) {
}

TArray<FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations() const {
    return TArray<FVector>();
}

TArray<AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors() const {
    return TArray<AActor*>();
}

bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(TArray<FVector>& ResultLocations) const {
    return false;
}

bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(TArray<AActor*>& ResultActors) const {
    return false;
}

float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32 ItemIndex) const {
    return 0.0f;
}

UEnvQueryInstanceBlueprintWrapper::UEnvQueryInstanceBlueprintWrapper() {
    this->QueryID = -1;
    this->ItemType = NULL;
    this->OptionIndex = 0;
}

