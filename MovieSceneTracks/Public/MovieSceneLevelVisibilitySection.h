#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "ELevelVisibility.h"
#include "MovieSceneLevelVisibilitySection.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneLevelVisibilitySection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelVisibility Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelNames;
    
public:
    UMovieSceneLevelVisibilitySection();
    UFUNCTION(BlueprintCallable)
    void SetVisibility(ELevelVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelNames(const TArray<FName>& InLevelNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELevelVisibility GetVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetLevelNames() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

