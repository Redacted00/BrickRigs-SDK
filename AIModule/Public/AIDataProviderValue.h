#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderValue.generated.h"

class UAIDataProvider;

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDataProviderValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIDataProvider* DataBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataField;
    
    FAIDataProviderValue();
};

