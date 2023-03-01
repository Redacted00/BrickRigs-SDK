#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BlackboardAssetProvider.generated.h"

class UBlackboardData;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBlackboardAssetProvider : public UInterface {
    GENERATED_BODY()
};

class IBlackboardAssetProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UBlackboardData* GetBlackboardAsset() const PURE_VIRTUAL(GetBlackboardAsset, return NULL;);
    
};

