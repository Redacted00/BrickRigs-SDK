#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseStaticData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkBaseStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PropertyNames;
    
    FLiveLinkBaseStaticData();
};

