#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkRoleProjectSetting.generated.h"

class ULiveLinkFrameInterpolationProcessor;
class ULiveLinkFramePreProcessor;
class ULiveLinkRole;
class ULiveLinkSubjectSettings;

USTRUCT(BlueprintType)
struct LIVELINK_API FLiveLinkRoleProjectSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkRole> Role;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkSubjectSettings> SettingClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ULiveLinkFramePreProcessor>> FramePreProcessors;
    
    FLiveLinkRoleProjectSetting();
};

