#include "UGCFileInfo.h"

FUGCFileInfo::FUGCFileInfo() {
    this->FileType = EUGCFileType::None;
    this->UGCType = EUGCType::None;
    this->ContentVersion = EUGCContentVersion::Default;
    this->NumObjects = 0;
    this->Mass = 0.00f;
    this->Price = 0.00f;
    this->Visibility = EOnlineUGCVisibility::Public;
}

