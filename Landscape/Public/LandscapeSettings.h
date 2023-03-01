#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "LandscapeSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class LANDSCAPE_API ULandscapeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfLayers;
    
    ULandscapeSettings();
};

