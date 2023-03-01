#pragma once
#include "CoreMinimal.h"
#include "NDIStaticMeshSectionFilter.generated.h"

USTRUCT(BlueprintType)
struct FNDIStaticMeshSectionFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AllowedMaterialSlots;
    
    NIAGARA_API FNDIStaticMeshSectionFilter();
};

