#pragma once
#include "CoreMinimal.h"
#include "OnlineProxyStoreOffer.h"
#include "InAppPurchaseQuery2ResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInAppPurchaseQuery2Result, const TArray<FOnlineProxyStoreOffer>&, InAppOfferInformation);

