#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothingSimulationInteractor.generated.h"

class UClothingInteractor;

UCLASS(Abstract, Blueprintable)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothingSimulationInteractor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClothingInteractor*> ClothingInteractors;
    
    UClothingSimulationInteractor();
    UFUNCTION(BlueprintCallable)
    void SetNumSubsteps(int32 NumSubsteps);
    
    UFUNCTION(BlueprintCallable)
    void SetNumIterations(int32 NumIterations);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimDriveSpringStiffness(float InStiffness);
    
    UFUNCTION(BlueprintCallable)
    void PhysicsAssetUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSimulationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSubsteps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumKinematicParticles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumIterations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumDynamicParticles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCloths() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClothingInteractor* GetClothingInteractor(const FString& ClothingAssetName) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableGravityOverride(const FVector& InVector);
    
    UFUNCTION(BlueprintCallable)
    void DisableGravityOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClothConfigUpdated();
    
};

