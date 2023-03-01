#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LandscapeSplineConnection.h"
#include "LandscapeSplineInterpPoint.h"
#include "LandscapeSplineControlPoint.generated.h"

class UControlPointMeshComponent;

UCLASS(Blueprintable, MinimalAPI, Within=LandscapeSplinesComponent)
class ULandscapeSplineControlPoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeSplineConnection> ConnectedSegments;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeSplineInterpPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, TextExportTransient, meta=(AllowPrivateAccess=true))
    UControlPointMeshComponent* LocalMeshComponent;
    
public:
    ULandscapeSplineControlPoint();
};

