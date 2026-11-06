/*
 * basic_IO_qarm_mini_dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(int64_T),
  sizeof(uint64_T),
  sizeof(t_channel),
  sizeof(t_jpeg_compress),
  sizeof(t_video_capture),
  sizeof(t_pstream),
  sizeof(t_card),
  sizeof(t_hil_double_property),
  sizeof(uint64_T),
  sizeof(int64_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "int64_T",
  "uint64_T",
  "t_channel",
  "t_jpeg_compress",
  "t_video_capture",
  "t_pstream",
  "t_card",
  "t_hil_double_property",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&basic_IO_qarm_mini_B.HILRead_o1), 0, 0, 38 },

  { (char_T *)(&basic_IO_qarm_mini_B.Channel), 17, 0, 1 },

  { (char_T *)(&basic_IO_qarm_mini_B.VideoCapture_o1[0]), 3, 0, 1382400 },

  { (char_T *)(&basic_IO_qarm_mini_B.Compare), 8, 0, 1 }
  ,

  { (char_T *)(&basic_IO_qarm_mini_DW.HILRead_AnalogBuffer[0]), 0, 0, 25 },

  { (char_T *)(&basic_IO_qarm_mini_DW.ImageCompress_Compress), 18, 0, 1 },

  { (char_T *)(&basic_IO_qarm_mini_DW.VideoCapture_VideoCapture), 19, 0, 1 },

  { (char_T *)(&basic_IO_qarm_mini_DW.StreamServer_Stream), 20, 0, 1 },

  { (char_T *)(&basic_IO_qarm_mini_DW.HILInitialize_Card), 21, 0, 1 },

  { (char_T *)(&basic_IO_qarm_mini_DW.HILRead_PWORK), 11, 0, 9 },

  { (char_T *)(&basic_IO_qarm_mini_DW.ImageCompress_DIMS1), 6, 0, 1 },

  { (char_T *)(&basic_IO_qarm_mini_DW.HILSetProperty_DoubleCodes[0]), 22, 0, 25
  },

  { (char_T *)(&basic_IO_qarm_mini_DW.ImageCompress_ScanLine[0]), 3, 0, 15360 },

  { (char_T *)(&basic_IO_qarm_mini_DW.Memory_PreviousInput), 8, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  14U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&basic_IO_qarm_mini_P.StreamServer_default_value[0]), 0, 0, 8 },

  { (char_T *)(&basic_IO_qarm_mini_P.HILRead_analog_channels[0]), 7, 0, 25 },

  { (char_T *)(&basic_IO_qarm_mini_P.CompareToConstant_const), 3, 0, 1 },

  { (char_T *)(&basic_IO_qarm_mini_P.Constant_Value[0]), 0, 0, 165 },

  { (char_T *)(&basic_IO_qarm_mini_P.HILSetProperty_PropertyCodes[0]), 6, 0, 27
  },

  { (char_T *)(&basic_IO_qarm_mini_P.HILInitialize_AIChannels[0]), 7, 0, 10 },

  { (char_T *)(&basic_IO_qarm_mini_P.HILInitialize_Active), 8, 0, 39 },

  { (char_T *)(&basic_IO_qarm_mini_P.StreamServer_Optimize), 2, 0, 2 },

  { (char_T *)(&basic_IO_qarm_mini_P.StreamServer_URI[0]), 3, 0, 25 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  9U,
  rtPTransitions
};

/* [EOF] basic_IO_qarm_mini_dt.h */
