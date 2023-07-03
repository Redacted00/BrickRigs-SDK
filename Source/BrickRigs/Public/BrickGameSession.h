#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "BrickChatMessage.h"
#include "KickedPlayer.h"
#include "BrickGameSession.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API ABrickGameSession : public AGameSession {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminPassword;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKickedPlayer> KickedPlayers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrickChatMessage> ChatMessages;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAdminLoginAttempts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FailedAdminLoginKickDuration;
    
    ABrickGameSession();
};

