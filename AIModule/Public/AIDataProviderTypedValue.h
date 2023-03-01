#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderValue.h"
#include "AIDataProviderTypedValue.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDataProviderTypedValue : public FAIDataProviderValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PropertyType;
    
    FAIDataProviderTypedValue();
};

