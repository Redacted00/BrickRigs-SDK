#include "NiagaraDataInterfaceArrayFunctionLibrary.h"

class UNiagaraComponent;

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector& Value, bool bSizeToFit) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector4& Value, bool bSizeToFit) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector4>& ArrayData) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector2D& Value, bool bSizeToFit) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector2D>& ArrayData) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector>& ArrayData) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FQuat& Value, bool bSizeToFit) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FQuat>& ArrayData) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, int32 Value, bool bSizeToFit) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<int32>& ArrayData) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, float Value, bool bSizeToFit) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<float>& ArrayData) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FLinearColor& Value, bool bSizeToFit) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FLinearColor>& ArrayData) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const bool& Value, bool bSizeToFit) {
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<bool>& ArrayData) {
}

FVector UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index) {
    return FVector{};
}

FVector4 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index) {
    return FVector4{};
}

TArray<FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    return TArray<FVector4>();
}

FVector2D UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index) {
    return FVector2D{};
}

TArray<FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    return TArray<FVector2D>();
}

TArray<FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    return TArray<FVector>();
}

FQuat UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index) {
    return FQuat{};
}

TArray<FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    return TArray<FQuat>();
}

int32 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index) {
    return 0;
}

TArray<int32> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    return TArray<int32>();
}

float UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index) {
    return 0.0f;
}

TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    return TArray<float>();
}

FLinearColor UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index) {
    return FLinearColor{};
}

TArray<FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    return TArray<FLinearColor>();
}

bool UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index) {
    return false;
}

TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName) {
    return TArray<bool>();
}

UNiagaraDataInterfaceArrayFunctionLibrary::UNiagaraDataInterfaceArrayFunctionLibrary() {
}

