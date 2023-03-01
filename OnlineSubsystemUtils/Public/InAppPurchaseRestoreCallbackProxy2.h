#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseProductRequest2.h"
#include "InAppPurchaseRestoreResult2Delegate.h"
#include "InAppPurchaseRestoreCallbackProxy2.generated.h"

class APlayerController;
class UInAppPurchaseRestoreCallbackProxy2;

UCLASS(Blueprintable, MinimalAPI)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInAppPurchaseRestoreResult2 OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInAppPurchaseRestoreResult2 OnFailure;
    
    UInAppPurchaseRestoreCallbackProxy2();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, APlayerController* PlayerController);
    
};

