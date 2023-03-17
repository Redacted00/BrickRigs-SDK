#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "BrickConnectionDamageItem.h"
#include "BrickConnectionDamageArray.generated.h"

USTRUCT(BlueprintType)
struct FBrickConnectionDamageArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrickConnectionDamageItem> Items;
    
    BRICKRIGS_API FBrickConnectionDamageArray();
};

