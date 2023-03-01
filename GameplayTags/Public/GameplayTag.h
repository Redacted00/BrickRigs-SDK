#pragma once
#include "CoreMinimal.h"
#include "GameplayTag.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName TagName;
    
public:
    FGameplayTag();
};
FORCEINLINE uint32 GetTypeHash(const FGameplayTag) { return 0; }

