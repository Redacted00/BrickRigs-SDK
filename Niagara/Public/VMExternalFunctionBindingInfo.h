#pragma once
#include "CoreMinimal.h"
#include "VMFunctionSpecifier.h"
#include "VMExternalFunctionBindingInfo.generated.h"

USTRUCT(BlueprintType)
struct FVMExternalFunctionBindingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> InputParamLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOutputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVMFunctionSpecifier> FunctionSpecifiers;
    
    NIAGARA_API FVMExternalFunctionBindingInfo();
};

