#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InventorySpecialSlot.generated.h"

USTRUCT(BlueprintType)
struct FInventorySpecialSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
public:
    BRICKRIGS_API FInventorySpecialSlot();
};

