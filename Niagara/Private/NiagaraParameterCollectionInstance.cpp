#include "NiagaraParameterCollectionInstance.h"

void UNiagaraParameterCollectionInstance::SetVectorParameter(const FString& InVariableName, FVector InValue) {
}

void UNiagaraParameterCollectionInstance::SetVector4Parameter(const FString& InVariableName, const FVector4& InValue) {
}

void UNiagaraParameterCollectionInstance::SetVector2DParameter(const FString& InVariableName, FVector2D InValue) {
}

void UNiagaraParameterCollectionInstance::SetQuatParameter(const FString& InVariableName, const FQuat& InValue) {
}

void UNiagaraParameterCollectionInstance::SetIntParameter(const FString& InVariableName, int32 InValue) {
}

void UNiagaraParameterCollectionInstance::SetFloatParameter(const FString& InVariableName, float InValue) {
}

void UNiagaraParameterCollectionInstance::SetColorParameter(const FString& InVariableName, FLinearColor InValue) {
}

void UNiagaraParameterCollectionInstance::SetBoolParameter(const FString& InVariableName, bool InValue) {
}

FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const FString& InVariableName) {
    return FVector{};
}

FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const FString& InVariableName) {
    return FVector4{};
}

FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const FString& InVariableName) {
    return FVector2D{};
}

FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const FString& InVariableName) {
    return FQuat{};
}

int32 UNiagaraParameterCollectionInstance::GetIntParameter(const FString& InVariableName) {
    return 0;
}

float UNiagaraParameterCollectionInstance::GetFloatParameter(const FString& InVariableName) {
    return 0.0f;
}

FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const FString& InVariableName) {
    return FLinearColor{};
}

bool UNiagaraParameterCollectionInstance::GetBoolParameter(const FString& InVariableName) {
    return false;
}

UNiagaraParameterCollectionInstance::UNiagaraParameterCollectionInstance() {
    this->Collection = NULL;
}

