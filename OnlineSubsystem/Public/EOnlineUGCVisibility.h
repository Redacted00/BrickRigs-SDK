#pragma once
#include "CoreMinimal.h"
#include "EOnlineUGCVisibility.generated.h"

UENUM(BlueprintType)
enum class EOnlineUGCVisibility : uint8 {
    Public,
    FriendsOnly,
    Private,
};

