#include "OnlineBeaconClient.h"

void AOnlineBeaconClient::ClientOnConnected_Implementation() {
}

AOnlineBeaconClient::AOnlineBeaconClient() {
    this->BeaconOwner = NULL;
    this->BeaconConnection = NULL;
    this->ConnectionState = EBeaconConnectionState::Invalid;
}

