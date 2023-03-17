#pragma once
#include "CoreMinimal.h"
#include "InteractionOption.generated.h"

USTRUCT(BlueprintType)
struct FInteractionOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    BRICKRIGS_API FInteractionOption();
};

