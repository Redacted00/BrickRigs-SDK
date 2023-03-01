#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "LevelSequenceAnimSequenceLinkItem.h"
#include "LevelSequenceAnimSequenceLink.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LEVELSEQUENCE_API ULevelSequenceAnimSequenceLink : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;
    
    ULevelSequenceAnimSequenceLink();
};

