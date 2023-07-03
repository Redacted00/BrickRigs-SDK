#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StaticMeshProp.generated.h"

class UMaterialInterface;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BRICKRIGS_API AStaticMeshProp : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SelectedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClimbable;
    
public:
    AStaticMeshProp();
};

