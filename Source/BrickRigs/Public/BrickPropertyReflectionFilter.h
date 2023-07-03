#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BrickPropertyReflectionFilter.generated.h"

USTRUCT(BlueprintType)
struct FBrickPropertyReflectionFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    BRICKRIGS_API FBrickPropertyReflectionFilter();
};

