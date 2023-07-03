#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ChatMessagePlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FChatMessagePlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    BRICKRIGS_API FChatMessagePlayerInfo();
};

