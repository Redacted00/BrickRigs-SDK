#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSubSection -FallbackName=MovieSceneSubSection
#include "TemplateSectionPropertyScale.h"
#include "TemplateSequenceSection.generated.h"

UCLASS(Blueprintable)
class TEMPLATESEQUENCE_API UTemplateSequenceSection : public UMovieSceneSubSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTemplateSectionPropertyScale> PropertyScales;
    
    UTemplateSequenceSection();
    
    // Fix for true pure virtual functions not being implemented
};

