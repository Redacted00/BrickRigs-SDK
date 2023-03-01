#include "SourceEffectMidSideSpreaderSettings.h"

FSourceEffectMidSideSpreaderSettings::FSourceEffectMidSideSpreaderSettings() {
    this->SpreadAmount = 0.00f;
    this->InputMode = EStereoChannelMode::MidSide;
    this->OutputMode = EStereoChannelMode::MidSide;
    this->bEqualPower = false;
}

