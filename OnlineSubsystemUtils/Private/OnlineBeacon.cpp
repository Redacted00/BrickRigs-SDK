#include "OnlineBeacon.h"

AOnlineBeacon::AOnlineBeacon() {
    this->BeaconConnectionInitialTimeout = 5.00f;
    this->BeaconConnectionTimeout = 45.00f;
    this->NetDriver = NULL;
}

