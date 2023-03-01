#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=ELiveLinkSourceMode -FallbackName=ELiveLinkSourceMode
#include "LiveLinkRoleProjectSetting.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkSettings.generated.h"

class ULiveLinkFrameInterpolationProcessor;
class ULiveLinkPreset;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class LIVELINK_API ULiveLinkSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkRoleProjectSetting> DefaultRoleSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath PresetSaveDir;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClockOffsetCorrectionStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkSourceMode DefaultMessageBusSourceMode;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MessageBusPingRequestFrequency;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MessageBusHeartbeatFrequency;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MessageBusHeartbeatTimeout;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MessageBusTimeBeforeRemovingInactiveSource;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimeWithoutFrameToBeConsiderAsInvalid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ValidColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InvalidColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TextSizeSource;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TextSizeSubject;
    
    ULiveLinkSettings();
};

