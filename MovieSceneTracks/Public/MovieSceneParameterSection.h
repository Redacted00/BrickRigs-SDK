#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "BoolParameterNameAndCurve.h"
#include "ColorParameterNameAndCurves.h"
#include "ScalarParameterNameAndCurve.h"
#include "TransformParameterNameAndCurves.h"
#include "Vector2DParameterNameAndCurves.h"
#include "VectorParameterNameAndCurves.h"
#include "MovieSceneParameterSection.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneParameterSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;
    
public:
    UMovieSceneParameterSection();
    UFUNCTION(BlueprintCallable)
    bool RemoveVectorParameter(FName InParameterName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveVector2DParameter(FName InParameterName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTransformParameter(FName InParameterName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveScalarParameter(FName InParameterName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveColorParameter(FName InParameterName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBoolParameter(FName InParameterName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParameterNames(TSet<FName>& ParameterNames) const;
    
    UFUNCTION(BlueprintCallable)
    void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, const FTransform& InValue);
    
    UFUNCTION(BlueprintCallable)
    void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue);
    
};

