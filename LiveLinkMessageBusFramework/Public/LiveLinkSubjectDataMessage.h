#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkRefSkeleton -FallbackName=LiveLinkRefSkeleton
#include "LiveLinkSubjectDataMessage.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkSubjectDataMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkRefSkeleton RefSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubjectName;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkSubjectDataMessage();
};

