#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EBuildingSide.h"
#include "BuildingPart.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBuildingPart : public UObject {
    GENERATED_BODY()
public:
    UBuildingPart();
    UFUNCTION(BlueprintCallable)
    void Rect(EBuildingSide Side, int32 StartFloor, int32 EndFloor, int32 StartPosition, int32 EndPosition, uint8 MeshIdx);
    
    UFUNCTION(BlueprintCallable)
    void Place(EBuildingSide Side, int32 NewFloor, int32 Position, uint8 MeshIdx);
    
    UFUNCTION(BlueprintCallable)
    void Grid(int32 Dist, uint8 MeshIdx);
    
    UFUNCTION(BlueprintCallable)
    void Floor(int32 NewFloor, uint8 MeshIdx);
    
    UFUNCTION(BlueprintCallable)
    void Fill(uint8 MeshIdx);
    
};

