/*
 * basic_IO_qbot_platform.c
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
#include "rtwtypes.h"
#include <string.h>
#include <math.h>
#include "basic_IO_qbot_platform_private.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "basic_IO_qbot_platform_dt.h"

/* Named constants for MATLAB Function: '<S3>/MATLAB Function' */
#define basic_IO_qbot_platfo_CALL_EVENT (-1)

/* Block signals (default storage) */
B_basic_IO_qbot_platform_T basic_IO_qbot_platform_B;

/* Block states (default storage) */
DW_basic_IO_qbot_platform_T basic_IO_qbot_platform_DW;

/* Real-time model */
static RT_MODEL_basic_IO_qbot_platfo_T basic_IO_qbot_platform_M_;
RT_MODEL_basic_IO_qbot_platfo_T *const basic_IO_qbot_platform_M =
  &basic_IO_qbot_platform_M_;
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(basic_IO_qbot_platform_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(basic_IO_qbot_platform_M, 2);
  rtmSampleHitPtr[3] = rtmStepTask(basic_IO_qbot_platform_M, 3);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 0 shares data with slower tid rates: 1, 2, 3 */
  basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_1 =
    (basic_IO_qbot_platform_M->Timing.TaskCounters.TID[1] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  basic_IO_qbot_platform_M->Timing.perTaskSampleHits[1] =
    basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_1;
  basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_2 =
    (basic_IO_qbot_platform_M->Timing.TaskCounters.TID[2] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  basic_IO_qbot_platform_M->Timing.perTaskSampleHits[2] =
    basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_2;
  basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_3 =
    (basic_IO_qbot_platform_M->Timing.TaskCounters.TID[3] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  basic_IO_qbot_platform_M->Timing.perTaskSampleHits[3] =
    basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_3;

  /* tid 1 shares data with slower tid rate: 2 */
  if (basic_IO_qbot_platform_M->Timing.TaskCounters.TID[1] == 0) {
    basic_IO_qbot_platform_M->Timing.RateInteraction.TID1_2 =
      (basic_IO_qbot_platform_M->Timing.TaskCounters.TID[2] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    basic_IO_qbot_platform_M->Timing.perTaskSampleHits[6] =
      basic_IO_qbot_platform_M->Timing.RateInteraction.TID1_2;
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (basic_IO_qbot_platform_M->Timing.TaskCounters.TID[1])++;
  if ((basic_IO_qbot_platform_M->Timing.TaskCounters.TID[1]) > 1) {
                                /* Sample time: [0.033333333333333333s, 0.0s] */
    basic_IO_qbot_platform_M->Timing.TaskCounters.TID[1] = 0;
  }

  (basic_IO_qbot_platform_M->Timing.TaskCounters.TID[2])++;
  if ((basic_IO_qbot_platform_M->Timing.TaskCounters.TID[2]) > 3) {
                                /* Sample time: [0.066666666666666666s, 0.0s] */
    basic_IO_qbot_platform_M->Timing.TaskCounters.TID[2] = 0;
  }

  (basic_IO_qbot_platform_M->Timing.TaskCounters.TID[3])++;
  if ((basic_IO_qbot_platform_M->Timing.TaskCounters.TID[3]) > 11) {/* Sample time: [0.2s, 0.0s] */
    basic_IO_qbot_platform_M->Timing.TaskCounters.TID[3] = 0;
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Model output function for TID0 */
void basic_IO_qbot_platform_output0(void)
                                /* Sample time: [0.016666666666666666s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_GameController_o10[4];
  real_T rtb_TmpSignalConversionAtStream[10];
  real_T rtb_Bbutton;
  real_T rtb_Xbutton;
  real_T rtb_Ybutton;
  real_T rtb_converttorads2;
  real_T rtb_leftstickleftright;
  real_T rtb_leftstickupdown;
  real_T rtb_righttrigger;
  boolean_T rtb_GameController_o2[32];
  boolean_T rtb_VideoCapture_o2;

  {                             /* Sample time: [0.016666666666666666s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* RateTransition: '<S11>/Rate Transition' */
  if (basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_1) {
    /* RateTransition: '<S11>/Rate Transition' */
    basic_IO_qbot_platform_B.RateTransition_a[0] =
      basic_IO_qbot_platform_DW.RateTransition_Buffer0[0];
    basic_IO_qbot_platform_B.RateTransition_a[1] =
      basic_IO_qbot_platform_DW.RateTransition_Buffer0[1];
  }

  /* End of RateTransition: '<S11>/Rate Transition' */

  /* S-Function (game_controller_block): '<S3>/Game Controller' */

  /* S-Function Block: basic_IO_qbot_platform/Joystick Driver/Game Controller (game_controller_block) */
  {
    if (basic_IO_qbot_platform_P.GameController_Enabled) {
      t_game_controller_states state;
      t_boolean new_data;
      t_error result;
      result = game_controller_poll
        (basic_IO_qbot_platform_DW.GameController_Controller, &state, &new_data);
      if (result < 0) {
        new_data = false;
      }

      basic_IO_qbot_platform_B.GameController_o1 = new_data;

      {
        int_T i1;
        boolean_T *y1 = &rtb_GameController_o2[0];
        for (i1=0; i1 < 32; i1++) {
          y1[i1] = ((state.buttons & (1U << i1)) != 0);
        }
      }

      basic_IO_qbot_platform_B.GameController_o3[0] = state.sliders[0];
      basic_IO_qbot_platform_B.GameController_o3[1] = state.sliders[1];
      rtb_leftstickleftright = state.x;
      rtb_leftstickupdown = state.y;
      rtb_Bbutton = state.z;
      rtb_Xbutton = state.rx;
      rtb_Ybutton = state.ry;
      rtb_righttrigger = state.rz;
      rtb_GameController_o10[0] = state.point_of_views[0];
      rtb_GameController_o10[1] = state.point_of_views[1];
      rtb_GameController_o10[2] = state.point_of_views[2];
      rtb_GameController_o10[3] = state.point_of_views[3];
    } else {
      basic_IO_qbot_platform_B.GameController_o1 = false;

      {
        int_T i1;
        boolean_T *y1 = &rtb_GameController_o2[0];
        for (i1=0; i1 < 32; i1++) {
          y1[i1] = false;
        }
      }

      basic_IO_qbot_platform_B.GameController_o3[0] = 0;
      basic_IO_qbot_platform_B.GameController_o3[1] = 0;
      rtb_leftstickleftright = 0;
      rtb_leftstickupdown = 0;
      rtb_Bbutton = 0;
      rtb_Xbutton = 0;
      rtb_Ybutton = 0;
      rtb_righttrigger = 0;
      rtb_GameController_o10[0] = -1;
      rtb_GameController_o10[1] = -1;
      rtb_GameController_o10[2] = -1;
      rtb_GameController_o10[3] = -1;
    }
  }

  /* Gain: '<S3>/Gain8' */
  rtb_Ybutton *= basic_IO_qbot_platform_P.Gain8_Gain;

  /* Saturate: '<S3>/Saturation' */
  if (rtb_Ybutton > basic_IO_qbot_platform_P.Saturation_UpperSat) {
    rtb_Ybutton = basic_IO_qbot_platform_P.Saturation_UpperSat;
  } else if (rtb_Ybutton < basic_IO_qbot_platform_P.Saturation_LowerSat) {
    rtb_Ybutton = basic_IO_qbot_platform_P.Saturation_LowerSat;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* DeadZone: '<S3>/Dead Zone' */
  if (rtb_Ybutton > basic_IO_qbot_platform_P.DeadZone_End) {
    rtb_Ybutton -= basic_IO_qbot_platform_P.DeadZone_End;
  } else if (rtb_Ybutton >= basic_IO_qbot_platform_P.DeadZone_Start) {
    rtb_Ybutton = 0.0;
  } else {
    rtb_Ybutton -= basic_IO_qbot_platform_P.DeadZone_Start;
  }

  /* End of DeadZone: '<S3>/Dead Zone' */

  /* SignalConversion generated from: '<S7>/Stream Client' incorporates:
   *  Gain: '<S14>/convert to rad//s2'
   */
  rtb_TmpSignalConversionAtStream[7] =
    basic_IO_qbot_platform_P.converttorads2_Gain * rtb_Ybutton;

  /* Gain: '<S3>/Gain7' */
  rtb_Xbutton *= basic_IO_qbot_platform_P.Gain7_Gain;

  /* Saturate: '<S3>/Saturation1' */
  if (rtb_Xbutton > basic_IO_qbot_platform_P.Saturation1_UpperSat) {
    rtb_Xbutton = basic_IO_qbot_platform_P.Saturation1_UpperSat;
  } else if (rtb_Xbutton < basic_IO_qbot_platform_P.Saturation1_LowerSat) {
    rtb_Xbutton = basic_IO_qbot_platform_P.Saturation1_LowerSat;
  }

  /* End of Saturate: '<S3>/Saturation1' */

  /* S-Function (time_block): '<S7>/Time' */

  /* S-Function Block: basic_IO_qbot_platform/QBot Hardware/Time (time_block) */
  {
    t_error result;
    t_timeout current_time;
    t_timeout time_difference;
    result = timeout_get_high_resolution_time(&current_time);
    if (result == 0) {
      result = timeout_subtract(&time_difference, &current_time,
        &_high_resolution_start_time);
      rtb_Ybutton = time_difference.seconds + time_difference.nanoseconds * 1e-9;
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* SignalConversion generated from: '<S7>/Stream Client' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant2'
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   */
  rtb_TmpSignalConversionAtStream[0] = basic_IO_qbot_platform_P.mode;
  rtb_TmpSignalConversionAtStream[1] = basic_IO_qbot_platform_P.Constant1_Value;
  rtb_TmpSignalConversionAtStream[2] =
    basic_IO_qbot_platform_P.ColorConstant_color[0];
  rtb_TmpSignalConversionAtStream[3] =
    basic_IO_qbot_platform_P.ColorConstant_color[1];
  rtb_TmpSignalConversionAtStream[4] =
    basic_IO_qbot_platform_P.ColorConstant_color[2];
  rtb_TmpSignalConversionAtStream[5] = rtb_GameController_o2[4];
  rtb_TmpSignalConversionAtStream[6] = basic_IO_qbot_platform_P.Constant2_Value;

  /* DeadZone: '<S3>/Dead Zone3' */
  if (rtb_Xbutton > basic_IO_qbot_platform_P.DeadZone3_End) {
    rtb_Xbutton -= basic_IO_qbot_platform_P.DeadZone3_End;
  } else if (rtb_Xbutton >= basic_IO_qbot_platform_P.DeadZone3_Start) {
    rtb_Xbutton = 0.0;
  } else {
    rtb_Xbutton -= basic_IO_qbot_platform_P.DeadZone3_Start;
  }

  /* SignalConversion generated from: '<S7>/Stream Client' incorporates:
   *  DeadZone: '<S3>/Dead Zone3'
   *  Gain: '<S14>/convert to rad//s 2'
   */
  rtb_TmpSignalConversionAtStream[8] =
    basic_IO_qbot_platform_P.converttorads2_Gain_b * rtb_Xbutton;
  rtb_TmpSignalConversionAtStream[9] = rtb_Ybutton;

  /* S-Function (stream_client_block): '<S7>/Stream Client' incorporates:
   *  Constant: '<S7>/Constant6'
   */

  /* S-Function Block: basic_IO_qbot_platform/QBot Hardware/Stream Client (stream_client_block) */
  {
    t_pstream_state state;
    t_error send_result;
    t_error receive_result;
    if (basic_IO_qbot_platform_P.Constant6_Value) {
      send_result = pstream_send(basic_IO_qbot_platform_DW.StreamClient_Stream,
        &rtb_TmpSignalConversionAtStream[0]);
    } else {
      send_result = 0;
    }

    receive_result = pstream_receive
      (basic_IO_qbot_platform_DW.StreamClient_Stream,
       &basic_IO_qbot_platform_B.StreamClient_o4[0]);
    rtb_VideoCapture_o2 = (receive_result > 0);
    basic_IO_qbot_platform_B.StreamClient_o2 = 0;
    if (send_result < 0 && send_result != -QERR_WOULD_BLOCK) {
      basic_IO_qbot_platform_B.StreamClient_o2 = send_result;
    } else if (receive_result < 0 && receive_result != -QERR_WOULD_BLOCK) {
      basic_IO_qbot_platform_B.StreamClient_o2 = receive_result;
    }

    pstream_get_state(basic_IO_qbot_platform_DW.StreamClient_Stream, &state);
    basic_IO_qbot_platform_B.StreamClient_o1 = state;
  }

  /* RateTransition generated from: '<Root>/Manual Switch' */
  if (basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_1) {
    /* RateTransition generated from: '<Root>/Manual Switch' */
    basic_IO_qbot_platform_B.TmpRTBAtManualSwitchInport1 =
      basic_IO_qbot_platform_DW.TmpRTBAtManualSwitchInport1_Buf;
  }

  /* End of RateTransition generated from: '<Root>/Manual Switch' */

  /* ManualSwitch: '<Root>/Manual Switch' */
  if (basic_IO_qbot_platform_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<Root>/Manual Switch' */
    basic_IO_qbot_platform_B.ManualSwitch =
      basic_IO_qbot_platform_B.TmpRTBAtManualSwitchInport1;
  } else {
    /* ManualSwitch: '<Root>/Manual Switch' */
    basic_IO_qbot_platform_B.ManualSwitch = rtb_VideoCapture_o2;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* S-Function (video_capture_block): '<S2>/Video Capture' */
  /* S-Function Block: basic_IO_qbot_platform/Downward Camera/Video Capture (video_capture_block) */
  {
    t_error result;
    t_video_capture_attribute local_attr[18] = {
      { basic_IO_qbot_platform_P.VideoCapture_Brightness,
        VIDEO_CAPTURE_PROPERTY_BRIGHTNESS, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Contrast,
        VIDEO_CAPTURE_PROPERTY_CONTRAST, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Hue, VIDEO_CAPTURE_PROPERTY_HUE,
        (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Saturation,
        VIDEO_CAPTURE_PROPERTY_SATURATION, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Sharpness,
        VIDEO_CAPTURE_PROPERTY_SHARPNESS, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Gamma,
        VIDEO_CAPTURE_PROPERTY_GAMMA, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_ColorEnable,
        VIDEO_CAPTURE_PROPERTY_COLOREFFECT, (t_boolean) 0, true }
      , { basic_IO_qbot_platform_P.VideoCapture_WhiteBalance,
        VIDEO_CAPTURE_PROPERTY_WHITEBALANCE, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_BacklightCompensat,
        VIDEO_CAPTURE_PROPERTY_BACKLIGHTCOMPENSATION, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Gain,
        VIDEO_CAPTURE_PROPERTY_GAIN, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Pan, VIDEO_CAPTURE_PROPERTY_PAN,
        (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Tilt,
        VIDEO_CAPTURE_PROPERTY_TILT, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Roll,
        VIDEO_CAPTURE_PROPERTY_ROLL, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Zoom,
        VIDEO_CAPTURE_PROPERTY_ZOOM, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Exposure,
        VIDEO_CAPTURE_PROPERTY_EXPOSURE, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Iris,
        VIDEO_CAPTURE_PROPERTY_IRIS, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Focus,
        VIDEO_CAPTURE_PROPERTY_FOCUS, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Mirror,
        VIDEO_CAPTURE_PROPERTY_MIRROR, (t_boolean) 0, true }
    };

    video_capture_set_property
      (basic_IO_qbot_platform_DW.VideoCapture_VideoCapture, local_attr,
       ARRAY_LENGTH(local_attr));
    result = video_capture_read
      (basic_IO_qbot_platform_DW.VideoCapture_VideoCapture,
       &basic_IO_qbot_platform_B.VideoCapture_o1[0]);
    rtb_VideoCapture_o2 = (result > 0);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* RateTransition: '<S2>/Rate Transition' */
  basic_IO_qbot_platform_B.RateTransition_g = rtb_VideoCapture_o2;

  /* RateTransition: '<S4>/Rate Transition4' */
  if (basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_3) {
    /* RateTransition: '<S4>/Rate Transition4' */
    basic_IO_qbot_platform_B.RateTransition4 =
      basic_IO_qbot_platform_DW.RateTransition4_Buffer0;
  }

  /* End of RateTransition: '<S4>/Rate Transition4' */
  /* RateTransition: '<S2>/Rate Transition1' incorporates:
   *  S-Function (video_capture_block): '<S2>/Video Capture'
   */
  if (basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_2) {
    memcpy(&basic_IO_qbot_platform_DW.RateTransition1_Buffer[0],
           &basic_IO_qbot_platform_B.VideoCapture_o1[0], 256000U * sizeof
           (uint8_T));
  }

  /* End of RateTransition: '<S2>/Rate Transition1' */
  /* Gain: '<S3>/Gain6' */
  rtb_converttorads2 = basic_IO_qbot_platform_P.Gain6_Gain * rtb_Bbutton;

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  basic_IO_qbot_platform_B.rightbutton = rtb_GameController_o2[5];

  /* DataTypeConversion: '<S3>/Data Type Conversion2' */
  rtb_Ybutton = rtb_GameController_o2[3];

  /* DataTypeConversion: '<S3>/Data Type Conversion3' */
  rtb_Xbutton = rtb_GameController_o2[2];

  /* DataTypeConversion: '<S3>/Data Type Conversion4' */
  rtb_Bbutton = rtb_GameController_o2[1];

  /* Gain: '<S3>/Gain4' */
  rtb_leftstickleftright *= basic_IO_qbot_platform_P.Gain4_Gain;

  /* Saturate: '<S3>/Saturation4' */
  if (rtb_leftstickleftright > basic_IO_qbot_platform_P.Saturation4_UpperSat) {
    rtb_leftstickleftright = basic_IO_qbot_platform_P.Saturation4_UpperSat;
  } else if (rtb_leftstickleftright <
             basic_IO_qbot_platform_P.Saturation4_LowerSat) {
    rtb_leftstickleftright = basic_IO_qbot_platform_P.Saturation4_LowerSat;
  }

  /* End of Saturate: '<S3>/Saturation4' */

  /* DeadZone: '<S3>/Dead Zone1' */
  if (rtb_leftstickleftright > basic_IO_qbot_platform_P.DeadZone1_End) {
    rtb_leftstickleftright -= basic_IO_qbot_platform_P.DeadZone1_End;
  } else if (rtb_leftstickleftright >= basic_IO_qbot_platform_P.DeadZone1_Start)
  {
    rtb_leftstickleftright = 0.0;
  } else {
    rtb_leftstickleftright -= basic_IO_qbot_platform_P.DeadZone1_Start;
  }

  /* End of DeadZone: '<S3>/Dead Zone1' */

  /* Gain: '<S3>/Gain5' */
  rtb_leftstickupdown *= basic_IO_qbot_platform_P.Gain5_Gain;

  /* Saturate: '<S3>/Saturation3' */
  if (rtb_leftstickupdown > basic_IO_qbot_platform_P.Saturation3_UpperSat) {
    rtb_leftstickupdown = basic_IO_qbot_platform_P.Saturation3_UpperSat;
  } else if (rtb_leftstickupdown < basic_IO_qbot_platform_P.Saturation3_LowerSat)
  {
    rtb_leftstickupdown = basic_IO_qbot_platform_P.Saturation3_LowerSat;
  }

  /* End of Saturate: '<S3>/Saturation3' */

  /* DeadZone: '<S3>/Dead Zone2' */
  if (rtb_leftstickupdown > basic_IO_qbot_platform_P.DeadZone2_End) {
    rtb_leftstickupdown -= basic_IO_qbot_platform_P.DeadZone2_End;
  } else if (rtb_leftstickupdown >= basic_IO_qbot_platform_P.DeadZone2_Start) {
    rtb_leftstickupdown = 0.0;
  } else {
    rtb_leftstickupdown -= basic_IO_qbot_platform_P.DeadZone2_Start;
  }

  /* End of DeadZone: '<S3>/Dead Zone2' */

  /* MATLAB Function: '<S3>/MATLAB Function' */
  basic_IO_qbot_platform_DW.sfEvent_k = basic_IO_qbot_platfo_CALL_EVENT;

  /* Bias: '<S3>/Bias1' incorporates:
   *  Gain: '<S3>/Gain9'
   */
  /* MATLAB Function 'Joystick Driver/MATLAB Function': '<S13>:1' */
  /* '<S13>:1:3' */
  /* '<S13>:1:4' */
  /* '<S13>:1:5' */
  /* '<S13>:1:6' */
  rtb_righttrigger = basic_IO_qbot_platform_P.Gain9_Gain * rtb_righttrigger +
    basic_IO_qbot_platform_P.Bias1_Bias;

  /* Saturate: '<S3>/Saturation5' */
  if (rtb_righttrigger > basic_IO_qbot_platform_P.Saturation5_UpperSat) {
    rtb_righttrigger = basic_IO_qbot_platform_P.Saturation5_UpperSat;
  } else if (rtb_righttrigger < basic_IO_qbot_platform_P.Saturation5_LowerSat) {
    rtb_righttrigger = basic_IO_qbot_platform_P.Saturation5_LowerSat;
  }

  /* End of Saturate: '<S3>/Saturation5' */

  /* RateTransition: '<S6>/Rate Transition' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion5'
   */
  if (basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_1) {
    basic_IO_qbot_platform_DW.RateTransition_Buffer[0] = rtb_GameController_o2[0];
    basic_IO_qbot_platform_DW.RateTransition_Buffer[1] = rtb_Bbutton;
    basic_IO_qbot_platform_DW.RateTransition_Buffer[2] = rtb_Xbutton;
    basic_IO_qbot_platform_DW.RateTransition_Buffer[3] = rtb_Ybutton;
    basic_IO_qbot_platform_DW.RateTransition_Buffer[4] = rtb_leftstickupdown;
    basic_IO_qbot_platform_DW.RateTransition_Buffer[5] = rtb_leftstickleftright;

    /* Bias: '<S3>/Bias' incorporates:
     *  DataTypeConversion: '<S3>/Data Type Conversion5'
     */
    rtb_leftstickleftright = rtb_converttorads2 +
      basic_IO_qbot_platform_P.Bias_Bias;

    /* Saturate: '<S3>/Saturation2' */
    if (rtb_leftstickleftright > basic_IO_qbot_platform_P.Saturation2_UpperSat)
    {
      basic_IO_qbot_platform_DW.RateTransition_Buffer[6] =
        basic_IO_qbot_platform_P.Saturation2_UpperSat;
    } else if (rtb_leftstickleftright <
               basic_IO_qbot_platform_P.Saturation2_LowerSat) {
      basic_IO_qbot_platform_DW.RateTransition_Buffer[6] =
        basic_IO_qbot_platform_P.Saturation2_LowerSat;
    } else {
      basic_IO_qbot_platform_DW.RateTransition_Buffer[6] =
        rtb_leftstickleftright;
    }

    /* End of Saturate: '<S3>/Saturation2' */
    basic_IO_qbot_platform_DW.RateTransition_Buffer[7] = rtb_righttrigger;
  }

  /* End of RateTransition: '<S6>/Rate Transition' */
  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   */
  rtb_VideoCapture_o2 = (basic_IO_qbot_platform_B.rightbutton !=
    basic_IO_qbot_platform_P.Constant_Value);

  /* Stop: '<S18>/Stop Simulation' */
  if (rtb_VideoCapture_o2) {
    rtmSetStopRequested(basic_IO_qbot_platform_M, 1);
  }

  /* End of Stop: '<S18>/Stop Simulation' */
  /* S-Function (sample_time_block): '<S12>/Sample Time' */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Sample Time (sample_time_block) */
  {
    t_error result;
    t_timeout current_time;
    t_timeout time_difference;
    result = timeout_get_high_resolution_time(&current_time);
    if (result >= 0) {
      result = timeout_subtract(&time_difference, &current_time,
        &basic_IO_qbot_platform_DW.SampleTime_PreviousTime);
      basic_IO_qbot_platform_B.SampleTime = time_difference.seconds +
        time_difference.nanoseconds * 1e-9;
      memcpy(&basic_IO_qbot_platform_DW.SampleTime_PreviousTime, &current_time,
             sizeof(t_timeout));
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* S-Function (computation_time_block): '<S12>/Computation Time' */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Computation Time (computation_time_block) */
  {
    basic_IO_qbot_platform_B.ComputationTime =
      basic_IO_qbot_platform_DW.ComputationTime_ComputationTime.seconds +
      basic_IO_qbot_platform_DW.ComputationTime_ComputationTime.nanoseconds *
      1e-9;
  }

  /* Constant: '<S12>/Constant4' */
  basic_IO_qbot_platform_B.Constant4 = basic_IO_qbot_platform_P.mainStepSize;

  /* RateTransition: '<S12>/Rate Transition' incorporates:
   *  Constant: '<S12>/Constant5'
   *  S-Function (computation_time_block): '<S12>/Computation Time1'
   *  S-Function (sample_time_block): '<S12>/Sample Time1'
   */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Sample Time1 (sample_time_block) */
  {
    t_error result;
    t_timeout current_time;
    t_timeout time_difference;
    result = timeout_get_high_resolution_time(&current_time);
    if (result >= 0) {
      result = timeout_subtract(&time_difference, &current_time,
        &basic_IO_qbot_platform_DW.SampleTime1_PreviousTime);
      basic_IO_qbot_platform_B.RateTransition[0] = time_difference.seconds +
        time_difference.nanoseconds * 1e-9;
      memcpy(&basic_IO_qbot_platform_DW.SampleTime1_PreviousTime, &current_time,
             sizeof(t_timeout));
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* S-Function Block: basic_IO_qbot_platform/Timing/Computation Time1 (computation_time_block) */
  {
    basic_IO_qbot_platform_B.RateTransition[1] =
      basic_IO_qbot_platform_DW.ComputationTime1_ComputationTim.seconds +
      basic_IO_qbot_platform_DW.ComputationTime1_ComputationTim.nanoseconds *
      1e-9;
  }

  basic_IO_qbot_platform_B.RateTransition[2] =
    basic_IO_qbot_platform_P.downCamStepSize;

  /* RateTransition: '<S12>/Rate Transition1' */
  if (basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_1) {
    /* RateTransition: '<S12>/Rate Transition1' */
    basic_IO_qbot_platform_B.RateTransition1[0] =
      basic_IO_qbot_platform_DW.RateTransition1_Buffer0[0];
    basic_IO_qbot_platform_B.RateTransition1[1] =
      basic_IO_qbot_platform_DW.RateTransition1_Buffer0[1];
    basic_IO_qbot_platform_B.RateTransition1[2] =
      basic_IO_qbot_platform_DW.RateTransition1_Buffer0[2];
  }

  /* End of RateTransition: '<S12>/Rate Transition1' */

  /* RateTransition: '<S12>/Rate Transition2' */
  if (basic_IO_qbot_platform_M->Timing.RateInteraction.TID0_3) {
    /* RateTransition: '<S12>/Rate Transition2' */
    basic_IO_qbot_platform_B.RateTransition2[0] =
      basic_IO_qbot_platform_DW.RateTransition2_Buffer0[0];
    basic_IO_qbot_platform_B.RateTransition2[1] =
      basic_IO_qbot_platform_DW.RateTransition2_Buffer0[1];
    basic_IO_qbot_platform_B.RateTransition2[2] =
      basic_IO_qbot_platform_DW.RateTransition2_Buffer0[2];
  }

  /* End of RateTransition: '<S12>/Rate Transition2' */
}

/* Model update function for TID0 */
void basic_IO_qbot_platform_update0(void)
                                /* Sample time: [0.016666666666666666s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++basic_IO_qbot_platform_M->Timing.clockTick0)) {
    ++basic_IO_qbot_platform_M->Timing.clockTickH0;
  }

  basic_IO_qbot_platform_M->Timing.t[0] =
    basic_IO_qbot_platform_M->Timing.clockTick0 *
    basic_IO_qbot_platform_M->Timing.stepSize0 +
    basic_IO_qbot_platform_M->Timing.clockTickH0 *
    basic_IO_qbot_platform_M->Timing.stepSize0 * 4294967296.0;
}

/* Model output function for TID1 */
void basic_IO_qbot_platform_output1(void)
                                /* Sample time: [0.033333333333333333s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_ComputationTime2;
  real_T rtb_SampleTime2;
  boolean_T rtb_Video3DCapture_o4;
  boolean_T rtb_Video3DCapture1_o4;
  boolean_T rtb_StreamClient_o5;
  real_T *rtb_RateTransition_0;
  uint8_T rtb_StreamClient_o1;
  boolean_T rtb_Memory;

  /* S-Function (video3d_initialize_block): '<S11>/Video3D Initialize' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Video3D Initialize (video3d_initialize_block) */
  {
  }

  /* S-Function (video3d_capture_block): '<S11>/Video3D Capture' */
  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Video3D Capture (video3d_capture_block) */
  {
    t_video3d_frame frame;
    t_error result;
    result = video3d_stream_get_frame
      (basic_IO_qbot_platform_DW.Video3DCapture_Stream, &frame);
    if (result >= 0) {
      result = video3d_frame_get_data(frame,
        &basic_IO_qbot_platform_B.Video3DCapture_o1[0]);

      /* Release the frame to free up its resources */
      video3d_frame_release(frame);
    }

    rtb_Video3DCapture_o4 = (result >= 0);
    if (result < 0 && result != -QERR_WOULD_BLOCK) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* S-Function (image_transform_block): '<S11>/Image Transform' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Image Transform (image_transform_block) */
  {
    t_error result;
    result = image_grayscale_to_colorized_rgb_uint16
      (&basic_IO_qbot_platform_B.Video3DCapture_o1[0], 640, 480,
       basic_IO_qbot_platform_P.ImageTransform_min_pixel,
       basic_IO_qbot_platform_P.ImageTransform_max_pixel,
       basic_IO_qbot_platform_DW.ImageTransform_AlgHandle,
       &basic_IO_qbot_platform_B.ImageTransform_m[0]);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* S-Function (video3d_capture_block): '<S11>/Video3D Capture1' */
  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Video3D Capture1 (video3d_capture_block) */
  {
    t_video3d_frame frame;
    t_error result;
    result = video3d_stream_get_frame
      (basic_IO_qbot_platform_DW.Video3DCapture1_Stream, &frame);
    if (result >= 0) {
      result = video3d_frame_get_data(frame,
        &basic_IO_qbot_platform_B.Video3DCapture1_o1[0]);

      /* Release the frame to free up its resources */
      video3d_frame_release(frame);
    }

    rtb_Video3DCapture1_o4 = (result >= 0);
    if (result < 0 && result != -QERR_WOULD_BLOCK) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* RateTransition: '<S11>/Rate Transition' */
  basic_IO_qbot_platform_DW.RateTransition_Buffer0[0] = rtb_Video3DCapture_o4;
  basic_IO_qbot_platform_DW.RateTransition_Buffer0[1] = rtb_Video3DCapture1_o4;

  /* RateTransition: '<S11>/Rate Transition1' incorporates:
   *  S-Function (video3d_capture_block): '<S11>/Video3D Capture1'
   */
  if (basic_IO_qbot_platform_M->Timing.RateInteraction.TID1_2) {
    memcpy(&basic_IO_qbot_platform_DW.RateTransition1_Buffer_p[0],
           &basic_IO_qbot_platform_B.Video3DCapture1_o1[0], 921600U * sizeof
           (uint8_T));

    /* RateTransition: '<S11>/Rate Transition2' incorporates:
     *  S-Function (image_transform_block): '<S11>/Image Transform'
     *  S-Function (video3d_capture_block): '<S11>/Video3D Capture1'
     */
    memcpy(&basic_IO_qbot_platform_DW.RateTransition2_Buffer[0],
           &basic_IO_qbot_platform_B.ImageTransform_m[0], 921600U * sizeof
           (uint8_T));
  }

  /* End of RateTransition: '<S11>/Rate Transition1' */

  /* RateTransition: '<S6>/Rate Transition' */
  rtb_RateTransition_0 = &basic_IO_qbot_platform_DW.RateTransition_Buffer[0];

  /* Memory: '<S6>/Memory' */
  rtb_Memory = basic_IO_qbot_platform_DW.Memory_PreviousInput;

  /* S-Function (stream_client_block): '<S6>/Stream Client' */

  /* S-Function Block: basic_IO_qbot_platform/QArm Mini Hardware/Stream Client (stream_client_block) */
  {
    t_pstream_state state;
    t_error receive_result;
    if (rtb_Memory) {
      pstream_send(basic_IO_qbot_platform_DW.StreamClient_Stream_c,
                   &rtb_RateTransition_0[0]);
    }

    receive_result = pstream_receive
      (basic_IO_qbot_platform_DW.StreamClient_Stream_c,
       &basic_IO_qbot_platform_B.StreamClient_o4_o);
    rtb_StreamClient_o5 = (receive_result > 0);
    pstream_get_state(basic_IO_qbot_platform_DW.StreamClient_Stream_c, &state);
    rtb_StreamClient_o1 = state;
  }

  /* RelationalOperator: '<S16>/Compare' incorporates:
   *  Constant: '<S16>/Constant'
   */
  basic_IO_qbot_platform_B.Compare = (rtb_StreamClient_o1 ==
    basic_IO_qbot_platform_P.CompareToConstant_const);

  /* RateTransition generated from: '<Root>/Manual Switch' */
  basic_IO_qbot_platform_DW.TmpRTBAtManualSwitchInport1_Buf =
    rtb_StreamClient_o5;

  /* S-Function (computation_time_block): '<S12>/Computation Time2' */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Computation Time2 (computation_time_block) */
  {
    rtb_ComputationTime2 =
      basic_IO_qbot_platform_DW.ComputationTime2_ComputationTim.seconds +
      basic_IO_qbot_platform_DW.ComputationTime2_ComputationTim.nanoseconds *
      1e-9;
  }

  /* S-Function (sample_time_block): '<S12>/Sample Time2' */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Sample Time2 (sample_time_block) */
  {
    t_error result;
    t_timeout current_time;
    t_timeout time_difference;
    result = timeout_get_high_resolution_time(&current_time);
    if (result >= 0) {
      result = timeout_subtract(&time_difference, &current_time,
        &basic_IO_qbot_platform_DW.SampleTime2_PreviousTime);
      rtb_SampleTime2 = time_difference.seconds + time_difference.nanoseconds *
        1e-9;
      memcpy(&basic_IO_qbot_platform_DW.SampleTime2_PreviousTime, &current_time,
             sizeof(t_timeout));
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* RateTransition: '<S12>/Rate Transition1' incorporates:
   *  Constant: '<S12>/Constant7'
   */
  basic_IO_qbot_platform_DW.RateTransition1_Buffer0[0] = rtb_SampleTime2;
  basic_IO_qbot_platform_DW.RateTransition1_Buffer0[1] = rtb_ComputationTime2;
  basic_IO_qbot_platform_DW.RateTransition1_Buffer0[2] =
    basic_IO_qbot_platform_P.realSenseStepSize;
}

/* Model update function for TID1 */
void basic_IO_qbot_platform_update1(void)
                                /* Sample time: [0.033333333333333333s, 0.0s] */
{
  /* Update for Memory: '<S6>/Memory' */
  basic_IO_qbot_platform_DW.Memory_PreviousInput =
    basic_IO_qbot_platform_B.Compare;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++basic_IO_qbot_platform_M->Timing.clockTick1)) {
    ++basic_IO_qbot_platform_M->Timing.clockTickH1;
  }

  basic_IO_qbot_platform_M->Timing.t[1] =
    basic_IO_qbot_platform_M->Timing.clockTick1 *
    basic_IO_qbot_platform_M->Timing.stepSize1 +
    basic_IO_qbot_platform_M->Timing.clockTickH1 *
    basic_IO_qbot_platform_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output function for TID2 */
void basic_IO_qbot_platform_output2(void)
                                /* Sample time: [0.066666666666666666s, 0.0s] */
{
  uint8_T *rtb_RateTransition1_0;
  uint8_T *rtb_RateTransition1_g_0;
  uint8_T *rtb_RateTransition2_0;

  /* RateTransition: '<S11>/Rate Transition1' */
  rtb_RateTransition1_0 = &basic_IO_qbot_platform_DW.RateTransition1_Buffer_p[0];

  /* RateTransition: '<S11>/Rate Transition2' */
  rtb_RateTransition2_0 = &basic_IO_qbot_platform_DW.RateTransition2_Buffer[0];

  /* RateTransition: '<S2>/Rate Transition1' */
  rtb_RateTransition1_g_0 = &basic_IO_qbot_platform_DW.RateTransition1_Buffer[0];

  /* S-Function (image_compress_block): '<S1>/Image Compress' */

  /* S-Function Block: basic_IO_qbot_platform/Downward Facing Camera/Image Compress (image_compress_block) */
  {
    t_error result = 0;
    size_t image_size = 0;
    result = qjpeg_compress_start
      (basic_IO_qbot_platform_DW.ImageCompress_Compress, true);
    if (result == 0) {
      result = qjpeg_compress_write_image_uint8
        (basic_IO_qbot_platform_DW.ImageCompress_Compress,
         &rtb_RateTransition1_g_0[0]);
      qjpeg_compress_stop(basic_IO_qbot_platform_DW.ImageCompress_Compress);

      /* Get the final size of the compressed image */
      if (result >= 0) {
        result = qjpeg_compress_get_fixed_memory_destination_size
          (basic_IO_qbot_platform_DW.ImageCompress_Compress, &image_size);
      }
    }

    /* Set the dimensions of the output signal based on the size of the compressed image */
    basic_IO_qbot_platform_DW.ImageCompress_DIMS1 = (int) image_size;
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* S-Function (channel_block): '<S1>/Channel' */

  /* S-Function Block: basic_IO_qbot_platform/Downward Facing Camera/Channel (channel_block) */
  {
    if (rtExtModeQuarcIsConnected()) {
      struct channel_info {
        t_channel_header header;
      } info;

      size_t width = 1;
      basic_IO_qbot_platform_B.Channel = CHANNEL_0;
      info.header.data_type_id = 3;
      info.header.channel = 0;
      info.header.flags = CHANNEL_FLAG_VARIABLE_SIZE;
      info.header.num_dimensions = 1;
      width *= basic_IO_qbot_platform_DW.ImageCompress_DIMS1;
      info.header.dimension[0] = basic_IO_qbot_platform_DW.ImageCompress_DIMS1;
      channel_fifo_add((t_channel_fifo)
                       basic_IO_qbot_platform_DW.Channel_PWORK.Fifo,
                       &info.header, &basic_IO_qbot_platform_B.ImageCompress[0],
                       width * sizeof(uint8_T));
    }
  }

  /* S-Function (image_compress_block): '<S9>/Image Compress' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Depth Data/Image Compress (image_compress_block) */
  {
    t_error result = 0;
    size_t image_size = 0;
    result = qjpeg_compress_start
      (basic_IO_qbot_platform_DW.ImageCompress_Compress_c, true);
    if (result == 0) {
      result = qjpeg_compress_write_image_uint8
        (basic_IO_qbot_platform_DW.ImageCompress_Compress_c,
         &rtb_RateTransition2_0[0]);
      qjpeg_compress_stop(basic_IO_qbot_platform_DW.ImageCompress_Compress_c);

      /* Get the final size of the compressed image */
      if (result >= 0) {
        result = qjpeg_compress_get_fixed_memory_destination_size
          (basic_IO_qbot_platform_DW.ImageCompress_Compress_c, &image_size);
      }
    }

    /* Set the dimensions of the output signal based on the size of the compressed image */
    basic_IO_qbot_platform_DW.ImageCompress_DIMS1_d = (int) image_size;
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* S-Function (channel_block): '<S9>/Channel' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Depth Data/Channel (channel_block) */
  {
    if (rtExtModeQuarcIsConnected()) {
      struct channel_info {
        t_channel_header header;
      } info;

      size_t width = 1;
      basic_IO_qbot_platform_B.Channel_m = CHANNEL_1;
      info.header.data_type_id = 3;
      info.header.channel = 1;
      info.header.flags = CHANNEL_FLAG_VARIABLE_SIZE;
      info.header.num_dimensions = 1;
      width *= basic_IO_qbot_platform_DW.ImageCompress_DIMS1_d;
      info.header.dimension[0] = basic_IO_qbot_platform_DW.ImageCompress_DIMS1_d;
      channel_fifo_add((t_channel_fifo)
                       basic_IO_qbot_platform_DW.Channel_PWORK_n.Fifo,
                       &info.header, &basic_IO_qbot_platform_B.ImageCompress_j[0],
                       width * sizeof(uint8_T));
    }
  }

  /* S-Function (image_compress_block): '<S10>/Image Compress' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense RGB Data/Image Compress (image_compress_block) */
  {
    t_error result = 0;
    size_t image_size = 0;
    result = qjpeg_compress_start
      (basic_IO_qbot_platform_DW.ImageCompress_Compress_e, true);
    if (result == 0) {
      result = qjpeg_compress_write_image_uint8
        (basic_IO_qbot_platform_DW.ImageCompress_Compress_e,
         &rtb_RateTransition1_0[0]);
      qjpeg_compress_stop(basic_IO_qbot_platform_DW.ImageCompress_Compress_e);

      /* Get the final size of the compressed image */
      if (result >= 0) {
        result = qjpeg_compress_get_fixed_memory_destination_size
          (basic_IO_qbot_platform_DW.ImageCompress_Compress_e, &image_size);
      }
    }

    /* Set the dimensions of the output signal based on the size of the compressed image */
    basic_IO_qbot_platform_DW.ImageCompress_DIMS1_dz = (int) image_size;
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* S-Function (channel_block): '<S10>/Channel' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense RGB Data/Channel (channel_block) */
  {
    if (rtExtModeQuarcIsConnected()) {
      struct channel_info {
        t_channel_header header;
      } info;

      size_t width = 1;
      basic_IO_qbot_platform_B.Channel_o = CHANNEL_2;
      info.header.data_type_id = 3;
      info.header.channel = 2;
      info.header.flags = CHANNEL_FLAG_VARIABLE_SIZE;
      info.header.num_dimensions = 1;
      width *= basic_IO_qbot_platform_DW.ImageCompress_DIMS1_dz;
      info.header.dimension[0] =
        basic_IO_qbot_platform_DW.ImageCompress_DIMS1_dz;
      channel_fifo_add((t_channel_fifo)
                       basic_IO_qbot_platform_DW.Channel_PWORK_i.Fifo,
                       &info.header, &basic_IO_qbot_platform_B.ImageCompress_i[0],
                       width * sizeof(uint8_T));
    }
  }
}

/* Model update function for TID2 */
void basic_IO_qbot_platform_update2(void)
                                /* Sample time: [0.066666666666666666s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++basic_IO_qbot_platform_M->Timing.clockTick2)) {
    ++basic_IO_qbot_platform_M->Timing.clockTickH2;
  }

  basic_IO_qbot_platform_M->Timing.t[2] =
    basic_IO_qbot_platform_M->Timing.clockTick2 *
    basic_IO_qbot_platform_M->Timing.stepSize2 +
    basic_IO_qbot_platform_M->Timing.clockTickH2 *
    basic_IO_qbot_platform_M->Timing.stepSize2 * 4294967296.0;
}

/* Model output function for TID3 */
void basic_IO_qbot_platform_output3(void) /* Sample time: [0.2s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_ComputationTime3;
  real_T rtb_SampleTime3;
  boolean_T rtb_RangingSensor_o5;
  real_T rtb_TmpSignalConversionAtSFun_d[420];
  real_T rtb_TmpSignalConversionAtSFunct[420];
  real_T rtb_TmpSignalConversionAtSFun_1;
  real_T rtb_TmpSignalConversionAtSFun_p;
  real_T tmp;
  real_T tmp_0;
  real_T x;
  int32_T i;

  /* S-Function (ranging_sensor_block): '<S4>/Ranging Sensor' */

  /* S-Function Block: basic_IO_qbot_platform/Lidar & Localization/Ranging Sensor (ranging_sensor_block) */
  {
    t_error result;
    result = leishen_m10p_read(basic_IO_qbot_platform_DW.RangingSensor_Sensor,
      RANGING_MEASUREMENT_MODE_NORMAL,
      basic_IO_qbot_platform_P.RangingSensor_MaxInterpolationD,
      basic_IO_qbot_platform_P.RangingSensor_MaxInterpolationA,
      &basic_IO_qbot_platform_DW.RangingSensor_Measurements[0], 1680);
    rtb_RangingSensor_o5 = (result >= 0);
    if (result >= 0) {
      {
        int_T i1;
        real_T *y0 = &basic_IO_qbot_platform_B.RangingSensor_o1[0];
        real_T *y1 = &basic_IO_qbot_platform_B.RangingSensor_o2[0];
        real_T *y2 = &basic_IO_qbot_platform_B.RangingSensor_o3[0];
        real_T *y3 = &basic_IO_qbot_platform_B.RangingSensor_o4[0];
        t_ranging_measurement *dw_Measurements =
          &basic_IO_qbot_platform_DW.RangingSensor_Measurements[0];
        for (i1=0; i1 < 1680; i1++) {
          y0[i1] = dw_Measurements[i1].distance;
          y2[i1] = dw_Measurements[i1].heading;
        }
      }
    } else {
      if (result != -QERR_WOULD_BLOCK) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      }
    }
  }

  /* Bias: '<S4>/Bias' incorporates:
   *  Gain: '<S4>/Gain'
   */
  for (i = 0; i < 1680; i++) {
    basic_IO_qbot_platform_B.Bias[i] = basic_IO_qbot_platform_P.Gain_Gain *
      basic_IO_qbot_platform_B.RangingSensor_o3[i] +
      basic_IO_qbot_platform_P.Bias_Bias_o;
  }

  /* End of Bias: '<S4>/Bias' */

  /* SignalConversion generated from: '<S15>/ SFunction ' incorporates:
   *  MATLAB Function: '<S4>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFunct[0] =
    basic_IO_qbot_platform_B.RangingSensor_o1[0];
  rtb_TmpSignalConversionAtSFunct[1] =
    basic_IO_qbot_platform_B.RangingSensor_o1[4];
  rtb_TmpSignalConversionAtSFunct[2] =
    basic_IO_qbot_platform_B.RangingSensor_o1[8];
  rtb_TmpSignalConversionAtSFunct[3] =
    basic_IO_qbot_platform_B.RangingSensor_o1[12];
  rtb_TmpSignalConversionAtSFunct[4] =
    basic_IO_qbot_platform_B.RangingSensor_o1[16];
  rtb_TmpSignalConversionAtSFunct[5] =
    basic_IO_qbot_platform_B.RangingSensor_o1[20];
  rtb_TmpSignalConversionAtSFunct[6] =
    basic_IO_qbot_platform_B.RangingSensor_o1[24];
  rtb_TmpSignalConversionAtSFunct[7] =
    basic_IO_qbot_platform_B.RangingSensor_o1[28];
  rtb_TmpSignalConversionAtSFunct[8] =
    basic_IO_qbot_platform_B.RangingSensor_o1[32];
  rtb_TmpSignalConversionAtSFunct[9] =
    basic_IO_qbot_platform_B.RangingSensor_o1[36];
  rtb_TmpSignalConversionAtSFunct[10] =
    basic_IO_qbot_platform_B.RangingSensor_o1[40];
  rtb_TmpSignalConversionAtSFunct[11] =
    basic_IO_qbot_platform_B.RangingSensor_o1[44];
  rtb_TmpSignalConversionAtSFunct[12] =
    basic_IO_qbot_platform_B.RangingSensor_o1[48];
  rtb_TmpSignalConversionAtSFunct[13] =
    basic_IO_qbot_platform_B.RangingSensor_o1[52];
  rtb_TmpSignalConversionAtSFunct[14] =
    basic_IO_qbot_platform_B.RangingSensor_o1[56];
  rtb_TmpSignalConversionAtSFunct[15] =
    basic_IO_qbot_platform_B.RangingSensor_o1[60];
  rtb_TmpSignalConversionAtSFunct[16] =
    basic_IO_qbot_platform_B.RangingSensor_o1[64];
  rtb_TmpSignalConversionAtSFunct[17] =
    basic_IO_qbot_platform_B.RangingSensor_o1[68];
  rtb_TmpSignalConversionAtSFunct[18] =
    basic_IO_qbot_platform_B.RangingSensor_o1[72];
  rtb_TmpSignalConversionAtSFunct[19] =
    basic_IO_qbot_platform_B.RangingSensor_o1[76];
  rtb_TmpSignalConversionAtSFunct[20] =
    basic_IO_qbot_platform_B.RangingSensor_o1[80];
  rtb_TmpSignalConversionAtSFunct[21] =
    basic_IO_qbot_platform_B.RangingSensor_o1[84];
  rtb_TmpSignalConversionAtSFunct[22] =
    basic_IO_qbot_platform_B.RangingSensor_o1[88];
  rtb_TmpSignalConversionAtSFunct[23] =
    basic_IO_qbot_platform_B.RangingSensor_o1[92];
  rtb_TmpSignalConversionAtSFunct[24] =
    basic_IO_qbot_platform_B.RangingSensor_o1[96];
  rtb_TmpSignalConversionAtSFunct[25] =
    basic_IO_qbot_platform_B.RangingSensor_o1[100];
  rtb_TmpSignalConversionAtSFunct[26] =
    basic_IO_qbot_platform_B.RangingSensor_o1[104];
  rtb_TmpSignalConversionAtSFunct[27] =
    basic_IO_qbot_platform_B.RangingSensor_o1[108];
  rtb_TmpSignalConversionAtSFunct[28] =
    basic_IO_qbot_platform_B.RangingSensor_o1[112];
  rtb_TmpSignalConversionAtSFunct[29] =
    basic_IO_qbot_platform_B.RangingSensor_o1[116];
  rtb_TmpSignalConversionAtSFunct[30] =
    basic_IO_qbot_platform_B.RangingSensor_o1[120];
  rtb_TmpSignalConversionAtSFunct[31] =
    basic_IO_qbot_platform_B.RangingSensor_o1[124];
  rtb_TmpSignalConversionAtSFunct[32] =
    basic_IO_qbot_platform_B.RangingSensor_o1[128];
  rtb_TmpSignalConversionAtSFunct[33] =
    basic_IO_qbot_platform_B.RangingSensor_o1[132];
  rtb_TmpSignalConversionAtSFunct[34] =
    basic_IO_qbot_platform_B.RangingSensor_o1[136];
  rtb_TmpSignalConversionAtSFunct[35] =
    basic_IO_qbot_platform_B.RangingSensor_o1[140];
  rtb_TmpSignalConversionAtSFunct[36] =
    basic_IO_qbot_platform_B.RangingSensor_o1[144];
  rtb_TmpSignalConversionAtSFunct[37] =
    basic_IO_qbot_platform_B.RangingSensor_o1[148];
  rtb_TmpSignalConversionAtSFunct[38] =
    basic_IO_qbot_platform_B.RangingSensor_o1[152];
  rtb_TmpSignalConversionAtSFunct[39] =
    basic_IO_qbot_platform_B.RangingSensor_o1[156];
  rtb_TmpSignalConversionAtSFunct[40] =
    basic_IO_qbot_platform_B.RangingSensor_o1[160];
  rtb_TmpSignalConversionAtSFunct[41] =
    basic_IO_qbot_platform_B.RangingSensor_o1[164];
  rtb_TmpSignalConversionAtSFunct[42] =
    basic_IO_qbot_platform_B.RangingSensor_o1[168];
  rtb_TmpSignalConversionAtSFunct[43] =
    basic_IO_qbot_platform_B.RangingSensor_o1[172];
  rtb_TmpSignalConversionAtSFunct[44] =
    basic_IO_qbot_platform_B.RangingSensor_o1[176];
  rtb_TmpSignalConversionAtSFunct[45] =
    basic_IO_qbot_platform_B.RangingSensor_o1[180];
  rtb_TmpSignalConversionAtSFunct[46] =
    basic_IO_qbot_platform_B.RangingSensor_o1[184];
  rtb_TmpSignalConversionAtSFunct[47] =
    basic_IO_qbot_platform_B.RangingSensor_o1[188];
  rtb_TmpSignalConversionAtSFunct[48] =
    basic_IO_qbot_platform_B.RangingSensor_o1[192];
  rtb_TmpSignalConversionAtSFunct[49] =
    basic_IO_qbot_platform_B.RangingSensor_o1[196];
  rtb_TmpSignalConversionAtSFunct[50] =
    basic_IO_qbot_platform_B.RangingSensor_o1[200];
  rtb_TmpSignalConversionAtSFunct[51] =
    basic_IO_qbot_platform_B.RangingSensor_o1[204];
  rtb_TmpSignalConversionAtSFunct[52] =
    basic_IO_qbot_platform_B.RangingSensor_o1[208];
  rtb_TmpSignalConversionAtSFunct[53] =
    basic_IO_qbot_platform_B.RangingSensor_o1[212];
  rtb_TmpSignalConversionAtSFunct[54] =
    basic_IO_qbot_platform_B.RangingSensor_o1[216];
  rtb_TmpSignalConversionAtSFunct[55] =
    basic_IO_qbot_platform_B.RangingSensor_o1[220];
  rtb_TmpSignalConversionAtSFunct[56] =
    basic_IO_qbot_platform_B.RangingSensor_o1[224];
  rtb_TmpSignalConversionAtSFunct[57] =
    basic_IO_qbot_platform_B.RangingSensor_o1[228];
  rtb_TmpSignalConversionAtSFunct[58] =
    basic_IO_qbot_platform_B.RangingSensor_o1[232];
  rtb_TmpSignalConversionAtSFunct[59] =
    basic_IO_qbot_platform_B.RangingSensor_o1[236];
  rtb_TmpSignalConversionAtSFunct[60] =
    basic_IO_qbot_platform_B.RangingSensor_o1[240];
  rtb_TmpSignalConversionAtSFunct[61] =
    basic_IO_qbot_platform_B.RangingSensor_o1[244];
  rtb_TmpSignalConversionAtSFunct[62] =
    basic_IO_qbot_platform_B.RangingSensor_o1[248];
  rtb_TmpSignalConversionAtSFunct[63] =
    basic_IO_qbot_platform_B.RangingSensor_o1[252];
  rtb_TmpSignalConversionAtSFunct[64] =
    basic_IO_qbot_platform_B.RangingSensor_o1[256];
  rtb_TmpSignalConversionAtSFunct[65] =
    basic_IO_qbot_platform_B.RangingSensor_o1[260];
  rtb_TmpSignalConversionAtSFunct[66] =
    basic_IO_qbot_platform_B.RangingSensor_o1[264];
  rtb_TmpSignalConversionAtSFunct[67] =
    basic_IO_qbot_platform_B.RangingSensor_o1[268];
  rtb_TmpSignalConversionAtSFunct[68] =
    basic_IO_qbot_platform_B.RangingSensor_o1[272];
  rtb_TmpSignalConversionAtSFunct[69] =
    basic_IO_qbot_platform_B.RangingSensor_o1[276];
  rtb_TmpSignalConversionAtSFunct[70] =
    basic_IO_qbot_platform_B.RangingSensor_o1[280];
  rtb_TmpSignalConversionAtSFunct[71] =
    basic_IO_qbot_platform_B.RangingSensor_o1[284];
  rtb_TmpSignalConversionAtSFunct[72] =
    basic_IO_qbot_platform_B.RangingSensor_o1[288];
  rtb_TmpSignalConversionAtSFunct[73] =
    basic_IO_qbot_platform_B.RangingSensor_o1[292];
  rtb_TmpSignalConversionAtSFunct[74] =
    basic_IO_qbot_platform_B.RangingSensor_o1[296];
  rtb_TmpSignalConversionAtSFunct[75] =
    basic_IO_qbot_platform_B.RangingSensor_o1[300];
  rtb_TmpSignalConversionAtSFunct[76] =
    basic_IO_qbot_platform_B.RangingSensor_o1[304];
  rtb_TmpSignalConversionAtSFunct[77] =
    basic_IO_qbot_platform_B.RangingSensor_o1[308];
  rtb_TmpSignalConversionAtSFunct[78] =
    basic_IO_qbot_platform_B.RangingSensor_o1[312];
  rtb_TmpSignalConversionAtSFunct[79] =
    basic_IO_qbot_platform_B.RangingSensor_o1[316];
  rtb_TmpSignalConversionAtSFunct[80] =
    basic_IO_qbot_platform_B.RangingSensor_o1[320];
  rtb_TmpSignalConversionAtSFunct[81] =
    basic_IO_qbot_platform_B.RangingSensor_o1[324];
  rtb_TmpSignalConversionAtSFunct[82] =
    basic_IO_qbot_platform_B.RangingSensor_o1[328];
  rtb_TmpSignalConversionAtSFunct[83] =
    basic_IO_qbot_platform_B.RangingSensor_o1[332];
  rtb_TmpSignalConversionAtSFunct[84] =
    basic_IO_qbot_platform_B.RangingSensor_o1[336];
  rtb_TmpSignalConversionAtSFunct[85] =
    basic_IO_qbot_platform_B.RangingSensor_o1[340];
  rtb_TmpSignalConversionAtSFunct[86] =
    basic_IO_qbot_platform_B.RangingSensor_o1[344];
  rtb_TmpSignalConversionAtSFunct[87] =
    basic_IO_qbot_platform_B.RangingSensor_o1[348];
  rtb_TmpSignalConversionAtSFunct[88] =
    basic_IO_qbot_platform_B.RangingSensor_o1[352];
  rtb_TmpSignalConversionAtSFunct[89] =
    basic_IO_qbot_platform_B.RangingSensor_o1[356];
  rtb_TmpSignalConversionAtSFunct[90] =
    basic_IO_qbot_platform_B.RangingSensor_o1[360];
  rtb_TmpSignalConversionAtSFunct[91] =
    basic_IO_qbot_platform_B.RangingSensor_o1[364];
  rtb_TmpSignalConversionAtSFunct[92] =
    basic_IO_qbot_platform_B.RangingSensor_o1[368];
  rtb_TmpSignalConversionAtSFunct[93] =
    basic_IO_qbot_platform_B.RangingSensor_o1[372];
  rtb_TmpSignalConversionAtSFunct[94] =
    basic_IO_qbot_platform_B.RangingSensor_o1[376];
  rtb_TmpSignalConversionAtSFunct[95] =
    basic_IO_qbot_platform_B.RangingSensor_o1[380];
  rtb_TmpSignalConversionAtSFunct[96] =
    basic_IO_qbot_platform_B.RangingSensor_o1[384];
  rtb_TmpSignalConversionAtSFunct[97] =
    basic_IO_qbot_platform_B.RangingSensor_o1[388];
  rtb_TmpSignalConversionAtSFunct[98] =
    basic_IO_qbot_platform_B.RangingSensor_o1[392];
  rtb_TmpSignalConversionAtSFunct[99] =
    basic_IO_qbot_platform_B.RangingSensor_o1[396];
  rtb_TmpSignalConversionAtSFunct[100] =
    basic_IO_qbot_platform_B.RangingSensor_o1[400];
  rtb_TmpSignalConversionAtSFunct[101] =
    basic_IO_qbot_platform_B.RangingSensor_o1[404];
  rtb_TmpSignalConversionAtSFunct[102] =
    basic_IO_qbot_platform_B.RangingSensor_o1[408];
  rtb_TmpSignalConversionAtSFunct[103] =
    basic_IO_qbot_platform_B.RangingSensor_o1[412];
  rtb_TmpSignalConversionAtSFunct[104] =
    basic_IO_qbot_platform_B.RangingSensor_o1[416];
  rtb_TmpSignalConversionAtSFunct[105] =
    basic_IO_qbot_platform_B.RangingSensor_o1[420];
  rtb_TmpSignalConversionAtSFunct[106] =
    basic_IO_qbot_platform_B.RangingSensor_o1[424];
  rtb_TmpSignalConversionAtSFunct[107] =
    basic_IO_qbot_platform_B.RangingSensor_o1[428];
  rtb_TmpSignalConversionAtSFunct[108] =
    basic_IO_qbot_platform_B.RangingSensor_o1[432];
  rtb_TmpSignalConversionAtSFunct[109] =
    basic_IO_qbot_platform_B.RangingSensor_o1[436];
  rtb_TmpSignalConversionAtSFunct[110] =
    basic_IO_qbot_platform_B.RangingSensor_o1[440];
  rtb_TmpSignalConversionAtSFunct[111] =
    basic_IO_qbot_platform_B.RangingSensor_o1[444];
  rtb_TmpSignalConversionAtSFunct[112] =
    basic_IO_qbot_platform_B.RangingSensor_o1[448];
  rtb_TmpSignalConversionAtSFunct[113] =
    basic_IO_qbot_platform_B.RangingSensor_o1[452];
  rtb_TmpSignalConversionAtSFunct[114] =
    basic_IO_qbot_platform_B.RangingSensor_o1[456];
  rtb_TmpSignalConversionAtSFunct[115] =
    basic_IO_qbot_platform_B.RangingSensor_o1[460];
  rtb_TmpSignalConversionAtSFunct[116] =
    basic_IO_qbot_platform_B.RangingSensor_o1[464];
  rtb_TmpSignalConversionAtSFunct[117] =
    basic_IO_qbot_platform_B.RangingSensor_o1[468];
  rtb_TmpSignalConversionAtSFunct[118] =
    basic_IO_qbot_platform_B.RangingSensor_o1[472];
  rtb_TmpSignalConversionAtSFunct[119] =
    basic_IO_qbot_platform_B.RangingSensor_o1[476];
  rtb_TmpSignalConversionAtSFunct[120] =
    basic_IO_qbot_platform_B.RangingSensor_o1[480];
  rtb_TmpSignalConversionAtSFunct[121] =
    basic_IO_qbot_platform_B.RangingSensor_o1[484];
  rtb_TmpSignalConversionAtSFunct[122] =
    basic_IO_qbot_platform_B.RangingSensor_o1[488];
  rtb_TmpSignalConversionAtSFunct[123] =
    basic_IO_qbot_platform_B.RangingSensor_o1[492];
  rtb_TmpSignalConversionAtSFunct[124] =
    basic_IO_qbot_platform_B.RangingSensor_o1[496];
  rtb_TmpSignalConversionAtSFunct[125] =
    basic_IO_qbot_platform_B.RangingSensor_o1[500];
  rtb_TmpSignalConversionAtSFunct[126] =
    basic_IO_qbot_platform_B.RangingSensor_o1[504];
  rtb_TmpSignalConversionAtSFunct[127] =
    basic_IO_qbot_platform_B.RangingSensor_o1[508];
  rtb_TmpSignalConversionAtSFunct[128] =
    basic_IO_qbot_platform_B.RangingSensor_o1[512];
  rtb_TmpSignalConversionAtSFunct[129] =
    basic_IO_qbot_platform_B.RangingSensor_o1[516];
  rtb_TmpSignalConversionAtSFunct[130] =
    basic_IO_qbot_platform_B.RangingSensor_o1[520];
  rtb_TmpSignalConversionAtSFunct[131] =
    basic_IO_qbot_platform_B.RangingSensor_o1[524];
  rtb_TmpSignalConversionAtSFunct[132] =
    basic_IO_qbot_platform_B.RangingSensor_o1[528];
  rtb_TmpSignalConversionAtSFunct[133] =
    basic_IO_qbot_platform_B.RangingSensor_o1[532];
  rtb_TmpSignalConversionAtSFunct[134] =
    basic_IO_qbot_platform_B.RangingSensor_o1[536];
  rtb_TmpSignalConversionAtSFunct[135] =
    basic_IO_qbot_platform_B.RangingSensor_o1[540];
  rtb_TmpSignalConversionAtSFunct[136] =
    basic_IO_qbot_platform_B.RangingSensor_o1[544];
  rtb_TmpSignalConversionAtSFunct[137] =
    basic_IO_qbot_platform_B.RangingSensor_o1[548];
  rtb_TmpSignalConversionAtSFunct[138] =
    basic_IO_qbot_platform_B.RangingSensor_o1[552];
  rtb_TmpSignalConversionAtSFunct[139] =
    basic_IO_qbot_platform_B.RangingSensor_o1[556];
  rtb_TmpSignalConversionAtSFunct[140] =
    basic_IO_qbot_platform_B.RangingSensor_o1[560];
  rtb_TmpSignalConversionAtSFunct[141] =
    basic_IO_qbot_platform_B.RangingSensor_o1[564];
  rtb_TmpSignalConversionAtSFunct[142] =
    basic_IO_qbot_platform_B.RangingSensor_o1[568];
  rtb_TmpSignalConversionAtSFunct[143] =
    basic_IO_qbot_platform_B.RangingSensor_o1[572];
  rtb_TmpSignalConversionAtSFunct[144] =
    basic_IO_qbot_platform_B.RangingSensor_o1[576];
  rtb_TmpSignalConversionAtSFunct[145] =
    basic_IO_qbot_platform_B.RangingSensor_o1[580];
  rtb_TmpSignalConversionAtSFunct[146] =
    basic_IO_qbot_platform_B.RangingSensor_o1[584];
  rtb_TmpSignalConversionAtSFunct[147] =
    basic_IO_qbot_platform_B.RangingSensor_o1[588];
  rtb_TmpSignalConversionAtSFunct[148] =
    basic_IO_qbot_platform_B.RangingSensor_o1[592];
  rtb_TmpSignalConversionAtSFunct[149] =
    basic_IO_qbot_platform_B.RangingSensor_o1[596];
  rtb_TmpSignalConversionAtSFunct[150] =
    basic_IO_qbot_platform_B.RangingSensor_o1[600];
  rtb_TmpSignalConversionAtSFunct[151] =
    basic_IO_qbot_platform_B.RangingSensor_o1[604];
  rtb_TmpSignalConversionAtSFunct[152] =
    basic_IO_qbot_platform_B.RangingSensor_o1[608];
  rtb_TmpSignalConversionAtSFunct[153] =
    basic_IO_qbot_platform_B.RangingSensor_o1[612];
  rtb_TmpSignalConversionAtSFunct[154] =
    basic_IO_qbot_platform_B.RangingSensor_o1[616];
  rtb_TmpSignalConversionAtSFunct[155] =
    basic_IO_qbot_platform_B.RangingSensor_o1[620];
  rtb_TmpSignalConversionAtSFunct[156] =
    basic_IO_qbot_platform_B.RangingSensor_o1[624];
  rtb_TmpSignalConversionAtSFunct[157] =
    basic_IO_qbot_platform_B.RangingSensor_o1[628];
  rtb_TmpSignalConversionAtSFunct[158] =
    basic_IO_qbot_platform_B.RangingSensor_o1[632];
  rtb_TmpSignalConversionAtSFunct[159] =
    basic_IO_qbot_platform_B.RangingSensor_o1[636];
  rtb_TmpSignalConversionAtSFunct[160] =
    basic_IO_qbot_platform_B.RangingSensor_o1[640];
  rtb_TmpSignalConversionAtSFunct[161] =
    basic_IO_qbot_platform_B.RangingSensor_o1[644];
  rtb_TmpSignalConversionAtSFunct[162] =
    basic_IO_qbot_platform_B.RangingSensor_o1[648];
  rtb_TmpSignalConversionAtSFunct[163] =
    basic_IO_qbot_platform_B.RangingSensor_o1[652];
  rtb_TmpSignalConversionAtSFunct[164] =
    basic_IO_qbot_platform_B.RangingSensor_o1[656];
  rtb_TmpSignalConversionAtSFunct[165] =
    basic_IO_qbot_platform_B.RangingSensor_o1[660];
  rtb_TmpSignalConversionAtSFunct[166] =
    basic_IO_qbot_platform_B.RangingSensor_o1[664];
  rtb_TmpSignalConversionAtSFunct[167] =
    basic_IO_qbot_platform_B.RangingSensor_o1[668];
  rtb_TmpSignalConversionAtSFunct[168] =
    basic_IO_qbot_platform_B.RangingSensor_o1[672];
  rtb_TmpSignalConversionAtSFunct[169] =
    basic_IO_qbot_platform_B.RangingSensor_o1[676];
  rtb_TmpSignalConversionAtSFunct[170] =
    basic_IO_qbot_platform_B.RangingSensor_o1[680];
  rtb_TmpSignalConversionAtSFunct[171] =
    basic_IO_qbot_platform_B.RangingSensor_o1[684];
  rtb_TmpSignalConversionAtSFunct[172] =
    basic_IO_qbot_platform_B.RangingSensor_o1[688];
  rtb_TmpSignalConversionAtSFunct[173] =
    basic_IO_qbot_platform_B.RangingSensor_o1[692];
  rtb_TmpSignalConversionAtSFunct[174] =
    basic_IO_qbot_platform_B.RangingSensor_o1[696];
  rtb_TmpSignalConversionAtSFunct[175] =
    basic_IO_qbot_platform_B.RangingSensor_o1[700];
  rtb_TmpSignalConversionAtSFunct[176] =
    basic_IO_qbot_platform_B.RangingSensor_o1[704];
  rtb_TmpSignalConversionAtSFunct[177] =
    basic_IO_qbot_platform_B.RangingSensor_o1[708];
  rtb_TmpSignalConversionAtSFunct[178] =
    basic_IO_qbot_platform_B.RangingSensor_o1[712];
  rtb_TmpSignalConversionAtSFunct[179] =
    basic_IO_qbot_platform_B.RangingSensor_o1[716];
  rtb_TmpSignalConversionAtSFunct[180] =
    basic_IO_qbot_platform_B.RangingSensor_o1[720];
  rtb_TmpSignalConversionAtSFunct[181] =
    basic_IO_qbot_platform_B.RangingSensor_o1[724];
  rtb_TmpSignalConversionAtSFunct[182] =
    basic_IO_qbot_platform_B.RangingSensor_o1[728];
  rtb_TmpSignalConversionAtSFunct[183] =
    basic_IO_qbot_platform_B.RangingSensor_o1[732];
  rtb_TmpSignalConversionAtSFunct[184] =
    basic_IO_qbot_platform_B.RangingSensor_o1[736];
  rtb_TmpSignalConversionAtSFunct[185] =
    basic_IO_qbot_platform_B.RangingSensor_o1[740];
  rtb_TmpSignalConversionAtSFunct[186] =
    basic_IO_qbot_platform_B.RangingSensor_o1[744];
  rtb_TmpSignalConversionAtSFunct[187] =
    basic_IO_qbot_platform_B.RangingSensor_o1[748];
  rtb_TmpSignalConversionAtSFunct[188] =
    basic_IO_qbot_platform_B.RangingSensor_o1[752];
  rtb_TmpSignalConversionAtSFunct[189] =
    basic_IO_qbot_platform_B.RangingSensor_o1[756];
  rtb_TmpSignalConversionAtSFunct[190] =
    basic_IO_qbot_platform_B.RangingSensor_o1[760];
  rtb_TmpSignalConversionAtSFunct[191] =
    basic_IO_qbot_platform_B.RangingSensor_o1[764];
  rtb_TmpSignalConversionAtSFunct[192] =
    basic_IO_qbot_platform_B.RangingSensor_o1[768];
  rtb_TmpSignalConversionAtSFunct[193] =
    basic_IO_qbot_platform_B.RangingSensor_o1[772];
  rtb_TmpSignalConversionAtSFunct[194] =
    basic_IO_qbot_platform_B.RangingSensor_o1[776];
  rtb_TmpSignalConversionAtSFunct[195] =
    basic_IO_qbot_platform_B.RangingSensor_o1[780];
  rtb_TmpSignalConversionAtSFunct[196] =
    basic_IO_qbot_platform_B.RangingSensor_o1[784];
  rtb_TmpSignalConversionAtSFunct[197] =
    basic_IO_qbot_platform_B.RangingSensor_o1[788];
  rtb_TmpSignalConversionAtSFunct[198] =
    basic_IO_qbot_platform_B.RangingSensor_o1[792];
  rtb_TmpSignalConversionAtSFunct[199] =
    basic_IO_qbot_platform_B.RangingSensor_o1[796];
  rtb_TmpSignalConversionAtSFunct[200] =
    basic_IO_qbot_platform_B.RangingSensor_o1[800];
  rtb_TmpSignalConversionAtSFunct[201] =
    basic_IO_qbot_platform_B.RangingSensor_o1[804];
  rtb_TmpSignalConversionAtSFunct[202] =
    basic_IO_qbot_platform_B.RangingSensor_o1[808];
  rtb_TmpSignalConversionAtSFunct[203] =
    basic_IO_qbot_platform_B.RangingSensor_o1[812];
  rtb_TmpSignalConversionAtSFunct[204] =
    basic_IO_qbot_platform_B.RangingSensor_o1[816];
  rtb_TmpSignalConversionAtSFunct[205] =
    basic_IO_qbot_platform_B.RangingSensor_o1[820];
  rtb_TmpSignalConversionAtSFunct[206] =
    basic_IO_qbot_platform_B.RangingSensor_o1[824];
  rtb_TmpSignalConversionAtSFunct[207] =
    basic_IO_qbot_platform_B.RangingSensor_o1[828];
  rtb_TmpSignalConversionAtSFunct[208] =
    basic_IO_qbot_platform_B.RangingSensor_o1[832];
  rtb_TmpSignalConversionAtSFunct[209] =
    basic_IO_qbot_platform_B.RangingSensor_o1[836];
  rtb_TmpSignalConversionAtSFunct[210] =
    basic_IO_qbot_platform_B.RangingSensor_o1[840];
  rtb_TmpSignalConversionAtSFunct[211] =
    basic_IO_qbot_platform_B.RangingSensor_o1[844];
  rtb_TmpSignalConversionAtSFunct[212] =
    basic_IO_qbot_platform_B.RangingSensor_o1[848];
  rtb_TmpSignalConversionAtSFunct[213] =
    basic_IO_qbot_platform_B.RangingSensor_o1[852];
  rtb_TmpSignalConversionAtSFunct[214] =
    basic_IO_qbot_platform_B.RangingSensor_o1[856];
  rtb_TmpSignalConversionAtSFunct[215] =
    basic_IO_qbot_platform_B.RangingSensor_o1[860];
  rtb_TmpSignalConversionAtSFunct[216] =
    basic_IO_qbot_platform_B.RangingSensor_o1[864];
  rtb_TmpSignalConversionAtSFunct[217] =
    basic_IO_qbot_platform_B.RangingSensor_o1[868];
  rtb_TmpSignalConversionAtSFunct[218] =
    basic_IO_qbot_platform_B.RangingSensor_o1[872];
  rtb_TmpSignalConversionAtSFunct[219] =
    basic_IO_qbot_platform_B.RangingSensor_o1[876];
  rtb_TmpSignalConversionAtSFunct[220] =
    basic_IO_qbot_platform_B.RangingSensor_o1[880];
  rtb_TmpSignalConversionAtSFunct[221] =
    basic_IO_qbot_platform_B.RangingSensor_o1[884];
  rtb_TmpSignalConversionAtSFunct[222] =
    basic_IO_qbot_platform_B.RangingSensor_o1[888];
  rtb_TmpSignalConversionAtSFunct[223] =
    basic_IO_qbot_platform_B.RangingSensor_o1[892];
  rtb_TmpSignalConversionAtSFunct[224] =
    basic_IO_qbot_platform_B.RangingSensor_o1[896];
  rtb_TmpSignalConversionAtSFunct[225] =
    basic_IO_qbot_platform_B.RangingSensor_o1[900];
  rtb_TmpSignalConversionAtSFunct[226] =
    basic_IO_qbot_platform_B.RangingSensor_o1[904];
  rtb_TmpSignalConversionAtSFunct[227] =
    basic_IO_qbot_platform_B.RangingSensor_o1[908];
  rtb_TmpSignalConversionAtSFunct[228] =
    basic_IO_qbot_platform_B.RangingSensor_o1[912];
  rtb_TmpSignalConversionAtSFunct[229] =
    basic_IO_qbot_platform_B.RangingSensor_o1[916];
  rtb_TmpSignalConversionAtSFunct[230] =
    basic_IO_qbot_platform_B.RangingSensor_o1[920];
  rtb_TmpSignalConversionAtSFunct[231] =
    basic_IO_qbot_platform_B.RangingSensor_o1[924];
  rtb_TmpSignalConversionAtSFunct[232] =
    basic_IO_qbot_platform_B.RangingSensor_o1[928];
  rtb_TmpSignalConversionAtSFunct[233] =
    basic_IO_qbot_platform_B.RangingSensor_o1[932];
  rtb_TmpSignalConversionAtSFunct[234] =
    basic_IO_qbot_platform_B.RangingSensor_o1[936];
  rtb_TmpSignalConversionAtSFunct[235] =
    basic_IO_qbot_platform_B.RangingSensor_o1[940];
  rtb_TmpSignalConversionAtSFunct[236] =
    basic_IO_qbot_platform_B.RangingSensor_o1[944];
  rtb_TmpSignalConversionAtSFunct[237] =
    basic_IO_qbot_platform_B.RangingSensor_o1[948];
  rtb_TmpSignalConversionAtSFunct[238] =
    basic_IO_qbot_platform_B.RangingSensor_o1[952];
  rtb_TmpSignalConversionAtSFunct[239] =
    basic_IO_qbot_platform_B.RangingSensor_o1[956];
  rtb_TmpSignalConversionAtSFunct[240] =
    basic_IO_qbot_platform_B.RangingSensor_o1[960];
  rtb_TmpSignalConversionAtSFunct[241] =
    basic_IO_qbot_platform_B.RangingSensor_o1[964];
  rtb_TmpSignalConversionAtSFunct[242] =
    basic_IO_qbot_platform_B.RangingSensor_o1[968];
  rtb_TmpSignalConversionAtSFunct[243] =
    basic_IO_qbot_platform_B.RangingSensor_o1[972];
  rtb_TmpSignalConversionAtSFunct[244] =
    basic_IO_qbot_platform_B.RangingSensor_o1[976];
  rtb_TmpSignalConversionAtSFunct[245] =
    basic_IO_qbot_platform_B.RangingSensor_o1[980];
  rtb_TmpSignalConversionAtSFunct[246] =
    basic_IO_qbot_platform_B.RangingSensor_o1[984];
  rtb_TmpSignalConversionAtSFunct[247] =
    basic_IO_qbot_platform_B.RangingSensor_o1[988];
  rtb_TmpSignalConversionAtSFunct[248] =
    basic_IO_qbot_platform_B.RangingSensor_o1[992];
  rtb_TmpSignalConversionAtSFunct[249] =
    basic_IO_qbot_platform_B.RangingSensor_o1[996];
  rtb_TmpSignalConversionAtSFunct[250] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1000];
  rtb_TmpSignalConversionAtSFunct[251] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1004];
  rtb_TmpSignalConversionAtSFunct[252] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1008];
  rtb_TmpSignalConversionAtSFunct[253] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1012];
  rtb_TmpSignalConversionAtSFunct[254] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1016];
  rtb_TmpSignalConversionAtSFunct[255] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1020];
  rtb_TmpSignalConversionAtSFunct[256] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1024];
  rtb_TmpSignalConversionAtSFunct[257] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1028];
  rtb_TmpSignalConversionAtSFunct[258] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1032];
  rtb_TmpSignalConversionAtSFunct[259] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1036];
  rtb_TmpSignalConversionAtSFunct[260] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1040];
  rtb_TmpSignalConversionAtSFunct[261] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1044];
  rtb_TmpSignalConversionAtSFunct[262] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1048];
  rtb_TmpSignalConversionAtSFunct[263] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1052];
  rtb_TmpSignalConversionAtSFunct[264] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1056];
  rtb_TmpSignalConversionAtSFunct[265] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1060];
  rtb_TmpSignalConversionAtSFunct[266] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1064];
  rtb_TmpSignalConversionAtSFunct[267] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1068];
  rtb_TmpSignalConversionAtSFunct[268] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1072];
  rtb_TmpSignalConversionAtSFunct[269] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1076];
  rtb_TmpSignalConversionAtSFunct[270] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1080];
  rtb_TmpSignalConversionAtSFunct[271] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1084];
  rtb_TmpSignalConversionAtSFunct[272] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1088];
  rtb_TmpSignalConversionAtSFunct[273] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1092];
  rtb_TmpSignalConversionAtSFunct[274] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1096];
  rtb_TmpSignalConversionAtSFunct[275] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1100];
  rtb_TmpSignalConversionAtSFunct[276] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1104];
  rtb_TmpSignalConversionAtSFunct[277] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1108];
  rtb_TmpSignalConversionAtSFunct[278] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1112];
  rtb_TmpSignalConversionAtSFunct[279] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1116];
  rtb_TmpSignalConversionAtSFunct[280] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1120];
  rtb_TmpSignalConversionAtSFunct[281] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1124];
  rtb_TmpSignalConversionAtSFunct[282] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1128];
  rtb_TmpSignalConversionAtSFunct[283] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1132];
  rtb_TmpSignalConversionAtSFunct[284] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1136];
  rtb_TmpSignalConversionAtSFunct[285] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1140];
  rtb_TmpSignalConversionAtSFunct[286] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1144];
  rtb_TmpSignalConversionAtSFunct[287] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1148];
  rtb_TmpSignalConversionAtSFunct[288] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1152];
  rtb_TmpSignalConversionAtSFunct[289] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1156];
  rtb_TmpSignalConversionAtSFunct[290] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1160];
  rtb_TmpSignalConversionAtSFunct[291] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1164];
  rtb_TmpSignalConversionAtSFunct[292] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1168];
  rtb_TmpSignalConversionAtSFunct[293] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1172];
  rtb_TmpSignalConversionAtSFunct[294] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1176];
  rtb_TmpSignalConversionAtSFunct[295] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1180];
  rtb_TmpSignalConversionAtSFunct[296] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1184];
  rtb_TmpSignalConversionAtSFunct[297] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1188];
  rtb_TmpSignalConversionAtSFunct[298] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1192];
  rtb_TmpSignalConversionAtSFunct[299] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1196];
  rtb_TmpSignalConversionAtSFunct[300] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1200];
  rtb_TmpSignalConversionAtSFunct[301] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1204];
  rtb_TmpSignalConversionAtSFunct[302] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1208];
  rtb_TmpSignalConversionAtSFunct[303] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1212];
  rtb_TmpSignalConversionAtSFunct[304] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1216];
  rtb_TmpSignalConversionAtSFunct[305] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1220];
  rtb_TmpSignalConversionAtSFunct[306] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1224];
  rtb_TmpSignalConversionAtSFunct[307] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1228];
  rtb_TmpSignalConversionAtSFunct[308] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1232];
  rtb_TmpSignalConversionAtSFunct[309] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1236];
  rtb_TmpSignalConversionAtSFunct[310] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1240];
  rtb_TmpSignalConversionAtSFunct[311] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1244];
  rtb_TmpSignalConversionAtSFunct[312] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1248];
  rtb_TmpSignalConversionAtSFunct[313] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1252];
  rtb_TmpSignalConversionAtSFunct[314] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1256];
  rtb_TmpSignalConversionAtSFunct[315] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1260];
  rtb_TmpSignalConversionAtSFunct[316] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1264];
  rtb_TmpSignalConversionAtSFunct[317] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1268];
  rtb_TmpSignalConversionAtSFunct[318] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1272];
  rtb_TmpSignalConversionAtSFunct[319] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1276];
  rtb_TmpSignalConversionAtSFunct[320] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1280];
  rtb_TmpSignalConversionAtSFunct[321] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1284];
  rtb_TmpSignalConversionAtSFunct[322] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1288];
  rtb_TmpSignalConversionAtSFunct[323] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1292];
  rtb_TmpSignalConversionAtSFunct[324] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1296];
  rtb_TmpSignalConversionAtSFunct[325] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1300];
  rtb_TmpSignalConversionAtSFunct[326] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1304];
  rtb_TmpSignalConversionAtSFunct[327] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1308];
  rtb_TmpSignalConversionAtSFunct[328] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1312];
  rtb_TmpSignalConversionAtSFunct[329] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1316];
  rtb_TmpSignalConversionAtSFunct[330] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1320];
  rtb_TmpSignalConversionAtSFunct[331] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1324];
  rtb_TmpSignalConversionAtSFunct[332] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1328];
  rtb_TmpSignalConversionAtSFunct[333] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1332];
  rtb_TmpSignalConversionAtSFunct[334] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1336];
  rtb_TmpSignalConversionAtSFunct[335] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1340];
  rtb_TmpSignalConversionAtSFunct[336] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1344];
  rtb_TmpSignalConversionAtSFunct[337] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1348];
  rtb_TmpSignalConversionAtSFunct[338] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1352];
  rtb_TmpSignalConversionAtSFunct[339] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1356];
  rtb_TmpSignalConversionAtSFunct[340] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1360];
  rtb_TmpSignalConversionAtSFunct[341] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1364];
  rtb_TmpSignalConversionAtSFunct[342] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1368];
  rtb_TmpSignalConversionAtSFunct[343] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1372];
  rtb_TmpSignalConversionAtSFunct[344] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1376];
  rtb_TmpSignalConversionAtSFunct[345] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1380];
  rtb_TmpSignalConversionAtSFunct[346] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1384];
  rtb_TmpSignalConversionAtSFunct[347] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1388];
  rtb_TmpSignalConversionAtSFunct[348] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1392];
  rtb_TmpSignalConversionAtSFunct[349] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1396];
  rtb_TmpSignalConversionAtSFunct[350] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1400];
  rtb_TmpSignalConversionAtSFunct[351] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1404];
  rtb_TmpSignalConversionAtSFunct[352] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1408];
  rtb_TmpSignalConversionAtSFunct[353] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1412];
  rtb_TmpSignalConversionAtSFunct[354] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1416];
  rtb_TmpSignalConversionAtSFunct[355] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1420];
  rtb_TmpSignalConversionAtSFunct[356] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1424];
  rtb_TmpSignalConversionAtSFunct[357] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1428];
  rtb_TmpSignalConversionAtSFunct[358] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1432];
  rtb_TmpSignalConversionAtSFunct[359] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1436];
  rtb_TmpSignalConversionAtSFunct[360] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1440];
  rtb_TmpSignalConversionAtSFunct[361] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1444];
  rtb_TmpSignalConversionAtSFunct[362] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1448];
  rtb_TmpSignalConversionAtSFunct[363] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1452];
  rtb_TmpSignalConversionAtSFunct[364] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1456];
  rtb_TmpSignalConversionAtSFunct[365] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1460];
  rtb_TmpSignalConversionAtSFunct[366] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1464];
  rtb_TmpSignalConversionAtSFunct[367] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1468];
  rtb_TmpSignalConversionAtSFunct[368] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1472];
  rtb_TmpSignalConversionAtSFunct[369] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1476];
  rtb_TmpSignalConversionAtSFunct[370] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1480];
  rtb_TmpSignalConversionAtSFunct[371] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1484];
  rtb_TmpSignalConversionAtSFunct[372] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1488];
  rtb_TmpSignalConversionAtSFunct[373] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1492];
  rtb_TmpSignalConversionAtSFunct[374] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1496];
  rtb_TmpSignalConversionAtSFunct[375] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1500];
  rtb_TmpSignalConversionAtSFunct[376] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1504];
  rtb_TmpSignalConversionAtSFunct[377] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1508];
  rtb_TmpSignalConversionAtSFunct[378] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1512];
  rtb_TmpSignalConversionAtSFunct[379] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1516];
  rtb_TmpSignalConversionAtSFunct[380] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1520];
  rtb_TmpSignalConversionAtSFunct[381] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1524];
  rtb_TmpSignalConversionAtSFunct[382] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1528];
  rtb_TmpSignalConversionAtSFunct[383] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1532];
  rtb_TmpSignalConversionAtSFunct[384] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1536];
  rtb_TmpSignalConversionAtSFunct[385] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1540];
  rtb_TmpSignalConversionAtSFunct[386] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1544];
  rtb_TmpSignalConversionAtSFunct[387] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1548];
  rtb_TmpSignalConversionAtSFunct[388] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1552];
  rtb_TmpSignalConversionAtSFunct[389] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1556];
  rtb_TmpSignalConversionAtSFunct[390] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1560];
  rtb_TmpSignalConversionAtSFunct[391] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1564];
  rtb_TmpSignalConversionAtSFunct[392] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1568];
  rtb_TmpSignalConversionAtSFunct[393] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1572];
  rtb_TmpSignalConversionAtSFunct[394] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1576];
  rtb_TmpSignalConversionAtSFunct[395] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1580];
  rtb_TmpSignalConversionAtSFunct[396] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1584];
  rtb_TmpSignalConversionAtSFunct[397] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1588];
  rtb_TmpSignalConversionAtSFunct[398] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1592];
  rtb_TmpSignalConversionAtSFunct[399] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1596];
  rtb_TmpSignalConversionAtSFunct[400] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1600];
  rtb_TmpSignalConversionAtSFunct[401] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1604];
  rtb_TmpSignalConversionAtSFunct[402] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1608];
  rtb_TmpSignalConversionAtSFunct[403] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1612];
  rtb_TmpSignalConversionAtSFunct[404] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1616];
  rtb_TmpSignalConversionAtSFunct[405] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1620];
  rtb_TmpSignalConversionAtSFunct[406] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1624];
  rtb_TmpSignalConversionAtSFunct[407] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1628];
  rtb_TmpSignalConversionAtSFunct[408] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1632];
  rtb_TmpSignalConversionAtSFunct[409] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1636];
  rtb_TmpSignalConversionAtSFunct[410] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1640];
  rtb_TmpSignalConversionAtSFunct[411] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1644];
  rtb_TmpSignalConversionAtSFunct[412] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1648];
  rtb_TmpSignalConversionAtSFunct[413] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1652];
  rtb_TmpSignalConversionAtSFunct[414] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1656];
  rtb_TmpSignalConversionAtSFunct[415] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1660];
  rtb_TmpSignalConversionAtSFunct[416] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1664];
  rtb_TmpSignalConversionAtSFunct[417] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1668];
  rtb_TmpSignalConversionAtSFunct[418] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1672];
  rtb_TmpSignalConversionAtSFunct[419] =
    basic_IO_qbot_platform_B.RangingSensor_o1[1676];

  /* SignalConversion generated from: '<S15>/ SFunction ' incorporates:
   *  MATLAB Function: '<S4>/MATLAB Function'
   */
  rtb_TmpSignalConversionAtSFun_d[0] = basic_IO_qbot_platform_B.Bias[0];
  rtb_TmpSignalConversionAtSFun_d[1] = basic_IO_qbot_platform_B.Bias[4];
  rtb_TmpSignalConversionAtSFun_d[2] = basic_IO_qbot_platform_B.Bias[8];
  rtb_TmpSignalConversionAtSFun_d[3] = basic_IO_qbot_platform_B.Bias[12];
  rtb_TmpSignalConversionAtSFun_d[4] = basic_IO_qbot_platform_B.Bias[16];
  rtb_TmpSignalConversionAtSFun_d[5] = basic_IO_qbot_platform_B.Bias[20];
  rtb_TmpSignalConversionAtSFun_d[6] = basic_IO_qbot_platform_B.Bias[24];
  rtb_TmpSignalConversionAtSFun_d[7] = basic_IO_qbot_platform_B.Bias[28];
  rtb_TmpSignalConversionAtSFun_d[8] = basic_IO_qbot_platform_B.Bias[32];
  rtb_TmpSignalConversionAtSFun_d[9] = basic_IO_qbot_platform_B.Bias[36];
  rtb_TmpSignalConversionAtSFun_d[10] = basic_IO_qbot_platform_B.Bias[40];
  rtb_TmpSignalConversionAtSFun_d[11] = basic_IO_qbot_platform_B.Bias[44];
  rtb_TmpSignalConversionAtSFun_d[12] = basic_IO_qbot_platform_B.Bias[48];
  rtb_TmpSignalConversionAtSFun_d[13] = basic_IO_qbot_platform_B.Bias[52];
  rtb_TmpSignalConversionAtSFun_d[14] = basic_IO_qbot_platform_B.Bias[56];
  rtb_TmpSignalConversionAtSFun_d[15] = basic_IO_qbot_platform_B.Bias[60];
  rtb_TmpSignalConversionAtSFun_d[16] = basic_IO_qbot_platform_B.Bias[64];
  rtb_TmpSignalConversionAtSFun_d[17] = basic_IO_qbot_platform_B.Bias[68];
  rtb_TmpSignalConversionAtSFun_d[18] = basic_IO_qbot_platform_B.Bias[72];
  rtb_TmpSignalConversionAtSFun_d[19] = basic_IO_qbot_platform_B.Bias[76];
  rtb_TmpSignalConversionAtSFun_d[20] = basic_IO_qbot_platform_B.Bias[80];
  rtb_TmpSignalConversionAtSFun_d[21] = basic_IO_qbot_platform_B.Bias[84];
  rtb_TmpSignalConversionAtSFun_d[22] = basic_IO_qbot_platform_B.Bias[88];
  rtb_TmpSignalConversionAtSFun_d[23] = basic_IO_qbot_platform_B.Bias[92];
  rtb_TmpSignalConversionAtSFun_d[24] = basic_IO_qbot_platform_B.Bias[96];
  rtb_TmpSignalConversionAtSFun_d[25] = basic_IO_qbot_platform_B.Bias[100];
  rtb_TmpSignalConversionAtSFun_d[26] = basic_IO_qbot_platform_B.Bias[104];
  rtb_TmpSignalConversionAtSFun_d[27] = basic_IO_qbot_platform_B.Bias[108];
  rtb_TmpSignalConversionAtSFun_d[28] = basic_IO_qbot_platform_B.Bias[112];
  rtb_TmpSignalConversionAtSFun_d[29] = basic_IO_qbot_platform_B.Bias[116];
  rtb_TmpSignalConversionAtSFun_d[30] = basic_IO_qbot_platform_B.Bias[120];
  rtb_TmpSignalConversionAtSFun_d[31] = basic_IO_qbot_platform_B.Bias[124];
  rtb_TmpSignalConversionAtSFun_d[32] = basic_IO_qbot_platform_B.Bias[128];
  rtb_TmpSignalConversionAtSFun_d[33] = basic_IO_qbot_platform_B.Bias[132];
  rtb_TmpSignalConversionAtSFun_d[34] = basic_IO_qbot_platform_B.Bias[136];
  rtb_TmpSignalConversionAtSFun_d[35] = basic_IO_qbot_platform_B.Bias[140];
  rtb_TmpSignalConversionAtSFun_d[36] = basic_IO_qbot_platform_B.Bias[144];
  rtb_TmpSignalConversionAtSFun_d[37] = basic_IO_qbot_platform_B.Bias[148];
  rtb_TmpSignalConversionAtSFun_d[38] = basic_IO_qbot_platform_B.Bias[152];
  rtb_TmpSignalConversionAtSFun_d[39] = basic_IO_qbot_platform_B.Bias[156];
  rtb_TmpSignalConversionAtSFun_d[40] = basic_IO_qbot_platform_B.Bias[160];
  rtb_TmpSignalConversionAtSFun_d[41] = basic_IO_qbot_platform_B.Bias[164];
  rtb_TmpSignalConversionAtSFun_d[42] = basic_IO_qbot_platform_B.Bias[168];
  rtb_TmpSignalConversionAtSFun_d[43] = basic_IO_qbot_platform_B.Bias[172];
  rtb_TmpSignalConversionAtSFun_d[44] = basic_IO_qbot_platform_B.Bias[176];
  rtb_TmpSignalConversionAtSFun_d[45] = basic_IO_qbot_platform_B.Bias[180];
  rtb_TmpSignalConversionAtSFun_d[46] = basic_IO_qbot_platform_B.Bias[184];
  rtb_TmpSignalConversionAtSFun_d[47] = basic_IO_qbot_platform_B.Bias[188];
  rtb_TmpSignalConversionAtSFun_d[48] = basic_IO_qbot_platform_B.Bias[192];
  rtb_TmpSignalConversionAtSFun_d[49] = basic_IO_qbot_platform_B.Bias[196];
  rtb_TmpSignalConversionAtSFun_d[50] = basic_IO_qbot_platform_B.Bias[200];
  rtb_TmpSignalConversionAtSFun_d[51] = basic_IO_qbot_platform_B.Bias[204];
  rtb_TmpSignalConversionAtSFun_d[52] = basic_IO_qbot_platform_B.Bias[208];
  rtb_TmpSignalConversionAtSFun_d[53] = basic_IO_qbot_platform_B.Bias[212];
  rtb_TmpSignalConversionAtSFun_d[54] = basic_IO_qbot_platform_B.Bias[216];
  rtb_TmpSignalConversionAtSFun_d[55] = basic_IO_qbot_platform_B.Bias[220];
  rtb_TmpSignalConversionAtSFun_d[56] = basic_IO_qbot_platform_B.Bias[224];
  rtb_TmpSignalConversionAtSFun_d[57] = basic_IO_qbot_platform_B.Bias[228];
  rtb_TmpSignalConversionAtSFun_d[58] = basic_IO_qbot_platform_B.Bias[232];
  rtb_TmpSignalConversionAtSFun_d[59] = basic_IO_qbot_platform_B.Bias[236];
  rtb_TmpSignalConversionAtSFun_d[60] = basic_IO_qbot_platform_B.Bias[240];
  rtb_TmpSignalConversionAtSFun_d[61] = basic_IO_qbot_platform_B.Bias[244];
  rtb_TmpSignalConversionAtSFun_d[62] = basic_IO_qbot_platform_B.Bias[248];
  rtb_TmpSignalConversionAtSFun_d[63] = basic_IO_qbot_platform_B.Bias[252];
  rtb_TmpSignalConversionAtSFun_d[64] = basic_IO_qbot_platform_B.Bias[256];
  rtb_TmpSignalConversionAtSFun_d[65] = basic_IO_qbot_platform_B.Bias[260];
  rtb_TmpSignalConversionAtSFun_d[66] = basic_IO_qbot_platform_B.Bias[264];
  rtb_TmpSignalConversionAtSFun_d[67] = basic_IO_qbot_platform_B.Bias[268];
  rtb_TmpSignalConversionAtSFun_d[68] = basic_IO_qbot_platform_B.Bias[272];
  rtb_TmpSignalConversionAtSFun_d[69] = basic_IO_qbot_platform_B.Bias[276];
  rtb_TmpSignalConversionAtSFun_d[70] = basic_IO_qbot_platform_B.Bias[280];
  rtb_TmpSignalConversionAtSFun_d[71] = basic_IO_qbot_platform_B.Bias[284];
  rtb_TmpSignalConversionAtSFun_d[72] = basic_IO_qbot_platform_B.Bias[288];
  rtb_TmpSignalConversionAtSFun_d[73] = basic_IO_qbot_platform_B.Bias[292];
  rtb_TmpSignalConversionAtSFun_d[74] = basic_IO_qbot_platform_B.Bias[296];
  rtb_TmpSignalConversionAtSFun_d[75] = basic_IO_qbot_platform_B.Bias[300];
  rtb_TmpSignalConversionAtSFun_d[76] = basic_IO_qbot_platform_B.Bias[304];
  rtb_TmpSignalConversionAtSFun_d[77] = basic_IO_qbot_platform_B.Bias[308];
  rtb_TmpSignalConversionAtSFun_d[78] = basic_IO_qbot_platform_B.Bias[312];
  rtb_TmpSignalConversionAtSFun_d[79] = basic_IO_qbot_platform_B.Bias[316];
  rtb_TmpSignalConversionAtSFun_d[80] = basic_IO_qbot_platform_B.Bias[320];
  rtb_TmpSignalConversionAtSFun_d[81] = basic_IO_qbot_platform_B.Bias[324];
  rtb_TmpSignalConversionAtSFun_d[82] = basic_IO_qbot_platform_B.Bias[328];
  rtb_TmpSignalConversionAtSFun_d[83] = basic_IO_qbot_platform_B.Bias[332];
  rtb_TmpSignalConversionAtSFun_d[84] = basic_IO_qbot_platform_B.Bias[336];
  rtb_TmpSignalConversionAtSFun_d[85] = basic_IO_qbot_platform_B.Bias[340];
  rtb_TmpSignalConversionAtSFun_d[86] = basic_IO_qbot_platform_B.Bias[344];
  rtb_TmpSignalConversionAtSFun_d[87] = basic_IO_qbot_platform_B.Bias[348];
  rtb_TmpSignalConversionAtSFun_d[88] = basic_IO_qbot_platform_B.Bias[352];
  rtb_TmpSignalConversionAtSFun_d[89] = basic_IO_qbot_platform_B.Bias[356];
  rtb_TmpSignalConversionAtSFun_d[90] = basic_IO_qbot_platform_B.Bias[360];
  rtb_TmpSignalConversionAtSFun_d[91] = basic_IO_qbot_platform_B.Bias[364];
  rtb_TmpSignalConversionAtSFun_d[92] = basic_IO_qbot_platform_B.Bias[368];
  rtb_TmpSignalConversionAtSFun_d[93] = basic_IO_qbot_platform_B.Bias[372];
  rtb_TmpSignalConversionAtSFun_d[94] = basic_IO_qbot_platform_B.Bias[376];
  rtb_TmpSignalConversionAtSFun_d[95] = basic_IO_qbot_platform_B.Bias[380];
  rtb_TmpSignalConversionAtSFun_d[96] = basic_IO_qbot_platform_B.Bias[384];
  rtb_TmpSignalConversionAtSFun_d[97] = basic_IO_qbot_platform_B.Bias[388];
  rtb_TmpSignalConversionAtSFun_d[98] = basic_IO_qbot_platform_B.Bias[392];
  rtb_TmpSignalConversionAtSFun_d[99] = basic_IO_qbot_platform_B.Bias[396];
  rtb_TmpSignalConversionAtSFun_d[100] = basic_IO_qbot_platform_B.Bias[400];
  rtb_TmpSignalConversionAtSFun_d[101] = basic_IO_qbot_platform_B.Bias[404];
  rtb_TmpSignalConversionAtSFun_d[102] = basic_IO_qbot_platform_B.Bias[408];
  rtb_TmpSignalConversionAtSFun_d[103] = basic_IO_qbot_platform_B.Bias[412];
  rtb_TmpSignalConversionAtSFun_d[104] = basic_IO_qbot_platform_B.Bias[416];
  rtb_TmpSignalConversionAtSFun_d[105] = basic_IO_qbot_platform_B.Bias[420];
  rtb_TmpSignalConversionAtSFun_d[106] = basic_IO_qbot_platform_B.Bias[424];
  rtb_TmpSignalConversionAtSFun_d[107] = basic_IO_qbot_platform_B.Bias[428];
  rtb_TmpSignalConversionAtSFun_d[108] = basic_IO_qbot_platform_B.Bias[432];
  rtb_TmpSignalConversionAtSFun_d[109] = basic_IO_qbot_platform_B.Bias[436];
  rtb_TmpSignalConversionAtSFun_d[110] = basic_IO_qbot_platform_B.Bias[440];
  rtb_TmpSignalConversionAtSFun_d[111] = basic_IO_qbot_platform_B.Bias[444];
  rtb_TmpSignalConversionAtSFun_d[112] = basic_IO_qbot_platform_B.Bias[448];
  rtb_TmpSignalConversionAtSFun_d[113] = basic_IO_qbot_platform_B.Bias[452];
  rtb_TmpSignalConversionAtSFun_d[114] = basic_IO_qbot_platform_B.Bias[456];
  rtb_TmpSignalConversionAtSFun_d[115] = basic_IO_qbot_platform_B.Bias[460];
  rtb_TmpSignalConversionAtSFun_d[116] = basic_IO_qbot_platform_B.Bias[464];
  rtb_TmpSignalConversionAtSFun_d[117] = basic_IO_qbot_platform_B.Bias[468];
  rtb_TmpSignalConversionAtSFun_d[118] = basic_IO_qbot_platform_B.Bias[472];
  rtb_TmpSignalConversionAtSFun_d[119] = basic_IO_qbot_platform_B.Bias[476];
  rtb_TmpSignalConversionAtSFun_d[120] = basic_IO_qbot_platform_B.Bias[480];
  rtb_TmpSignalConversionAtSFun_d[121] = basic_IO_qbot_platform_B.Bias[484];
  rtb_TmpSignalConversionAtSFun_d[122] = basic_IO_qbot_platform_B.Bias[488];
  rtb_TmpSignalConversionAtSFun_d[123] = basic_IO_qbot_platform_B.Bias[492];
  rtb_TmpSignalConversionAtSFun_d[124] = basic_IO_qbot_platform_B.Bias[496];
  rtb_TmpSignalConversionAtSFun_d[125] = basic_IO_qbot_platform_B.Bias[500];
  rtb_TmpSignalConversionAtSFun_d[126] = basic_IO_qbot_platform_B.Bias[504];
  rtb_TmpSignalConversionAtSFun_d[127] = basic_IO_qbot_platform_B.Bias[508];
  rtb_TmpSignalConversionAtSFun_d[128] = basic_IO_qbot_platform_B.Bias[512];
  rtb_TmpSignalConversionAtSFun_d[129] = basic_IO_qbot_platform_B.Bias[516];
  rtb_TmpSignalConversionAtSFun_d[130] = basic_IO_qbot_platform_B.Bias[520];
  rtb_TmpSignalConversionAtSFun_d[131] = basic_IO_qbot_platform_B.Bias[524];
  rtb_TmpSignalConversionAtSFun_d[132] = basic_IO_qbot_platform_B.Bias[528];
  rtb_TmpSignalConversionAtSFun_d[133] = basic_IO_qbot_platform_B.Bias[532];
  rtb_TmpSignalConversionAtSFun_d[134] = basic_IO_qbot_platform_B.Bias[536];
  rtb_TmpSignalConversionAtSFun_d[135] = basic_IO_qbot_platform_B.Bias[540];
  rtb_TmpSignalConversionAtSFun_d[136] = basic_IO_qbot_platform_B.Bias[544];
  rtb_TmpSignalConversionAtSFun_d[137] = basic_IO_qbot_platform_B.Bias[548];
  rtb_TmpSignalConversionAtSFun_d[138] = basic_IO_qbot_platform_B.Bias[552];
  rtb_TmpSignalConversionAtSFun_d[139] = basic_IO_qbot_platform_B.Bias[556];
  rtb_TmpSignalConversionAtSFun_d[140] = basic_IO_qbot_platform_B.Bias[560];
  rtb_TmpSignalConversionAtSFun_d[141] = basic_IO_qbot_platform_B.Bias[564];
  rtb_TmpSignalConversionAtSFun_d[142] = basic_IO_qbot_platform_B.Bias[568];
  rtb_TmpSignalConversionAtSFun_d[143] = basic_IO_qbot_platform_B.Bias[572];
  rtb_TmpSignalConversionAtSFun_d[144] = basic_IO_qbot_platform_B.Bias[576];
  rtb_TmpSignalConversionAtSFun_d[145] = basic_IO_qbot_platform_B.Bias[580];
  rtb_TmpSignalConversionAtSFun_d[146] = basic_IO_qbot_platform_B.Bias[584];
  rtb_TmpSignalConversionAtSFun_d[147] = basic_IO_qbot_platform_B.Bias[588];
  rtb_TmpSignalConversionAtSFun_d[148] = basic_IO_qbot_platform_B.Bias[592];
  rtb_TmpSignalConversionAtSFun_d[149] = basic_IO_qbot_platform_B.Bias[596];
  rtb_TmpSignalConversionAtSFun_d[150] = basic_IO_qbot_platform_B.Bias[600];
  rtb_TmpSignalConversionAtSFun_d[151] = basic_IO_qbot_platform_B.Bias[604];
  rtb_TmpSignalConversionAtSFun_d[152] = basic_IO_qbot_platform_B.Bias[608];
  rtb_TmpSignalConversionAtSFun_d[153] = basic_IO_qbot_platform_B.Bias[612];
  rtb_TmpSignalConversionAtSFun_d[154] = basic_IO_qbot_platform_B.Bias[616];
  rtb_TmpSignalConversionAtSFun_d[155] = basic_IO_qbot_platform_B.Bias[620];
  rtb_TmpSignalConversionAtSFun_d[156] = basic_IO_qbot_platform_B.Bias[624];
  rtb_TmpSignalConversionAtSFun_d[157] = basic_IO_qbot_platform_B.Bias[628];
  rtb_TmpSignalConversionAtSFun_d[158] = basic_IO_qbot_platform_B.Bias[632];
  rtb_TmpSignalConversionAtSFun_d[159] = basic_IO_qbot_platform_B.Bias[636];
  rtb_TmpSignalConversionAtSFun_d[160] = basic_IO_qbot_platform_B.Bias[640];
  rtb_TmpSignalConversionAtSFun_d[161] = basic_IO_qbot_platform_B.Bias[644];
  rtb_TmpSignalConversionAtSFun_d[162] = basic_IO_qbot_platform_B.Bias[648];
  rtb_TmpSignalConversionAtSFun_d[163] = basic_IO_qbot_platform_B.Bias[652];
  rtb_TmpSignalConversionAtSFun_d[164] = basic_IO_qbot_platform_B.Bias[656];
  rtb_TmpSignalConversionAtSFun_d[165] = basic_IO_qbot_platform_B.Bias[660];
  rtb_TmpSignalConversionAtSFun_d[166] = basic_IO_qbot_platform_B.Bias[664];
  rtb_TmpSignalConversionAtSFun_d[167] = basic_IO_qbot_platform_B.Bias[668];
  rtb_TmpSignalConversionAtSFun_d[168] = basic_IO_qbot_platform_B.Bias[672];
  rtb_TmpSignalConversionAtSFun_d[169] = basic_IO_qbot_platform_B.Bias[676];
  rtb_TmpSignalConversionAtSFun_d[170] = basic_IO_qbot_platform_B.Bias[680];
  rtb_TmpSignalConversionAtSFun_d[171] = basic_IO_qbot_platform_B.Bias[684];
  rtb_TmpSignalConversionAtSFun_d[172] = basic_IO_qbot_platform_B.Bias[688];
  rtb_TmpSignalConversionAtSFun_d[173] = basic_IO_qbot_platform_B.Bias[692];
  rtb_TmpSignalConversionAtSFun_d[174] = basic_IO_qbot_platform_B.Bias[696];
  rtb_TmpSignalConversionAtSFun_d[175] = basic_IO_qbot_platform_B.Bias[700];
  rtb_TmpSignalConversionAtSFun_d[176] = basic_IO_qbot_platform_B.Bias[704];
  rtb_TmpSignalConversionAtSFun_d[177] = basic_IO_qbot_platform_B.Bias[708];
  rtb_TmpSignalConversionAtSFun_d[178] = basic_IO_qbot_platform_B.Bias[712];
  rtb_TmpSignalConversionAtSFun_d[179] = basic_IO_qbot_platform_B.Bias[716];
  rtb_TmpSignalConversionAtSFun_d[180] = basic_IO_qbot_platform_B.Bias[720];
  rtb_TmpSignalConversionAtSFun_d[181] = basic_IO_qbot_platform_B.Bias[724];
  rtb_TmpSignalConversionAtSFun_d[182] = basic_IO_qbot_platform_B.Bias[728];
  rtb_TmpSignalConversionAtSFun_d[183] = basic_IO_qbot_platform_B.Bias[732];
  rtb_TmpSignalConversionAtSFun_d[184] = basic_IO_qbot_platform_B.Bias[736];
  rtb_TmpSignalConversionAtSFun_d[185] = basic_IO_qbot_platform_B.Bias[740];
  rtb_TmpSignalConversionAtSFun_d[186] = basic_IO_qbot_platform_B.Bias[744];
  rtb_TmpSignalConversionAtSFun_d[187] = basic_IO_qbot_platform_B.Bias[748];
  rtb_TmpSignalConversionAtSFun_d[188] = basic_IO_qbot_platform_B.Bias[752];
  rtb_TmpSignalConversionAtSFun_d[189] = basic_IO_qbot_platform_B.Bias[756];
  rtb_TmpSignalConversionAtSFun_d[190] = basic_IO_qbot_platform_B.Bias[760];
  rtb_TmpSignalConversionAtSFun_d[191] = basic_IO_qbot_platform_B.Bias[764];
  rtb_TmpSignalConversionAtSFun_d[192] = basic_IO_qbot_platform_B.Bias[768];
  rtb_TmpSignalConversionAtSFun_d[193] = basic_IO_qbot_platform_B.Bias[772];
  rtb_TmpSignalConversionAtSFun_d[194] = basic_IO_qbot_platform_B.Bias[776];
  rtb_TmpSignalConversionAtSFun_d[195] = basic_IO_qbot_platform_B.Bias[780];
  rtb_TmpSignalConversionAtSFun_d[196] = basic_IO_qbot_platform_B.Bias[784];
  rtb_TmpSignalConversionAtSFun_d[197] = basic_IO_qbot_platform_B.Bias[788];
  rtb_TmpSignalConversionAtSFun_d[198] = basic_IO_qbot_platform_B.Bias[792];
  rtb_TmpSignalConversionAtSFun_d[199] = basic_IO_qbot_platform_B.Bias[796];
  rtb_TmpSignalConversionAtSFun_d[200] = basic_IO_qbot_platform_B.Bias[800];
  rtb_TmpSignalConversionAtSFun_d[201] = basic_IO_qbot_platform_B.Bias[804];
  rtb_TmpSignalConversionAtSFun_d[202] = basic_IO_qbot_platform_B.Bias[808];
  rtb_TmpSignalConversionAtSFun_d[203] = basic_IO_qbot_platform_B.Bias[812];
  rtb_TmpSignalConversionAtSFun_d[204] = basic_IO_qbot_platform_B.Bias[816];
  rtb_TmpSignalConversionAtSFun_d[205] = basic_IO_qbot_platform_B.Bias[820];
  rtb_TmpSignalConversionAtSFun_d[206] = basic_IO_qbot_platform_B.Bias[824];
  rtb_TmpSignalConversionAtSFun_d[207] = basic_IO_qbot_platform_B.Bias[828];
  rtb_TmpSignalConversionAtSFun_d[208] = basic_IO_qbot_platform_B.Bias[832];
  rtb_TmpSignalConversionAtSFun_d[209] = basic_IO_qbot_platform_B.Bias[836];
  rtb_TmpSignalConversionAtSFun_d[210] = basic_IO_qbot_platform_B.Bias[840];
  rtb_TmpSignalConversionAtSFun_d[211] = basic_IO_qbot_platform_B.Bias[844];
  rtb_TmpSignalConversionAtSFun_d[212] = basic_IO_qbot_platform_B.Bias[848];
  rtb_TmpSignalConversionAtSFun_d[213] = basic_IO_qbot_platform_B.Bias[852];
  rtb_TmpSignalConversionAtSFun_d[214] = basic_IO_qbot_platform_B.Bias[856];
  rtb_TmpSignalConversionAtSFun_d[215] = basic_IO_qbot_platform_B.Bias[860];
  rtb_TmpSignalConversionAtSFun_d[216] = basic_IO_qbot_platform_B.Bias[864];
  rtb_TmpSignalConversionAtSFun_d[217] = basic_IO_qbot_platform_B.Bias[868];
  rtb_TmpSignalConversionAtSFun_d[218] = basic_IO_qbot_platform_B.Bias[872];
  rtb_TmpSignalConversionAtSFun_d[219] = basic_IO_qbot_platform_B.Bias[876];
  rtb_TmpSignalConversionAtSFun_d[220] = basic_IO_qbot_platform_B.Bias[880];
  rtb_TmpSignalConversionAtSFun_d[221] = basic_IO_qbot_platform_B.Bias[884];
  rtb_TmpSignalConversionAtSFun_d[222] = basic_IO_qbot_platform_B.Bias[888];
  rtb_TmpSignalConversionAtSFun_d[223] = basic_IO_qbot_platform_B.Bias[892];
  rtb_TmpSignalConversionAtSFun_d[224] = basic_IO_qbot_platform_B.Bias[896];
  rtb_TmpSignalConversionAtSFun_d[225] = basic_IO_qbot_platform_B.Bias[900];
  rtb_TmpSignalConversionAtSFun_d[226] = basic_IO_qbot_platform_B.Bias[904];
  rtb_TmpSignalConversionAtSFun_d[227] = basic_IO_qbot_platform_B.Bias[908];
  rtb_TmpSignalConversionAtSFun_d[228] = basic_IO_qbot_platform_B.Bias[912];
  rtb_TmpSignalConversionAtSFun_d[229] = basic_IO_qbot_platform_B.Bias[916];
  rtb_TmpSignalConversionAtSFun_d[230] = basic_IO_qbot_platform_B.Bias[920];
  rtb_TmpSignalConversionAtSFun_d[231] = basic_IO_qbot_platform_B.Bias[924];
  rtb_TmpSignalConversionAtSFun_d[232] = basic_IO_qbot_platform_B.Bias[928];
  rtb_TmpSignalConversionAtSFun_d[233] = basic_IO_qbot_platform_B.Bias[932];
  rtb_TmpSignalConversionAtSFun_d[234] = basic_IO_qbot_platform_B.Bias[936];
  rtb_TmpSignalConversionAtSFun_d[235] = basic_IO_qbot_platform_B.Bias[940];
  rtb_TmpSignalConversionAtSFun_d[236] = basic_IO_qbot_platform_B.Bias[944];
  rtb_TmpSignalConversionAtSFun_d[237] = basic_IO_qbot_platform_B.Bias[948];
  rtb_TmpSignalConversionAtSFun_d[238] = basic_IO_qbot_platform_B.Bias[952];
  rtb_TmpSignalConversionAtSFun_d[239] = basic_IO_qbot_platform_B.Bias[956];
  rtb_TmpSignalConversionAtSFun_d[240] = basic_IO_qbot_platform_B.Bias[960];
  rtb_TmpSignalConversionAtSFun_d[241] = basic_IO_qbot_platform_B.Bias[964];
  rtb_TmpSignalConversionAtSFun_d[242] = basic_IO_qbot_platform_B.Bias[968];
  rtb_TmpSignalConversionAtSFun_d[243] = basic_IO_qbot_platform_B.Bias[972];
  rtb_TmpSignalConversionAtSFun_d[244] = basic_IO_qbot_platform_B.Bias[976];
  rtb_TmpSignalConversionAtSFun_d[245] = basic_IO_qbot_platform_B.Bias[980];
  rtb_TmpSignalConversionAtSFun_d[246] = basic_IO_qbot_platform_B.Bias[984];
  rtb_TmpSignalConversionAtSFun_d[247] = basic_IO_qbot_platform_B.Bias[988];
  rtb_TmpSignalConversionAtSFun_d[248] = basic_IO_qbot_platform_B.Bias[992];
  rtb_TmpSignalConversionAtSFun_d[249] = basic_IO_qbot_platform_B.Bias[996];
  rtb_TmpSignalConversionAtSFun_d[250] = basic_IO_qbot_platform_B.Bias[1000];
  rtb_TmpSignalConversionAtSFun_d[251] = basic_IO_qbot_platform_B.Bias[1004];
  rtb_TmpSignalConversionAtSFun_d[252] = basic_IO_qbot_platform_B.Bias[1008];
  rtb_TmpSignalConversionAtSFun_d[253] = basic_IO_qbot_platform_B.Bias[1012];
  rtb_TmpSignalConversionAtSFun_d[254] = basic_IO_qbot_platform_B.Bias[1016];
  rtb_TmpSignalConversionAtSFun_d[255] = basic_IO_qbot_platform_B.Bias[1020];
  rtb_TmpSignalConversionAtSFun_d[256] = basic_IO_qbot_platform_B.Bias[1024];
  rtb_TmpSignalConversionAtSFun_d[257] = basic_IO_qbot_platform_B.Bias[1028];
  rtb_TmpSignalConversionAtSFun_d[258] = basic_IO_qbot_platform_B.Bias[1032];
  rtb_TmpSignalConversionAtSFun_d[259] = basic_IO_qbot_platform_B.Bias[1036];
  rtb_TmpSignalConversionAtSFun_d[260] = basic_IO_qbot_platform_B.Bias[1040];
  rtb_TmpSignalConversionAtSFun_d[261] = basic_IO_qbot_platform_B.Bias[1044];
  rtb_TmpSignalConversionAtSFun_d[262] = basic_IO_qbot_platform_B.Bias[1048];
  rtb_TmpSignalConversionAtSFun_d[263] = basic_IO_qbot_platform_B.Bias[1052];
  rtb_TmpSignalConversionAtSFun_d[264] = basic_IO_qbot_platform_B.Bias[1056];
  rtb_TmpSignalConversionAtSFun_d[265] = basic_IO_qbot_platform_B.Bias[1060];
  rtb_TmpSignalConversionAtSFun_d[266] = basic_IO_qbot_platform_B.Bias[1064];
  rtb_TmpSignalConversionAtSFun_d[267] = basic_IO_qbot_platform_B.Bias[1068];
  rtb_TmpSignalConversionAtSFun_d[268] = basic_IO_qbot_platform_B.Bias[1072];
  rtb_TmpSignalConversionAtSFun_d[269] = basic_IO_qbot_platform_B.Bias[1076];
  rtb_TmpSignalConversionAtSFun_d[270] = basic_IO_qbot_platform_B.Bias[1080];
  rtb_TmpSignalConversionAtSFun_d[271] = basic_IO_qbot_platform_B.Bias[1084];
  rtb_TmpSignalConversionAtSFun_d[272] = basic_IO_qbot_platform_B.Bias[1088];
  rtb_TmpSignalConversionAtSFun_d[273] = basic_IO_qbot_platform_B.Bias[1092];
  rtb_TmpSignalConversionAtSFun_d[274] = basic_IO_qbot_platform_B.Bias[1096];
  rtb_TmpSignalConversionAtSFun_d[275] = basic_IO_qbot_platform_B.Bias[1100];
  rtb_TmpSignalConversionAtSFun_d[276] = basic_IO_qbot_platform_B.Bias[1104];
  rtb_TmpSignalConversionAtSFun_d[277] = basic_IO_qbot_platform_B.Bias[1108];
  rtb_TmpSignalConversionAtSFun_d[278] = basic_IO_qbot_platform_B.Bias[1112];
  rtb_TmpSignalConversionAtSFun_d[279] = basic_IO_qbot_platform_B.Bias[1116];
  rtb_TmpSignalConversionAtSFun_d[280] = basic_IO_qbot_platform_B.Bias[1120];
  rtb_TmpSignalConversionAtSFun_d[281] = basic_IO_qbot_platform_B.Bias[1124];
  rtb_TmpSignalConversionAtSFun_d[282] = basic_IO_qbot_platform_B.Bias[1128];
  rtb_TmpSignalConversionAtSFun_d[283] = basic_IO_qbot_platform_B.Bias[1132];
  rtb_TmpSignalConversionAtSFun_d[284] = basic_IO_qbot_platform_B.Bias[1136];
  rtb_TmpSignalConversionAtSFun_d[285] = basic_IO_qbot_platform_B.Bias[1140];
  rtb_TmpSignalConversionAtSFun_d[286] = basic_IO_qbot_platform_B.Bias[1144];
  rtb_TmpSignalConversionAtSFun_d[287] = basic_IO_qbot_platform_B.Bias[1148];
  rtb_TmpSignalConversionAtSFun_d[288] = basic_IO_qbot_platform_B.Bias[1152];
  rtb_TmpSignalConversionAtSFun_d[289] = basic_IO_qbot_platform_B.Bias[1156];
  rtb_TmpSignalConversionAtSFun_d[290] = basic_IO_qbot_platform_B.Bias[1160];
  rtb_TmpSignalConversionAtSFun_d[291] = basic_IO_qbot_platform_B.Bias[1164];
  rtb_TmpSignalConversionAtSFun_d[292] = basic_IO_qbot_platform_B.Bias[1168];
  rtb_TmpSignalConversionAtSFun_d[293] = basic_IO_qbot_platform_B.Bias[1172];
  rtb_TmpSignalConversionAtSFun_d[294] = basic_IO_qbot_platform_B.Bias[1176];
  rtb_TmpSignalConversionAtSFun_d[295] = basic_IO_qbot_platform_B.Bias[1180];
  rtb_TmpSignalConversionAtSFun_d[296] = basic_IO_qbot_platform_B.Bias[1184];
  rtb_TmpSignalConversionAtSFun_d[297] = basic_IO_qbot_platform_B.Bias[1188];
  rtb_TmpSignalConversionAtSFun_d[298] = basic_IO_qbot_platform_B.Bias[1192];
  rtb_TmpSignalConversionAtSFun_d[299] = basic_IO_qbot_platform_B.Bias[1196];
  rtb_TmpSignalConversionAtSFun_d[300] = basic_IO_qbot_platform_B.Bias[1200];
  rtb_TmpSignalConversionAtSFun_d[301] = basic_IO_qbot_platform_B.Bias[1204];
  rtb_TmpSignalConversionAtSFun_d[302] = basic_IO_qbot_platform_B.Bias[1208];
  rtb_TmpSignalConversionAtSFun_d[303] = basic_IO_qbot_platform_B.Bias[1212];
  rtb_TmpSignalConversionAtSFun_d[304] = basic_IO_qbot_platform_B.Bias[1216];
  rtb_TmpSignalConversionAtSFun_d[305] = basic_IO_qbot_platform_B.Bias[1220];
  rtb_TmpSignalConversionAtSFun_d[306] = basic_IO_qbot_platform_B.Bias[1224];
  rtb_TmpSignalConversionAtSFun_d[307] = basic_IO_qbot_platform_B.Bias[1228];
  rtb_TmpSignalConversionAtSFun_d[308] = basic_IO_qbot_platform_B.Bias[1232];
  rtb_TmpSignalConversionAtSFun_d[309] = basic_IO_qbot_platform_B.Bias[1236];
  rtb_TmpSignalConversionAtSFun_d[310] = basic_IO_qbot_platform_B.Bias[1240];
  rtb_TmpSignalConversionAtSFun_d[311] = basic_IO_qbot_platform_B.Bias[1244];
  rtb_TmpSignalConversionAtSFun_d[312] = basic_IO_qbot_platform_B.Bias[1248];
  rtb_TmpSignalConversionAtSFun_d[313] = basic_IO_qbot_platform_B.Bias[1252];
  rtb_TmpSignalConversionAtSFun_d[314] = basic_IO_qbot_platform_B.Bias[1256];
  rtb_TmpSignalConversionAtSFun_d[315] = basic_IO_qbot_platform_B.Bias[1260];
  rtb_TmpSignalConversionAtSFun_d[316] = basic_IO_qbot_platform_B.Bias[1264];
  rtb_TmpSignalConversionAtSFun_d[317] = basic_IO_qbot_platform_B.Bias[1268];
  rtb_TmpSignalConversionAtSFun_d[318] = basic_IO_qbot_platform_B.Bias[1272];
  rtb_TmpSignalConversionAtSFun_d[319] = basic_IO_qbot_platform_B.Bias[1276];
  rtb_TmpSignalConversionAtSFun_d[320] = basic_IO_qbot_platform_B.Bias[1280];
  rtb_TmpSignalConversionAtSFun_d[321] = basic_IO_qbot_platform_B.Bias[1284];
  rtb_TmpSignalConversionAtSFun_d[322] = basic_IO_qbot_platform_B.Bias[1288];
  rtb_TmpSignalConversionAtSFun_d[323] = basic_IO_qbot_platform_B.Bias[1292];
  rtb_TmpSignalConversionAtSFun_d[324] = basic_IO_qbot_platform_B.Bias[1296];
  rtb_TmpSignalConversionAtSFun_d[325] = basic_IO_qbot_platform_B.Bias[1300];
  rtb_TmpSignalConversionAtSFun_d[326] = basic_IO_qbot_platform_B.Bias[1304];
  rtb_TmpSignalConversionAtSFun_d[327] = basic_IO_qbot_platform_B.Bias[1308];
  rtb_TmpSignalConversionAtSFun_d[328] = basic_IO_qbot_platform_B.Bias[1312];
  rtb_TmpSignalConversionAtSFun_d[329] = basic_IO_qbot_platform_B.Bias[1316];
  rtb_TmpSignalConversionAtSFun_d[330] = basic_IO_qbot_platform_B.Bias[1320];
  rtb_TmpSignalConversionAtSFun_d[331] = basic_IO_qbot_platform_B.Bias[1324];
  rtb_TmpSignalConversionAtSFun_d[332] = basic_IO_qbot_platform_B.Bias[1328];
  rtb_TmpSignalConversionAtSFun_d[333] = basic_IO_qbot_platform_B.Bias[1332];
  rtb_TmpSignalConversionAtSFun_d[334] = basic_IO_qbot_platform_B.Bias[1336];
  rtb_TmpSignalConversionAtSFun_d[335] = basic_IO_qbot_platform_B.Bias[1340];
  rtb_TmpSignalConversionAtSFun_d[336] = basic_IO_qbot_platform_B.Bias[1344];
  rtb_TmpSignalConversionAtSFun_d[337] = basic_IO_qbot_platform_B.Bias[1348];
  rtb_TmpSignalConversionAtSFun_d[338] = basic_IO_qbot_platform_B.Bias[1352];
  rtb_TmpSignalConversionAtSFun_d[339] = basic_IO_qbot_platform_B.Bias[1356];
  rtb_TmpSignalConversionAtSFun_d[340] = basic_IO_qbot_platform_B.Bias[1360];
  rtb_TmpSignalConversionAtSFun_d[341] = basic_IO_qbot_platform_B.Bias[1364];
  rtb_TmpSignalConversionAtSFun_d[342] = basic_IO_qbot_platform_B.Bias[1368];
  rtb_TmpSignalConversionAtSFun_d[343] = basic_IO_qbot_platform_B.Bias[1372];
  rtb_TmpSignalConversionAtSFun_d[344] = basic_IO_qbot_platform_B.Bias[1376];
  rtb_TmpSignalConversionAtSFun_d[345] = basic_IO_qbot_platform_B.Bias[1380];
  rtb_TmpSignalConversionAtSFun_d[346] = basic_IO_qbot_platform_B.Bias[1384];
  rtb_TmpSignalConversionAtSFun_d[347] = basic_IO_qbot_platform_B.Bias[1388];
  rtb_TmpSignalConversionAtSFun_d[348] = basic_IO_qbot_platform_B.Bias[1392];
  rtb_TmpSignalConversionAtSFun_d[349] = basic_IO_qbot_platform_B.Bias[1396];
  rtb_TmpSignalConversionAtSFun_d[350] = basic_IO_qbot_platform_B.Bias[1400];
  rtb_TmpSignalConversionAtSFun_d[351] = basic_IO_qbot_platform_B.Bias[1404];
  rtb_TmpSignalConversionAtSFun_d[352] = basic_IO_qbot_platform_B.Bias[1408];
  rtb_TmpSignalConversionAtSFun_d[353] = basic_IO_qbot_platform_B.Bias[1412];
  rtb_TmpSignalConversionAtSFun_d[354] = basic_IO_qbot_platform_B.Bias[1416];
  rtb_TmpSignalConversionAtSFun_d[355] = basic_IO_qbot_platform_B.Bias[1420];
  rtb_TmpSignalConversionAtSFun_d[356] = basic_IO_qbot_platform_B.Bias[1424];
  rtb_TmpSignalConversionAtSFun_d[357] = basic_IO_qbot_platform_B.Bias[1428];
  rtb_TmpSignalConversionAtSFun_d[358] = basic_IO_qbot_platform_B.Bias[1432];
  rtb_TmpSignalConversionAtSFun_d[359] = basic_IO_qbot_platform_B.Bias[1436];
  rtb_TmpSignalConversionAtSFun_d[360] = basic_IO_qbot_platform_B.Bias[1440];
  rtb_TmpSignalConversionAtSFun_d[361] = basic_IO_qbot_platform_B.Bias[1444];
  rtb_TmpSignalConversionAtSFun_d[362] = basic_IO_qbot_platform_B.Bias[1448];
  rtb_TmpSignalConversionAtSFun_d[363] = basic_IO_qbot_platform_B.Bias[1452];
  rtb_TmpSignalConversionAtSFun_d[364] = basic_IO_qbot_platform_B.Bias[1456];
  rtb_TmpSignalConversionAtSFun_d[365] = basic_IO_qbot_platform_B.Bias[1460];
  rtb_TmpSignalConversionAtSFun_d[366] = basic_IO_qbot_platform_B.Bias[1464];
  rtb_TmpSignalConversionAtSFun_d[367] = basic_IO_qbot_platform_B.Bias[1468];
  rtb_TmpSignalConversionAtSFun_d[368] = basic_IO_qbot_platform_B.Bias[1472];
  rtb_TmpSignalConversionAtSFun_d[369] = basic_IO_qbot_platform_B.Bias[1476];
  rtb_TmpSignalConversionAtSFun_d[370] = basic_IO_qbot_platform_B.Bias[1480];
  rtb_TmpSignalConversionAtSFun_d[371] = basic_IO_qbot_platform_B.Bias[1484];
  rtb_TmpSignalConversionAtSFun_d[372] = basic_IO_qbot_platform_B.Bias[1488];
  rtb_TmpSignalConversionAtSFun_d[373] = basic_IO_qbot_platform_B.Bias[1492];
  rtb_TmpSignalConversionAtSFun_d[374] = basic_IO_qbot_platform_B.Bias[1496];
  rtb_TmpSignalConversionAtSFun_d[375] = basic_IO_qbot_platform_B.Bias[1500];
  rtb_TmpSignalConversionAtSFun_d[376] = basic_IO_qbot_platform_B.Bias[1504];
  rtb_TmpSignalConversionAtSFun_d[377] = basic_IO_qbot_platform_B.Bias[1508];
  rtb_TmpSignalConversionAtSFun_d[378] = basic_IO_qbot_platform_B.Bias[1512];
  rtb_TmpSignalConversionAtSFun_d[379] = basic_IO_qbot_platform_B.Bias[1516];
  rtb_TmpSignalConversionAtSFun_d[380] = basic_IO_qbot_platform_B.Bias[1520];
  rtb_TmpSignalConversionAtSFun_d[381] = basic_IO_qbot_platform_B.Bias[1524];
  rtb_TmpSignalConversionAtSFun_d[382] = basic_IO_qbot_platform_B.Bias[1528];
  rtb_TmpSignalConversionAtSFun_d[383] = basic_IO_qbot_platform_B.Bias[1532];
  rtb_TmpSignalConversionAtSFun_d[384] = basic_IO_qbot_platform_B.Bias[1536];
  rtb_TmpSignalConversionAtSFun_d[385] = basic_IO_qbot_platform_B.Bias[1540];
  rtb_TmpSignalConversionAtSFun_d[386] = basic_IO_qbot_platform_B.Bias[1544];
  rtb_TmpSignalConversionAtSFun_d[387] = basic_IO_qbot_platform_B.Bias[1548];
  rtb_TmpSignalConversionAtSFun_d[388] = basic_IO_qbot_platform_B.Bias[1552];
  rtb_TmpSignalConversionAtSFun_d[389] = basic_IO_qbot_platform_B.Bias[1556];
  rtb_TmpSignalConversionAtSFun_d[390] = basic_IO_qbot_platform_B.Bias[1560];
  rtb_TmpSignalConversionAtSFun_d[391] = basic_IO_qbot_platform_B.Bias[1564];
  rtb_TmpSignalConversionAtSFun_d[392] = basic_IO_qbot_platform_B.Bias[1568];
  rtb_TmpSignalConversionAtSFun_d[393] = basic_IO_qbot_platform_B.Bias[1572];
  rtb_TmpSignalConversionAtSFun_d[394] = basic_IO_qbot_platform_B.Bias[1576];
  rtb_TmpSignalConversionAtSFun_d[395] = basic_IO_qbot_platform_B.Bias[1580];
  rtb_TmpSignalConversionAtSFun_d[396] = basic_IO_qbot_platform_B.Bias[1584];
  rtb_TmpSignalConversionAtSFun_d[397] = basic_IO_qbot_platform_B.Bias[1588];
  rtb_TmpSignalConversionAtSFun_d[398] = basic_IO_qbot_platform_B.Bias[1592];
  rtb_TmpSignalConversionAtSFun_d[399] = basic_IO_qbot_platform_B.Bias[1596];
  rtb_TmpSignalConversionAtSFun_d[400] = basic_IO_qbot_platform_B.Bias[1600];
  rtb_TmpSignalConversionAtSFun_d[401] = basic_IO_qbot_platform_B.Bias[1604];
  rtb_TmpSignalConversionAtSFun_d[402] = basic_IO_qbot_platform_B.Bias[1608];
  rtb_TmpSignalConversionAtSFun_d[403] = basic_IO_qbot_platform_B.Bias[1612];
  rtb_TmpSignalConversionAtSFun_d[404] = basic_IO_qbot_platform_B.Bias[1616];
  rtb_TmpSignalConversionAtSFun_d[405] = basic_IO_qbot_platform_B.Bias[1620];
  rtb_TmpSignalConversionAtSFun_d[406] = basic_IO_qbot_platform_B.Bias[1624];
  rtb_TmpSignalConversionAtSFun_d[407] = basic_IO_qbot_platform_B.Bias[1628];
  rtb_TmpSignalConversionAtSFun_d[408] = basic_IO_qbot_platform_B.Bias[1632];
  rtb_TmpSignalConversionAtSFun_d[409] = basic_IO_qbot_platform_B.Bias[1636];
  rtb_TmpSignalConversionAtSFun_d[410] = basic_IO_qbot_platform_B.Bias[1640];
  rtb_TmpSignalConversionAtSFun_d[411] = basic_IO_qbot_platform_B.Bias[1644];
  rtb_TmpSignalConversionAtSFun_d[412] = basic_IO_qbot_platform_B.Bias[1648];
  rtb_TmpSignalConversionAtSFun_d[413] = basic_IO_qbot_platform_B.Bias[1652];
  rtb_TmpSignalConversionAtSFun_d[414] = basic_IO_qbot_platform_B.Bias[1656];
  rtb_TmpSignalConversionAtSFun_d[415] = basic_IO_qbot_platform_B.Bias[1660];
  rtb_TmpSignalConversionAtSFun_d[416] = basic_IO_qbot_platform_B.Bias[1664];
  rtb_TmpSignalConversionAtSFun_d[417] = basic_IO_qbot_platform_B.Bias[1668];
  rtb_TmpSignalConversionAtSFun_d[418] = basic_IO_qbot_platform_B.Bias[1672];
  rtb_TmpSignalConversionAtSFun_d[419] = basic_IO_qbot_platform_B.Bias[1676];

  /* MATLAB Function: '<S4>/MATLAB Function' incorporates:
   *  Constant: '<S4>/the lidar is 9.5" ahead of CG'
   */
  basic_IO_qbot_platform_DW.sfEvent = basic_IO_qbot_platfo_CALL_EVENT;

  /* MATLAB Function 'Lidar & Localization/MATLAB Function': '<S15>:1' */
  /* '<S15>:1:3' */
  tmp = basic_IO_qbot_platform_P.thelidaris95aheadofCG_Value[0];

  /* '<S15>:1:4' */
  tmp_0 = basic_IO_qbot_platform_P.thelidaris95aheadofCG_Value[1];

  /* '<S15>:1:6' */
  /* '<S15>:1:7' */
  for (i = 0; i < 420; i++) {
    rtb_TmpSignalConversionAtSFun_p = rtb_TmpSignalConversionAtSFun_d[i];
    rtb_TmpSignalConversionAtSFun_1 = rtb_TmpSignalConversionAtSFunct[i];
    x = rtb_TmpSignalConversionAtSFun_1 * cos(rtb_TmpSignalConversionAtSFun_p) +
      tmp;
    rtb_TmpSignalConversionAtSFun_p = rtb_TmpSignalConversionAtSFun_1 * sin
      (rtb_TmpSignalConversionAtSFun_p) + tmp_0;
    rtb_TmpSignalConversionAtSFun_d[i] = rtb_TmpSignalConversionAtSFun_p;
    basic_IO_qbot_platform_B.ranges_c[i] = sqrt(x * x +
      rtb_TmpSignalConversionAtSFun_p * rtb_TmpSignalConversionAtSFun_p);
    rtb_TmpSignalConversionAtSFun_1 = rt_atan2d_snf
      (rtb_TmpSignalConversionAtSFun_p, x);
    rtb_TmpSignalConversionAtSFunct[i] = rtb_TmpSignalConversionAtSFun_1;
    basic_IO_qbot_platform_B.angles_c[i] = rtb_TmpSignalConversionAtSFun_1;
  }

  /* RateTransition: '<S4>/Rate Transition4' */
  basic_IO_qbot_platform_DW.RateTransition4_Buffer0 = rtb_RangingSensor_o5;

  /* S-Function (computation_time_block): '<S12>/Computation Time3' */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Computation Time3 (computation_time_block) */
  {
    rtb_ComputationTime3 =
      basic_IO_qbot_platform_DW.ComputationTime3_ComputationTim.seconds +
      basic_IO_qbot_platform_DW.ComputationTime3_ComputationTim.nanoseconds *
      1e-9;
  }

  /* S-Function (sample_time_block): '<S12>/Sample Time3' */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Sample Time3 (sample_time_block) */
  {
    t_error result;
    t_timeout current_time;
    t_timeout time_difference;
    result = timeout_get_high_resolution_time(&current_time);
    if (result >= 0) {
      result = timeout_subtract(&time_difference, &current_time,
        &basic_IO_qbot_platform_DW.SampleTime3_PreviousTime);
      rtb_SampleTime3 = time_difference.seconds + time_difference.nanoseconds *
        1e-9;
      memcpy(&basic_IO_qbot_platform_DW.SampleTime3_PreviousTime, &current_time,
             sizeof(t_timeout));
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* RateTransition: '<S12>/Rate Transition2' incorporates:
   *  Constant: '<S12>/Constant8'
   */
  basic_IO_qbot_platform_DW.RateTransition2_Buffer0[0] = rtb_SampleTime3;
  basic_IO_qbot_platform_DW.RateTransition2_Buffer0[1] = rtb_ComputationTime3;
  basic_IO_qbot_platform_DW.RateTransition2_Buffer0[2] =
    basic_IO_qbot_platform_P.lidarStepSize;
}

/* Model update function for TID3 */
void basic_IO_qbot_platform_update3(void) /* Sample time: [0.2s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick3"
   * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++basic_IO_qbot_platform_M->Timing.clockTick3)) {
    ++basic_IO_qbot_platform_M->Timing.clockTickH3;
  }

  basic_IO_qbot_platform_M->Timing.t[3] =
    basic_IO_qbot_platform_M->Timing.clockTick3 *
    basic_IO_qbot_platform_M->Timing.stepSize3 +
    basic_IO_qbot_platform_M->Timing.clockTickH3 *
    basic_IO_qbot_platform_M->Timing.stepSize3 * 4294967296.0;
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void basic_IO_qbot_platform_output(int_T tid)
{
  switch (tid) {
   case 0 :
    basic_IO_qbot_platform_output0();
    break;

   case 1 :
    basic_IO_qbot_platform_output1();
    break;

   case 2 :
    basic_IO_qbot_platform_output2();
    break;

   case 3 :
    basic_IO_qbot_platform_output3();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void basic_IO_qbot_platform_update(int_T tid)
{
  switch (tid) {
   case 0 :
    basic_IO_qbot_platform_update0();
    break;

   case 1 :
    basic_IO_qbot_platform_update1();
    break;

   case 2 :
    basic_IO_qbot_platform_update2();
    break;

   case 3 :
    basic_IO_qbot_platform_update3();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Model initialize function */
void basic_IO_qbot_platform_initialize(void)
{
  /* Start for RateTransition: '<S11>/Rate Transition' */
  basic_IO_qbot_platform_B.RateTransition_a[0] =
    basic_IO_qbot_platform_P.RateTransition_InitialCondition;
  basic_IO_qbot_platform_B.RateTransition_a[1] =
    basic_IO_qbot_platform_P.RateTransition_InitialCondition;

  /* Start for S-Function (game_controller_block): '<S3>/Game Controller' */

  /* S-Function Block: basic_IO_qbot_platform/Joystick Driver/Game Controller (game_controller_block) */
  {
    if (basic_IO_qbot_platform_P.GameController_Enabled) {
      t_double deadzone[6];
      t_double saturation[6];
      t_int index;
      t_error result;
      for (index = 0; index < 6; index++) {
        deadzone[index] = -1;
      }

      for (index = 0; index < 6; index++) {
        saturation[index] = -1;
      }

      result = game_controller_open
        (basic_IO_qbot_platform_P.GameController_ControllerNumber,
         basic_IO_qbot_platform_P.GameController_BufferSize, deadzone,
         saturation, basic_IO_qbot_platform_P.GameController_AutoCenter, 0, 1.0,
         &basic_IO_qbot_platform_DW.GameController_Controller);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      }
    }
  }

  /* Start for S-Function (stream_client_block): '<S7>/Stream Client' incorporates:
   *  Constant: '<S7>/Constant6'
   */

  /* S-Function Block: basic_IO_qbot_platform/QBot Hardware/Stream Client (stream_client_block) */
  {
    qthread_attr_t send_thread_attributes;
    qthread_attr_t receive_thread_attributes;
    struct qsched_param scheduling_parameters;
    int min_priority = qsched_get_priority_min(QSCHED_FIFO);
    int max_priority = qsched_get_priority_max(QSCHED_FIFO);
    t_pstream_options options;
    t_error result;
    basic_IO_qbot_platform_DW.StreamClient_Stream = NULL;

    {
      int_T i1;
      real_T *y3 = &basic_IO_qbot_platform_B.StreamClient_o4[0];
      const real_T *p_StreamClient_default_value =
        basic_IO_qbot_platform_P.StreamClient_default_value;
      for (i1=0; i1 < 17; i1++) {
        y3[i1] = p_StreamClient_default_value[i1];
      }
    }

    result = 0;
    options.size = sizeof(options);
    options.flags = basic_IO_qbot_platform_P.StreamClient_Endian &
      PSTREAM_FLAG_ENDIAN_MASK;
    if (basic_IO_qbot_platform_P.StreamClient_Implementation ==
        STREAM_CLIENT_IMPLEMENTATION_THREAD) {
      options.flags |= PSTREAM_FLAG_MULTITHREADED;
    }

    if (basic_IO_qbot_platform_P.StreamClient_Optimize ==
        STREAM_CLIENT_OPTIMIZE_LATENCY) {
      options.flags |= PSTREAM_FLAG_MINIMIZE_LATENCY;
    }

    options.flags |= PSTREAM_FLAG_SEND_MOST_RECENT;
    options.flags |= PSTREAM_FLAG_RECEIVE_MOST_RECENT;
    options.send_unit_size = 8;
    options.num_send_units = 10;
    options.send_buffer_size = basic_IO_qbot_platform_P.StreamClient_SndSize;
    options.send_fifo_size = basic_IO_qbot_platform_P.StreamClient_SndFIFO;
    options.num_send_dimensions = 0;
    options.max_send_dimensions = NULL;
    if (basic_IO_qbot_platform_P.StreamClient_SndPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (basic_IO_qbot_platform_P.StreamClient_SndPriority > max_priority)
    {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        basic_IO_qbot_platform_P.StreamClient_SndPriority;
    }

    qthread_attr_init(&send_thread_attributes);
    result = qthread_attr_setschedpolicy(&send_thread_attributes, QSCHED_FIFO);
    if (result == 0) {
      result = qthread_attr_setschedparam(&send_thread_attributes,
        &scheduling_parameters);
      if (result == 0) {
        result = qthread_attr_setinheritsched(&send_thread_attributes,
          QTHREAD_EXPLICIT_SCHED);
        if (result < 0) {
          rtmSetErrorStatus(basic_IO_qbot_platform_M,
                            "Unable to set scheduling inheritance for Stream Client sending thread");
        }
      } else {
        rtmSetErrorStatus(basic_IO_qbot_platform_M,
                          "The specified thread priority for the Stream Client sending thread is not valid for this target");
      }
    } else {
      rtmSetErrorStatus(basic_IO_qbot_platform_M,
                        "Unable to set scheduling policy for Stream Client sending thread");
    }

    options.send_thread_attributes = &send_thread_attributes;
    options.receive_unit_size = 8;
    options.num_receive_units = 17;
    options.receive_buffer_size = basic_IO_qbot_platform_P.StreamClient_RcvSize;
    options.receive_fifo_size = basic_IO_qbot_platform_P.StreamClient_RcvFIFO;
    options.num_receive_dimensions = 0;
    options.max_receive_dimensions = NULL;
    if (basic_IO_qbot_platform_P.StreamClient_RcvPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (basic_IO_qbot_platform_P.StreamClient_RcvPriority > max_priority)
    {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        basic_IO_qbot_platform_P.StreamClient_RcvPriority;
    }

    qthread_attr_init(&receive_thread_attributes);
    if (result == 0) {
      result = qthread_attr_setschedpolicy(&receive_thread_attributes,
        QSCHED_FIFO);
      if (result == 0) {
        result = qthread_attr_setschedparam(&receive_thread_attributes,
          &scheduling_parameters);
        if (result == 0) {
          result = qthread_attr_setinheritsched(&receive_thread_attributes,
            QTHREAD_EXPLICIT_SCHED);
          if (result < 0) {
            rtmSetErrorStatus(basic_IO_qbot_platform_M,
                              "Unable to set scheduling inheritance for Stream Client receiving thread");
          }
        } else {
          rtmSetErrorStatus(basic_IO_qbot_platform_M,
                            "The specified thread priority for the Stream Client receiving thread is not valid for this target");
        }
      } else {
        rtmSetErrorStatus(basic_IO_qbot_platform_M,
                          "Unable to set scheduling policy for Stream Client receiving thread");
      }
    }

    options.receive_thread_attributes = &receive_thread_attributes;
    if (result == 0) {
      result = pstream_connect((const char *)
        basic_IO_qbot_platform_P.StreamClient_URI, &options,
        &basic_IO_qbot_platform_DW.StreamClient_Stream);
      if (result < 0 && result != -QERR_WOULD_BLOCK) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      }
    }

    qthread_attr_destroy(&send_thread_attributes);
    qthread_attr_destroy(&receive_thread_attributes);
  }

  /* Start for RateTransition generated from: '<Root>/Manual Switch' */
  basic_IO_qbot_platform_B.TmpRTBAtManualSwitchInport1 =
    basic_IO_qbot_platform_P.TmpRTBAtManualSwitchInport1_Ini;

  /* Start for S-Function (video_capture_block): '<S2>/Video Capture' */
  {
    t_video_capture_attribute local_attr[18] = {
      { basic_IO_qbot_platform_P.VideoCapture_Brightness,
        VIDEO_CAPTURE_PROPERTY_BRIGHTNESS, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Contrast,
        VIDEO_CAPTURE_PROPERTY_CONTRAST, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Hue, VIDEO_CAPTURE_PROPERTY_HUE,
        (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Saturation,
        VIDEO_CAPTURE_PROPERTY_SATURATION, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Sharpness,
        VIDEO_CAPTURE_PROPERTY_SHARPNESS, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Gamma,
        VIDEO_CAPTURE_PROPERTY_GAMMA, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_ColorEnable,
        VIDEO_CAPTURE_PROPERTY_COLOREFFECT, (t_boolean) 0, true }
      , { basic_IO_qbot_platform_P.VideoCapture_WhiteBalance,
        VIDEO_CAPTURE_PROPERTY_WHITEBALANCE, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_BacklightCompensat,
        VIDEO_CAPTURE_PROPERTY_BACKLIGHTCOMPENSATION, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Gain,
        VIDEO_CAPTURE_PROPERTY_GAIN, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Pan, VIDEO_CAPTURE_PROPERTY_PAN,
        (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Tilt,
        VIDEO_CAPTURE_PROPERTY_TILT, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Roll,
        VIDEO_CAPTURE_PROPERTY_ROLL, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Zoom,
        VIDEO_CAPTURE_PROPERTY_ZOOM, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Exposure,
        VIDEO_CAPTURE_PROPERTY_EXPOSURE, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Iris,
        VIDEO_CAPTURE_PROPERTY_IRIS, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Focus,
        VIDEO_CAPTURE_PROPERTY_FOCUS, (t_boolean) 0, false }
      , { basic_IO_qbot_platform_P.VideoCapture_Mirror,
        VIDEO_CAPTURE_PROPERTY_MIRROR, (t_boolean) 0, true }
    };

    t_error result;

    /*printf("Opening camera video://localhost:0\n"); fflush(stdout);*/
    result = video_capture_open("video://localhost:0", 60.0, 640U, 400U,
      IMAGE_FORMAT_COL_MAJOR_GRAYSCALE, IMAGE_DATA_TYPE_UINT8,
      &basic_IO_qbot_platform_DW.VideoCapture_VideoCapture,
      local_attr, 18
      );
    if (result >= 0) {
      result = video_capture_start
        (basic_IO_qbot_platform_DW.VideoCapture_VideoCapture);
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for RateTransition: '<S4>/Rate Transition4' */
  basic_IO_qbot_platform_B.RateTransition4 =
    basic_IO_qbot_platform_P.RateTransition4_InitialConditio;

  /* Start for S-Function (sample_time_block): '<S12>/Sample Time' */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Sample Time (sample_time_block) */
  {
    t_error result;
    result = timeout_get_high_resolution_time
      (&basic_IO_qbot_platform_DW.SampleTime_PreviousTime);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* Start for S-Function (sample_time_block): '<S12>/Sample Time1' */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Sample Time1 (sample_time_block) */
  {
    t_error result;
    result = timeout_get_high_resolution_time
      (&basic_IO_qbot_platform_DW.SampleTime1_PreviousTime);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* Start for RateTransition: '<S12>/Rate Transition1' */
  basic_IO_qbot_platform_B.RateTransition1[0] =
    basic_IO_qbot_platform_P.RateTransition1_InitialConditio;

  /* Start for RateTransition: '<S12>/Rate Transition2' */
  basic_IO_qbot_platform_B.RateTransition2[0] =
    basic_IO_qbot_platform_P.RateTransition2_InitialConditio;

  /* Start for RateTransition: '<S12>/Rate Transition1' */
  basic_IO_qbot_platform_B.RateTransition1[1] =
    basic_IO_qbot_platform_P.RateTransition1_InitialConditio;

  /* Start for RateTransition: '<S12>/Rate Transition2' */
  basic_IO_qbot_platform_B.RateTransition2[1] =
    basic_IO_qbot_platform_P.RateTransition2_InitialConditio;

  /* Start for RateTransition: '<S12>/Rate Transition1' */
  basic_IO_qbot_platform_B.RateTransition1[2] =
    basic_IO_qbot_platform_P.RateTransition1_InitialConditio;

  /* Start for RateTransition: '<S12>/Rate Transition2' */
  basic_IO_qbot_platform_B.RateTransition2[2] =
    basic_IO_qbot_platform_P.RateTransition2_InitialConditio;

  /* Start for S-Function (video3d_initialize_block): '<S11>/Video3D Initialize' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Video3D Initialize (video3d_initialize_block) */
  {
    t_error result;
    result = video3d_open("0",
                          &basic_IO_qbot_platform_DW.Video3DInitialize_Video3D);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* Start for S-Function (video3d_capture_block): '<S11>/Video3D Capture' */
  {
    t_error result;
    result = video3d_stream_open
      (basic_IO_qbot_platform_DW.Video3DInitialize_Video3D, VIDEO3D_STREAM_DEPTH,
       basic_IO_qbot_platform_P.Video3DCapture_stream_index, 30.0, 640, 480,
       IMAGE_FORMAT_COL_MAJOR_GRAYSCALE, IMAGE_DATA_TYPE_UINT16,
       &basic_IO_qbot_platform_DW.Video3DCapture_Stream);
    if (result >= 0) {
      t_video3d_property config_properties[4];
      t_double config_values[4];
      t_uint num_config_properties = 0;
      if (basic_IO_qbot_platform_P.Video3DCapture_Preset != 21) {
        config_properties[num_config_properties] =
          VIDEO3D_PROPERTY_VISUAL_PRESET;
        config_values[num_config_properties] = (t_video3d_visual_preset)
          (basic_IO_qbot_platform_P.Video3DCapture_Preset - 1);
        num_config_properties++;
      }

      if (basic_IO_qbot_platform_P.Video3DCapture_Emitter != 3) {
        config_properties[num_config_properties] =
          VIDEO3D_PROPERTY_ENABLE_EMITTER;
        config_values[num_config_properties] =
          (basic_IO_qbot_platform_P.Video3DCapture_Emitter == 1) ? 1.0 : 0.0;
        num_config_properties++;
      }

      config_properties[num_config_properties] =
        VIDEO3D_PROPERTY_ENABLE_AUTO_WHITE_BALANCE;
      config_values[num_config_properties] = 1.0;
      num_config_properties++;
      config_properties[num_config_properties] =
        VIDEO3D_PROPERTY_ENABLE_AUTO_EXPOSURE;
      config_values[num_config_properties] = 1.0;
      num_config_properties++;
      if (num_config_properties > 0) {
        video3d_stream_set_properties
          (basic_IO_qbot_platform_DW.Video3DCapture_Stream, config_properties,
           num_config_properties, config_values);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for S-Function (image_transform_block): '<S11>/Image Transform' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Image Transform (image_transform_block) */
  {
    t_error result;
    result = image_colorization_open((t_colorization_theme)
      (basic_IO_qbot_platform_P.ImageTransform_ColorTheme - 1),
      &basic_IO_qbot_platform_DW.ImageTransform_AlgHandle);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for S-Function (video3d_capture_block): '<S11>/Video3D Capture1' */
  {
    t_error result;
    result = video3d_stream_open
      (basic_IO_qbot_platform_DW.Video3DInitialize_Video3D, VIDEO3D_STREAM_COLOR,
       basic_IO_qbot_platform_P.Video3DCapture1_stream_index, 30.0, 640, 480,
       IMAGE_FORMAT_COL_MAJOR_PLANAR_RGB, IMAGE_DATA_TYPE_UINT8,
       &basic_IO_qbot_platform_DW.Video3DCapture1_Stream);
    if (result >= 0) {
      t_video3d_property config_properties[4];
      t_double config_values[4];
      t_uint num_config_properties = 0;
      if (basic_IO_qbot_platform_P.Video3DCapture1_Preset != 21) {
        config_properties[num_config_properties] =
          VIDEO3D_PROPERTY_VISUAL_PRESET;
        config_values[num_config_properties] = (t_video3d_visual_preset)
          (basic_IO_qbot_platform_P.Video3DCapture1_Preset - 1);
        num_config_properties++;
      }

      if (basic_IO_qbot_platform_P.Video3DCapture1_Emitter != 3) {
        config_properties[num_config_properties] =
          VIDEO3D_PROPERTY_ENABLE_EMITTER;
        config_values[num_config_properties] =
          (basic_IO_qbot_platform_P.Video3DCapture1_Emitter == 1) ? 1.0 : 0.0;
        num_config_properties++;
      }

      config_properties[num_config_properties] =
        VIDEO3D_PROPERTY_ENABLE_AUTO_WHITE_BALANCE;
      config_values[num_config_properties] = 1.0;
      num_config_properties++;
      config_properties[num_config_properties] =
        VIDEO3D_PROPERTY_ENABLE_AUTO_EXPOSURE;
      config_values[num_config_properties] = 1.0;
      num_config_properties++;
      if (num_config_properties > 0) {
        video3d_stream_set_properties
          (basic_IO_qbot_platform_DW.Video3DCapture1_Stream, config_properties,
           num_config_properties, config_values);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for S-Function (stream_client_block): '<S6>/Stream Client' */

  /* S-Function Block: basic_IO_qbot_platform/QArm Mini Hardware/Stream Client (stream_client_block) */
  {
    qthread_attr_t send_thread_attributes;
    qthread_attr_t receive_thread_attributes;
    struct qsched_param scheduling_parameters;
    int min_priority = qsched_get_priority_min(QSCHED_FIFO);
    int max_priority = qsched_get_priority_max(QSCHED_FIFO);
    t_pstream_options options;
    t_error result;
    basic_IO_qbot_platform_DW.StreamClient_Stream_c = NULL;
    basic_IO_qbot_platform_B.StreamClient_o4_o =
      basic_IO_qbot_platform_P.StreamClient_default_value_f;
    result = 0;
    options.size = sizeof(options);
    options.flags = basic_IO_qbot_platform_P.StreamClient_Endian_f &
      PSTREAM_FLAG_ENDIAN_MASK;
    if (basic_IO_qbot_platform_P.StreamClient_Implementation_d ==
        STREAM_CLIENT_IMPLEMENTATION_THREAD) {
      options.flags |= PSTREAM_FLAG_MULTITHREADED;
    }

    if (basic_IO_qbot_platform_P.StreamClient_Optimize_k ==
        STREAM_CLIENT_OPTIMIZE_LATENCY) {
      options.flags |= PSTREAM_FLAG_MINIMIZE_LATENCY;
    }

    options.flags |= PSTREAM_FLAG_SEND_MOST_RECENT;
    options.flags |= PSTREAM_FLAG_RECEIVE_MOST_RECENT;
    options.send_unit_size = 8;
    options.num_send_units = 8;
    options.send_buffer_size = basic_IO_qbot_platform_P.StreamClient_SndSize_j;
    options.send_fifo_size = basic_IO_qbot_platform_P.StreamClient_SndFIFO_a;
    options.num_send_dimensions = 0;
    options.max_send_dimensions = NULL;
    if (basic_IO_qbot_platform_P.StreamClient_SndPriority_m < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (basic_IO_qbot_platform_P.StreamClient_SndPriority_m >
               max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        basic_IO_qbot_platform_P.StreamClient_SndPriority_m;
    }

    qthread_attr_init(&send_thread_attributes);
    result = qthread_attr_setschedpolicy(&send_thread_attributes, QSCHED_FIFO);
    if (result == 0) {
      result = qthread_attr_setschedparam(&send_thread_attributes,
        &scheduling_parameters);
      if (result == 0) {
        result = qthread_attr_setinheritsched(&send_thread_attributes,
          QTHREAD_EXPLICIT_SCHED);
        if (result < 0) {
          rtmSetErrorStatus(basic_IO_qbot_platform_M,
                            "Unable to set scheduling inheritance for Stream Client sending thread");
        }
      } else {
        rtmSetErrorStatus(basic_IO_qbot_platform_M,
                          "The specified thread priority for the Stream Client sending thread is not valid for this target");
      }
    } else {
      rtmSetErrorStatus(basic_IO_qbot_platform_M,
                        "Unable to set scheduling policy for Stream Client sending thread");
    }

    options.send_thread_attributes = &send_thread_attributes;
    options.receive_unit_size = 8;
    options.num_receive_units = 1;
    options.receive_buffer_size =
      basic_IO_qbot_platform_P.StreamClient_RcvSize_m;
    options.receive_fifo_size = basic_IO_qbot_platform_P.StreamClient_RcvFIFO_c;
    options.num_receive_dimensions = 0;
    options.max_receive_dimensions = NULL;
    if (basic_IO_qbot_platform_P.StreamClient_RcvPriority_c < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (basic_IO_qbot_platform_P.StreamClient_RcvPriority_c >
               max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        basic_IO_qbot_platform_P.StreamClient_RcvPriority_c;
    }

    qthread_attr_init(&receive_thread_attributes);
    if (result == 0) {
      result = qthread_attr_setschedpolicy(&receive_thread_attributes,
        QSCHED_FIFO);
      if (result == 0) {
        result = qthread_attr_setschedparam(&receive_thread_attributes,
          &scheduling_parameters);
        if (result == 0) {
          result = qthread_attr_setinheritsched(&receive_thread_attributes,
            QTHREAD_EXPLICIT_SCHED);
          if (result < 0) {
            rtmSetErrorStatus(basic_IO_qbot_platform_M,
                              "Unable to set scheduling inheritance for Stream Client receiving thread");
          }
        } else {
          rtmSetErrorStatus(basic_IO_qbot_platform_M,
                            "The specified thread priority for the Stream Client receiving thread is not valid for this target");
        }
      } else {
        rtmSetErrorStatus(basic_IO_qbot_platform_M,
                          "Unable to set scheduling policy for Stream Client receiving thread");
      }
    }

    options.receive_thread_attributes = &receive_thread_attributes;
    if (result == 0) {
      result = pstream_connect((const char *)
        basic_IO_qbot_platform_P.StreamClient_URI_e, &options,
        &basic_IO_qbot_platform_DW.StreamClient_Stream_c);
      if (result < 0 && result != -QERR_WOULD_BLOCK) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      }
    }

    qthread_attr_destroy(&send_thread_attributes);
    qthread_attr_destroy(&receive_thread_attributes);
  }

  /* Start for S-Function (sample_time_block): '<S12>/Sample Time2' */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Sample Time2 (sample_time_block) */
  {
    t_error result;
    result = timeout_get_high_resolution_time
      (&basic_IO_qbot_platform_DW.SampleTime2_PreviousTime);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* Start for S-Function (image_compress_block): '<S1>/Image Compress' */

  /* S-Function Block: basic_IO_qbot_platform/Downward Facing Camera/Image Compress (image_compress_block) */
  {
    t_error result = qjpeg_compress_open
      (&basic_IO_qbot_platform_DW.ImageCompress_Compress);
    if (result == 0) {
      do {
        result = qjpeg_compress_set_image_properties
          (basic_IO_qbot_platform_DW.ImageCompress_Compress, 640, 400,
           COLOR_SPACE_GRAYSCALE, IMAGE_DATA_TYPE_UINT8);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_quality
          (basic_IO_qbot_platform_DW.ImageCompress_Compress,
           basic_IO_qbot_platform_P.ImageCompress_Quality);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_fixed_memory_destination
          (basic_IO_qbot_platform_DW.ImageCompress_Compress,
           &basic_IO_qbot_platform_B.ImageCompress[0], 256000);
        if (result < 0) {
          break;
        }
      } while (false);

      if (result < 0) {
        qjpeg_compress_close(basic_IO_qbot_platform_DW.ImageCompress_Compress);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for S-Function (channel_block): '<S1>/Channel' */

  /* S-Function Block: basic_IO_qbot_platform/Downward Facing Camera/Channel (channel_block) */
  {
    t_error result;
    result = channel_fifo_create(0, sizeof(uint8_T), 1, 256000, 1,
      (t_channel_fifo *) &basic_IO_qbot_platform_DW.Channel_PWORK.Fifo);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for S-Function (image_compress_block): '<S9>/Image Compress' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Depth Data/Image Compress (image_compress_block) */
  {
    t_error result = qjpeg_compress_open
      (&basic_IO_qbot_platform_DW.ImageCompress_Compress_c);
    if (result == 0) {
      do {
        result = qjpeg_compress_set_image_properties
          (basic_IO_qbot_platform_DW.ImageCompress_Compress_c, 640, 480,
           COLOR_SPACE_RGB, IMAGE_DATA_TYPE_UINT8);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_quality
          (basic_IO_qbot_platform_DW.ImageCompress_Compress_c,
           basic_IO_qbot_platform_P.ImageCompress_Quality_b);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_fixed_memory_destination
          (basic_IO_qbot_platform_DW.ImageCompress_Compress_c,
           &basic_IO_qbot_platform_B.ImageCompress_j[0], 921600);
        if (result < 0) {
          break;
        }
      } while (false);

      if (result < 0) {
        qjpeg_compress_close(basic_IO_qbot_platform_DW.ImageCompress_Compress_c);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for S-Function (channel_block): '<S9>/Channel' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Depth Data/Channel (channel_block) */
  {
    t_error result;
    result = channel_fifo_create(1, sizeof(uint8_T), 1, 921600, 1,
      (t_channel_fifo *) &basic_IO_qbot_platform_DW.Channel_PWORK_n.Fifo);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for S-Function (image_compress_block): '<S10>/Image Compress' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense RGB Data/Image Compress (image_compress_block) */
  {
    t_error result = qjpeg_compress_open
      (&basic_IO_qbot_platform_DW.ImageCompress_Compress_e);
    if (result == 0) {
      do {
        result = qjpeg_compress_set_image_properties
          (basic_IO_qbot_platform_DW.ImageCompress_Compress_e, 640, 480,
           COLOR_SPACE_RGB, IMAGE_DATA_TYPE_UINT8);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_quality
          (basic_IO_qbot_platform_DW.ImageCompress_Compress_e,
           basic_IO_qbot_platform_P.ImageCompress_Quality_d);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_fixed_memory_destination
          (basic_IO_qbot_platform_DW.ImageCompress_Compress_e,
           &basic_IO_qbot_platform_B.ImageCompress_i[0], 921600);
        if (result < 0) {
          break;
        }
      } while (false);

      if (result < 0) {
        qjpeg_compress_close(basic_IO_qbot_platform_DW.ImageCompress_Compress_e);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for S-Function (channel_block): '<S10>/Channel' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense RGB Data/Channel (channel_block) */
  {
    t_error result;
    result = channel_fifo_create(2, sizeof(uint8_T), 1, 921600, 1,
      (t_channel_fifo *) &basic_IO_qbot_platform_DW.Channel_PWORK_i.Fifo);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for S-Function (ranging_sensor_block): '<S4>/Ranging Sensor' */

  /* S-Function Block: basic_IO_qbot_platform/Lidar & Localization/Ranging Sensor (ranging_sensor_block) */
  {
    t_error result;
    result = leishen_m10p_open(
      "serial://localhost:0?device='/dev/lidar',baud='512000',word='8',parity='none',stop='1',flow='none'",
      1680, &basic_IO_qbot_platform_DW.RangingSensor_Sensor);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
    }
  }

  /* Start for S-Function (sample_time_block): '<S12>/Sample Time3' */

  /* S-Function Block: basic_IO_qbot_platform/Timing/Sample Time3 (sample_time_block) */
  {
    t_error result;
    result = timeout_get_high_resolution_time
      (&basic_IO_qbot_platform_DW.SampleTime3_PreviousTime);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* user code (Start function Trailer) */

  /* S-Function Block: basic_IO_qbot_platform/QBot Hardware/Time (time_block) */
  {
    t_error result;
    result = timeout_get_high_resolution_time(&_high_resolution_start_time);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
      return;
    }
  }

  /* InitializeConditions for RateTransition: '<S11>/Rate Transition' */
  basic_IO_qbot_platform_DW.RateTransition_Buffer0[0] =
    basic_IO_qbot_platform_P.RateTransition_InitialCondition;
  basic_IO_qbot_platform_DW.RateTransition_Buffer0[1] =
    basic_IO_qbot_platform_P.RateTransition_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<Root>/Manual Switch' */
  basic_IO_qbot_platform_DW.TmpRTBAtManualSwitchInport1_Buf =
    basic_IO_qbot_platform_P.TmpRTBAtManualSwitchInport1_Ini;

  /* InitializeConditions for RateTransition: '<S4>/Rate Transition4' */
  basic_IO_qbot_platform_DW.RateTransition4_Buffer0 =
    basic_IO_qbot_platform_P.RateTransition4_InitialConditio;

  /* InitializeConditions for RateTransition: '<S12>/Rate Transition1' */
  basic_IO_qbot_platform_DW.RateTransition1_Buffer0[0] =
    basic_IO_qbot_platform_P.RateTransition1_InitialConditio;
  basic_IO_qbot_platform_DW.RateTransition1_Buffer0[1] =
    basic_IO_qbot_platform_P.RateTransition1_InitialConditio;
  basic_IO_qbot_platform_DW.RateTransition1_Buffer0[2] =
    basic_IO_qbot_platform_P.RateTransition1_InitialConditio;

  /* InitializeConditions for RateTransition: '<S12>/Rate Transition2' */
  basic_IO_qbot_platform_DW.RateTransition2_Buffer0[0] =
    basic_IO_qbot_platform_P.RateTransition2_InitialConditio;
  basic_IO_qbot_platform_DW.RateTransition2_Buffer0[1] =
    basic_IO_qbot_platform_P.RateTransition2_InitialConditio;
  basic_IO_qbot_platform_DW.RateTransition2_Buffer0[2] =
    basic_IO_qbot_platform_P.RateTransition2_InitialConditio;

  /* InitializeConditions for S-Function (video3d_initialize_block): '<S11>/Video3D Initialize' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Video3D Initialize (video3d_initialize_block) */
  {
    if (rtmIsFirstInitCond(basic_IO_qbot_platform_M)) {
      t_error result = video3d_start_streaming
        (basic_IO_qbot_platform_DW.Video3DInitialize_Video3D);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qbot_platform_M, _rt_error_message);
        return;
      }
    }
  }

  /* InitializeConditions for S-Function (video3d_capture_block): '<S11>/Video3D Capture' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Video3D Capture (video3d_capture_block) */
  {
    if (rtmIsFirstInitCond(basic_IO_qbot_platform_M)) {
    }
  }

  /* InitializeConditions for S-Function (video3d_capture_block): '<S11>/Video3D Capture1' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Video3D Capture1 (video3d_capture_block) */
  {
    if (rtmIsFirstInitCond(basic_IO_qbot_platform_M)) {
    }
  }

  /* InitializeConditions for Memory: '<S6>/Memory' */
  basic_IO_qbot_platform_DW.Memory_PreviousInput =
    basic_IO_qbot_platform_P.Memory_InitialCondition;

  /* SystemInitialize for MATLAB Function: '<S3>/MATLAB Function' */
  basic_IO_qbot_platform_DW.doneDoubleBufferReInit_g = false;
  basic_IO_qbot_platform_DW.sfEvent_k = basic_IO_qbot_platfo_CALL_EVENT;

  /* SystemInitialize for MATLAB Function: '<S4>/MATLAB Function' */
  basic_IO_qbot_platform_DW.doneDoubleBufferReInit = false;
  basic_IO_qbot_platform_DW.sfEvent = basic_IO_qbot_platfo_CALL_EVENT;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(basic_IO_qbot_platform_M)) {
    rtmSetFirstInitCond(basic_IO_qbot_platform_M, 0);
  }
}

/* Model terminate function */
void basic_IO_qbot_platform_terminate(void)
{
  /* Terminate for S-Function (game_controller_block): '<S3>/Game Controller' */

  /* S-Function Block: basic_IO_qbot_platform/Joystick Driver/Game Controller (game_controller_block) */
  {
    if (basic_IO_qbot_platform_P.GameController_Enabled) {
      game_controller_close(basic_IO_qbot_platform_DW.GameController_Controller);
      basic_IO_qbot_platform_DW.GameController_Controller = NULL;
    }
  }

  /* Terminate for S-Function (stream_client_block): '<S7>/Stream Client' incorporates:
   *  Constant: '<S7>/Constant6'
   */

  /* S-Function Block: basic_IO_qbot_platform/QBot Hardware/Stream Client (stream_client_block) */
  {
    if (basic_IO_qbot_platform_DW.StreamClient_Stream != NULL) {
      pstream_close(basic_IO_qbot_platform_DW.StreamClient_Stream);
    }

    basic_IO_qbot_platform_DW.StreamClient_Stream = NULL;
  }

  /* Terminate for S-Function (video_capture_block): '<S2>/Video Capture' */
  video_capture_stop(basic_IO_qbot_platform_DW.VideoCapture_VideoCapture);
  video_capture_close(basic_IO_qbot_platform_DW.VideoCapture_VideoCapture);

  /* Terminate for S-Function (video3d_initialize_block): '<S11>/Video3D Initialize' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Video3D Initialize (video3d_initialize_block) */
  {
    video3d_stop_streaming(basic_IO_qbot_platform_DW.Video3DInitialize_Video3D);
    video3d_close(basic_IO_qbot_platform_DW.Video3DInitialize_Video3D);
  }

  /* Terminate for S-Function (image_transform_block): '<S11>/Image Transform' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Camera/Image Transform (image_transform_block) */
  {
    image_colorization_close(basic_IO_qbot_platform_DW.ImageTransform_AlgHandle);
  }

  /* Terminate for S-Function (stream_client_block): '<S6>/Stream Client' */

  /* S-Function Block: basic_IO_qbot_platform/QArm Mini Hardware/Stream Client (stream_client_block) */
  {
    if (basic_IO_qbot_platform_DW.StreamClient_Stream_c != NULL) {
      pstream_close(basic_IO_qbot_platform_DW.StreamClient_Stream_c);
    }

    basic_IO_qbot_platform_DW.StreamClient_Stream_c = NULL;
  }

  /* Terminate for S-Function (image_compress_block): '<S1>/Image Compress' */

  /* S-Function Block: basic_IO_qbot_platform/Downward Facing Camera/Image Compress (image_compress_block) */
  {
    qjpeg_compress_close(basic_IO_qbot_platform_DW.ImageCompress_Compress);
    basic_IO_qbot_platform_DW.ImageCompress_Compress = NULL;
  }

  /* Terminate for S-Function (channel_block): '<S1>/Channel' */

  /* S-Function Block: basic_IO_qbot_platform/Downward Facing Camera/Channel (channel_block) */
  {
    channel_fifo_destroy((t_channel_fifo)
                         basic_IO_qbot_platform_DW.Channel_PWORK.Fifo);
    basic_IO_qbot_platform_DW.Channel_PWORK.Fifo = NULL;
  }

  /* Terminate for S-Function (image_compress_block): '<S9>/Image Compress' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Depth Data/Image Compress (image_compress_block) */
  {
    qjpeg_compress_close(basic_IO_qbot_platform_DW.ImageCompress_Compress_c);
    basic_IO_qbot_platform_DW.ImageCompress_Compress_c = NULL;
  }

  /* Terminate for S-Function (channel_block): '<S9>/Channel' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense Depth Data/Channel (channel_block) */
  {
    channel_fifo_destroy((t_channel_fifo)
                         basic_IO_qbot_platform_DW.Channel_PWORK_n.Fifo);
    basic_IO_qbot_platform_DW.Channel_PWORK_n.Fifo = NULL;
  }

  /* Terminate for S-Function (image_compress_block): '<S10>/Image Compress' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense RGB Data/Image Compress (image_compress_block) */
  {
    qjpeg_compress_close(basic_IO_qbot_platform_DW.ImageCompress_Compress_e);
    basic_IO_qbot_platform_DW.ImageCompress_Compress_e = NULL;
  }

  /* Terminate for S-Function (channel_block): '<S10>/Channel' */

  /* S-Function Block: basic_IO_qbot_platform/RealSense RGB Data/Channel (channel_block) */
  {
    channel_fifo_destroy((t_channel_fifo)
                         basic_IO_qbot_platform_DW.Channel_PWORK_i.Fifo);
    basic_IO_qbot_platform_DW.Channel_PWORK_i.Fifo = NULL;
  }

  /* Terminate for S-Function (ranging_sensor_block): '<S4>/Ranging Sensor' */

  /* S-Function Block: basic_IO_qbot_platform/Lidar & Localization/Ranging Sensor (ranging_sensor_block) */
  {
    leishen_m10p_close(basic_IO_qbot_platform_DW.RangingSensor_Sensor);
    basic_IO_qbot_platform_DW.RangingSensor_Sensor = NULL;
    basic_IO_qbot_platform_DW.RangingSensor_Sensor = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  basic_IO_qbot_platform_output(tid);
}

void MdlUpdate(int_T tid)
{
  basic_IO_qbot_platform_update(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  basic_IO_qbot_platform_initialize();
}

void MdlTerminate(void)
{
  basic_IO_qbot_platform_terminate();
}

/* Registration function */
RT_MODEL_basic_IO_qbot_platfo_T *basic_IO_qbot_platform(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)basic_IO_qbot_platform_M, 0,
                sizeof(RT_MODEL_basic_IO_qbot_platfo_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = basic_IO_qbot_platform_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "basic_IO_qbot_platform_M points to
       static memory which is guaranteed to be non-NULL" */
    basic_IO_qbot_platform_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    basic_IO_qbot_platform_M->Timing.sampleTimes =
      (&basic_IO_qbot_platform_M->Timing.sampleTimesArray[0]);
    basic_IO_qbot_platform_M->Timing.offsetTimes =
      (&basic_IO_qbot_platform_M->Timing.offsetTimesArray[0]);

    /* task periods */
    basic_IO_qbot_platform_M->Timing.sampleTimes[0] = (0.016666666666666666);
    basic_IO_qbot_platform_M->Timing.sampleTimes[1] = (0.033333333333333333);
    basic_IO_qbot_platform_M->Timing.sampleTimes[2] = (0.066666666666666666);
    basic_IO_qbot_platform_M->Timing.sampleTimes[3] = (0.2);

    /* task offsets */
    basic_IO_qbot_platform_M->Timing.offsetTimes[0] = (0.0);
    basic_IO_qbot_platform_M->Timing.offsetTimes[1] = (0.0);
    basic_IO_qbot_platform_M->Timing.offsetTimes[2] = (0.0);
    basic_IO_qbot_platform_M->Timing.offsetTimes[3] = (0.0);
  }

  rtmSetTPtr(basic_IO_qbot_platform_M, &basic_IO_qbot_platform_M->Timing.tArray
             [0]);

  {
    int_T *mdlSampleHits = basic_IO_qbot_platform_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      basic_IO_qbot_platform_M->Timing.perTaskSampleHitsArray;
    basic_IO_qbot_platform_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits
      [0]);
    mdlSampleHits[0] = 1;
    basic_IO_qbot_platform_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(basic_IO_qbot_platform_M, -1);
  basic_IO_qbot_platform_M->Timing.stepSize0 = 0.016666666666666666;
  basic_IO_qbot_platform_M->Timing.stepSize1 = 0.033333333333333333;
  basic_IO_qbot_platform_M->Timing.stepSize2 = 0.066666666666666666;
  basic_IO_qbot_platform_M->Timing.stepSize3 = 0.2;
  rtmSetFirstInitCond(basic_IO_qbot_platform_M, 1);

  /* External mode info */
  basic_IO_qbot_platform_M->Sizes.checksums[0] = (247294154U);
  basic_IO_qbot_platform_M->Sizes.checksums[1] = (4244338175U);
  basic_IO_qbot_platform_M->Sizes.checksums[2] = (912083583U);
  basic_IO_qbot_platform_M->Sizes.checksums[3] = (2222737985U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    basic_IO_qbot_platform_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(basic_IO_qbot_platform_M->extModeInfo,
      &basic_IO_qbot_platform_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(basic_IO_qbot_platform_M->extModeInfo,
                        basic_IO_qbot_platform_M->Sizes.checksums);
    rteiSetTPtr(basic_IO_qbot_platform_M->extModeInfo, rtmGetTPtr
                (basic_IO_qbot_platform_M));
  }

  basic_IO_qbot_platform_M->solverInfoPtr =
    (&basic_IO_qbot_platform_M->solverInfo);
  basic_IO_qbot_platform_M->Timing.stepSize = (0.016666666666666666);
  rtsiSetFixedStepSize(&basic_IO_qbot_platform_M->solverInfo,
                       0.016666666666666666);
  rtsiSetSolverMode(&basic_IO_qbot_platform_M->solverInfo,
                    SOLVER_MODE_MULTITASKING);

  /* block I/O */
  basic_IO_qbot_platform_M->blockIO = ((void *) &basic_IO_qbot_platform_B);
  (void) memset(((void *) &basic_IO_qbot_platform_B), 0,
                sizeof(B_basic_IO_qbot_platform_T));

  {
    basic_IO_qbot_platform_B.Channel = CHANNEL_0;
    basic_IO_qbot_platform_B.Channel_m = CHANNEL_0;
    basic_IO_qbot_platform_B.Channel_o = CHANNEL_0;
  }

  /* parameters */
  basic_IO_qbot_platform_M->defaultParam = ((real_T *)&basic_IO_qbot_platform_P);

  /* states (dwork) */
  basic_IO_qbot_platform_M->dwork = ((void *) &basic_IO_qbot_platform_DW);
  (void) memset((void *)&basic_IO_qbot_platform_DW, 0,
                sizeof(DW_basic_IO_qbot_platform_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    basic_IO_qbot_platform_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 36;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  basic_IO_qbot_platform_M->Sizes.numContStates = (0);/* Number of continuous states */
  basic_IO_qbot_platform_M->Sizes.numY = (0);/* Number of model outputs */
  basic_IO_qbot_platform_M->Sizes.numU = (0);/* Number of model inputs */
  basic_IO_qbot_platform_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  basic_IO_qbot_platform_M->Sizes.numSampTimes = (4);/* Number of sample times */
  basic_IO_qbot_platform_M->Sizes.numBlocks = (107);/* Number of blocks */
  basic_IO_qbot_platform_M->Sizes.numBlockIO = (42);/* Number of block outputs */
  basic_IO_qbot_platform_M->Sizes.numBlockPrms = (291);/* Sum of parameter "widths" */
  return basic_IO_qbot_platform_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
