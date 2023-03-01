#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "LiveLinkBaseFrameData.h"
#include "LiveLinkBaseStaticData.h"
#include "LiveLinkBasicBlueprintData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkBaseStaticData StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkBaseFrameData FrameData;
    
    FLiveLinkBasicBlueprintData();
};

