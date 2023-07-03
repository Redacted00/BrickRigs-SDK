#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
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

