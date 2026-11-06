/*
 * basic_IO_qarm_mini_data.c
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

#include "basic_IO_qarm_mini.h"

/* Block parameters (default storage) */
P_basic_IO_qarm_mini_T basic_IO_qarm_mini_P = {
  /* Mask Parameter: StreamServer_default_value
   * Referenced by: '<S4>/Stream Server'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Mask Parameter: HILRead_analog_channels
   * Referenced by: '<S9>/HIL Read'
   */
  { 0U, 1U, 2U, 3U, 4U },

  /* Mask Parameter: HILRead_other_channels
   * Referenced by: '<S9>/HIL Read'
   */
  { 1000U, 1001U, 1002U, 1003U, 1004U, 3000U, 3001U, 3002U, 3003U, 3004U },

  /* Mask Parameter: HILWrite_other_channels
   * Referenced by: '<S9>/HIL Write'
   */
  { 1000U, 1001U, 1002U, 1003U, 1004U, 11000U, 11001U, 11002U, 11003U, 11004U },

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S8>/Constant'
   */
  2U,

  /* Expression: [1 0 0 0]'
   * Referenced by: '<S2>/Constant'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 1 0 0]'
   * Referenced by: '<S2>/Constant1'
   */
  { 0.0, 1.0, 0.0, 0.0 },

  /* Expression: [0 0 1 0]'
   * Referenced by: '<S2>/Constant2'
   */
  { 0.0, 0.0, 1.0, 0.0 },

  /* Expression: [0 0 0 1]'
   * Referenced by: '<S2>/Constant3'
   */
  { 0.0, 0.0, 0.0, 1.0 },

  /* Expression: [0 0 0 0]'
   * Referenced by: '<S2>/Constant4'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S2>/Switch3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Switch2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Switch1'
   */
  0.0,

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_start
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_switch_in
   * Referenced by: '<S9>/HIL Initialize'
   */
  0.0,

  /* Expression: analog_input_maximums
   * Referenced by: '<S9>/HIL Initialize'
   */
  { 100.0, 3.21, 3.21, 3.21, 100.0 },

  /* Expression: analog_input_minimums
   * Referenced by: '<S9>/HIL Initialize'
   */
  { -100.0, -3.21, -3.21, -3.21, -100.0 },

  /* Expression: 0
   * Referenced by: '<S9>/Bias11'
   */
  0.0,

  /* Expression: -(pi - ((67.5)*(pi/180)))
   * Referenced by: '<S9>/Bias12'
   */
  -1.9634954084936207,

  /* Expression: 0
   * Referenced by: '<S9>/Bias17'
   */
  0.0,

  /* Expression: -pi
   * Referenced by: '<S9>/Bias21'
   */
  -3.1415926535897931,

  /* Expression: 0.9
   * Referenced by: '<S9>/Bias13'
   */
  0.9,

  /* Expression: pi/2
   * Referenced by: '<S9>/Bias14'
   */
  1.5707963267948966,

  /* Expression: -pi/2
   * Referenced by: '<S9>/Bias15'
   */
  -1.5707963267948966,

  /* Expression: pi/2
   * Referenced by: '<S9>/Bias16'
   */
  1.5707963267948966,

  /* Expression: -pi -  0.1834
   * Referenced by: '<S9>/Bias18'
   */
  -3.3249926535897929,

  /* Expression: -pi +  0.1834
   * Referenced by: '<S9>/Bias19'
   */
  -2.9581926535897933,

  /* Expression: -pi
   * Referenced by: '<S9>/Bias20'
   */
  -3.1415926535897931,

  /* Expression: 1/1.68
   * Referenced by: '<S9>/Gain1'
   */
  0.59523809523809523,

  /* Expression: [5*pi/4, pi, 0, 3*pi/4]'
   * Referenced by: '<S9>/Saturation6'
   */
  { 3.9269908169872414, 3.1415926535897931, 0.0, 2.3561944901923448 },

  /* Expression: [-pi/2. 0, -3*pi/4, 0]'
   * Referenced by: '<S9>/Saturation6'
   */
  { -1.5707963267948966, 0.0, -2.3561944901923448, 0.0 },

  /* Expression: 3
   * Referenced by: '<Root>/Select Position'
   */
  3.0,

  /* Expression: [0; pi/2; -pi/2; pi/2]
   * Referenced by: '<S2>/Integrator'
   */
  { 0.0, 1.5707963267948966, -1.5707963267948966, 1.5707963267948966 },

  /* Expression: [5*pi/4, pi, 0, 3*pi/4]'
   * Referenced by: '<S2>/Integrator'
   */
  { 3.9269908169872414, 3.1415926535897931, 0.0, 2.3561944901923448 },

  /* Expression: [-pi/2. 0, -3*pi/4, 0]'
   * Referenced by: '<S2>/Integrator'
   */
  { -1.5707963267948966, 0.0, -2.3561944901923448, 0.0 },

  /* Expression: [0; pi/2; 0; pi/2]
   * Referenced by: '<Root>/Straight up'
   */
  { 0.0, 1.5707963267948966, 0.0, 1.5707963267948966 },

  /* Expression: [0; pi/2; -pi/2; pi/2]
   * Referenced by: '<Root>/Home'
   */
  { 0.0, 1.5707963267948966, -1.5707963267948966, 1.5707963267948966 },

  /* Expression: [5*pi/4, pi, 0, 3*pi/4]'
   * Referenced by: '<S9>/Saturation5'
   */
  { 3.9269908169872414, 3.1415926535897931, 0.0, 2.3561944901923448 },

  /* Expression: [-pi/2. 0, -3*pi/4, 0]'
   * Referenced by: '<S9>/Saturation5'
   */
  { -1.5707963267948966, 0.0, -2.3561944901923448, 0.0 },

  /* Expression: 0
   * Referenced by: '<S9>/Bias'
   */
  0.0,

  /* Expression: pi - ((67.5)*(pi/180))
   * Referenced by: '<S9>/Bias1'
   */
  1.9634954084936207,

  /* Expression: -pi/2
   * Referenced by: '<S9>/Bias2'
   */
  -1.5707963267948966,

  /* Expression: pi + 0.1834
   * Referenced by: '<S9>/Bias6'
   */
  3.3249926535897929,

  /* Expression: pi/2
   * Referenced by: '<S9>/Bias3'
   */
  1.5707963267948966,

  /* Expression: pi -  0.1834
   * Referenced by: '<S9>/Bias7'
   */
  2.9581926535897933,

  /* Expression: -pi/2
   * Referenced by: '<S9>/Bias4'
   */
  -1.5707963267948966,

  /* Expression: pi
   * Referenced by: '<S9>/Bias8'
   */
  3.1415926535897931,

  /* Expression: 0.5
   * Referenced by: '<S2>/Integrator1'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S2>/Integrator1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S2>/Integrator1'
   */
  0.0,

  /* Expression: 1.68
   * Referenced by: '<S9>/Gain'
   */
  1.68,

  /* Expression: -0.9
   * Referenced by: '<S9>/Bias10'
   */
  -0.9,

  /* Expression: 0
   * Referenced by: '<S9>/Bias5'
   */
  0.0,

  /* Expression: pi
   * Referenced by: '<S9>/Bias9'
   */
  3.1415926535897931,

  /* Expression: [0 0 0 0]
   * Referenced by: '<Root>/Constant6'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0.5
   * Referenced by: '<S9>/Saturation'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S9>/Saturation'
   */
  -0.5,

  /* Expression: 0.5
   * Referenced by: '<S9>/Saturation1'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S9>/Saturation1'
   */
  -0.5,

  /* Expression: 0.5
   * Referenced by: '<S9>/Saturation2'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S9>/Saturation2'
   */
  -0.5,

  /* Expression: 0.5
   * Referenced by: '<S9>/Saturation3'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S9>/Saturation3'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Constant7'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S9>/Saturation4'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S9>/Saturation4'
   */
  -0.5,

  /* Expression: [5 10 10 10 20]
   * Referenced by: '<S9>/Constant'
   */
  { 5.0, 10.0, 10.0, 10.0, 20.0 },

  /* Expression: [-1 0.036 0.036 -1 -1]
   * Referenced by: '<S9>/Constant1'
   */
  { -1.0, 0.036, 0.036, -1.0, -1.0 },

  /* Expression: [300 0 0 0 0]
   * Referenced by: '<S9>/Constant2'
   */
  { 300.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [-1 -1 -1 -1 -1]
   * Referenced by: '<S9>/Constant3'
   */
  { -1.0, -1.0, -1.0, -1.0, -1.0 },

  /* Expression: [-1 -1 -1 -1 -1]
   * Referenced by: '<S9>/Constant4'
   */
  { -1.0, -1.0, -1.0, -1.0, -1.0 },

  /* Expression: -1
   * Referenced by: '<S2>/Gain'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Gain1'
   */
  1.0,

  /* Expression: 0.25
   * Referenced by: '<S2>/Gripper Speed (%//s)'
   */
  0.25,

  /* Expression: 0
   * Referenced by: '<S2>/Switch4'
   */
  0.0,

  /* Expression: pi/6
   * Referenced by: '<S2>/Joint Speed  (rad//s)'
   */
  0.52359877559829882,

  /* Expression: 0
   * Referenced by: '<S2>/Switch'
   */
  0.0,

  /* Expression: d_brightness
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_contrast
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_hue
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_saturation
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_sharpness
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_gamma
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_coloreffect
   * Referenced by: '<S1>/Video Capture'
   */
  0.0,

  /* Expression: d_whitebalance
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_backlightcompensation
   * Referenced by: '<S1>/Video Capture'
   */
  0.0,

  /* Expression: d_gain
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_pan
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_tilt
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_roll
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_zoom
   * Referenced by: '<S1>/Video Capture'
   */
  0.0,

  /* Expression: d_exposure
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_iris
   * Referenced by: '<S1>/Video Capture'
   */
  50.0,

  /* Expression: d_focus
   * Referenced by: '<S1>/Video Capture'
   */
  0.0,

  /* Expression: d_mirror
   * Referenced by: '<S1>/Video Capture'
   */
  0.0,

  /* Computed Parameter: HILSetProperty_PropertyCodes
   * Referenced by: '<S9>/HIL Set Property'
   */
  { 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142,
    143, 144, 145, 146, 147, 148, 149, 150, 151, 152 },

  /* Computed Parameter: StreamServer_SndPriority
   * Referenced by: '<S4>/Stream Server'
   */
  0,

  /* Computed Parameter: StreamServer_RcvPriority
   * Referenced by: '<S4>/Stream Server'
   */
  0,

  /* Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S9>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U },

  /* Computed Parameter: StreamServer_SndSize
   * Referenced by: '<S4>/Stream Server'
   */
  120U,

  /* Computed Parameter: StreamServer_RcvSize
   * Referenced by: '<S4>/Stream Server'
   */
  64U,

  /* Computed Parameter: StreamServer_SndFIFO
   * Referenced by: '<S4>/Stream Server'
   */
  1000U,

  /* Computed Parameter: StreamServer_RcvFIFO
   * Referenced by: '<S4>/Stream Server'
   */
  1000U,

  /* Computed Parameter: ImageCompress_Quality
   * Referenced by: '<S7>/Image Compress'
   */
  50U,

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<S9>/HIL Initialize'
   */
  true,

  /* Computed Parameter: HILInitialize_AOTerminate
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOExit
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOTerminate
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOExit
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POTerminate
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POExit
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_CKEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AIPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_AOReset
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_DOReset
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_EIEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POPStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POPEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POStart
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POEnter
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_POReset
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILInitialize_OOReset
   * Referenced by: '<S9>/HIL Initialize'
   */
  false,

  /* Computed Parameter: HILRead_Active
   * Referenced by: '<S9>/HIL Read'
   */
  true,

  /* Computed Parameter: HILWrite_Active
   * Referenced by: '<S9>/HIL Write'
   */
  true,

  /* Computed Parameter: HILSetProperty_Active
   * Referenced by: '<S9>/HIL Set Property'
   */
  false,

  /* Computed Parameter: Memory_InitialCondition
   * Referenced by: '<S4>/Memory'
   */
  false,

  /* Computed Parameter: StreamServer_Active
   * Referenced by: '<S4>/Stream Server'
   */
  true,

  /* Computed Parameter: VideoDisplay_UseHardware
   * Referenced by: '<S7>/Video Display'
   */
  true,

  /* Computed Parameter: StreamServer_Optimize
   * Referenced by: '<S4>/Stream Server'
   */
  2,

  /* Computed Parameter: StreamServer_Implementation
   * Referenced by: '<S4>/Stream Server'
   */
  2,

  /* Expression: uri_argument
   * Referenced by: '<S4>/Stream Server'
   */
  { 116U, 99U, 112U, 105U, 112U, 58U, 47U, 47U, 108U, 111U, 99U, 97U, 108U, 104U,
    111U, 115U, 116U, 58U, 49U, 56U, 56U, 56U, 57U, 0U },

  /* Computed Parameter: StreamServer_Endian
   * Referenced by: '<S4>/Stream Server'
   */
  1U
};
