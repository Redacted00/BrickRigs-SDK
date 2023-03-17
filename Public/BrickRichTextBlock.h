#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlock -FallbackName=RichTextBlock
#include "BrickRichTextBlock.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UBrickRichTextBlock();
};

