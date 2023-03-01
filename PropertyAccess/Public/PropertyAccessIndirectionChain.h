#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessIndirectionChain.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccessIndirectionChain {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndirectionStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndirectionEndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventId;
    
public:
    PROPERTYACCESS_API FPropertyAccessIndirectionChain();
};

