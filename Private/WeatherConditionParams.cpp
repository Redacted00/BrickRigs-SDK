#include "WeatherConditionParams.h"

FWeatherConditionParams::FWeatherConditionParams() {
    this->Temperature = 0.00f;
    this->WindSpeed = 0.00f;
    this->WindSpeedVariance = 0.00f;
    this->WindDirectionVariance = 0.00f;
    this->WindPeriod = 0.00f;
    this->CloudDensity = 0.00f;
    this->CloudHeight = 0.00f;
    this->MaxFogOpacity = 0.00f;
    this->PrecipitationType = EPrecipitationType::None;
    this->PrecipitationIntensity = 0.00f;
    this->SnowCoverage = 0.00f;
    this->RainCoverage = 0.00f;
    this->LightningFrequency = 0.00f;
    this->MinLightningDelay = 0.00f;
}

