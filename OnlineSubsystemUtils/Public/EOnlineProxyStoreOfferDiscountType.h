#pragma once
#include "CoreMinimal.h"
#include "EOnlineProxyStoreOfferDiscountType.generated.h"

UENUM(BlueprintType)
enum class EOnlineProxyStoreOfferDiscountType : uint8 {
    NotOnSale,
    Percentage,
    DiscountAmount,
    PayAmount,
};

