#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseRestoreInfo2.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseRestoreInfo2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValidationInfo;
    
    ONLINESUBSYSTEMUTILS_API FInAppPurchaseRestoreInfo2();
};

