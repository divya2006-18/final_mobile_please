/*
 * basic_IO_qbot_platform.h
 *
 * Code generation for model "basic_IO_qbot_platform".
 *
 * Model version              : 17.4
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C source code generated on : Fri Jul 31 15:27:47 2026
 *
 * Target selection: quarc_linux_qbot_platform.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef basic_IO_qbot_platform_h_
#define basic_IO_qbot_platform_h_
#ifndef basic_IO_qbot_platform_COMMON_INCLUDES_
#define basic_IO_qbot_platform_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "quanser_hid.h"
#include "quanser_memory.h"
#include "quanser_messages.h"
#include "quanser_start_time.h"
#include "quanser_extern.h"
#include "quanser_string.h"
#include "stream_client_block.h"
#include "quanser_video.h"
#include "quanser_clamp.h"
#include "quanser_time.h"
#include "quanser_video3d.h"
#include "quanser_types.h"
#include "quanser_image_processing.h"
#include "quanser_channel.h"
#include "extmode_support.h"
#include "quanser_ranging_sensor.h"
#endif                             /* basic_IO_qbot_platform_COMMON_INCLUDES_ */

#include "basic_IO_qbot_platform_types.h"
#include "rtGetNaN.h"
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
#define rtmGetFirstInitCondFlag(rtm)   ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
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
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
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
#define rtmGetPerTaskSampleHits(rtm)   ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
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
#define rtmGetTaskCounters(rtm)        ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ((rtm)->Timing.TaskCounters = (val))
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
#define rtmIsContinuousTask(rtm, tid)  0
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmSetFirstInitCond
#define rtmSetFirstInitCond(rtm, val)  ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm)        ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
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
#define basic_IO_qbot_platform_rtModel RT_MODEL_basic_IO_qbot_platfo_T

