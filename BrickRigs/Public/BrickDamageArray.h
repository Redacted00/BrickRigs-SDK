#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "BrickDamageItem.h"
#include "BrickDamageArray.generated.h"

USTRUCT(BlueprintType)
struct FBrickDamageArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrickDamageItem> Items;
    
    BRICKRIGS_API FBrickDamageArray();
};

