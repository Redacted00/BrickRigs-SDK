#include "NavigationData.h"

ANavigationData::ANavigationData() {
    this->RenderingComp = NULL;
    this->bEnableDrawing = false;
    this->bForceRebuildOnLoad = false;
    this->bAutoDestroyWhenNoNavigation = true;
    this->bCanBeMainNavData = true;
    this->bCanSpawnOnRebuild = true;
    this->bRebuildAtRuntime = false;
    this->RuntimeGeneration = ERuntimeGenerationType::Static;
    this->ObservedPathsTickInterval = 0.50f;
    this->DataVersion = 13;
}

