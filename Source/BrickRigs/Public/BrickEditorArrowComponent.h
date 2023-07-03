#pragma once
#include "CoreMinimal.h"
#include "BrickEditorStaticMeshComponent.h"
#include "EBrickEditorArrowType.h"
#include "EBrickUIColorStyle.h"
#include "BrickEditorArrowComponent.generated.h"

class UMaterialInstanceDynamic;
class UStaticMesh;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorArrowComponent : public UBrickEditorStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* LinearArrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CircularArrowMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickEditorArrowType ArrowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearArrowLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircularArrowAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircularArrowRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIColorStyle ColorStyle;
    
    UBrickEditorArrowComponent();
    UFUNCTION(BlueprintCallable)
    void SetLinearArrowLength(float NewLength);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle NewStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetCircularArrowRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetCircularArrowAngle(float NewAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowType(EBrickEditorArrowType NewType);
    
};

