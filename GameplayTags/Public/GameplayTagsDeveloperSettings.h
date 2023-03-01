#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "GameplayTagsDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class GAMEPLAYTAGS_API UGameplayTagsDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeveloperConfigName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FavoriteTagSource;
    
    UGameplayTagsDeveloperSettings();
};

