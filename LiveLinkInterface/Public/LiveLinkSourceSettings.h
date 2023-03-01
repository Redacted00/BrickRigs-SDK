#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ELiveLinkSourceMode.h"
#include "LiveLinkSourceBufferManagementSettings.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkSourceSettings.generated.h"

class ULiveLinkSourceFactory;

UCLASS(Blueprintable)
class LIVELINKINTERFACE_API ULiveLinkSourceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkSourceMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSourceBufferManagementSettings BufferSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectionString;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkSourceFactory> Factory;
    
    ULiveLinkSourceSettings();
};

