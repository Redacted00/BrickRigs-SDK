#pragma once
#include "CoreMinimal.h"
#include "EngineServiceTerminate.generated.h"

USTRUCT(BlueprintType)
struct FEngineServiceTerminate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserName;
    
    ENGINEMESSAGES_API FEngineServiceTerminate();
};

