#pragma once
#include "CoreMinimal.h"
#include "LiveLinkSubjectName.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkSubjectName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    LIVELINKINTERFACE_API FLiveLinkSubjectName();
};

