/*
 * basic_IO_qbot_platform_dt.h
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
  sizeof(t_game_controller),
  sizeof(t_ranging_sensor),
  sizeof(t_ranging_measurement),
  sizeof(t_pstream),
  sizeof(t_timeout),
  sizeof(t_colorization),
  sizeof(t_video3d),
  sizeof(t_video3d_stream),
  sizeof(t_int64),
  sizeof(t_uint64),
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
  "t_game_controller",
  "t_ranging_sensor",
  "t_ranging_measurement",
  "t_pstream",
  "t_timeout",
  "t_colorization",
  "t_video3d",
  "t_video3d_stream",
  "t_int64",
  "t_uint64",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&basic_IO_qbot_platform_B.Video3DCapture_o2), 29, 0, 2 },

  { (char_T *)(&basic_IO_qbot_platform_B.GameController_o3[0]), 0, 0, 7594 },

  { (char_T *)(&basic_IO_qbot_platform_B.Channel), 17, 0, 3 },

  { (char_T *)(&basic_IO_qbot_platform_B.StreamClient_o2), 6, 0, 1 },

  { (char_T *)(&basic_IO_qbot_platform_B.Video3DCapture_o1[0]), 5, 0, 307200 },

  { (char_T *)(&basic_IO_qbot_platform_B.StreamClient_o1), 3, 0, 3276801 },

  { (char_T *)(&basic_IO_qbot_platform_B.RateTransition_a[0]), 8, 0, 9 }
  ,

  { (char_T *)(&basic_IO_qbot_platform_DW.RangingSensor_Measurements[0]), 22, 0,
    1680 },

  { (char_T *)(&basic_IO_qbot_platform_DW.Time_Timeout), 24, 0, 13 },

  { (char_T *)(&basic_IO_qbot_platform_DW.RateTransition_Buffer[0]), 0, 0, 854 },

  { (char_T *)(&basic_IO_qbot_platform_DW.ImageCompress_Compress), 18, 0, 3 },

  { (char_T *)(&basic_IO_qbot_platform_DW.VideoCapture_VideoCapture), 19, 0, 1 },

  { (char_T *)(&basic_IO_qbot_platform_DW.GameController_Controller), 20, 0, 1 },

  { (char_T *)(&basic_IO_qbot_platform_DW.RangingSensor_Sensor), 21, 0, 1 },

  { (char_T *)(&basic_IO_qbot_platform_DW.StreamClient_Stream), 23, 0, 2 },

  { (char_T *)(&basic_IO_qbot_platform_DW.ImageTransform_AlgHandle), 25, 0, 1 },

  { (char_T *)(&basic_IO_qbot_platform_DW.Video3DInitialize_Video3D), 26, 0, 3 },

  { (char_T *)(&basic_IO_qbot_platform_DW.Video3DCapture_Stream), 27, 0, 2 },

  { (char_T *)(&basic_IO_qbot_platform_DW.Accelerometer_PWORK.LoggedData), 11, 0,
    21 },

  { (char_T *)(&basic_IO_qbot_platform_DW.ImageCompress_DIMS1), 6, 0, 5 },

  { (char_T *)(&basic_IO_qbot_platform_DW.NewScan_IWORK[0]), 10, 0, 2 },

  { (char_T *)(&basic_IO_qbot_platform_DW.RateTransition1_Buffer[0]), 3, 0,
    2135040 },

  { (char_T *)(&basic_IO_qbot_platform_DW.RateTransition_Buffer0[0]), 8, 0, 9 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  23U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&basic_IO_qbot_platform_P.downCamStepSize), 0, 0, 30 },

  { (char_T *)(&basic_IO_qbot_platform_P.NewScan_direction), 6, 0, 3 },

  { (char_T *)(&basic_IO_qbot_platform_P.Video3DCapture_stream_index), 7, 0, 2 },

  { (char_T *)(&basic_IO_qbot_platform_P.ImageTransform_max_pixel), 5, 0, 2 },

  { (char_T *)(&basic_IO_qbot_platform_P.Video3DInitialize_active), 8, 0, 1 },

  { (char_T *)(&basic_IO_qbot_platform_P.StopwithMessage_message_icon), 2, 0, 1
  },

  { (char_T *)(&basic_IO_qbot_platform_P.CompareToConstant_const), 3, 0, 1 },

  { (char_T *)(&basic_IO_qbot_platform_P.Constant1_Value), 0, 0, 144 },

  { (char_T *)(&basic_IO_qbot_platform_P.StreamClient_SndPriority), 6, 0, 21 },

  { (char_T *)(&basic_IO_qbot_platform_P.StreamClient_SndSize), 7, 0, 15 },

  { (char_T *)(&basic_IO_qbot_platform_P.GameController_BufferSize), 5, 0, 1 },

  { (char_T *)(&basic_IO_qbot_platform_P.Constant_Value), 8, 0, 13 },

  { (char_T *)(&basic_IO_qbot_platform_P.StreamClient_Optimize), 2, 0, 4 },

  { (char_T *)(&basic_IO_qbot_platform_P.GameController_ControllerNumber), 3, 0,
    53 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  14U,
  rtPTransitions
};

/* [EOF] basic_IO_qbot_platform_dt.h */
