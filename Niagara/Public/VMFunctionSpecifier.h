#pragma once
#include "CoreMinimal.h"
#include "VMFunctionSpecifier.generated.h"

USTRUCT(BlueprintType)
struct FVMFunctionSpecifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
    NIAGARA_API FVMFunctionSpecifier();
};

