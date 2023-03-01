#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EBodyCollisionResponse.h"
#include "ECollisionTraceFlag.h"
#include "EPhysicsType.h"
#include "BodySetupCore.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PHYSICSCORE_API UBodySetupCore : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicsType> PhysicsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBodyCollisionResponse::Type> CollisionReponse;
    
    UBodySetupCore();
};

