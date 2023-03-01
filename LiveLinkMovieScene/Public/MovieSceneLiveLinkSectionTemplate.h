#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectPreset -FallbackName=LiveLinkSubjectPreset
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
#include "LiveLinkSubSectionData.h"
#include "MovieSceneLiveLinkSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectPreset SubjectPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ChannelMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkSubSectionData> SubSectionsData;
    
    LIVELINKMOVIESCENE_API FMovieSceneLiveLinkSectionTemplate();
};

