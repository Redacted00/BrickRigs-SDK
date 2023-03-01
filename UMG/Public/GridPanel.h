#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PanelWidget.h"
#include "GridPanel.generated.h"

class UGridSlot;
class UWidget;

UCLASS(Blueprintable)
class UMG_API UGridPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ColumnFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RowFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultColumnFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRowFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CellSizeOverride;
    
    UGridPanel();
    UFUNCTION(BlueprintCallable)
    void SetRowFill(int32 ColumnIndex, float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultRowFill(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultColumnFill(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnFill(int32 ColumnIndex, float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetCellSizeOverride(const FVector2D& Override);
    
    UFUNCTION(BlueprintCallable)
    UGridSlot* AddChildToGrid(UWidget* Content, int32 InRow, int32 InColumn);
    
};

