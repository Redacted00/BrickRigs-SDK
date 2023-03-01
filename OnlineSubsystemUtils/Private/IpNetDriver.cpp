#include "IpNetDriver.h"

UIpNetDriver::UIpNetDriver() {
    this->LogPortUnreach = false;
    this->AllowPlayerPortUnreach = false;
    this->MaxPortCountToTry = 512;
    this->ServerDesiredSocketReceiveBufferBytes = 131072;
    this->ServerDesiredSocketSendBufferBytes = 131072;
    this->ClientDesiredSocketReceiveBufferBytes = 32768;
    this->ClientDesiredSocketSendBufferBytes = 32768;
    this->MaxSecondsInReceive = 0.00f;
    this->NbPacketsBetweenReceiveTimeTest = 0;
    this->ResolutionConnectionTimeout = 20.00f;
}

