/*
 * basic_IO_qarm_mini.h
 *
 * Code generation for model "basic_IO_qarm_mini".
 *
 * Model version              : 1.70
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C source code generated on : Fri Jul 31 17:59:56 2026
 *
 * Target selection: quarc_linux_qbot_platform.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef basic_IO_qarm_mini_h_
#define basic_IO_qarm_mini_h_
#ifndef basic_IO_qarm_mini_COMMON_INCLUDES_
#define basic_IO_qarm_mini_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_memory.h"
#include "quanser_string.h"
#include "stream_server_block.h"
#include "quanser_video.h"
#include "quanser_clamp.h"
#include "quanser_image_processing.h"
#include "quanser_channel.h"
#include "extmode_support.h"
#include "quanser_extern.h"
#endif                                 /* basic_IO_qarm_mini_COMMON_INCLUDES_ */

#include "basic_IO_qarm_mini_types.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include <string.h>
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTimerIndices
#define rtmGetMdlRefGlobalTimerIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalTimerIndices
#define rtmSetMdlRefGlobalTimerIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ()
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define basic_IO_qarm_mini_rtModel     RT_MODEL_basic_IO_qarm_mini_T

/* Block signals (default storage) */
typedef struct {
  real_T HILRead_o1;                   /* '<S9>/HIL Read' */
  real_T HILRead_o2;                   /* '<S9>/HIL Read' */
  real_T HILRead_o3;                   /* '<S9>/HIL Read' */
  real_T HILRead_o4;                   /* '<S9>/HIL Read' */
  real_T HILRead_o5;                   /* '<S9>/HIL Read' */
  real_T HILRead_o11;                  /* '<S9>/HIL Read' */
  real_T HILRead_o12;                  /* '<S9>/HIL Read' */
  real_T HILRead_o13;                  /* '<S9>/HIL Read' */
  real_T HILRead_o14;                  /* '<S9>/HIL Read' */
  real_T HILRead_o15;                  /* '<S9>/HIL Read' */
  real_T Gain1;                        /* '<S9>/Gain1' */
  real_T Saturation6[4];               /* '<S9>/Saturation6' */
  real_T MultiportSwitch[4];           /* '<Root>/Multiport Switch' */
  real_T Bias1;                        /* '<S9>/Bias1' */
  real_T Bias6;                        /* '<S9>/Bias6' */
  real_T Bias7;                        /* '<S9>/Bias7' */
  real_T Bias8;                        /* '<S9>/Bias8' */
  real_T Integrator1;                  /* '<S2>/Integrator1' */
  real_T Bias9;                        /* '<S9>/Bias9' */
  real_T StreamServer_o4[8];           /* '<S4>/Stream Server' */
  real_T GripperSpeeds;                /* '<S2>/Gripper Speed (%//s)' */
  real_T Product[4];                   /* '<S2>/Product' */
  t_channel Channel;                   /* '<S7>/Channel' */
  uint8_T VideoCapture_o1[691200];     /* '<S1>/Video Capture' */
  uint8_T ImageCompress[691200];       /* '<S7>/Image Compress' */
  boolean_T Compare;                   /* '<S8>/Compare' */
} B_basic_IO_qarm_mini_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T HILRead_AnalogBuffer[5];      /* '<S9>/HIL Read' */
  real_T HILRead_OtherBuffer[10];      /* '<S9>/HIL Read' */
  real_T HILWrite_OtherBuffer[10];     /* '<S9>/HIL Write' */
  t_jpeg_compress ImageCompress_Compress;/* '<S7>/Image Compress' */
  t_video_capture VideoCapture_VideoCapture;/* '<S1>/Video Capture' */
  t_pstream StreamServer_Stream;       /* '<S4>/Stream Server' */
  t_card HILInitialize_Card;           /* '<S9>/HIL Initialize' */
  void *HILRead_PWORK;                 /* '<S9>/HIL Read' */
  void *HILWrite_PWORK;                /* '<S9>/HIL Write' */
  void *HILSetProperty_PWORK[2];       /* '<S9>/HIL Set Property' */
  struct {
    void *LoggedData;
  } CurrentData_PWORK;                 /* '<Root>/Current Data' */

  struct {
    void *LoggedData[2];
  } PositionData_PWORK;                /* '<Root>/Position Data' */

  struct {
    void *LoggedData;
  } SpeedData_PWORK;                   /* '<Root>/Speed Data' */

  struct {
    void *Fifo;
  } Channel_PWORK;                     /* '<S7>/Channel' */

  int32_T ImageCompress_DIMS1;         /* '<S7>/Image Compress' */
  t_hil_double_property HILSetProperty_DoubleCodes[25];/* '<S9>/HIL Set Property' */
  uint8_T ImageCompress_ScanLine[15360];/* '<S7>/Image Compress' */
  boolean_T Memory_PreviousInput;      /* '<S4>/Memory' */
} DW_basic_IO_qarm_mini_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE[4];         /* '<S2>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S2>/Integrator1' */
} X_basic_IO_qarm_mini_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE[4];         /* '<S2>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S2>/Integrator1' */
} XDot_basic_IO_qarm_mini_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[4];      /* '<S2>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S2>/Integrator1' */
} XDis_basic_IO_qarm_mini_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            basic_IO_qarm_mini_B
#define BlockIO                        B_basic_IO_qarm_mini_T
#define rtX                            basic_IO_qarm_mini_X
#define ContinuousStates               X_basic_IO_qarm_mini_T
#define rtXdot                         basic_IO_qarm_mini_XDot
#define StateDerivatives               XDot_basic_IO_qarm_mini_T
#define tXdis                          basic_IO_qarm_mini_XDis
#define StateDisabled                  XDis_basic_IO_qarm_mini_T
#define rtP                            basic_IO_qarm_mini_P
#define Parameters                     P_basic_IO_qarm_mini_T
#define rtDWork                        basic_IO_qarm_mini_DW
#define D_Work                         DW_basic_IO_qarm_mini_T

