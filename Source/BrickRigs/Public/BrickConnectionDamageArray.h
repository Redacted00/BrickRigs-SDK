#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
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

