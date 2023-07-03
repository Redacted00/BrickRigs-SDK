#pragma once
#include "CoreMinimal.h"
#include "InventoryLoadoutSlot.generated.h"

USTRUCT(BlueprintType)
struct FInventoryLoadoutSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> Attachments;
    
    BRICKRIGS_API FInventoryLoadoutSlot();
};

