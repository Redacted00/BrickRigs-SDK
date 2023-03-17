#pragma once
#include "CoreMinimal.h"
#include "EUGCQueryType.generated.h"

UENUM(BlueprintType)
enum class EUGCQueryType : uint8 {
    Local,
    Online,
    Published,
    Subscribed,
    Favorited,
    RecentlyUsed,
    Selection,
    Max,
};

