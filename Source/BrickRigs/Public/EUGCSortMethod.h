#pragma once
#include "CoreMinimal.h"
#include "EUGCSortMethod.generated.h"

UENUM(BlueprintType)
enum class EUGCSortMethod : uint8 {
    TitleAsc,
    CreationOrderAsc,
    CreationOrderDesc,
    LastUpdatedDesc,
    SubscriptionDateDesc,
    Trending,
    PlaytimeTrending,
    TotalPlaytime,
    TotalUniqueSubscriptions,
    SearchRelevancy,
    Max,
};

