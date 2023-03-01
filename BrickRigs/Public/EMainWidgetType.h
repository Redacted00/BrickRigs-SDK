#pragma once
#include "CoreMinimal.h"
#include "EMainWidgetType.generated.h"

UENUM(BlueprintType)
enum class EMainWidgetType : uint8 {
    None,
    IntroSequence,
    Menu,
    HUD,
    Max,
};

