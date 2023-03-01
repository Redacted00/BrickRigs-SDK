#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "RiverGenerator.generated.h"

class USplineMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class URiverGenerator : public UWaterBodyGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
public:
    URiverGenerator();
};

