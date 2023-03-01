#pragma once
#include "CoreMinimal.h"
#include "EInAppPurchaseStatus.h"
#include "InAppPurchaseRestoreInfo2.h"
#include "InAppPurchaseRestoreResult2Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseRestoreResult2, EInAppPurchaseStatus, PurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>&, InAppPurchaseRestoreInfo);

