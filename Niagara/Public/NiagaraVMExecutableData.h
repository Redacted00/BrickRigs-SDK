#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=NiagaraDataInterfaceGPUParamInfo -FallbackName=NiagaraDataInterfaceGPUParamInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=SimulationStageMetaData -FallbackName=SimulationStageMetaData
#include "ENiagaraScriptCompileStatus.h"
#include "NiagaraCompilerTag.h"
#include "NiagaraDataSetID.h"
#include "NiagaraDataSetProperties.h"
#include "NiagaraScriptDataInterfaceCompileInfo.h"
#include "NiagaraScriptDataUsageInfo.h"
#include "NiagaraStatScope.h"
#include "NiagaraVariable.h"
#include "VMExternalFunctionBindingInfo.h"
#include "NiagaraVMExecutableData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraVMExecutableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> OptimizedByteCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTempRegisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumUserPtrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraCompilerTag> CompileTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ScriptLiterals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraScriptDataUsageInfo DataUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDataSetID> ReadDataSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDataSetProperties> WriteDataSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraStatScope> StatScopes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraScriptCompileStatus LastCompileStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSimulationStageMetaData> SimulationStageMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReadsSignificanceIndex: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsGPUContextInit: 1;
    
    FNiagaraVMExecutableData();
};

