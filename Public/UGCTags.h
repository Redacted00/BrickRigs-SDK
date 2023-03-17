#pragma once
#include "CoreMinimal.h"
#include "EUGCDepartmentTag.h"
#include "EUGCEraTag.h"
#include "EUGCTypeTag.h"
#include "UGCTags.generated.h"

USTRUCT(BlueprintType)
struct FUGCTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUGCTypeTag Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUGCEraTag Era;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUGCDepartmentTag Department;
    
    BRICKRIGS_API FUGCTags();
};

