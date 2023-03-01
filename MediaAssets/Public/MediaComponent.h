#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MediaComponent.generated.h"

class UMediaPlayer;
class UMediaTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MEDIAASSETS_API UMediaComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
public:
    UMediaComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaTexture* GetMediaTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
};

