#include "AnimNode_CopyPoseFromMesh.h"

FAnimNode_CopyPoseFromMesh::FAnimNode_CopyPoseFromMesh() {
    this->bUseAttachedParent = false;
    this->bCopyCurves = false;
    this->bCopyCustomAttributes = false;
    this->bUseMeshPose = false;
}

