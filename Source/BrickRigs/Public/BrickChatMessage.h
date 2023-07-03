#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "ChatMessagePlayerInfo.h"
#include "EChatMessageType.h"
#include "BrickChatMessage.generated.h"

USTRUCT(BlueprintType)
struct FBrickChatMessage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatMessageType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatMessagePlayerInfo Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatMessagePlayerInfo OtherPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamOption;
    
public:
    BRICKRIGS_API FBrickChatMessage();
};

