#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KeyDisplayTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKeyDisplayTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconIndex;
    
    BRICKRIGS_API FKeyDisplayTableRow();
};

