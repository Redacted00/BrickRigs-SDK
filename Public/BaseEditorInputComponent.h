#pragma once
#include "CoreMinimal.h"
#include "BaseInputComponent.h"
#include "BaseEditorInputComponent.generated.h"

class ABrickEditor;

UCLASS(Abstract, Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBaseEditorInputComponent : public UBaseInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickEditor* BrickEditor;
    
public:
    UBaseEditorInputComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnReleasedSelect();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedMovePerpendicular();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedAddToSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedUploadItemAs();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedUploadItem();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedUnhideAll();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedUndo();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedToggleTransformSpace();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedToggleSnapping();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedToggleSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedToggleMirrorMode();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSelectByType();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSelectByPattern();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSelectByMaterial();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSelectByColor();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSelectByClass();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSelectAttachedRecursive();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSelectAttached();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSelect();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSaveItemAs();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSaveItem();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedRedo();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedOpenItem();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedMoveSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedMovePerpendicular();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedMoveAxisZ();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedMoveAxisY();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedMoveAxisX();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedMirrorSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedInvertSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedImportItem();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedHideSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedFocusSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedExitEditorWithVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedExitEditor();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedEditorCommit();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedEditorCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedEditMetaData();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedDuplicateSelectionMirrored();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedDuplicateSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedDeleteSelection();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleViewMode();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCaptureThumbnail();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAddToSelection();
    
    UFUNCTION(BlueprintCallable)
    bool GetUploadItemEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUploadItemAsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSaveItemEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSaveItemAsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetExitEditorWithVehicleEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetCycleViewModeValueText() const;
    
};

