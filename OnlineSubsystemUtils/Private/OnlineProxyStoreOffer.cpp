#include "OnlineProxyStoreOffer.h"

FOnlineProxyStoreOffer::FOnlineProxyStoreOffer() {
    this->RegularPrice = 0;
    this->NumericPrice = 0;
    this->DiscountType = EOnlineProxyStoreOfferDiscountType::NotOnSale;
}

