#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertyBinding -FallbackName=MovieScenePropertyBinding
#include "ETemplateSectionPropertyScaleType.h"
#include "TemplateSectionPropertyScale.generated.h"

USTRUCT(BlueprintType)
struct FTemplateSectionPropertyScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ObjectBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETemplateSectionPropertyScaleType PropertyScaleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel FloatChannel;
    
    TEMPLATESEQUENCE_API FTemplateSectionPropertyScale();
};

