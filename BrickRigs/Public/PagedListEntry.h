#pragma once
#include "CoreMinimal.h"
#include "BrickStructPropertyInterface.h"
#include "PagedListEntry.generated.h"

USTRUCT(BlueprintType)
struct FPagedListEntry : public FBrickStructPropertyInterface {
    GENERATED_BODY()
public:
    BRICKRIGS_API FPagedListEntry();
};

