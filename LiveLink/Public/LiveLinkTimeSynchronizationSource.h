#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
//CROSS-MODULE INCLUDE V2: -ModuleName=TimeManagement -ObjectName=TimeSynchronizationSource -FallbackName=TimeSynchronizationSource
#include "LiveLinkTimeSynchronizationSource.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LIVELINK_API ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectName SubjectName;
    
    ULiveLinkTimeSynchronizationSource();
};

