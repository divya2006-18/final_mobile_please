/*
 * basic_IO_qbot_platform_data.c
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

#include "basic_IO_qbot_platform.h"

/* Block parameters (default storage) */
P_basic_IO_qbot_platform_T basic_IO_qbot_platform_P = {
  /* Variable: downCamStepSize
   * Referenced by: '<S12>/Constant5'
   */
  0.016666666666666666,

  /* Variable: lidarStepSize
   * Referenced by: '<S12>/Constant8'
   */
  0.2,

  /* Variable: mainStepSize
   * Referenced by: '<S12>/Constant4'
   */
  0.016666666666666666,

  /* Variable: mode
   * Referenced by: '<S7>/Constant'
   */
  1.0,

  /* Variable: realSenseStepSize
   * Referenced by: '<S12>/Constant7'
   */
  0.033333333333333333,

  /* Mask Parameter: ColorConstant_color
   * Referenced by: '<S17>/Constant'
   */
  { 0.0, 1.0, 1.0 },

  /* Mask Parameter: StreamClient_default_value
   * Referenced by: '<S7>/Stream Client'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0 },

  /* Mask Parameter: StreamClient_default_value_f
   * Referenced by: '<S6>/Stream Client'
   */
  0.0,

  /* Mask Parameter: NewScan_maximum_rho
   * Referenced by: '<Root>/New Scan'
   */
  4.0,

  /* Mask Parameter: NewScan_maximum_theta
   * Referenced by: '<Root>/New Scan'
   */
  360.0,

  /* Mask Parameter: NewScan_minimum_rho
   * Referenced by: '<Root>/New Scan'
   */
  0.0,

  /* Mask Parameter: NewScan_minimum_theta
   * Referenced by: '<Root>/New Scan'
   */
  0.0,

  /* Mask Parameter: NewScan_direction
   * Referenced by: '<Root>/New Scan'
   */
  1,

  /* Mask Parameter: NewScan_update_rate
   * Referenced by: '<Root>/New Scan'
   */
  1,

  /* Mask Parameter: NewScan_zero_location
   * Referenced by: '<Root>/New Scan'
   */
  2,

  /* Mask Parameter: Video3DCapture_stream_index
   * Referenced by: '<S11>/Video3D Capture'
   */
  0U,

  /* Mask Parameter: Video3DCapture1_stream_index
   * Referenced by: '<S11>/Video3D Capture1'
   */
  0U,

  /* Mask Parameter: ImageTransform_max_pixel
   * Referenced by: '<S11>/Image Transform'
   */
  4000U,

  /* Mask Parameter: ImageTransform_min_pixel
   * Referenced by: '<S11>/Image Transform'
   */
  0U,

  /* Mask Parameter: Video3DInitialize_active
   * Referenced by: '<S11>/Video3D Initialize'
   */
  true,

  /* Mask Parameter: StopwithMessage_message_icon
   * Referenced by: '<S18>/Show Message on Host'
   */
  3,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S16>/Constant'
   */
  2U,

  /* Expression: 0
   * Referenced by: '<S7>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S7>/Constant2'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S3>/Gain8'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S3>/Saturation'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S3>/Saturation'
   */
  -1.0,

  /* Expression: -0.05
   * Referenced by: '<S3>/Dead Zone'
   */
  -0.05,

  /* Expression: 0.05
   * Referenced by: '<S3>/Dead Zone'
   */
  0.05,

  /* Expression: 1.5
   * Referenced by: '<S14>/convert to rad//s2'
   */
  1.5,

  /* Expression: -1
   * Referenced by: '<S3>/Gain7'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S3>/Saturation1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S3>/Saturation1'
   */
  -1.0,

  /* Expression: -0.05
   * Referenced by: '<S3>/Dead Zone3'
   */
  -0.05,

  /* Expression: 0.05
   * Referenced by: '<S3>/Dead Zone3'
   */
  0.05,

  /* Expression: 7.638/2
   * Referenced by: '<S14>/convert to rad//s 2'
   */
  3.819,

  /* Expression: 1
   * Referenced by: '<S7>/Constant6'
   */
  1.0,

  /* Expression: d_brightness
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_contrast
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_hue
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_saturation
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_sharpness
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_gamma
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_coloreffect
   * Referenced by: '<S2>/Video Capture'
   */
  0.0,

  /* Expression: d_whitebalance
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_backlightcompensation
   * Referenced by: '<S2>/Video Capture'
   */
  0.0,

  /* Expression: d_gain
   * Referenced by: '<S2>/Video Capture'
   */
  27.0,

  /* Expression: d_pan
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_tilt
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_roll
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_zoom
   * Referenced by: '<S2>/Video Capture'
   */
  0.0,

  /* Expression: d_exposure
   * Referenced by: '<S2>/Video Capture'
   */
  60.0,

  /* Expression: d_iris
   * Referenced by: '<S2>/Video Capture'
   */
  50.0,

  /* Expression: d_focus
   * Referenced by: '<S2>/Video Capture'
   */
  0.0,

  /* Expression: d_mirror
   * Referenced by: '<S2>/Video Capture'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S3>/Gain6'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S3>/Bias'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S3>/Gain9'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S3>/Bias1'
   */
  0.5,

  /* Expression: -1
   * Referenced by: '<S3>/Gain4'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S3>/Saturation4'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S3>/Saturation4'
   */
  -1.0,

  /* Expression: -0.05
   * Referenced by: '<S3>/Dead Zone1'
   */
  -0.05,

  /* Expression: 0.05
   * Referenced by: '<S3>/Dead Zone1'
   */
  0.05,

  /* Expression: -1
   * Referenced by: '<S3>/Gain5'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S3>/Saturation3'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S3>/Saturation3'
   */
  -1.0,

  /* Expression: -0.05
   * Referenced by: '<S3>/Dead Zone2'
   */
  -0.05,

  /* Expression: 0.05
   * Referenced by: '<S3>/Dead Zone2'
   */
  0.05,

  /* Expression: 1
   * Referenced by: '<S3>/Saturation2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S3>/Saturation2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S3>/Saturation5'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S3>/Saturation5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S12>/Rate Transition1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S12>/Rate Transition2'
   */
  0.0,

  /* Expression: d_brightness
   * Referenced by: '<S11>/Video3D Capture'
   */
  50.0,

  /* Expression: d_contrast
   * Referenced by: '<S11>/Video3D Capture'
   */
  50.0,

  /* Expression: d_hue
   * Referenced by: '<S11>/Video3D Capture'
   */
  50.0,

  /* Expression: d_saturation
   * Referenced by: '<S11>/Video3D Capture'
   */
  50.0,

  /* Expression: d_sharpness
   * Referenced by: '<S11>/Video3D Capture'
   */
  50.0,

  /* Expression: d_gamma
   * Referenced by: '<S11>/Video3D Capture'
   */
  50.0,

  /* Expression: d_whitebalance
   * Referenced by: '<S11>/Video3D Capture'
   */
  50.0,

  /* Expression: d_backlightcompensation
   * Referenced by: '<S11>/Video3D Capture'
   */
  50.0,

  /* Expression: d_gain
   * Referenced by: '<S11>/Video3D Capture'
   */
  50.0,

  /* Expression: d_exposure
   * Referenced by: '<S11>/Video3D Capture'
   */
  30.0,

  /* Expression: emitter
   * Referenced by: '<S11>/Video3D Capture'
   */
  1.0,

  /* Expression: contour_depth
   * Referenced by: '<S11>/Image Transform'
   */
  1.0,

  /* Expression: focal_length
   * Referenced by: '<S11>/Image Transform'
   */
  308.0,

  /* Expression: extrapolated
   * Referenced by: '<S11>/Image Transform'
   */
  0.0,

  /* Expression: angle
   * Referenced by: '<S11>/Image Transform'
   */
  0.0,

  /* Expression: radial_coeffs
   * Referenced by: '<S11>/Image Transform'
   */
  { -0.3129, 0.0907 },

  /* Expression: d_brightness
   * Referenced by: '<S11>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_contrast
   * Referenced by: '<S11>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_hue
   * Referenced by: '<S11>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_saturation
   * Referenced by: '<S11>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_sharpness
   * Referenced by: '<S11>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_gamma
   * Referenced by: '<S11>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_whitebalance
   * Referenced by: '<S11>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_backlightcompensation
   * Referenced by: '<S11>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_gain
   * Referenced by: '<S11>/Video3D Capture1'
   */
  50.0,

  /* Expression: d_exposure
   * Referenced by: '<S11>/Video3D Capture1'
   */
  30.0,

  /* Expression: emitter
   * Referenced by: '<S11>/Video3D Capture1'
   */
  1.0,

  /* Expression: [9.5*0.0254, 0]
   * Referenced by: '<S4>/the lidar is 9.5" ahead of CG'
   */
  { 0.2413, 0.0 },

  /* Expression: timing_budget
   * Referenced by: '<S4>/Ranging Sensor'
   */
  0.033,

  /* Expression: measurement_period
   * Referenced by: '<S4>/Ranging Sensor'
   */
  0.0005,

  /* Expression: max_interpolated_distance
   * Referenced by: '<S4>/Ranging Sensor'
   */
  0.05,

  /* Expression: max_interpolated_angle
   * Referenced by: '<S4>/Ranging Sensor'
   */
  5.0,

  /* Expression: -1
   * Referenced by: '<S4>/Gain'
   */
  -1.0,

  /* Expression: pi/2
   * Referenced by: '<S4>/Bias'
   */
  1.5707963267948966,

  /* Expression: line1_width
   * Referenced by: '<Root>/New Scan'
   */
  0.5,

  /* Expression: line1_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.0, 0.447, 0.741 },

  /* Expression: marker1_size
   * Referenced by: '<Root>/New Scan'
   */
  6.0,

  /* Expression: marker1_edge_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.0, 0.447059, 0.741176 },

  /* Expression: marker1_face_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.0, 0.447059, 0.741176 },

  /* Expression: line2_width
   * Referenced by: '<Root>/New Scan'
   */
  0.5,

  /* Expression: line2_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.85098, 0.32549, 0.0980392 },

  /* Expression: marker2_size
   * Referenced by: '<Root>/New Scan'
   */
  6.0,

  /* Expression: marker2_edge_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.85098, 0.32549, 0.0980392 },

  /* Expression: marker2_face_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.85098, 0.32549, 0.0980392 },

  /* Expression: line3_width
   * Referenced by: '<Root>/New Scan'
   */
  0.5,

  /* Expression: line3_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.929412, 0.694118, 0.12549 },

  /* Expression: marker3_size
   * Referenced by: '<Root>/New Scan'
   */
  6.0,

  /* Expression: marker3_edge_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.929412, 0.694118, 0.12549 },

  /* Expression: marker3_face_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.929412, 0.694118, 0.12549 },

  /* Expression: line4_width
   * Referenced by: '<Root>/New Scan'
   */
  0.5,

  /* Expression: line4_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.494118, 0.184314, 0.556863 },

  /* Expression: marker4_size
   * Referenced by: '<Root>/New Scan'
   */
  6.0,

  /* Expression: marker4_edge_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.494118, 0.184314, 0.556863 },

  /* Expression: marker4_face_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.494118, 0.184314, 0.556863 },

  /* Expression: line5_width
   * Referenced by: '<Root>/New Scan'
   */
  0.5,

  /* Expression: line5_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.466667, 0.67451, 0.188235 },

  /* Expression: marker5_size
   * Referenced by: '<Root>/New Scan'
   */
  6.0,

  /* Expression: marker5_edge_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.466667, 0.67451, 0.188235 },

  /* Expression: marker5_face_color
   * Referenced by: '<Root>/New Scan'
   */
  { 0.466667, 0.67451, 0.188235 },

  /* Computed Parameter: StreamClient_SndPriority
   * Referenced by: '<S7>/Stream Client'
   */
  0,

  /* Computed Parameter: StreamClient_RcvPriority
   * Referenced by: '<S7>/Stream Client'
   */
  0,

  /* Computed Parameter: ImageTransform_PrPoint
   * Referenced by: '<S11>/Image Transform'
   */
  { 262, 334 },

  /* Computed Parameter: ImageTransform_Interpolation
   * Referenced by: '<S11>/Image Transform'
   */
  1,

  /* Computed Parameter: ImageTransform_Origin
   * Referenced by: '<S11>/Image Transform'
   */
  { 240, 320 },

  /* Computed Parameter: ImageTransform_OOrigin
   * Referenced by: '<S11>/Image Transform'
   */
  { 240, 320 },

  /* Computed Parameter: StreamClient_SndPriority_m
   * Referenced by: '<S6>/Stream Client'
   */
  0,

  /* Computed Parameter: StreamClient_RcvPriority_c
   * Referenced by: '<S6>/Stream Client'
   */
  0,

  /* Computed Parameter: NewScan_L1Style
   * Referenced by: '<Root>/New Scan'
   */
  5,

  /* Computed Parameter: NewScan_L1Marker
   * Referenced by: '<Root>/New Scan'
   */
  4,

  /* Computed Parameter: NewScan_L2Style
   * Referenced by: '<Root>/New Scan'
   */
  1,

  /* Computed Parameter: NewScan_L2Marker
   * Referenced by: '<Root>/New Scan'
   */
  14,

  /* Computed Parameter: NewScan_L3Style
   * Referenced by: '<Root>/New Scan'
   */
  1,

  /* Computed Parameter: NewScan_L3Marker
   * Referenced by: '<Root>/New Scan'
   */
  14,

  /* Computed Parameter: NewScan_L4Style
   * Referenced by: '<Root>/New Scan'
   */
  1,

  /* Computed Parameter: NewScan_L4Marker
   * Referenced by: '<Root>/New Scan'
   */
  14,

  /* Computed Parameter: NewScan_L5Style
   * Referenced by: '<Root>/New Scan'
   */
  1,

  /* Computed Parameter: NewScan_L5Marker
   * Referenced by: '<Root>/New Scan'
   */
  14,

  /* Computed Parameter: StreamClient_SndSize
   * Referenced by: '<S7>/Stream Client'
   */
  1460U,

  /* Computed Parameter: StreamClient_RcvSize
   * Referenced by: '<S7>/Stream Client'
   */
  1460U,

  /* Computed Parameter: StreamClient_SndFIFO
   * Referenced by: '<S7>/Stream Client'
   */
  1000U,

  /* Computed Parameter: StreamClient_RcvFIFO
   * Referenced by: '<S7>/Stream Client'
   */
  1000U,

  /* Computed Parameter: Video3DCapture_Preset
   * Referenced by: '<S11>/Video3D Capture'
   */
  21U,

  /* Computed Parameter: ImageTransform_ColorTheme
   * Referenced by: '<S11>/Image Transform'
   */
  1U,

  /* Computed Parameter: Video3DCapture1_Preset
   * Referenced by: '<S11>/Video3D Capture1'
   */
  21U,

  /* Computed Parameter: StreamClient_SndSize_j
   * Referenced by: '<S6>/Stream Client'
   */
  64U,

  /* Computed Parameter: StreamClient_RcvSize_m
   * Referenced by: '<S6>/Stream Client'
   */
  120U,

  /* Computed Parameter: StreamClient_SndFIFO_a
   * Referenced by: '<S6>/Stream Client'
   */
  1000U,

  /* Computed Parameter: StreamClient_RcvFIFO_c
   * Referenced by: '<S6>/Stream Client'
   */
  1000U,

  /* Computed Parameter: ImageCompress_Quality
   * Referenced by: '<S1>/Image Compress'
   */
  50U,

  /* Computed Parameter: ImageCompress_Quality_b
   * Referenced by: '<S9>/Image Compress'
   */
  50U,

  /* Computed Parameter: ImageCompress_Quality_d
   * Referenced by: '<S10>/Image Compress'
   */
  50U,

  /* Computed Parameter: RangingSensor_Range
   * Referenced by: '<S4>/Ranging Sensor'
   */
  1U,

  /* Computed Parameter: GameController_BufferSize
   * Referenced by: '<S3>/Game Controller'
   */
  12U,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S19>/Constant'
   */
  false,

  /* Computed Parameter: RateTransition_InitialCondition
   * Referenced by: '<S11>/Rate Transition'
   */
  false,

  /* Computed Parameter: GameController_AutoCenter
   * Referenced by: '<S3>/Game Controller'
   */
  false,

  /* Computed Parameter: GameController_Enabled
   * Referenced by: '<S3>/Game Controller'
   */
  true,

  /* Computed Parameter: StreamClient_Active
   * Referenced by: '<S7>/Stream Client'
   */
  false,

  /* Computed Parameter: TmpRTBAtManualSwitchInport1_Ini
   * Referenced by:
   */
  false,

  /* Computed Parameter: RateTransition4_InitialConditio
   * Referenced by: '<S4>/Rate Transition4'
   */
  false,

  /* Computed Parameter: Memory_InitialCondition
   * Referenced by: '<S6>/Memory'
   */
  false,

  /* Computed Parameter: StreamClient_Active_e
   * Referenced by: '<S6>/Stream Client'
   */
  true,

  /* Computed Parameter: VideoDisplay_UseHardware
   * Referenced by: '<S1>/Video Display'
   */
  true,

  /* Computed Parameter: VideoDisplay_UseHardware_m
   * Referenced by: '<S9>/Video Display'
   */
  true,

  /* Computed Parameter: VideoDisplay_UseHardware_d
   * Referenced by: '<S10>/Video Display'
   */
  true,

  /* Computed Parameter: RangingSensor_Active
   * Referenced by: '<S4>/Ranging Sensor'
   */
  true,

  /* Computed Parameter: StreamClient_Optimize
   * Referenced by: '<S7>/Stream Client'
   */
  2,

  /* Computed Parameter: StreamClient_Implementation
   * Referenced by: '<S7>/Stream Client'
   */
  2,

  /* Computed Parameter: StreamClient_Optimize_k
   * Referenced by: '<S6>/Stream Client'
   */
  2,

  /* Computed Parameter: StreamClient_Implementation_d
   * Referenced by: '<S6>/Stream Client'
   */
  2,

  /* Computed Parameter: GameController_ControllerNumber
   * Referenced by: '<S3>/Game Controller'
   */
  1U,

  /* Expression: uri_argument
   * Referenced by: '<S7>/Stream Client'
   */
  { 116U, 99U, 112U, 105U, 112U, 58U, 47U, 47U, 108U, 111U, 99U, 97U, 108U, 104U,
    111U, 115U, 116U, 58U, 49U, 56U, 56U, 56U, 56U, 0U },

  /* Computed Parameter: StreamClient_Endian
   * Referenced by: '<S7>/Stream Client'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<Root>/Manual Switch'
   */
  1U,

  /* Expression: uri_argument
   * Referenced by: '<S6>/Stream Client'
   */
  { 116U, 99U, 112U, 105U, 112U, 58U, 47U, 47U, 108U, 111U, 99U, 97U, 108U, 104U,
    111U, 115U, 116U, 58U, 49U, 56U, 56U, 56U, 57U, 0U },

  /* Computed Parameter: StreamClient_Endian_f
   * Referenced by: '<S6>/Stream Client'
   */
  1U,

  /* Computed Parameter: NewScan_Mode
   * Referenced by: '<Root>/New Scan'
   */
  2U
};
