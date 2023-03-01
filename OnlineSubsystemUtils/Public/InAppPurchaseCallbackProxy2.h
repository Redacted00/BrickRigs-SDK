#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseProductRequest2.h"
#include "InAppPurchaseResult2Delegate.h"
#include "InAppPurchaseCallbackProxy2.generated.h"

class APlayerController;
class UInAppPurchaseCallbackProxy2;

UCLASS(Blueprintable, MinimalAPI)
class UInAppPurchaseCallbackProxy2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInAppPurchaseResult2 OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInAppPurchaseResult2 OnFailure;
    
    UInAppPurchaseCallbackProxy2();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, const FInAppPurchaseProductRequest2& ProductRequest);
    
};

