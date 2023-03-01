#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessCopyType.h"
#include "PropertyAccessCopy.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccessCopy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccessIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestAccessStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestAccessEndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPropertyAccessCopyType Type;
    
public:
    PROPERTYACCESS_API FPropertyAccessCopy();
};