/* Parameters (default storage) */
struct P_basic_IO_qarm_mini_T_ {
  real_T StreamServer_default_value[8];
                                   /* Mask Parameter: StreamServer_default_value
                                    * Referenced by: '<S4>/Stream Server'
                                    */
  uint32_T HILRead_analog_channels[5];/* Mask Parameter: HILRead_analog_channels
                                       * Referenced by: '<S9>/HIL Read'
                                       */
  uint32_T HILRead_other_channels[10]; /* Mask Parameter: HILRead_other_channels
                                        * Referenced by: '<S9>/HIL Read'
                                        */
  uint32_T HILWrite_other_channels[10];
                                      /* Mask Parameter: HILWrite_other_channels
                                       * Referenced by: '<S9>/HIL Write'
                                       */
  uint8_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S8>/Constant'
                                       */
  real_T Constant_Value[4];            /* Expression: [1 0 0 0]'
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Constant1_Value[4];           /* Expression: [0 1 0 0]'
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant2_Value[4];           /* Expression: [0 0 1 0]'
                                        * Referenced by: '<S2>/Constant2'
                                        */
  real_T Constant3_Value[4];           /* Expression: [0 0 0 1]'
                                        * Referenced by: '<S2>/Constant3'
                                        */
  real_T Constant4_Value[4];           /* Expression: [0 0 0 0]'
                                        * Referenced by: '<S2>/Constant4'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<S2>/Switch3'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S2>/Switch2'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S2>/Switch1'
                                        */
  real_T HILInitialize_OOTerminate;/* Expression: set_other_outputs_at_terminate
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  real_T HILInitialize_OOExit;    /* Expression: set_other_outputs_at_switch_out
                                   * Referenced by: '<S9>/HIL Initialize'
                                   */
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S9>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;    /* Expression: set_other_outputs_at_switch_in
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  real_T HILInitialize_AIHigh[5];      /* Expression: analog_input_maximums
                                        * Referenced by: '<S9>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow[5];       /* Expression: analog_input_minimums
                                        * Referenced by: '<S9>/HIL Initialize'
                                        */
  real_T Bias11_Bias;                  /* Expression: 0
                                        * Referenced by: '<S9>/Bias11'
                                        */
  real_T Bias12_Bias;                  /* Expression: -(pi - ((67.5)*(pi/180)))
                                        * Referenced by: '<S9>/Bias12'
                                        */
  real_T Bias17_Bias;                  /* Expression: 0
                                        * Referenced by: '<S9>/Bias17'
                                        */
  real_T Bias21_Bias;                  /* Expression: -pi
                                        * Referenced by: '<S9>/Bias21'
                                        */
  real_T Bias13_Bias;                  /* Expression: 0.9
                                        * Referenced by: '<S9>/Bias13'
                                        */
  real_T Bias14_Bias;                  /* Expression: pi/2
                                        * Referenced by: '<S9>/Bias14'
                                        */
  real_T Bias15_Bias;                  /* Expression: -pi/2
                                        * Referenced by: '<S9>/Bias15'
                                        */
  real_T Bias16_Bias;                  /* Expression: pi/2
                                        * Referenced by: '<S9>/Bias16'
                                        */
  real_T Bias18_Bias;                  /* Expression: -pi -  0.1834
                                        * Referenced by: '<S9>/Bias18'
                                        */
  real_T Bias19_Bias;                  /* Expression: -pi +  0.1834
                                        * Referenced by: '<S9>/Bias19'
                                        */
  real_T Bias20_Bias;                  /* Expression: -pi
                                        * Referenced by: '<S9>/Bias20'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/1.68
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real_T Saturation6_UpperSat[4];      /* Expression: [5*pi/4, pi, 0, 3*pi/4]'
                                        * Referenced by: '<S9>/Saturation6'
                                        */
  real_T Saturation6_LowerSat[4];      /* Expression: [-pi/2. 0, -3*pi/4, 0]'
                                        * Referenced by: '<S9>/Saturation6'
                                        */
  real_T SelectPosition_Value;         /* Expression: 3
                                        * Referenced by: '<Root>/Select Position'
                                        */
  real_T Integrator_IC[4];             /* Expression: [0; pi/2; -pi/2; pi/2]
                                        * Referenced by: '<S2>/Integrator'
                                        */
  real_T Integrator_UpperSat[4];       /* Expression: [5*pi/4, pi, 0, 3*pi/4]'
                                        * Referenced by: '<S2>/Integrator'
                                        */
  real_T Integrator_LowerSat[4];       /* Expression: [-pi/2. 0, -3*pi/4, 0]'
                                        * Referenced by: '<S2>/Integrator'
                                        */
  real_T Straightup_Value[4];          /* Expression: [0; pi/2; 0; pi/2]
                                        * Referenced by: '<Root>/Straight up'
                                        */
  real_T Home_Value[4];                /* Expression: [0; pi/2; -pi/2; pi/2]
                                        * Referenced by: '<Root>/Home'
                                        */
  real_T Saturation5_UpperSat[4];      /* Expression: [5*pi/4, pi, 0, 3*pi/4]'
                                        * Referenced by: '<S9>/Saturation5'
                                        */
  real_T Saturation5_LowerSat[4];      /* Expression: [-pi/2. 0, -3*pi/4, 0]'
                                        * Referenced by: '<S9>/Saturation5'
                                        */
  real_T Bias_Bias;                    /* Expression: 0
                                        * Referenced by: '<S9>/Bias'
                                        */
  real_T Bias1_Bias;                   /* Expression: pi - ((67.5)*(pi/180))
                                        * Referenced by: '<S9>/Bias1'
                                        */
  real_T Bias2_Bias;                   /* Expression: -pi/2
                                        * Referenced by: '<S9>/Bias2'
                                        */
  real_T Bias6_Bias;                   /* Expression: pi + 0.1834
                                        * Referenced by: '<S9>/Bias6'
                                        */
  real_T Bias3_Bias;                   /* Expression: pi/2
                                        * Referenced by: '<S9>/Bias3'
                                        */
  real_T Bias7_Bias;                   /* Expression: pi -  0.1834
                                        * Referenced by: '<S9>/Bias7'
                                        */
  real_T Bias4_Bias;                   /* Expression: -pi/2
                                        * Referenced by: '<S9>/Bias4'
                                        */
  real_T Bias8_Bias;                   /* Expression: pi
                                        * Referenced by: '<S9>/Bias8'
                                        */
  real_T Integrator1_IC;               /* Expression: 0.5
                                        * Referenced by: '<S2>/Integrator1'
                                        */
  real_T Integrator1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S2>/Integrator1'
                                        */
  real_T Integrator1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S2>/Integrator1'
                                        */
  real_T Gain_Gain;                    /* Expression: 1.68
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T Bias10_Bias;                  /* Expression: -0.9
                                        * Referenced by: '<S9>/Bias10'
                                        */
  real_T Bias5_Bias;                   /* Expression: 0
                                        * Referenced by: '<S9>/Bias5'
                                        */
  real_T Bias9_Bias;                   /* Expression: pi
                                        * Referenced by: '<S9>/Bias9'
                                        */
  real_T Constant6_Value[4];           /* Expression: [0 0 0 0]
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0.5
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -0.5
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 0.5
                                        * Referenced by: '<S9>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -0.5
                                        * Referenced by: '<S9>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 0.5
                                        * Referenced by: '<S9>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -0.5
                                        * Referenced by: '<S9>/Saturation2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 0.5
                                        * Referenced by: '<S9>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -0.5
                                        * Referenced by: '<S9>/Saturation3'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 0.5
                                        * Referenced by: '<S9>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -0.5
                                        * Referenced by: '<S9>/Saturation4'
                                        */
  real_T Constant_Value_n[5];          /* Expression: [5 10 10 10 20]
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T Constant1_Value_m[5];         /* Expression: [-1 0.036 0.036 -1 -1]
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T Constant2_Value_a[5];         /* Expression: [300 0 0 0 0]
                                        * Referenced by: '<S9>/Constant2'
                                        */
  real_T Constant3_Value_f[5];         /* Expression: [-1 -1 -1 -1 -1]
                                        * Referenced by: '<S9>/Constant3'
                                        */
  real_T Constant4_Value_e[5];         /* Expression: [-1 -1 -1 -1 -1]
                                        * Referenced by: '<S9>/Constant4'
                                        */
  real_T Gain_Gain_c;                  /* Expression: -1
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T Gain1_Gain_n;                 /* Expression: 1
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T GripperSpeeds_Gain;           /* Expression: 0.25
                                        * Referenced by: '<S2>/Gripper Speed (%//s)'
                                        */
  real_T Switch4_Threshold;            /* Expression: 0
                                        * Referenced by: '<S2>/Switch4'
                                        */
  real_T JointSpeedrads_Gain;          /* Expression: pi/6
                                        * Referenced by: '<S2>/Joint Speed  (rad//s)'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S2>/Switch'
                                        */
  real_T VideoCapture_Brightness;      /* Expression: d_brightness
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Contrast;        /* Expression: d_contrast
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Hue;             /* Expression: d_hue
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Saturation;      /* Expression: d_saturation
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Sharpness;       /* Expression: d_sharpness
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Gamma;           /* Expression: d_gamma
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_ColorEnable;     /* Expression: d_coloreffect
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_WhiteBalance;    /* Expression: d_whitebalance
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_BacklightCompensat;/* Expression: d_backlightcompensation
                                          * Referenced by: '<S1>/Video Capture'
                                          */
  real_T VideoCapture_Gain;            /* Expression: d_gain
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Pan;             /* Expression: d_pan
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Tilt;            /* Expression: d_tilt
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Roll;            /* Expression: d_roll
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Zoom;            /* Expression: d_zoom
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Exposure;        /* Expression: d_exposure
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Iris;            /* Expression: d_iris
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Focus;           /* Expression: d_focus
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  real_T VideoCapture_Mirror;          /* Expression: d_mirror
                                        * Referenced by: '<S1>/Video Capture'
                                        */
  int32_T HILSetProperty_PropertyCodes[25];
                             /* Computed Parameter: HILSetProperty_PropertyCodes
                              * Referenced by: '<S9>/HIL Set Property'
                              */
  int32_T StreamServer_SndPriority;
                                 /* Computed Parameter: StreamServer_SndPriority
                                  * Referenced by: '<S4>/Stream Server'
                                  */
  int32_T StreamServer_RcvPriority;
                                 /* Computed Parameter: StreamServer_RcvPriority
                                  * Referenced by: '<S4>/Stream Server'
                                  */
  uint32_T HILInitialize_AIChannels[5];
                                 /* Computed Parameter: HILInitialize_AIChannels
                                  * Referenced by: '<S9>/HIL Initialize'
                                  */
  uint32_T StreamServer_SndSize;     /* Computed Parameter: StreamServer_SndSize
                                      * Referenced by: '<S4>/Stream Server'
                                      */
  uint32_T StreamServer_RcvSize;     /* Computed Parameter: StreamServer_RcvSize
                                      * Referenced by: '<S4>/Stream Server'
                                      */
  uint32_T StreamServer_SndFIFO;     /* Computed Parameter: StreamServer_SndFIFO
                                      * Referenced by: '<S4>/Stream Server'
                                      */
  uint32_T StreamServer_RcvFIFO;     /* Computed Parameter: StreamServer_RcvFIFO
                                      * Referenced by: '<S4>/Stream Server'
                                      */
  uint32_T ImageCompress_Quality;   /* Computed Parameter: ImageCompress_Quality
                                     * Referenced by: '<S7>/Image Compress'
                                     */
  boolean_T HILInitialize_Active;    /* Computed Parameter: HILInitialize_Active
                                      * Referenced by: '<S9>/HIL Initialize'
                                      */
  boolean_T HILInitialize_AOTerminate;
                                /* Computed Parameter: HILInitialize_AOTerminate
                                 * Referenced by: '<S9>/HIL Initialize'
                                 */
  boolean_T HILInitialize_AOExit;    /* Computed Parameter: HILInitialize_AOExit
                                      * Referenced by: '<S9>/HIL Initialize'
                                      */
  boolean_T HILInitialize_DOTerminate;
                                /* Computed Parameter: HILInitialize_DOTerminate
                                 * Referenced by: '<S9>/HIL Initialize'
                                 */
  boolean_T HILInitialize_DOExit;    /* Computed Parameter: HILInitialize_DOExit
                                      * Referenced by: '<S9>/HIL Initialize'
                                      */
  boolean_T HILInitialize_POTerminate;
                                /* Computed Parameter: HILInitialize_POTerminate
                                 * Referenced by: '<S9>/HIL Initialize'
                                 */
  boolean_T HILInitialize_POExit;    /* Computed Parameter: HILInitialize_POExit
                                      * Referenced by: '<S9>/HIL Initialize'
                                      */
  boolean_T HILInitialize_CKPStart;/* Computed Parameter: HILInitialize_CKPStart
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKPEnter;/* Computed Parameter: HILInitialize_CKPEnter
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKStart;  /* Computed Parameter: HILInitialize_CKStart
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_CKEnter;  /* Computed Parameter: HILInitialize_CKEnter
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AIPStart;/* Computed Parameter: HILInitialize_AIPStart
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AIPEnter;/* Computed Parameter: HILInitialize_AIPEnter
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPStart;/* Computed Parameter: HILInitialize_AOPStart
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPEnter;/* Computed Parameter: HILInitialize_AOPEnter
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOStart;  /* Computed Parameter: HILInitialize_AOStart
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOEnter;  /* Computed Parameter: HILInitialize_AOEnter
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOReset;  /* Computed Parameter: HILInitialize_AOReset
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOPStart;/* Computed Parameter: HILInitialize_DOPStart
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOPEnter;/* Computed Parameter: HILInitialize_DOPEnter
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOStart;  /* Computed Parameter: HILInitialize_DOStart
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOEnter;  /* Computed Parameter: HILInitialize_DOEnter
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOReset;  /* Computed Parameter: HILInitialize_DOReset
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIPStart;/* Computed Parameter: HILInitialize_EIPStart
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIPEnter;/* Computed Parameter: HILInitialize_EIPEnter
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIStart;  /* Computed Parameter: HILInitialize_EIStart
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIEnter;  /* Computed Parameter: HILInitialize_EIEnter
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POPStart;/* Computed Parameter: HILInitialize_POPStart
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POPEnter;/* Computed Parameter: HILInitialize_POPEnter
                                    * Referenced by: '<S9>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POStart;  /* Computed Parameter: HILInitialize_POStart
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POEnter;  /* Computed Parameter: HILInitialize_POEnter
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POReset;  /* Computed Parameter: HILInitialize_POReset
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILInitialize_OOReset;  /* Computed Parameter: HILInitialize_OOReset
                                     * Referenced by: '<S9>/HIL Initialize'
                                     */
  boolean_T HILRead_Active;            /* Computed Parameter: HILRead_Active
                                        * Referenced by: '<S9>/HIL Read'
                                        */
  boolean_T HILWrite_Active;           /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S9>/HIL Write'
                                        */
  boolean_T HILSetProperty_Active;  /* Computed Parameter: HILSetProperty_Active
                                     * Referenced by: '<S9>/HIL Set Property'
                                     */
  boolean_T Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<S4>/Memory'
                                   */
  boolean_T StreamServer_Active;      /* Computed Parameter: StreamServer_Active
                                       * Referenced by: '<S4>/Stream Server'
                                       */
  boolean_T VideoDisplay_UseHardware;
                                 /* Computed Parameter: VideoDisplay_UseHardware
                                  * Referenced by: '<S7>/Video Display'
                                  */
  int8_T StreamServer_Optimize;     /* Computed Parameter: StreamServer_Optimize
                                     * Referenced by: '<S4>/Stream Server'
                                     */
  int8_T StreamServer_Implementation;
                              /* Computed Parameter: StreamServer_Implementation
                               * Referenced by: '<S4>/Stream Server'
                               */
  uint8_T StreamServer_URI[24];        /* Expression: uri_argument
                                        * Referenced by: '<S4>/Stream Server'
                                        */
  uint8_T StreamServer_Endian;        /* Computed Parameter: StreamServer_Endian
                                       * Referenced by: '<S4>/Stream Server'
                                       */
};