/* Block signals (default storage) */
typedef struct {
  uint8_T ImageTransform[921600];      /* '<S11>/Image Transform' */
  uint8_T ImageTransform_m[921600];    /* '<S11>/Image Transform' */
  real_T Bias[1680];                   /* '<S4>/Bias' */
  t_uint64 Video3DCapture_o2;          /* '<S11>/Video3D Capture' */
  t_uint64 Video3DCapture1_o2;         /* '<S11>/Video3D Capture1' */
  real_T GameController_o3[2];         /* '<S3>/Game Controller' */
  real_T StreamClient_o4[17];          /* '<S7>/Stream Client' */
  real_T SampleTime;                   /* '<S12>/Sample Time' */
  real_T ComputationTime;              /* '<S12>/Computation Time' */
  real_T Constant4;                    /* '<S12>/Constant4' */
  real_T RateTransition[3];            /* '<S12>/Rate Transition' */
  real_T RateTransition1[3];           /* '<S12>/Rate Transition1' */
  real_T RateTransition2[3];           /* '<S12>/Rate Transition2' */
  real_T Video3DCapture_o3;            /* '<S11>/Video3D Capture' */
  real_T Video3DCapture1_o3;           /* '<S11>/Video3D Capture1' */
  real_T StreamClient_o4_o;            /* '<S6>/Stream Client' */
  real_T RangingSensor_o1[1680];       /* '<S4>/Ranging Sensor' */
  real_T RangingSensor_o2[1680];       /* '<S4>/Ranging Sensor' */
  real_T RangingSensor_o3[1680];       /* '<S4>/Ranging Sensor' */
  real_T RangingSensor_o4[1680];       /* '<S4>/Ranging Sensor' */
  real_T ranges_c[420];                /* '<S4>/MATLAB Function' */
  real_T angles_c[420];                /* '<S4>/MATLAB Function' */
  t_channel Channel;                   /* '<S1>/Channel' */
  t_channel Channel_m;                 /* '<S9>/Channel' */
  t_channel Channel_o;                 /* '<S10>/Channel' */
  int32_T StreamClient_o2;             /* '<S7>/Stream Client' */
  uint16_T Video3DCapture_o1[307200];  /* '<S11>/Video3D Capture' */
  uint8_T StreamClient_o1;             /* '<S7>/Stream Client' */
  uint8_T VideoCapture_o1[256000];     /* '<S2>/Video Capture' */
  uint8_T Video3DCapture1_o1[921600];  /* '<S11>/Video3D Capture1' */
  uint8_T ImageCompress[256000];       /* '<S1>/Image Compress' */
  uint8_T ImageCompress_j[921600];     /* '<S9>/Image Compress' */
  uint8_T ImageCompress_i[921600];     /* '<S10>/Image Compress' */
  boolean_T RateTransition_a[2];       /* '<S11>/Rate Transition' */
  boolean_T GameController_o1;         /* '<S3>/Game Controller' */
  boolean_T TmpRTBAtManualSwitchInport1;
  boolean_T ManualSwitch;              /* '<Root>/Manual Switch' */
  boolean_T RateTransition_g;          /* '<S2>/Rate Transition' */
  boolean_T RateTransition4;           /* '<S4>/Rate Transition4' */
  boolean_T rightbutton;               /* '<S3>/Data Type Conversion' */
  boolean_T Compare;                   /* '<S16>/Compare' */
} B_basic_IO_qbot_platform_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  t_ranging_measurement RangingSensor_Measurements[1680];/* '<S4>/Ranging Sensor' */
  t_timeout Time_Timeout;              /* '<S7>/Time' */
  t_timeout SampleTime_PreviousTime;   /* '<S12>/Sample Time' */
  t_timeout ComputationTime_BeginTime; /* '<S12>/Computation Time' */
  t_timeout ComputationTime_ComputationTime;/* '<S12>/Computation Time' */
  t_timeout SampleTime1_PreviousTime;  /* '<S12>/Sample Time1' */
  t_timeout ComputationTime1_BeginTime;/* '<S12>/Computation Time1' */
  t_timeout ComputationTime1_ComputationTim;/* '<S12>/Computation Time1' */
  t_timeout ComputationTime2_BeginTime;/* '<S12>/Computation Time2' */
  t_timeout ComputationTime2_ComputationTim;/* '<S12>/Computation Time2' */
  t_timeout SampleTime2_PreviousTime;  /* '<S12>/Sample Time2' */
  t_timeout ComputationTime3_BeginTime;/* '<S12>/Computation Time3' */
  t_timeout ComputationTime3_ComputationTim;/* '<S12>/Computation Time3' */
  t_timeout SampleTime3_PreviousTime;  /* '<S12>/Sample Time3' */
  real_T RateTransition_Buffer[8];     /* '<S6>/Rate Transition' */
  real_T RateTransition1_Buffer0[3];   /* '<S12>/Rate Transition1' */
  real_T RateTransition2_Buffer0[3];   /* '<S12>/Rate Transition2' */
  real_T NewScan_XBuffer[420];         /* '<Root>/New Scan' */
  real_T NewScan_YBuffer[420];         /* '<Root>/New Scan' */
  t_jpeg_compress ImageCompress_Compress;/* '<S1>/Image Compress' */
  t_jpeg_compress ImageCompress_Compress_c;/* '<S9>/Image Compress' */
  t_jpeg_compress ImageCompress_Compress_e;/* '<S10>/Image Compress' */
  t_video_capture VideoCapture_VideoCapture;/* '<S2>/Video Capture' */
  t_game_controller GameController_Controller;/* '<S3>/Game Controller' */
  t_ranging_sensor RangingSensor_Sensor;/* '<S4>/Ranging Sensor' */
  t_pstream StreamClient_Stream;       /* '<S7>/Stream Client' */
  t_pstream StreamClient_Stream_c;     /* '<S6>/Stream Client' */
  t_colorization ImageTransform_AlgHandle;/* '<S11>/Image Transform' */
  t_video3d Video3DInitialize_Video3D; /* '<S11>/Video3D Initialize' */
  t_video3d Video3DCapture_Video3D;    /* '<S11>/Video3D Capture' */
  t_video3d Video3DCapture1_Video3D;   /* '<S11>/Video3D Capture1' */
  t_video3d_stream Video3DCapture_Stream;/* '<S11>/Video3D Capture' */
  t_video3d_stream Video3DCapture1_Stream;/* '<S11>/Video3D Capture1' */
  struct {
    void *LoggedData;
  } Accelerometer_PWORK;               /* '<Root>/Accelerometer' */

  struct {
    void *LoggedData;
  } BatterySense_PWORK;                /* '<Root>/Battery Sense' */

  struct {
    void *LoggedData;
  } CmdVoltage_PWORK;                  /* '<Root>/Cmd Voltage' */

  struct {
    void *LoggedData;
  } CurrentSense_PWORK;                /* '<Root>/Current Sense' */

  struct {
    void *LoggedData;
  } Encoder_PWORK;                     /* '<Root>/Encoder' */

  struct {
    void *LoggedData;
  } Gyroscope_PWORK;                   /* '<Root>/Gyroscope' */

  struct {
    void *LoggedData[4];
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Tachometer_PWORK;                  /* '<Root>/Tachometer' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S3>/Scope' */

  struct {
    void *LoggedData;
  } watchdog_PWORK;                    /* '<S7>/watchdog' */

  struct {
    void *LoggedData[4];
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope_PWORK_j;                     /* '<Root>/Scope' */

  struct {
    void *Fifo;
  } Channel_PWORK;                     /* '<S1>/Channel' */

  struct {
    void *Fifo;
  } Channel_PWORK_n;                   /* '<S9>/Channel' */

  struct {
    void *Fifo;
  } Channel_PWORK_i;                   /* '<S10>/Channel' */

  int32_T ImageCompress_DIMS1;         /* '<S1>/Image Compress' */
  int32_T ImageCompress_DIMS1_d;       /* '<S9>/Image Compress' */
  int32_T ImageCompress_DIMS1_dz;      /* '<S10>/Image Compress' */
  int32_T sfEvent;                     /* '<S4>/MATLAB Function' */
  int32_T sfEvent_k;                   /* '<S3>/MATLAB Function' */
  int_T NewScan_IWORK[2];              /* '<Root>/New Scan' */
  uint8_T RateTransition1_Buffer[256000];/* '<S2>/Rate Transition1' */
  uint8_T RateTransition1_Buffer_p[921600];/* '<S11>/Rate Transition1' */
  uint8_T RateTransition2_Buffer[921600];/* '<S11>/Rate Transition2' */
  uint8_T ImageCompress_ScanLine[5120];/* '<S1>/Image Compress' */
  uint8_T ImageCompress_ScanLine_o[15360];/* '<S9>/Image Compress' */
  uint8_T ImageCompress_ScanLine_b[15360];/* '<S10>/Image Compress' */
  boolean_T RateTransition_Buffer0[2]; /* '<S11>/Rate Transition' */
  boolean_T Time_Owner;                /* '<S7>/Time' */
  boolean_T TmpRTBAtManualSwitchInport1_Buf;/* synthesized block */
  boolean_T RateTransition4_Buffer0;   /* '<S4>/Rate Transition4' */
  boolean_T Memory_PreviousInput;      /* '<S6>/Memory' */
  boolean_T NewScan_IsFull;            /* '<Root>/New Scan' */
  boolean_T doneDoubleBufferReInit;    /* '<S4>/MATLAB Function' */
  boolean_T doneDoubleBufferReInit_g;  /* '<S3>/MATLAB Function' */
} DW_basic_IO_qbot_platform_T;

/* Backward compatible GRT Identifiers */
#define rtB                            basic_IO_qbot_platform_B
#define BlockIO                        B_basic_IO_qbot_platform_T
#define rtP                            basic_IO_qbot_platform_P
#define Parameters                     P_basic_IO_qbot_platform_T
#define rtDWork                        basic_IO_qbot_platform_DW
#define D_Work                         DW_basic_IO_qbot_platform_T

/* Parameters (default storage) */
struct P_basic_IO_qbot_platform_T_ {
  real_T downCamStepSize;              /* Variable: downCamStepSize
                                        * Referenced by: '<S12>/Constant5'
                                        */
  real_T lidarStepSize;                /* Variable: lidarStepSize
                                        * Referenced by: '<S12>/Constant8'
                                        */
  real_T mainStepSize;                 /* Variable: mainStepSize
                                        * Referenced by: '<S12>/Constant4'
                                        */
  real_T mode;                         /* Variable: mode
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T realSenseStepSize;            /* Variable: realSenseStepSize
                                        * Referenced by: '<S12>/Constant7'
                                        */
  real_T ColorConstant_color[3];       /* Mask Parameter: ColorConstant_color
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T StreamClient_default_value[17];
                                   /* Mask Parameter: StreamClient_default_value
                                    * Referenced by: '<S7>/Stream Client'
                                    */
  real_T StreamClient_default_value_f;
                                 /* Mask Parameter: StreamClient_default_value_f
                                  * Referenced by: '<S6>/Stream Client'
                                  */
  real_T NewScan_maximum_rho;          /* Mask Parameter: NewScan_maximum_rho
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_maximum_theta;        /* Mask Parameter: NewScan_maximum_theta
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_minimum_rho;          /* Mask Parameter: NewScan_minimum_rho
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_minimum_theta;        /* Mask Parameter: NewScan_minimum_theta
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_direction;           /* Mask Parameter: NewScan_direction
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_update_rate;         /* Mask Parameter: NewScan_update_rate
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_zero_location;       /* Mask Parameter: NewScan_zero_location
                                        * Referenced by: '<Root>/New Scan'
                                        */
  uint32_T Video3DCapture_stream_index;
                                  /* Mask Parameter: Video3DCapture_stream_index
                                   * Referenced by: '<S11>/Video3D Capture'
                                   */
  uint32_T Video3DCapture1_stream_index;
                                 /* Mask Parameter: Video3DCapture1_stream_index
                                  * Referenced by: '<S11>/Video3D Capture1'
                                  */
  uint16_T ImageTransform_max_pixel; /* Mask Parameter: ImageTransform_max_pixel
                                      * Referenced by: '<S11>/Image Transform'
                                      */
  uint16_T ImageTransform_min_pixel; /* Mask Parameter: ImageTransform_min_pixel
                                      * Referenced by: '<S11>/Image Transform'
                                      */
  boolean_T Video3DInitialize_active;/* Mask Parameter: Video3DInitialize_active
                                      * Referenced by: '<S11>/Video3D Initialize'
                                      */
  int8_T StopwithMessage_message_icon;
                                 /* Mask Parameter: StopwithMessage_message_icon
                                  * Referenced by: '<S18>/Show Message on Host'
                                  */
  uint8_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S16>/Constant'
                                       */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S7>/Constant2'
                                        */
  real_T Gain8_Gain;                   /* Expression: -1
                                        * Referenced by: '<S3>/Gain8'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T DeadZone_Start;               /* Expression: -0.05
                                        * Referenced by: '<S3>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 0.05
                                        * Referenced by: '<S3>/Dead Zone'
                                        */
  real_T converttorads2_Gain;          /* Expression: 1.5
                                        * Referenced by: '<S14>/convert to rad//s2'
                                        */
  real_T Gain7_Gain;                   /* Expression: -1
                                        * Referenced by: '<S3>/Gain7'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S3>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S3>/Saturation1'
                                        */
  real_T DeadZone3_Start;              /* Expression: -0.05
                                        * Referenced by: '<S3>/Dead Zone3'
                                        */
  real_T DeadZone3_End;                /* Expression: 0.05
                                        * Referenced by: '<S3>/Dead Zone3'
                                        */
  real_T converttorads2_Gain_b;        /* Expression: 7.638/2
                                        * Referenced by: '<S14>/convert to rad//s 2'
                                        */
  real_T Constant6_Value;              /* Expression: 1
                                        * Referenced by: '<S7>/Constant6'
                                        */
  real_T VideoCapture_Brightness;      /* Expression: d_brightness
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Contrast;        /* Expression: d_contrast
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Hue;             /* Expression: d_hue
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Saturation;      /* Expression: d_saturation
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Sharpness;       /* Expression: d_sharpness
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Gamma;           /* Expression: d_gamma
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_ColorEnable;     /* Expression: d_coloreffect
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_WhiteBalance;    /* Expression: d_whitebalance
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_BacklightCompensat;/* Expression: d_backlightcompensation
                                          * Referenced by: '<S2>/Video Capture'
                                          */
  real_T VideoCapture_Gain;            /* Expression: d_gain
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Pan;             /* Expression: d_pan
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Tilt;            /* Expression: d_tilt
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Roll;            /* Expression: d_roll
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Zoom;            /* Expression: d_zoom
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Exposure;        /* Expression: d_exposure
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Iris;            /* Expression: d_iris
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Focus;           /* Expression: d_focus
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T VideoCapture_Mirror;          /* Expression: d_mirror
                                        * Referenced by: '<S2>/Video Capture'
                                        */
  real_T Gain6_Gain;                   /* Expression: 0.5
                                        * Referenced by: '<S3>/Gain6'
                                        */
  real_T Bias_Bias;                    /* Expression: 0.5
                                        * Referenced by: '<S3>/Bias'
                                        */
  real_T Gain9_Gain;                   /* Expression: 0.5
                                        * Referenced by: '<S3>/Gain9'
                                        */
  real_T Bias1_Bias;                   /* Expression: 0.5
                                        * Referenced by: '<S3>/Bias1'
                                        */
  real_T Gain4_Gain;                   /* Expression: -1
                                        * Referenced by: '<S3>/Gain4'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S3>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S3>/Saturation4'
                                        */
  real_T DeadZone1_Start;              /* Expression: -0.05
                                        * Referenced by: '<S3>/Dead Zone1'
                                        */
  real_T DeadZone1_End;                /* Expression: 0.05
                                        * Referenced by: '<S3>/Dead Zone1'
                                        */
  real_T Gain5_Gain;                   /* Expression: -1
                                        * Referenced by: '<S3>/Gain5'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S3>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S3>/Saturation3'
                                        */
  real_T DeadZone2_Start;              /* Expression: -0.05
                                        * Referenced by: '<S3>/Dead Zone2'
                                        */
  real_T DeadZone2_End;                /* Expression: 0.05
                                        * Referenced by: '<S3>/Dead Zone2'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S3>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S3>/Saturation2'
                                        */
  real_T Saturation5_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S3>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S3>/Saturation5'
                                        */
  real_T RateTransition1_InitialConditio;/* Expression: 0
                                          * Referenced by: '<S12>/Rate Transition1'
                                          */
  real_T RateTransition2_InitialConditio;/* Expression: 0
                                          * Referenced by: '<S12>/Rate Transition2'
                                          */
  real_T Video3DCapture_Brightness;    /* Expression: d_brightness
                                        * Referenced by: '<S11>/Video3D Capture'
                                        */
  real_T Video3DCapture_Contrast;      /* Expression: d_contrast
                                        * Referenced by: '<S11>/Video3D Capture'
                                        */
  real_T Video3DCapture_Hue;           /* Expression: d_hue
                                        * Referenced by: '<S11>/Video3D Capture'
                                        */
  real_T Video3DCapture_Saturation;    /* Expression: d_saturation
                                        * Referenced by: '<S11>/Video3D Capture'
                                        */
  real_T Video3DCapture_Sharpness;     /* Expression: d_sharpness
                                        * Referenced by: '<S11>/Video3D Capture'
                                        */
  real_T Video3DCapture_Gamma;         /* Expression: d_gamma
                                        * Referenced by: '<S11>/Video3D Capture'
                                        */
  real_T Video3DCapture_WhiteBalance;  /* Expression: d_whitebalance
                                        * Referenced by: '<S11>/Video3D Capture'
                                        */
  real_T Video3DCapture_BacklightCompens;/* Expression: d_backlightcompensation
                                          * Referenced by: '<S11>/Video3D Capture'
                                          */
  real_T Video3DCapture_Gain;          /* Expression: d_gain
                                        * Referenced by: '<S11>/Video3D Capture'
                                        */
  real_T Video3DCapture_Exposure;      /* Expression: d_exposure
                                        * Referenced by: '<S11>/Video3D Capture'
                                        */
  real_T Video3DCapture_Emitter;       /* Expression: emitter
                                        * Referenced by: '<S11>/Video3D Capture'
                                        */
  real_T ImageTransform_ContourDepth;  /* Expression: contour_depth
                                        * Referenced by: '<S11>/Image Transform'
                                        */
  real_T ImageTransform_FocalLen;      /* Expression: focal_length
                                        * Referenced by: '<S11>/Image Transform'
                                        */
  real_T ImageTransform_Extrapolated;  /* Expression: extrapolated
                                        * Referenced by: '<S11>/Image Transform'
                                        */
  real_T ImageTransform_Angle;         /* Expression: angle
                                        * Referenced by: '<S11>/Image Transform'
                                        */
  real_T ImageTransform_RCoeff[2];     /* Expression: radial_coeffs
                                        * Referenced by: '<S11>/Image Transform'
                                        */
  real_T Video3DCapture1_Brightness;   /* Expression: d_brightness
                                        * Referenced by: '<S11>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Contrast;     /* Expression: d_contrast
                                        * Referenced by: '<S11>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Hue;          /* Expression: d_hue
                                        * Referenced by: '<S11>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Saturation;   /* Expression: d_saturation
                                        * Referenced by: '<S11>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Sharpness;    /* Expression: d_sharpness
                                        * Referenced by: '<S11>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Gamma;        /* Expression: d_gamma
                                        * Referenced by: '<S11>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_WhiteBalance; /* Expression: d_whitebalance
                                        * Referenced by: '<S11>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_BacklightCompen;/* Expression: d_backlightcompensation
                                          * Referenced by: '<S11>/Video3D Capture1'
                                          */
  real_T Video3DCapture1_Gain;         /* Expression: d_gain
                                        * Referenced by: '<S11>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Exposure;     /* Expression: d_exposure
                                        * Referenced by: '<S11>/Video3D Capture1'
                                        */
  real_T Video3DCapture1_Emitter;      /* Expression: emitter
                                        * Referenced by: '<S11>/Video3D Capture1'
                                        */
  real_T thelidaris95aheadofCG_Value[2];/* Expression: [9.5*0.0254, 0]
                                         * Referenced by: '<S4>/the lidar is 9.5" ahead of CG'
                                         */
  real_T RangingSensor_Budget;         /* Expression: timing_budget
                                        * Referenced by: '<S4>/Ranging Sensor'
                                        */
  real_T RangingSensor_Period;         /* Expression: measurement_period
                                        * Referenced by: '<S4>/Ranging Sensor'
                                        */
  real_T RangingSensor_MaxInterpolationD;/* Expression: max_interpolated_distance
                                          * Referenced by: '<S4>/Ranging Sensor'
                                          */
  real_T RangingSensor_MaxInterpolationA;/* Expression: max_interpolated_angle
                                          * Referenced by: '<S4>/Ranging Sensor'
                                          */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Bias_Bias_o;                  /* Expression: pi/2
                                        * Referenced by: '<S4>/Bias'
                                        */
  real_T NewScan_L1Width;              /* Expression: line1_width
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L1Color[3];           /* Expression: line1_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L1MSize;              /* Expression: marker1_size
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L1MEdgeColor[3];      /* Expression: marker1_edge_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L1MFaceColor[3];      /* Expression: marker1_face_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L2Width;              /* Expression: line2_width
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L2Color[3];           /* Expression: line2_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L2MSize;              /* Expression: marker2_size
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L2MEdgeColor[3];      /* Expression: marker2_edge_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L2MFaceColor[3];      /* Expression: marker2_face_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L3Width;              /* Expression: line3_width
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L3Color[3];           /* Expression: line3_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L3MSize;              /* Expression: marker3_size
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L3MEdgeColor[3];      /* Expression: marker3_edge_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L3MFaceColor[3];      /* Expression: marker3_face_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L4Width;              /* Expression: line4_width
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L4Color[3];           /* Expression: line4_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L4MSize;              /* Expression: marker4_size
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L4MEdgeColor[3];      /* Expression: marker4_edge_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L4MFaceColor[3];      /* Expression: marker4_face_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L5Width;              /* Expression: line5_width
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L5Color[3];           /* Expression: line5_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L5MSize;              /* Expression: marker5_size
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L5MEdgeColor[3];      /* Expression: marker5_edge_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  real_T NewScan_L5MFaceColor[3];      /* Expression: marker5_face_color
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T StreamClient_SndPriority;
                                 /* Computed Parameter: StreamClient_SndPriority
                                  * Referenced by: '<S7>/Stream Client'
                                  */
  int32_T StreamClient_RcvPriority;
                                 /* Computed Parameter: StreamClient_RcvPriority
                                  * Referenced by: '<S7>/Stream Client'
                                  */
  int32_T ImageTransform_PrPoint[2];
                                   /* Computed Parameter: ImageTransform_PrPoint
                                    * Referenced by: '<S11>/Image Transform'
                                    */
  int32_T ImageTransform_Interpolation;
                             /* Computed Parameter: ImageTransform_Interpolation
                              * Referenced by: '<S11>/Image Transform'
                              */
  int32_T ImageTransform_Origin[2]; /* Computed Parameter: ImageTransform_Origin
                                     * Referenced by: '<S11>/Image Transform'
                                     */
  int32_T ImageTransform_OOrigin[2];
                                   /* Computed Parameter: ImageTransform_OOrigin
                                    * Referenced by: '<S11>/Image Transform'
                                    */
  int32_T StreamClient_SndPriority_m;
                               /* Computed Parameter: StreamClient_SndPriority_m
                                * Referenced by: '<S6>/Stream Client'
                                */
  int32_T StreamClient_RcvPriority_c;
                               /* Computed Parameter: StreamClient_RcvPriority_c
                                * Referenced by: '<S6>/Stream Client'
                                */
  int32_T NewScan_L1Style;             /* Computed Parameter: NewScan_L1Style
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_L1Marker;            /* Computed Parameter: NewScan_L1Marker
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_L2Style;             /* Computed Parameter: NewScan_L2Style
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_L2Marker;            /* Computed Parameter: NewScan_L2Marker
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_L3Style;             /* Computed Parameter: NewScan_L3Style
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_L3Marker;            /* Computed Parameter: NewScan_L3Marker
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_L4Style;             /* Computed Parameter: NewScan_L4Style
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_L4Marker;            /* Computed Parameter: NewScan_L4Marker
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_L5Style;             /* Computed Parameter: NewScan_L5Style
                                        * Referenced by: '<Root>/New Scan'
                                        */
  int32_T NewScan_L5Marker;            /* Computed Parameter: NewScan_L5Marker
                                        * Referenced by: '<Root>/New Scan'
                                        */
  uint32_T StreamClient_SndSize;     /* Computed Parameter: StreamClient_SndSize
                                      * Referenced by: '<S7>/Stream Client'
                                      */
  uint32_T StreamClient_RcvSize;     /* Computed Parameter: StreamClient_RcvSize
                                      * Referenced by: '<S7>/Stream Client'
                                      */
  uint32_T StreamClient_SndFIFO;     /* Computed Parameter: StreamClient_SndFIFO
                                      * Referenced by: '<S7>/Stream Client'
                                      */
  uint32_T StreamClient_RcvFIFO;     /* Computed Parameter: StreamClient_RcvFIFO
                                      * Referenced by: '<S7>/Stream Client'
                                      */
  uint32_T Video3DCapture_Preset;   /* Computed Parameter: Video3DCapture_Preset
                                     * Referenced by: '<S11>/Video3D Capture'
                                     */
  uint32_T ImageTransform_ColorTheme;
                                /* Computed Parameter: ImageTransform_ColorTheme
                                 * Referenced by: '<S11>/Image Transform'
                                 */
  uint32_T Video3DCapture1_Preset; /* Computed Parameter: Video3DCapture1_Preset
                                    * Referenced by: '<S11>/Video3D Capture1'
                                    */
  uint32_T StreamClient_SndSize_j; /* Computed Parameter: StreamClient_SndSize_j
                                    * Referenced by: '<S6>/Stream Client'
                                    */
  uint32_T StreamClient_RcvSize_m; /* Computed Parameter: StreamClient_RcvSize_m
                                    * Referenced by: '<S6>/Stream Client'
                                    */
  uint32_T StreamClient_SndFIFO_a; /* Computed Parameter: StreamClient_SndFIFO_a
                                    * Referenced by: '<S6>/Stream Client'
                                    */
  uint32_T StreamClient_RcvFIFO_c; /* Computed Parameter: StreamClient_RcvFIFO_c
                                    * Referenced by: '<S6>/Stream Client'
                                    */
  uint32_T ImageCompress_Quality;   /* Computed Parameter: ImageCompress_Quality
                                     * Referenced by: '<S1>/Image Compress'
                                     */
  uint32_T ImageCompress_Quality_b;
                                  /* Computed Parameter: ImageCompress_Quality_b
                                   * Referenced by: '<S9>/Image Compress'
                                   */
  uint32_T ImageCompress_Quality_d;
                                  /* Computed Parameter: ImageCompress_Quality_d
                                   * Referenced by: '<S10>/Image Compress'
                                   */
  uint32_T RangingSensor_Range;       /* Computed Parameter: RangingSensor_Range
                                       * Referenced by: '<S4>/Ranging Sensor'
                                       */
  uint16_T GameController_BufferSize;
                                /* Computed Parameter: GameController_BufferSize
                                 * Referenced by: '<S3>/Game Controller'
                                 */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S19>/Constant'
                                        */
  boolean_T RateTransition_InitialCondition;
                          /* Computed Parameter: RateTransition_InitialCondition
                           * Referenced by: '<S11>/Rate Transition'
                           */
  boolean_T GameController_AutoCenter;
                                /* Computed Parameter: GameController_AutoCenter
                                 * Referenced by: '<S3>/Game Controller'
                                 */
  boolean_T GameController_Enabled;/* Computed Parameter: GameController_Enabled
                                    * Referenced by: '<S3>/Game Controller'
                                    */
  boolean_T StreamClient_Active;      /* Computed Parameter: StreamClient_Active
                                       * Referenced by: '<S7>/Stream Client'
                                       */
  boolean_T TmpRTBAtManualSwitchInport1_Ini;
                          /* Computed Parameter: TmpRTBAtManualSwitchInport1_Ini
                           * Referenced by:
                           */
  boolean_T RateTransition4_InitialConditio;
                          /* Computed Parameter: RateTransition4_InitialConditio
                           * Referenced by: '<S4>/Rate Transition4'
                           */
  boolean_T Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<S6>/Memory'
                                   */
  boolean_T StreamClient_Active_e;  /* Computed Parameter: StreamClient_Active_e
                                     * Referenced by: '<S6>/Stream Client'
                                     */
  boolean_T VideoDisplay_UseHardware;
                                 /* Computed Parameter: VideoDisplay_UseHardware
                                  * Referenced by: '<S1>/Video Display'
                                  */
  boolean_T VideoDisplay_UseHardware_m;
                               /* Computed Parameter: VideoDisplay_UseHardware_m
                                * Referenced by: '<S9>/Video Display'
                                */
  boolean_T VideoDisplay_UseHardware_d;
                               /* Computed Parameter: VideoDisplay_UseHardware_d
                                * Referenced by: '<S10>/Video Display'
                                */
  boolean_T RangingSensor_Active;    /* Computed Parameter: RangingSensor_Active
                                      * Referenced by: '<S4>/Ranging Sensor'
                                      */
  int8_T StreamClient_Optimize;     /* Computed Parameter: StreamClient_Optimize
                                     * Referenced by: '<S7>/Stream Client'
                                     */
  int8_T StreamClient_Implementation;
                              /* Computed Parameter: StreamClient_Implementation
                               * Referenced by: '<S7>/Stream Client'
                               */
  int8_T StreamClient_Optimize_k; /* Computed Parameter: StreamClient_Optimize_k
                                   * Referenced by: '<S6>/Stream Client'
                                   */
  int8_T StreamClient_Implementation_d;
                            /* Computed Parameter: StreamClient_Implementation_d
                             * Referenced by: '<S6>/Stream Client'
                             */
  uint8_T GameController_ControllerNumber;
                          /* Computed Parameter: GameController_ControllerNumber
                           * Referenced by: '<S3>/Game Controller'
                           */
  uint8_T StreamClient_URI[24];        /* Expression: uri_argument
                                        * Referenced by: '<S7>/Stream Client'
                                        */
  uint8_T StreamClient_Endian;        /* Computed Parameter: StreamClient_Endian
                                       * Referenced by: '<S7>/Stream Client'
                                       */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<Root>/Manual Switch'
                               */
  uint8_T StreamClient_URI_e[24];      /* Expression: uri_argument
                                        * Referenced by: '<S6>/Stream Client'
                                        */
  uint8_T StreamClient_Endian_f;    /* Computed Parameter: StreamClient_Endian_f
                                     * Referenced by: '<S6>/Stream Client'
                                     */
  uint8_T NewScan_Mode;                /* Computed Parameter: NewScan_Mode
                                        * Referenced by: '<Root>/New Scan'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_basic_IO_qbot_platfor_T {
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
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    time_T stepSize3;
    boolean_T firstInitCondFlag;
    struct {
      uint8_T TID[4];
    } TaskCounters;

    struct {
      boolean_T TID0_1;
      boolean_T TID0_2;
      boolean_T TID0_3;
      boolean_T TID1_2;
    } RateInteraction;

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
    time_T sampleTimesArray[4];
    time_T offsetTimesArray[4];
    int_T sampleTimeTaskIDArray[4];
    int_T sampleHitArray[4];
    int_T perTaskSampleHitsArray[16];
    time_T tArray[4];
  } Timing;
};

/* Block parameters (default storage) */
extern P_basic_IO_qbot_platform_T basic_IO_qbot_platform_P;

/* Block signals (default storage) */
extern B_basic_IO_qbot_platform_T basic_IO_qbot_platform_B;

/* Block states (default storage) */
extern DW_basic_IO_qbot_platform_T basic_IO_qbot_platform_DW;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* Model entry point functions */
extern void basic_IO_qbot_platform_initialize(void);
extern void basic_IO_qbot_platform_output0(void);
extern void basic_IO_qbot_platform_update0(void);
extern void basic_IO_qbot_platform_output1(void);
extern void basic_IO_qbot_platform_update1(void);
extern void basic_IO_qbot_platform_output2(void);
extern void basic_IO_qbot_platform_update2(void);
extern void basic_IO_qbot_platform_output3(void);
extern void basic_IO_qbot_platform_update3(void);
extern void basic_IO_qbot_platform_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern basic_IO_qbot_platform_rtModel *basic_IO_qbot_platform(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_basic_IO_qbot_platfo_T *const basic_IO_qbot_platform_M;

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
 * '<Root>' : 'basic_IO_qbot_platform'
 * '<S1>'   : 'basic_IO_qbot_platform/Downward Facing Camera'
 * '<S2>'   : 'basic_IO_qbot_platform/Downward Camera'
 * '<S3>'   : 'basic_IO_qbot_platform/Joystick Driver'
 * '<S4>'   : 'basic_IO_qbot_platform/Lidar & Localization'
 * '<S5>'   : 'basic_IO_qbot_platform/Powered by QUARC'
 * '<S6>'   : 'basic_IO_qbot_platform/QArm Mini Hardware'
 * '<S7>'   : 'basic_IO_qbot_platform/QBot Hardware'
 * '<S8>'   : 'basic_IO_qbot_platform/Quanser'
 * '<S9>'   : 'basic_IO_qbot_platform/RealSense Depth Data'
 * '<S10>'  : 'basic_IO_qbot_platform/RealSense RGB Data'
 * '<S11>'  : 'basic_IO_qbot_platform/RealSense Camera'
 * '<S12>'  : 'basic_IO_qbot_platform/Timing'
 * '<S13>'  : 'basic_IO_qbot_platform/Joystick Driver/MATLAB Function'
 * '<S14>'  : 'basic_IO_qbot_platform/Joystick Driver/qbot speed command mapping'
 * '<S15>'  : 'basic_IO_qbot_platform/Lidar & Localization/MATLAB Function'
 * '<S16>'  : 'basic_IO_qbot_platform/QArm Mini Hardware/Compare To Constant'
 * '<S17>'  : 'basic_IO_qbot_platform/QBot Hardware/Color Constant'
 * '<S18>'  : 'basic_IO_qbot_platform/QBot Hardware/Stop with Message'
 * '<S19>'  : 'basic_IO_qbot_platform/QBot Hardware/Stop with Message/Compare'
 */
#endif                                 /* basic_IO_qbot_platform_h_ */
