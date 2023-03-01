#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagSourceType.h"
#include "GameplayTagSource.generated.h"

class UGameplayTagsList;
class URestrictedGameplayTagsList;

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FGameplayTagSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayTagSourceType SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTagsList* SourceTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URestrictedGameplayTagsList* SourceRestrictedTagList;
    
    FGameplayTagSource();
};

