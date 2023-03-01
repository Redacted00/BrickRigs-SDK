#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "SubjectFrameHandle.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FSubjectFrameHandle : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    FSubjectFrameHandle();
};

