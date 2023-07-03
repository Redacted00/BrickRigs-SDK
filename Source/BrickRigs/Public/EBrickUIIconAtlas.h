#pragma once
#include "CoreMinimal.h"
#include "EBrickUIIconAtlas.generated.h"

UENUM(BlueprintType)
enum class EBrickUIIconAtlas : uint8 {
    Default,
    MenuButtons,
    MouseKeys,
    GamepadKeys,
    HUDIcons,
    FireModes,
    AmmoTypes,
    HealthIcons,
    ScoreboardIcons,
    ConnectionIcons,
    ServerIcons,
    HUDNotifications,
    DashboardIcons,
    SocialMediaIcons,
    WeatherIcons,
    Custom,
    Max,
};