/* Real-time Model Data Structure */
struct tag_RTM_basic_IO_qarm_mini_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeF[1][5];
  ODE1_IntgData intgData;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_basic_IO_qarm_mini_T basic_IO_qarm_mini_P;

/* Block signals (default storage) */
extern B_basic_IO_qarm_mini_T basic_IO_qarm_mini_B;

/* Continuous states (default storage) */
extern X_basic_IO_qarm_mini_T basic_IO_qarm_mini_X;

/* Disabled states (default storage) */
extern XDis_basic_IO_qarm_mini_T basic_IO_qarm_mini_XDis;

/* Block states (default storage) */
extern DW_basic_IO_qarm_mini_T basic_IO_qarm_mini_DW;

/* Model entry point functions */
extern void basic_IO_qarm_mini_initialize(void);
extern void basic_IO_qarm_mini_output(void);
extern void basic_IO_qarm_mini_update(void);
extern void basic_IO_qarm_mini_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern basic_IO_qarm_mini_rtModel *basic_IO_qarm_mini(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_basic_IO_qarm_mini_T *const basic_IO_qarm_mini_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'basic_IO_qarm_mini'
 * '<S1>'   : 'basic_IO_qarm_mini/Image Acquisition & Display'
 * '<S2>'   : 'basic_IO_qarm_mini/Joystick Processing'
 * '<S3>'   : 'basic_IO_qarm_mini/Powered by QUARC1'
 * '<S4>'   : 'basic_IO_qarm_mini/QBot Hardware'
 * '<S5>'   : 'basic_IO_qarm_mini/Qarm Mini Manipulator'
 * '<S6>'   : 'basic_IO_qarm_mini/Quanser1'
 * '<S7>'   : 'basic_IO_qarm_mini/Image Acquisition & Display/Image Processing'
 * '<S8>'   : 'basic_IO_qarm_mini/QBot Hardware/Compare To Constant'
 * '<S9>'   : 'basic_IO_qarm_mini/Qarm Mini Manipulator/Hardware Layer'
 */
#endif                                 /* basic_IO_qarm_mini_h_ */
