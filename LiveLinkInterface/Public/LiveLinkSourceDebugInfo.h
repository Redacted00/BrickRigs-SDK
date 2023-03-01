#pragma once
#include "CoreMinimal.h"
#include "LiveLinkSubjectName.h"
#include "LiveLinkSourceDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkSourceDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectName SubjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SnapshotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfBufferAtSnapshot;
    
    LIVELINKINTERFACE_API FLiveLinkSourceDebugInfo();
};

