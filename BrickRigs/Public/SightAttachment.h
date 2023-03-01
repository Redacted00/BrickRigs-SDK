#pragma once
#include "CoreMinimal.h"
#include "Attachment.h"
#include "SightAttachment.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ASightAttachment : public AAttachment {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OcclusionMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ReticleMaterial;
    
public:
    ASightAttachment();
};

