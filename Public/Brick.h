#pragma once
#include "CoreMinimal.h"
#include "BrickColorWithAlpha.h"
#include "BrickEditorObject.h"
#include "Templates/SubclassOf.h"
#include "Brick.generated.h"

class ABrickPlayerController;
class UBrick;
class UBrickConnection;
class UBrickMaterial;
class UBrickPattern;

UCLASS(Blueprintable)
class BRICKRIGS_API UBrick : public UBrickEditorObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickConnection*> BrickConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBrick* BrickPartRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBrick* BrickClusterRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrickMaterial* BrickMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickColorWithAlpha BrickColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBrickPattern> BrickPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateLift;
    
public:
    UBrick();
private:
    UFUNCTION(BlueprintCallable)
    void Interact_PickUp(ABrickPlayerController* OtherPC);
    
};

