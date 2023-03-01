#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "LiveLinkComponentSettings.generated.h"

class ULiveLinkControllerBase;
class ULiveLinkRole;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class LIVELINKCOMPONENTS_API ULiveLinkComponentSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ULiveLinkRole>, TSubclassOf<ULiveLinkControllerBase>> DefaultControllerForRole;
    
    ULiveLinkComponentSettings();
};

