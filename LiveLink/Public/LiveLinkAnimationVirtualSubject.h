#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkVirtualSubject -FallbackName=LiveLinkVirtualSubject
#include "LiveLinkAnimationVirtualSubject.generated.h"

UCLASS(Blueprintable)
class LIVELINK_API ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAppendSubjectNameToBones;
    
    ULiveLinkAnimationVirtualSubject();
};

