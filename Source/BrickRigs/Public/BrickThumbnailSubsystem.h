#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BrickThumbnailSubsystem.generated.h"

class UBrickEditorInterfaceComponent;
class UMaterialInstanceDynamic;
class USceneCaptureComponent2D;
class UStaticMeshComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickThumbnailSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ThumbnailRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TextureRenderMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* InventoryItemMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CaptureStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBrickEditorInterfaceComponent* EditorInterfaceComponent;
    
public:
    UBrickThumbnailSubsystem();
};

