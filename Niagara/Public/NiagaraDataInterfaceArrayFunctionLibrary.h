#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "NiagaraDataInterfaceArrayFunctionLibrary.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceArrayFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector& Value, bool bSizeToFit);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector4& Value, bool bSizeToFit);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector4>& ArrayData);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector2D& Value, bool bSizeToFit);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector2D>& ArrayData);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector>& ArrayData);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FQuat& Value, bool bSizeToFit);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FQuat>& ArrayData);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<int32>& ArrayData);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, float Value, bool bSizeToFit);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<float>& ArrayData);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FLinearColor& Value, bool bSizeToFit);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FLinearColor>& ArrayData);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const bool& Value, bool bSizeToFit);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<bool>& ArrayData);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 GetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector4> GetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector2D> GetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> GetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FQuat> GetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    
    UFUNCTION(BlueprintCallable)
    static float GetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> GetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FLinearColor> GetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<bool> GetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    
};

