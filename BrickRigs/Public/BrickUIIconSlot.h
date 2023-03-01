#pragma once
#include "CoreMinimal.h"
#include "BrickUIIconSlot.generated.h"

USTRUCT(BlueprintType)
struct FBrickUIIconSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ColumnSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RowSpan;
    
    BRICKRIGS_API FBrickUIIconSlot();
};

