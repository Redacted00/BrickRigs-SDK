#pragma once
#include "CoreMinimal.h"
#include "LiveLinkClearSubject.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkClearSubject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubjectName;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkClearSubject();
};

