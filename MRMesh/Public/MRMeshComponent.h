#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_CollisionDataProvider -FallbackName=Interface_CollisionDataProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "MRMeshComponent.generated.h"

class UBodySetup;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MRMESH_API UMRMeshComponent : public UPrimitiveComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WireframeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateMeshProxySections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateNavMeshOnMeshUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverCreateCollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* CachedBodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBodySetup*> BodySetups;
    
public:
    UMRMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetWireframeMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetWireframeColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetUseWireframe(bool bUseWireframe);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMeshOcclusion(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetWireframeColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseWireframe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableMeshOcclusion() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceNavMeshUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    
    // Fix for true pure virtual functions not being implemented
};

