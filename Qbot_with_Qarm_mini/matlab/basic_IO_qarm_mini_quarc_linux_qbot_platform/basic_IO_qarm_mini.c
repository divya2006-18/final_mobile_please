/*
 * basic_IO_qarm_mini.c
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
#include "rtwtypes.h"
#include "basic_IO_qarm_mini_private.h"
#include <string.h>
#include "basic_IO_qarm_mini_dt.h"

/* Block signals (default storage) */
B_basic_IO_qarm_mini_T basic_IO_qarm_mini_B;

/* Continuous states */
X_basic_IO_qarm_mini_T basic_IO_qarm_mini_X;

/* Disabled State Vector */
XDis_basic_IO_qarm_mini_T basic_IO_qarm_mini_XDis;

/* Block states (default storage) */
DW_basic_IO_qarm_mini_T basic_IO_qarm_mini_DW;

/* Real-time model */
static RT_MODEL_basic_IO_qarm_mini_T basic_IO_qarm_mini_M_;
RT_MODEL_basic_IO_qarm_mini_T *const basic_IO_qarm_mini_M =
  &basic_IO_qarm_mini_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 5;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  basic_IO_qarm_mini_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void basic_IO_qarm_mini_output(void)
{
  real_T rtb_TmpSignalConversionAtHILSet[25];
  real_T rtb_TmpSignalConversionAtStream[15];
  real_T rtb_Bias16;
  real_T rtb_Bias21;
  real_T rtb_Gain1;
  real_T rtb_Saturation2;
  real_T rtb_Saturation3;
  real_T rtb_Saturation4;
  real_T rtb_Switch4;
  int32_T i;
  uint8_T rtb_StreamServer_o1;
  boolean_T rtb_Memory;
  if (rtmIsMajorTimeStep(basic_IO_qarm_mini_M)) {
    /* set solver stop time */
    if (!(basic_IO_qarm_mini_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&basic_IO_qarm_mini_M->solverInfo,
                            ((basic_IO_qarm_mini_M->Timing.clockTickH0 + 1) *
        basic_IO_qarm_mini_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&basic_IO_qarm_mini_M->solverInfo,
                            ((basic_IO_qarm_mini_M->Timing.clockTick0 + 1) *
        basic_IO_qarm_mini_M->Timing.stepSize0 +
        basic_IO_qarm_mini_M->Timing.clockTickH0 *
        basic_IO_qarm_mini_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(basic_IO_qarm_mini_M)) {
    basic_IO_qarm_mini_M->Timing.t[0] = rtsiGetT
      (&basic_IO_qarm_mini_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(basic_IO_qarm_mini_M)) {
    /* S-Function (hil_read_block): '<S9>/HIL Read' */

    /* S-Function Block: basic_IO_qarm_mini/Qarm Mini Manipulator/Hardware Layer/HIL Read (hil_read_block) */
    {
      t_error result = hil_read(basic_IO_qarm_mini_DW.HILInitialize_Card,
        basic_IO_qarm_mini_P.HILRead_analog_channels, 5U,
        NULL, 0U,
        NULL, 0U,
        basic_IO_qarm_mini_P.HILRead_other_channels, 10U,
        &basic_IO_qarm_mini_DW.HILRead_AnalogBuffer[0],
        NULL,
        NULL,
        &basic_IO_qarm_mini_DW.HILRead_OtherBuffer[0]
        );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
      } else {
        basic_IO_qarm_mini_B.HILRead_o1 =
          basic_IO_qarm_mini_DW.HILRead_AnalogBuffer[0];
        basic_IO_qarm_mini_B.HILRead_o2 =
          basic_IO_qarm_mini_DW.HILRead_AnalogBuffer[1];
        basic_IO_qarm_mini_B.HILRead_o3 =
          basic_IO_qarm_mini_DW.HILRead_AnalogBuffer[2];
        basic_IO_qarm_mini_B.HILRead_o4 =
          basic_IO_qarm_mini_DW.HILRead_AnalogBuffer[3];
        basic_IO_qarm_mini_B.HILRead_o5 =
          basic_IO_qarm_mini_DW.HILRead_AnalogBuffer[4];
        rtb_Saturation4 = basic_IO_qarm_mini_DW.HILRead_OtherBuffer[0];
        rtb_Saturation3 = basic_IO_qarm_mini_DW.HILRead_OtherBuffer[1];
        rtb_Saturation2 = basic_IO_qarm_mini_DW.HILRead_OtherBuffer[2];
        rtb_Gain1 = basic_IO_qarm_mini_DW.HILRead_OtherBuffer[3];
        rtb_Switch4 = basic_IO_qarm_mini_DW.HILRead_OtherBuffer[4];
        basic_IO_qarm_mini_B.HILRead_o11 =
          basic_IO_qarm_mini_DW.HILRead_OtherBuffer[5];
        basic_IO_qarm_mini_B.HILRead_o12 =
          basic_IO_qarm_mini_DW.HILRead_OtherBuffer[6];
        basic_IO_qarm_mini_B.HILRead_o13 =
          basic_IO_qarm_mini_DW.HILRead_OtherBuffer[7];
        basic_IO_qarm_mini_B.HILRead_o14 =
          basic_IO_qarm_mini_DW.HILRead_OtherBuffer[8];
        basic_IO_qarm_mini_B.HILRead_o15 =
          basic_IO_qarm_mini_DW.HILRead_OtherBuffer[9];
      }
    }

    /* Bias: '<S9>/Bias21' incorporates:
     *  Bias: '<S9>/Bias17'
     */
    rtb_Bias21 = (rtb_Switch4 + basic_IO_qarm_mini_P.Bias17_Bias) +
      basic_IO_qarm_mini_P.Bias21_Bias;

    /* Bias: '<S9>/Bias16' */
    rtb_Bias16 = rtb_Gain1 + basic_IO_qarm_mini_P.Bias16_Bias;

    /* Bias: '<S9>/Bias18' incorporates:
     *  Bias: '<S9>/Bias14'
     */
    rtb_Switch4 = (rtb_Saturation3 + basic_IO_qarm_mini_P.Bias14_Bias) +
      basic_IO_qarm_mini_P.Bias18_Bias;

    /* Bias: '<S9>/Bias19' incorporates:
     *  Bias: '<S9>/Bias15'
     */
    rtb_Gain1 = (rtb_Saturation2 + basic_IO_qarm_mini_P.Bias15_Bias) +
      basic_IO_qarm_mini_P.Bias19_Bias;

    /* Bias: '<S9>/Bias20' */
    rtb_Saturation2 = rtb_Bias16 + basic_IO_qarm_mini_P.Bias20_Bias;

    /* Gain: '<S9>/Gain1' incorporates:
     *  Bias: '<S9>/Bias13'
     */
    basic_IO_qarm_mini_B.Gain1 = (rtb_Bias21 + basic_IO_qarm_mini_P.Bias13_Bias)
      * basic_IO_qarm_mini_P.Gain1_Gain;

    /* Bias: '<S9>/Bias12' incorporates:
     *  Bias: '<S9>/Bias11'
     */
    rtb_Saturation4 = (rtb_Saturation4 + basic_IO_qarm_mini_P.Bias11_Bias) +
      basic_IO_qarm_mini_P.Bias12_Bias;

    /* Saturate: '<S9>/Saturation6' */
    if (rtb_Saturation4 > basic_IO_qarm_mini_P.Saturation6_UpperSat[0]) {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[0] =
        basic_IO_qarm_mini_P.Saturation6_UpperSat[0];
    } else if (rtb_Saturation4 < basic_IO_qarm_mini_P.Saturation6_LowerSat[0]) {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[0] =
        basic_IO_qarm_mini_P.Saturation6_LowerSat[0];
    } else {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[0] = rtb_Saturation4;
    }

    if (rtb_Switch4 > basic_IO_qarm_mini_P.Saturation6_UpperSat[1]) {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[1] =
        basic_IO_qarm_mini_P.Saturation6_UpperSat[1];
    } else if (rtb_Switch4 < basic_IO_qarm_mini_P.Saturation6_LowerSat[1]) {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[1] =
        basic_IO_qarm_mini_P.Saturation6_LowerSat[1];
    } else {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[1] = rtb_Switch4;
    }

    if (rtb_Gain1 > basic_IO_qarm_mini_P.Saturation6_UpperSat[2]) {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[2] =
        basic_IO_qarm_mini_P.Saturation6_UpperSat[2];
    } else if (rtb_Gain1 < basic_IO_qarm_mini_P.Saturation6_LowerSat[2]) {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[2] =
        basic_IO_qarm_mini_P.Saturation6_LowerSat[2];
    } else {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[2] = rtb_Gain1;
    }

    if (rtb_Saturation2 > basic_IO_qarm_mini_P.Saturation6_UpperSat[3]) {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[3] =
        basic_IO_qarm_mini_P.Saturation6_UpperSat[3];
    } else if (rtb_Saturation2 < basic_IO_qarm_mini_P.Saturation6_LowerSat[3]) {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[3] =
        basic_IO_qarm_mini_P.Saturation6_LowerSat[3];
    } else {
      /* Saturate: '<S9>/Saturation6' */
      basic_IO_qarm_mini_B.Saturation6[3] = rtb_Saturation2;
    }

    /* End of Saturate: '<S9>/Saturation6' */
  }

  /* Integrator: '<S2>/Integrator' */
  /* Limited  Integrator  */
  if (basic_IO_qarm_mini_X.Integrator_CSTATE[0] >=
      basic_IO_qarm_mini_P.Integrator_UpperSat[0]) {
    basic_IO_qarm_mini_X.Integrator_CSTATE[0] =
      basic_IO_qarm_mini_P.Integrator_UpperSat[0];
  } else if (basic_IO_qarm_mini_X.Integrator_CSTATE[0] <=
             basic_IO_qarm_mini_P.Integrator_LowerSat[0]) {
    basic_IO_qarm_mini_X.Integrator_CSTATE[0] =
      basic_IO_qarm_mini_P.Integrator_LowerSat[0];
  }

  if (basic_IO_qarm_mini_X.Integrator_CSTATE[1] >=
      basic_IO_qarm_mini_P.Integrator_UpperSat[1]) {
    basic_IO_qarm_mini_X.Integrator_CSTATE[1] =
      basic_IO_qarm_mini_P.Integrator_UpperSat[1];
  } else if (basic_IO_qarm_mini_X.Integrator_CSTATE[1] <=
             basic_IO_qarm_mini_P.Integrator_LowerSat[1]) {
    basic_IO_qarm_mini_X.Integrator_CSTATE[1] =
      basic_IO_qarm_mini_P.Integrator_LowerSat[1];
  }

  if (basic_IO_qarm_mini_X.Integrator_CSTATE[2] >=
      basic_IO_qarm_mini_P.Integrator_UpperSat[2]) {
    basic_IO_qarm_mini_X.Integrator_CSTATE[2] =
      basic_IO_qarm_mini_P.Integrator_UpperSat[2];
  } else if (basic_IO_qarm_mini_X.Integrator_CSTATE[2] <=
             basic_IO_qarm_mini_P.Integrator_LowerSat[2]) {
    basic_IO_qarm_mini_X.Integrator_CSTATE[2] =
      basic_IO_qarm_mini_P.Integrator_LowerSat[2];
  }

  if (basic_IO_qarm_mini_X.Integrator_CSTATE[3] >=
      basic_IO_qarm_mini_P.Integrator_UpperSat[3]) {
    basic_IO_qarm_mini_X.Integrator_CSTATE[3] =
      basic_IO_qarm_mini_P.Integrator_UpperSat[3];
  } else if (basic_IO_qarm_mini_X.Integrator_CSTATE[3] <=
             basic_IO_qarm_mini_P.Integrator_LowerSat[3]) {
    basic_IO_qarm_mini_X.Integrator_CSTATE[3] =
      basic_IO_qarm_mini_P.Integrator_LowerSat[3];
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Select Position'
   */
  switch ((int32_T)basic_IO_qarm_mini_P.SelectPosition_Value) {
   case 1:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Integrator: '<S2>/Integrator'
     */
    basic_IO_qarm_mini_B.MultiportSwitch[0] =
      basic_IO_qarm_mini_X.Integrator_CSTATE[0];
    basic_IO_qarm_mini_B.MultiportSwitch[1] =
      basic_IO_qarm_mini_X.Integrator_CSTATE[1];
    basic_IO_qarm_mini_B.MultiportSwitch[2] =
      basic_IO_qarm_mini_X.Integrator_CSTATE[2];
    basic_IO_qarm_mini_B.MultiportSwitch[3] =
      basic_IO_qarm_mini_X.Integrator_CSTATE[3];
    break;

   case 2:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Constant: '<Root>/Straight up'
     */
    basic_IO_qarm_mini_B.MultiportSwitch[0] =
      basic_IO_qarm_mini_P.Straightup_Value[0];
    basic_IO_qarm_mini_B.MultiportSwitch[1] =
      basic_IO_qarm_mini_P.Straightup_Value[1];
    basic_IO_qarm_mini_B.MultiportSwitch[2] =
      basic_IO_qarm_mini_P.Straightup_Value[2];
    basic_IO_qarm_mini_B.MultiportSwitch[3] =
      basic_IO_qarm_mini_P.Straightup_Value[3];
    break;

   default:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Constant: '<Root>/Home'
     */
    basic_IO_qarm_mini_B.MultiportSwitch[0] = basic_IO_qarm_mini_P.Home_Value[0];
    basic_IO_qarm_mini_B.MultiportSwitch[1] = basic_IO_qarm_mini_P.Home_Value[1];
    basic_IO_qarm_mini_B.MultiportSwitch[2] = basic_IO_qarm_mini_P.Home_Value[2];
    basic_IO_qarm_mini_B.MultiportSwitch[3] = basic_IO_qarm_mini_P.Home_Value[3];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* Saturate: '<S9>/Saturation5' incorporates:
   *  MultiPortSwitch: '<Root>/Multiport Switch'
   */
  if (basic_IO_qarm_mini_B.MultiportSwitch[0] >
      basic_IO_qarm_mini_P.Saturation5_UpperSat[0]) {
    rtb_Saturation4 = basic_IO_qarm_mini_P.Saturation5_UpperSat[0];
  } else if (basic_IO_qarm_mini_B.MultiportSwitch[0] <
             basic_IO_qarm_mini_P.Saturation5_LowerSat[0]) {
    rtb_Saturation4 = basic_IO_qarm_mini_P.Saturation5_LowerSat[0];
  } else {
    rtb_Saturation4 = basic_IO_qarm_mini_B.MultiportSwitch[0];
  }

  /* Bias: '<S9>/Bias1' incorporates:
   *  Bias: '<S9>/Bias'
   *  Saturate: '<S9>/Saturation5'
   */
  basic_IO_qarm_mini_B.Bias1 = (rtb_Saturation4 + basic_IO_qarm_mini_P.Bias_Bias)
    + basic_IO_qarm_mini_P.Bias1_Bias;

  /* Saturate: '<S9>/Saturation5' incorporates:
   *  MultiPortSwitch: '<Root>/Multiport Switch'
   */
  if (basic_IO_qarm_mini_B.MultiportSwitch[1] >
      basic_IO_qarm_mini_P.Saturation5_UpperSat[1]) {
    rtb_Saturation4 = basic_IO_qarm_mini_P.Saturation5_UpperSat[1];
  } else if (basic_IO_qarm_mini_B.MultiportSwitch[1] <
             basic_IO_qarm_mini_P.Saturation5_LowerSat[1]) {
    rtb_Saturation4 = basic_IO_qarm_mini_P.Saturation5_LowerSat[1];
  } else {
    rtb_Saturation4 = basic_IO_qarm_mini_B.MultiportSwitch[1];
  }

  /* Bias: '<S9>/Bias6' incorporates:
   *  Bias: '<S9>/Bias2'
   *  Saturate: '<S9>/Saturation5'
   */
  basic_IO_qarm_mini_B.Bias6 = (rtb_Saturation4 +
    basic_IO_qarm_mini_P.Bias2_Bias) + basic_IO_qarm_mini_P.Bias6_Bias;

  /* Saturate: '<S9>/Saturation5' incorporates:
   *  MultiPortSwitch: '<Root>/Multiport Switch'
   */
  if (basic_IO_qarm_mini_B.MultiportSwitch[2] >
      basic_IO_qarm_mini_P.Saturation5_UpperSat[2]) {
    rtb_Saturation4 = basic_IO_qarm_mini_P.Saturation5_UpperSat[2];
  } else if (basic_IO_qarm_mini_B.MultiportSwitch[2] <
             basic_IO_qarm_mini_P.Saturation5_LowerSat[2]) {
    rtb_Saturation4 = basic_IO_qarm_mini_P.Saturation5_LowerSat[2];
  } else {
    rtb_Saturation4 = basic_IO_qarm_mini_B.MultiportSwitch[2];
  }

  /* Bias: '<S9>/Bias7' incorporates:
   *  Bias: '<S9>/Bias3'
   *  Saturate: '<S9>/Saturation5'
   */
  basic_IO_qarm_mini_B.Bias7 = (rtb_Saturation4 +
    basic_IO_qarm_mini_P.Bias3_Bias) + basic_IO_qarm_mini_P.Bias7_Bias;

  /* Saturate: '<S9>/Saturation5' incorporates:
   *  MultiPortSwitch: '<Root>/Multiport Switch'
   */
  if (basic_IO_qarm_mini_B.MultiportSwitch[3] >
      basic_IO_qarm_mini_P.Saturation5_UpperSat[3]) {
    rtb_Saturation4 = basic_IO_qarm_mini_P.Saturation5_UpperSat[3];
  } else if (basic_IO_qarm_mini_B.MultiportSwitch[3] <
             basic_IO_qarm_mini_P.Saturation5_LowerSat[3]) {
    rtb_Saturation4 = basic_IO_qarm_mini_P.Saturation5_LowerSat[3];
  } else {
    rtb_Saturation4 = basic_IO_qarm_mini_B.MultiportSwitch[3];
  }

  /* Bias: '<S9>/Bias8' incorporates:
   *  Bias: '<S9>/Bias4'
   *  Saturate: '<S9>/Saturation5'
   */
  basic_IO_qarm_mini_B.Bias8 = (rtb_Saturation4 +
    basic_IO_qarm_mini_P.Bias4_Bias) + basic_IO_qarm_mini_P.Bias8_Bias;

  /* Integrator: '<S2>/Integrator1' */
  /* Limited  Integrator  */
  if (basic_IO_qarm_mini_X.Integrator1_CSTATE >=
      basic_IO_qarm_mini_P.Integrator1_UpperSat) {
    basic_IO_qarm_mini_X.Integrator1_CSTATE =
      basic_IO_qarm_mini_P.Integrator1_UpperSat;
  } else if (basic_IO_qarm_mini_X.Integrator1_CSTATE <=
             basic_IO_qarm_mini_P.Integrator1_LowerSat) {
    basic_IO_qarm_mini_X.Integrator1_CSTATE =
      basic_IO_qarm_mini_P.Integrator1_LowerSat;
  }

  /* Integrator: '<S2>/Integrator1' */
  basic_IO_qarm_mini_B.Integrator1 = basic_IO_qarm_mini_X.Integrator1_CSTATE;

  /* Bias: '<S9>/Bias9' incorporates:
   *  Bias: '<S9>/Bias10'
   *  Bias: '<S9>/Bias5'
   *  Gain: '<S9>/Gain'
   */
  basic_IO_qarm_mini_B.Bias9 = ((basic_IO_qarm_mini_P.Gain_Gain *
    basic_IO_qarm_mini_B.Integrator1 + basic_IO_qarm_mini_P.Bias10_Bias) +
    basic_IO_qarm_mini_P.Bias5_Bias) + basic_IO_qarm_mini_P.Bias9_Bias;
  if (rtmIsMajorTimeStep(basic_IO_qarm_mini_M)) {
    /* Saturate: '<S9>/Saturation' incorporates:
     *  Constant: '<Root>/Constant6'
     */
    if (basic_IO_qarm_mini_P.Constant6_Value[0] >
        basic_IO_qarm_mini_P.Saturation_UpperSat) {
      rtb_Switch4 = basic_IO_qarm_mini_P.Saturation_UpperSat;
    } else if (basic_IO_qarm_mini_P.Constant6_Value[0] <
               basic_IO_qarm_mini_P.Saturation_LowerSat) {
      rtb_Switch4 = basic_IO_qarm_mini_P.Saturation_LowerSat;
    } else {
      rtb_Switch4 = basic_IO_qarm_mini_P.Constant6_Value[0];
    }

    /* End of Saturate: '<S9>/Saturation' */

    /* Saturate: '<S9>/Saturation1' incorporates:
     *  Constant: '<Root>/Constant6'
     */
    if (basic_IO_qarm_mini_P.Constant6_Value[1] >
        basic_IO_qarm_mini_P.Saturation1_UpperSat) {
      rtb_Gain1 = basic_IO_qarm_mini_P.Saturation1_UpperSat;
    } else if (basic_IO_qarm_mini_P.Constant6_Value[1] <
               basic_IO_qarm_mini_P.Saturation1_LowerSat) {
      rtb_Gain1 = basic_IO_qarm_mini_P.Saturation1_LowerSat;
    } else {
      rtb_Gain1 = basic_IO_qarm_mini_P.Constant6_Value[1];
    }

    /* End of Saturate: '<S9>/Saturation1' */

    /* Saturate: '<S9>/Saturation2' incorporates:
     *  Constant: '<Root>/Constant6'
     */
    if (basic_IO_qarm_mini_P.Constant6_Value[2] >
        basic_IO_qarm_mini_P.Saturation2_UpperSat) {
      rtb_Saturation2 = basic_IO_qarm_mini_P.Saturation2_UpperSat;
    } else if (basic_IO_qarm_mini_P.Constant6_Value[2] <
               basic_IO_qarm_mini_P.Saturation2_LowerSat) {
      rtb_Saturation2 = basic_IO_qarm_mini_P.Saturation2_LowerSat;
    } else {
      rtb_Saturation2 = basic_IO_qarm_mini_P.Constant6_Value[2];
    }

    /* End of Saturate: '<S9>/Saturation2' */

    /* Saturate: '<S9>/Saturation3' incorporates:
     *  Constant: '<Root>/Constant6'
     */
    if (basic_IO_qarm_mini_P.Constant6_Value[3] >
        basic_IO_qarm_mini_P.Saturation3_UpperSat) {
      rtb_Saturation3 = basic_IO_qarm_mini_P.Saturation3_UpperSat;
    } else if (basic_IO_qarm_mini_P.Constant6_Value[3] <
               basic_IO_qarm_mini_P.Saturation3_LowerSat) {
      rtb_Saturation3 = basic_IO_qarm_mini_P.Saturation3_LowerSat;
    } else {
      rtb_Saturation3 = basic_IO_qarm_mini_P.Constant6_Value[3];
    }

    /* End of Saturate: '<S9>/Saturation3' */

    /* Saturate: '<S9>/Saturation4' incorporates:
     *  Constant: '<Root>/Constant7'
     */
    if (basic_IO_qarm_mini_P.Constant7_Value >
        basic_IO_qarm_mini_P.Saturation4_UpperSat) {
      rtb_Saturation4 = basic_IO_qarm_mini_P.Saturation4_UpperSat;
    } else if (basic_IO_qarm_mini_P.Constant7_Value <
               basic_IO_qarm_mini_P.Saturation4_LowerSat) {
      rtb_Saturation4 = basic_IO_qarm_mini_P.Saturation4_LowerSat;
    } else {
      rtb_Saturation4 = basic_IO_qarm_mini_P.Constant7_Value;
    }

    /* End of Saturate: '<S9>/Saturation4' */

    /* S-Function (hil_write_block): '<S9>/HIL Write' */

    /* S-Function Block: basic_IO_qarm_mini/Qarm Mini Manipulator/Hardware Layer/HIL Write (hil_write_block) */
    {
      t_error result;
      basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[0] = basic_IO_qarm_mini_B.Bias1;
      basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[1] = basic_IO_qarm_mini_B.Bias6;
      basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[2] = basic_IO_qarm_mini_B.Bias7;
      basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[3] = basic_IO_qarm_mini_B.Bias8;
      basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[4] = basic_IO_qarm_mini_B.Bias9;
      basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[5] = rtb_Switch4;
      basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[6] = rtb_Gain1;
      basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[7] = rtb_Saturation2;
      basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[8] = rtb_Saturation3;
      basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[9] = rtb_Saturation4;
      result = hil_write(basic_IO_qarm_mini_DW.HILInitialize_Card,
                         NULL, 0U,
                         NULL, 0U,
                         NULL, 0U,
                         basic_IO_qarm_mini_P.HILWrite_other_channels, 10U,
                         NULL,
                         NULL,
                         NULL,
                         &basic_IO_qarm_mini_DW.HILWrite_OtherBuffer[0]
                         );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
      }
    }

    /* SignalConversion generated from: '<S9>/HIL Set Property' incorporates:
     *  Constant: '<S9>/Constant'
     *  Constant: '<S9>/Constant1'
     *  Constant: '<S9>/Constant2'
     *  Constant: '<S9>/Constant3'
     *  Constant: '<S9>/Constant4'
     */
    for (i = 0; i < 5; i++) {
      rtb_TmpSignalConversionAtHILSet[i] =
        basic_IO_qarm_mini_P.Constant_Value_n[i];
      rtb_TmpSignalConversionAtHILSet[i + 5] =
        basic_IO_qarm_mini_P.Constant1_Value_m[i];
      rtb_TmpSignalConversionAtHILSet[i + 10] =
        basic_IO_qarm_mini_P.Constant2_Value_a[i];
      rtb_TmpSignalConversionAtHILSet[i + 15] =
        basic_IO_qarm_mini_P.Constant3_Value_f[i];
      rtb_TmpSignalConversionAtHILSet[i + 20] =
        basic_IO_qarm_mini_P.Constant4_Value_e[i];
    }

    /* End of SignalConversion generated from: '<S9>/HIL Set Property' */

    /* S-Function (hil_set_property_block): '<S9>/HIL Set Property' */

    /* S-Function Block: basic_IO_qarm_mini/Qarm Mini Manipulator/Hardware Layer/HIL Set Property (hil_set_property_block) */
    {
      t_error result;
      result = hil_set_double_property(basic_IO_qarm_mini_DW.HILInitialize_Card,
        (t_hil_double_property *)
        basic_IO_qarm_mini_P.HILSetProperty_PropertyCodes, 25U,
        &rtb_TmpSignalConversionAtHILSet[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
      }
    }

    /* SignalConversion generated from: '<S4>/Stream Server' */
    rtb_TmpSignalConversionAtStream[0] = basic_IO_qarm_mini_B.Saturation6[0];
    rtb_TmpSignalConversionAtStream[1] = basic_IO_qarm_mini_B.Saturation6[1];
    rtb_TmpSignalConversionAtStream[2] = basic_IO_qarm_mini_B.Saturation6[2];
    rtb_TmpSignalConversionAtStream[3] = basic_IO_qarm_mini_B.Saturation6[3];
    rtb_TmpSignalConversionAtStream[4] = basic_IO_qarm_mini_B.Gain1;
    rtb_TmpSignalConversionAtStream[5] = basic_IO_qarm_mini_B.HILRead_o11;
    rtb_TmpSignalConversionAtStream[6] = basic_IO_qarm_mini_B.HILRead_o12;
    rtb_TmpSignalConversionAtStream[7] = basic_IO_qarm_mini_B.HILRead_o13;
    rtb_TmpSignalConversionAtStream[8] = basic_IO_qarm_mini_B.HILRead_o14;
    rtb_TmpSignalConversionAtStream[9] = basic_IO_qarm_mini_B.HILRead_o15;
    rtb_TmpSignalConversionAtStream[10] = basic_IO_qarm_mini_B.HILRead_o1;
    rtb_TmpSignalConversionAtStream[11] = basic_IO_qarm_mini_B.HILRead_o2;
    rtb_TmpSignalConversionAtStream[12] = basic_IO_qarm_mini_B.HILRead_o3;
    rtb_TmpSignalConversionAtStream[13] = basic_IO_qarm_mini_B.HILRead_o4;
    rtb_TmpSignalConversionAtStream[14] = basic_IO_qarm_mini_B.HILRead_o5;

    /* Memory: '<S4>/Memory' */
    rtb_Memory = basic_IO_qarm_mini_DW.Memory_PreviousInput;

    /* S-Function (stream_server_block): '<S4>/Stream Server' */

    /* S-Function Block: basic_IO_qarm_mini/QBot Hardware/Stream Server (stream_server_block) */
    {
      t_pstream_state state;
      if (rtb_Memory) {
        pstream_send(basic_IO_qarm_mini_DW.StreamServer_Stream,
                     &rtb_TmpSignalConversionAtStream[0]);
      }

      pstream_receive(basic_IO_qarm_mini_DW.StreamServer_Stream,
                      &basic_IO_qarm_mini_B.StreamServer_o4[0]);
      pstream_get_state(basic_IO_qarm_mini_DW.StreamServer_Stream, &state);
      rtb_StreamServer_o1 = state;
    }

    /* Gain: '<S2>/Gain' */
    rtb_Switch4 = basic_IO_qarm_mini_P.Gain_Gain_c *
      basic_IO_qarm_mini_B.StreamServer_o4[6];

    /* Gain: '<S2>/Gain1' */
    rtb_Gain1 = basic_IO_qarm_mini_P.Gain1_Gain_n *
      basic_IO_qarm_mini_B.StreamServer_o4[7];

    /* Gain: '<S2>/Gripper Speed (%//s)' incorporates:
     *  Sum: '<S2>/Add'
     */
    basic_IO_qarm_mini_B.GripperSpeeds = (rtb_Switch4 + rtb_Gain1) *
      basic_IO_qarm_mini_P.GripperSpeeds_Gain;

    /* Switch: '<S2>/Switch4' */
    if (basic_IO_qarm_mini_B.StreamServer_o4[0] >
        basic_IO_qarm_mini_P.Switch4_Threshold) {
      rtb_Switch4 = basic_IO_qarm_mini_B.StreamServer_o4[5];
    } else {
      rtb_Switch4 = basic_IO_qarm_mini_B.StreamServer_o4[4];
    }

    /* End of Switch: '<S2>/Switch4' */

    /* Gain: '<S2>/Joint Speed  (rad//s)' */
    rtb_Saturation4 = basic_IO_qarm_mini_P.JointSpeedrads_Gain * rtb_Switch4;

    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Switch: '<S2>/Switch1'
     *  Switch: '<S2>/Switch2'
     *  Switch: '<S2>/Switch3'
     */
    if (basic_IO_qarm_mini_B.StreamServer_o4[0] >
        basic_IO_qarm_mini_P.Switch_Threshold) {
      rtb_Saturation2 = basic_IO_qarm_mini_P.Constant_Value[0];
      rtb_Gain1 = basic_IO_qarm_mini_P.Constant_Value[1];
      rtb_Switch4 = basic_IO_qarm_mini_P.Constant_Value[2];
      rtb_Saturation3 = basic_IO_qarm_mini_P.Constant_Value[3];
    } else if (basic_IO_qarm_mini_B.StreamServer_o4[1] >
               basic_IO_qarm_mini_P.Switch1_Threshold) {
      /* Switch: '<S2>/Switch1' incorporates:
       *  Constant: '<S2>/Constant1'
       */
      rtb_Saturation2 = basic_IO_qarm_mini_P.Constant1_Value[0];
      rtb_Gain1 = basic_IO_qarm_mini_P.Constant1_Value[1];
      rtb_Switch4 = basic_IO_qarm_mini_P.Constant1_Value[2];
      rtb_Saturation3 = basic_IO_qarm_mini_P.Constant1_Value[3];
    } else if (basic_IO_qarm_mini_B.StreamServer_o4[2] >
               basic_IO_qarm_mini_P.Switch2_Threshold) {
      /* Switch: '<S2>/Switch2' incorporates:
       *  Constant: '<S2>/Constant2'
       *  Switch: '<S2>/Switch1'
       */
      rtb_Saturation2 = basic_IO_qarm_mini_P.Constant2_Value[0];
      rtb_Gain1 = basic_IO_qarm_mini_P.Constant2_Value[1];
      rtb_Switch4 = basic_IO_qarm_mini_P.Constant2_Value[2];
      rtb_Saturation3 = basic_IO_qarm_mini_P.Constant2_Value[3];
    } else if (basic_IO_qarm_mini_B.StreamServer_o4[3] >
               basic_IO_qarm_mini_P.Switch3_Threshold) {
      /* Switch: '<S2>/Switch3' incorporates:
       *  Constant: '<S2>/Constant3'
       *  Switch: '<S2>/Switch1'
       *  Switch: '<S2>/Switch2'
       */
      rtb_Saturation2 = basic_IO_qarm_mini_P.Constant3_Value[0];
      rtb_Gain1 = basic_IO_qarm_mini_P.Constant3_Value[1];
      rtb_Switch4 = basic_IO_qarm_mini_P.Constant3_Value[2];
      rtb_Saturation3 = basic_IO_qarm_mini_P.Constant3_Value[3];
    } else {
      /* Switch: '<S2>/Switch2' incorporates:
       *  Constant: '<S2>/Constant4'
       *  Switch: '<S2>/Switch1'
       *  Switch: '<S2>/Switch3'
       */
      rtb_Saturation2 = basic_IO_qarm_mini_P.Constant4_Value[0];
      rtb_Gain1 = basic_IO_qarm_mini_P.Constant4_Value[1];
      rtb_Switch4 = basic_IO_qarm_mini_P.Constant4_Value[2];
      rtb_Saturation3 = basic_IO_qarm_mini_P.Constant4_Value[3];
    }

    /* End of Switch: '<S2>/Switch' */

    /* Product: '<S2>/Product' */
    basic_IO_qarm_mini_B.Product[0] = rtb_Saturation2 * rtb_Saturation4;
    basic_IO_qarm_mini_B.Product[1] = rtb_Gain1 * rtb_Saturation4;
    basic_IO_qarm_mini_B.Product[2] = rtb_Switch4 * rtb_Saturation4;
    basic_IO_qarm_mini_B.Product[3] = rtb_Saturation3 * rtb_Saturation4;

    /* RelationalOperator: '<S8>/Compare' incorporates:
     *  Constant: '<S8>/Constant'
     */
    basic_IO_qarm_mini_B.Compare = (rtb_StreamServer_o1 ==
      basic_IO_qarm_mini_P.CompareToConstant_const);

    /* S-Function (video_capture_block): '<S1>/Video Capture' */
    /* S-Function Block: basic_IO_qarm_mini/Image Acquisition & Display/Video Capture (video_capture_block) */
    {
      t_error result;
      t_video_capture_attribute local_attr[18] = {
        { basic_IO_qarm_mini_P.VideoCapture_Brightness,
          VIDEO_CAPTURE_PROPERTY_BRIGHTNESS, (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Contrast,
          VIDEO_CAPTURE_PROPERTY_CONTRAST, (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Hue, VIDEO_CAPTURE_PROPERTY_HUE,
          (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Saturation,
          VIDEO_CAPTURE_PROPERTY_SATURATION, (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Sharpness,
          VIDEO_CAPTURE_PROPERTY_SHARPNESS, (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Gamma,
          VIDEO_CAPTURE_PROPERTY_GAMMA, (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_ColorEnable,
          VIDEO_CAPTURE_PROPERTY_COLOREFFECT, (t_boolean) 0, true }
        , { basic_IO_qarm_mini_P.VideoCapture_WhiteBalance,
          VIDEO_CAPTURE_PROPERTY_WHITEBALANCE, (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_BacklightCompensat,
          VIDEO_CAPTURE_PROPERTY_BACKLIGHTCOMPENSATION, (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Gain, VIDEO_CAPTURE_PROPERTY_GAIN,
          (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Pan, VIDEO_CAPTURE_PROPERTY_PAN,
          (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Tilt, VIDEO_CAPTURE_PROPERTY_TILT,
          (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Roll, VIDEO_CAPTURE_PROPERTY_ROLL,
          (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Zoom, VIDEO_CAPTURE_PROPERTY_ZOOM,
          (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Exposure,
          VIDEO_CAPTURE_PROPERTY_EXPOSURE, (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Iris, VIDEO_CAPTURE_PROPERTY_IRIS,
          (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Focus,
          VIDEO_CAPTURE_PROPERTY_FOCUS, (t_boolean) 0, false }
        , { basic_IO_qarm_mini_P.VideoCapture_Mirror,
          VIDEO_CAPTURE_PROPERTY_MIRROR, (t_boolean) 0, true }
      };

      video_capture_set_property(basic_IO_qarm_mini_DW.VideoCapture_VideoCapture,
        local_attr, ARRAY_LENGTH(local_attr));
      result = video_capture_read
        (basic_IO_qarm_mini_DW.VideoCapture_VideoCapture,
         &basic_IO_qarm_mini_B.VideoCapture_o1[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
      }
    }

    /* S-Function (image_compress_block): '<S7>/Image Compress' */

    /* S-Function Block: basic_IO_qarm_mini/Image Acquisition & Display/Image Processing/Image Compress (image_compress_block) */
    {
      t_error result = 0;
      size_t image_size = 0;
      result = qjpeg_compress_start(basic_IO_qarm_mini_DW.ImageCompress_Compress,
        true);
      if (result == 0) {
        result = qjpeg_compress_write_image_uint8
          (basic_IO_qarm_mini_DW.ImageCompress_Compress,
           &basic_IO_qarm_mini_B.VideoCapture_o1[0]);
        qjpeg_compress_stop(basic_IO_qarm_mini_DW.ImageCompress_Compress);

        /* Get the final size of the compressed image */
        if (result >= 0) {
          result = qjpeg_compress_get_fixed_memory_destination_size
            (basic_IO_qarm_mini_DW.ImageCompress_Compress, &image_size);
        }
      }

      /* Set the dimensions of the output signal based on the size of the compressed image */
      basic_IO_qarm_mini_DW.ImageCompress_DIMS1 = (int) image_size;
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
      }
    }

    /* S-Function (channel_block): '<S7>/Channel' */

    /* S-Function Block: basic_IO_qarm_mini/Image Acquisition & Display/Image Processing/Channel (channel_block) */
    {
      if (rtExtModeQuarcIsConnected()) {
        struct channel_info {
          t_channel_header header;
        } info;

        size_t width = 1;
        basic_IO_qarm_mini_B.Channel = CHANNEL_0;
        info.header.data_type_id = 3;
        info.header.channel = 0;
        info.header.flags = CHANNEL_FLAG_VARIABLE_SIZE;
        info.header.num_dimensions = 1;
        width *= basic_IO_qarm_mini_DW.ImageCompress_DIMS1;
        info.header.dimension[0] = basic_IO_qarm_mini_DW.ImageCompress_DIMS1;
        channel_fifo_add((t_channel_fifo)
                         basic_IO_qarm_mini_DW.Channel_PWORK.Fifo, &info.header,
                         &basic_IO_qarm_mini_B.ImageCompress[0], width * sizeof
                         (uint8_T));
      }
    }
  }
}

/* Model update function */
void basic_IO_qarm_mini_update(void)
{
  if (rtmIsMajorTimeStep(basic_IO_qarm_mini_M)) {
    /* Update for Memory: '<S4>/Memory' */
    basic_IO_qarm_mini_DW.Memory_PreviousInput = basic_IO_qarm_mini_B.Compare;
  }

  if (rtmIsMajorTimeStep(basic_IO_qarm_mini_M)) {
    rt_ertODEUpdateContinuousStates(&basic_IO_qarm_mini_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++basic_IO_qarm_mini_M->Timing.clockTick0)) {
    ++basic_IO_qarm_mini_M->Timing.clockTickH0;
  }

  basic_IO_qarm_mini_M->Timing.t[0] = rtsiGetSolverStopTime
    (&basic_IO_qarm_mini_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.033333333333333333s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++basic_IO_qarm_mini_M->Timing.clockTick1)) {
      ++basic_IO_qarm_mini_M->Timing.clockTickH1;
    }

    basic_IO_qarm_mini_M->Timing.t[1] = basic_IO_qarm_mini_M->Timing.clockTick1 *
      basic_IO_qarm_mini_M->Timing.stepSize1 +
      basic_IO_qarm_mini_M->Timing.clockTickH1 *
      basic_IO_qarm_mini_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void basic_IO_qarm_mini_derivatives(void)
{
  XDot_basic_IO_qarm_mini_T *_rtXdot;
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot_basic_IO_qarm_mini_T *) basic_IO_qarm_mini_M->derivs);

  /* Derivatives for Integrator: '<S2>/Integrator' */
  lsat = (basic_IO_qarm_mini_X.Integrator_CSTATE[0] <=
          basic_IO_qarm_mini_P.Integrator_LowerSat[0]);
  usat = (basic_IO_qarm_mini_X.Integrator_CSTATE[0] >=
          basic_IO_qarm_mini_P.Integrator_UpperSat[0]);
  if (((!lsat) && (!usat)) || (lsat && (basic_IO_qarm_mini_B.Product[0] > 0.0)) ||
      (usat && (basic_IO_qarm_mini_B.Product[0] < 0.0))) {
    _rtXdot->Integrator_CSTATE[0] = basic_IO_qarm_mini_B.Product[0];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE[0] = 0.0;
  }

  lsat = (basic_IO_qarm_mini_X.Integrator_CSTATE[1] <=
          basic_IO_qarm_mini_P.Integrator_LowerSat[1]);
  usat = (basic_IO_qarm_mini_X.Integrator_CSTATE[1] >=
          basic_IO_qarm_mini_P.Integrator_UpperSat[1]);
  if (((!lsat) && (!usat)) || (lsat && (basic_IO_qarm_mini_B.Product[1] > 0.0)) ||
      (usat && (basic_IO_qarm_mini_B.Product[1] < 0.0))) {
    _rtXdot->Integrator_CSTATE[1] = basic_IO_qarm_mini_B.Product[1];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE[1] = 0.0;
  }

  lsat = (basic_IO_qarm_mini_X.Integrator_CSTATE[2] <=
          basic_IO_qarm_mini_P.Integrator_LowerSat[2]);
  usat = (basic_IO_qarm_mini_X.Integrator_CSTATE[2] >=
          basic_IO_qarm_mini_P.Integrator_UpperSat[2]);
  if (((!lsat) && (!usat)) || (lsat && (basic_IO_qarm_mini_B.Product[2] > 0.0)) ||
      (usat && (basic_IO_qarm_mini_B.Product[2] < 0.0))) {
    _rtXdot->Integrator_CSTATE[2] = basic_IO_qarm_mini_B.Product[2];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE[2] = 0.0;
  }

  lsat = (basic_IO_qarm_mini_X.Integrator_CSTATE[3] <=
          basic_IO_qarm_mini_P.Integrator_LowerSat[3]);
  usat = (basic_IO_qarm_mini_X.Integrator_CSTATE[3] >=
          basic_IO_qarm_mini_P.Integrator_UpperSat[3]);
  if (((!lsat) && (!usat)) || (lsat && (basic_IO_qarm_mini_B.Product[3] > 0.0)) ||
      (usat && (basic_IO_qarm_mini_B.Product[3] < 0.0))) {
    _rtXdot->Integrator_CSTATE[3] = basic_IO_qarm_mini_B.Product[3];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE[3] = 0.0;
  }

  /* End of Derivatives for Integrator: '<S2>/Integrator' */

  /* Derivatives for Integrator: '<S2>/Integrator1' */
  lsat = (basic_IO_qarm_mini_X.Integrator1_CSTATE <=
          basic_IO_qarm_mini_P.Integrator1_LowerSat);
  usat = (basic_IO_qarm_mini_X.Integrator1_CSTATE >=
          basic_IO_qarm_mini_P.Integrator1_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (basic_IO_qarm_mini_B.GripperSpeeds > 0.0))
      || (usat && (basic_IO_qarm_mini_B.GripperSpeeds < 0.0))) {
    _rtXdot->Integrator1_CSTATE = basic_IO_qarm_mini_B.GripperSpeeds;
  } else {
    /* in saturation */
    _rtXdot->Integrator1_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<S2>/Integrator1' */
}

/* Model initialize function */
void basic_IO_qarm_mini_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S9>/HIL Initialize' */

  /* S-Function Block: basic_IO_qarm_mini/Qarm Mini Manipulator/Hardware Layer/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qarm_mini", "0",
                      &basic_IO_qarm_mini_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options
      (basic_IO_qarm_mini_DW.HILInitialize_Card,
       "j0_mode=0;j1_mode=0;j2_mode=0;j3_mode=0;gripper_mode=0;j0_profile_velocity=6.2832;j0_profile_acceleration=6.2832;j1_profile_velocity=6.2832;j1_profile_acceleration=6.2832;j2_profile_velocity=6.2832;j2_profile_acceleration=6.2832;j3_profile_velocity=6.2832;j3_profile_acceleration=6.2832;gripper_profile_velocity=6.2832;gripper_profile_acceleration=6.2832;",
       356);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(basic_IO_qarm_mini_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
      return;
    }

    if ((basic_IO_qarm_mini_P.HILInitialize_AIPStart && !is_switching) ||
        (basic_IO_qarm_mini_P.HILInitialize_AIPEnter && is_switching)) {
      result = hil_set_analog_input_ranges
        (basic_IO_qarm_mini_DW.HILInitialize_Card,
         basic_IO_qarm_mini_P.HILInitialize_AIChannels, 5U,
         basic_IO_qarm_mini_P.HILInitialize_AILow,
         basic_IO_qarm_mini_P.HILInitialize_AIHigh);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (hil_set_property_block): '<S9>/HIL Set Property' */

  /* S-Function Block: basic_IO_qarm_mini/Qarm Mini Manipulator/Hardware Layer/HIL Set Property (hil_set_property_block) */
  {
  }

  /* Start for S-Function (stream_server_block): '<S4>/Stream Server' */

  /* S-Function Block: basic_IO_qarm_mini/QBot Hardware/Stream Server (stream_server_block) */
  {
    qthread_attr_t send_thread_attributes;
    qthread_attr_t receive_thread_attributes;
    struct qsched_param scheduling_parameters;
    int min_priority = qsched_get_priority_min(QSCHED_FIFO);
    int max_priority = qsched_get_priority_max(QSCHED_FIFO);
    t_pstream_options options;
    t_error result;
    basic_IO_qarm_mini_DW.StreamServer_Stream = NULL;

    {
      int_T i1;
      real_T *y3 = &basic_IO_qarm_mini_B.StreamServer_o4[0];
      const real_T *p_StreamServer_default_value =
        basic_IO_qarm_mini_P.StreamServer_default_value;
      for (i1=0; i1 < 8; i1++) {
        y3[i1] = p_StreamServer_default_value[i1];
      }
    }

    result = 0;
    options.size = sizeof(options);
    options.flags = basic_IO_qarm_mini_P.StreamServer_Endian &
      PSTREAM_FLAG_ENDIAN_MASK;
    if (basic_IO_qarm_mini_P.StreamServer_Implementation ==
        STREAM_SERVER_IMPLEMENTATION_THREAD) {
      options.flags |= PSTREAM_FLAG_MULTITHREADED;
    }

    if (basic_IO_qarm_mini_P.StreamServer_Optimize ==
        STREAM_SERVER_OPTIMIZE_LATENCY) {
      options.flags |= PSTREAM_FLAG_MINIMIZE_LATENCY;
    }

    options.flags |= PSTREAM_FLAG_SEND_MOST_RECENT;
    options.flags |= PSTREAM_FLAG_RECEIVE_MOST_RECENT;
    options.send_unit_size = 8;
    options.num_send_units = 15;
    options.send_buffer_size = basic_IO_qarm_mini_P.StreamServer_SndSize;
    options.send_fifo_size = basic_IO_qarm_mini_P.StreamServer_SndFIFO;
    options.num_send_dimensions = 0;
    options.max_send_dimensions = NULL;
    if (basic_IO_qarm_mini_P.StreamServer_SndPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (basic_IO_qarm_mini_P.StreamServer_SndPriority > max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        basic_IO_qarm_mini_P.StreamServer_SndPriority;
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
          rtmSetErrorStatus(basic_IO_qarm_mini_M,
                            "Unable to set scheduling inheritance for Stream Client sending thread");
        }
      } else {
        rtmSetErrorStatus(basic_IO_qarm_mini_M,
                          "The specified thread priority for the Stream Client sending thread is not valid for this target");
      }
    } else {
      rtmSetErrorStatus(basic_IO_qarm_mini_M,
                        "Unable to set scheduling policy for Stream Client sending thread");
    }

    options.send_thread_attributes = &send_thread_attributes;
    options.receive_unit_size = 8;
    options.num_receive_units = 8;
    options.receive_buffer_size = basic_IO_qarm_mini_P.StreamServer_RcvSize;
    options.receive_fifo_size = basic_IO_qarm_mini_P.StreamServer_RcvFIFO;
    options.num_receive_dimensions = 0;
    options.max_receive_dimensions = NULL;
    if (basic_IO_qarm_mini_P.StreamServer_RcvPriority < min_priority) {
      scheduling_parameters.sched_priority = min_priority;
    } else if (basic_IO_qarm_mini_P.StreamServer_RcvPriority > max_priority) {
      scheduling_parameters.sched_priority = max_priority;
    } else {
      scheduling_parameters.sched_priority =
        basic_IO_qarm_mini_P.StreamServer_RcvPriority;
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
            rtmSetErrorStatus(basic_IO_qarm_mini_M,
                              "Unable to set scheduling inheritance for Stream Client receiving thread");
          }
        } else {
          rtmSetErrorStatus(basic_IO_qarm_mini_M,
                            "The specified thread priority for the Stream Client receiving thread is not valid for this target");
        }
      } else {
        rtmSetErrorStatus(basic_IO_qarm_mini_M,
                          "Unable to set scheduling policy for Stream Client receiving thread");
      }
    }

    options.receive_thread_attributes = &receive_thread_attributes;
    if (result == 0) {
      result = pstream_listen((const char *)
        basic_IO_qarm_mini_P.StreamServer_URI, &options,
        &basic_IO_qarm_mini_DW.StreamServer_Stream);
      if (result < 0 && result != -QERR_WOULD_BLOCK) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
      }
    }

    qthread_attr_destroy(&send_thread_attributes);
    qthread_attr_destroy(&receive_thread_attributes);
  }

  /* Start for S-Function (video_capture_block): '<S1>/Video Capture' */
  {
    t_video_capture_attribute local_attr[18] = {
      { basic_IO_qarm_mini_P.VideoCapture_Brightness,
        VIDEO_CAPTURE_PROPERTY_BRIGHTNESS, (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Contrast,
        VIDEO_CAPTURE_PROPERTY_CONTRAST, (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Hue, VIDEO_CAPTURE_PROPERTY_HUE,
        (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Saturation,
        VIDEO_CAPTURE_PROPERTY_SATURATION, (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Sharpness,
        VIDEO_CAPTURE_PROPERTY_SHARPNESS, (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Gamma, VIDEO_CAPTURE_PROPERTY_GAMMA,
        (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_ColorEnable,
        VIDEO_CAPTURE_PROPERTY_COLOREFFECT, (t_boolean) 0, true }
      , { basic_IO_qarm_mini_P.VideoCapture_WhiteBalance,
        VIDEO_CAPTURE_PROPERTY_WHITEBALANCE, (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_BacklightCompensat,
        VIDEO_CAPTURE_PROPERTY_BACKLIGHTCOMPENSATION, (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Gain, VIDEO_CAPTURE_PROPERTY_GAIN,
        (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Pan, VIDEO_CAPTURE_PROPERTY_PAN,
        (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Tilt, VIDEO_CAPTURE_PROPERTY_TILT,
        (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Roll, VIDEO_CAPTURE_PROPERTY_ROLL,
        (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Zoom, VIDEO_CAPTURE_PROPERTY_ZOOM,
        (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Exposure,
        VIDEO_CAPTURE_PROPERTY_EXPOSURE, (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Iris, VIDEO_CAPTURE_PROPERTY_IRIS,
        (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Focus, VIDEO_CAPTURE_PROPERTY_FOCUS,
        (t_boolean) 0, false }
      , { basic_IO_qarm_mini_P.VideoCapture_Mirror,
        VIDEO_CAPTURE_PROPERTY_MIRROR, (t_boolean) 0, true }
    };

    t_error result;

    /*printf("Opening camera video://localhost:7\n"); fflush(stdout);*/
    result = video_capture_open("video://localhost:7", 30.0, 640U, 360U,
      IMAGE_FORMAT_COL_MAJOR_PLANAR_RGB, IMAGE_DATA_TYPE_UINT8,
      &basic_IO_qarm_mini_DW.VideoCapture_VideoCapture,
      local_attr, 18
      );
    if (result >= 0) {
      result = video_capture_start
        (basic_IO_qarm_mini_DW.VideoCapture_VideoCapture);
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
    }
  }

  /* Start for S-Function (image_compress_block): '<S7>/Image Compress' */

  /* S-Function Block: basic_IO_qarm_mini/Image Acquisition & Display/Image Processing/Image Compress (image_compress_block) */
  {
    t_error result = qjpeg_compress_open
      (&basic_IO_qarm_mini_DW.ImageCompress_Compress);
    if (result == 0) {
      do {
        result = qjpeg_compress_set_image_properties
          (basic_IO_qarm_mini_DW.ImageCompress_Compress, 640, 360,
           COLOR_SPACE_RGB, IMAGE_DATA_TYPE_UINT8);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_quality
          (basic_IO_qarm_mini_DW.ImageCompress_Compress,
           basic_IO_qarm_mini_P.ImageCompress_Quality);
        if (result < 0) {
          break;
        }

        result = qjpeg_compress_set_fixed_memory_destination
          (basic_IO_qarm_mini_DW.ImageCompress_Compress,
           &basic_IO_qarm_mini_B.ImageCompress[0], 691200);
        if (result < 0) {
          break;
        }
      } while (false);

      if (result < 0) {
        qjpeg_compress_close(basic_IO_qarm_mini_DW.ImageCompress_Compress);
      }
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
    }
  }

  /* Start for S-Function (channel_block): '<S7>/Channel' */

  /* S-Function Block: basic_IO_qarm_mini/Image Acquisition & Display/Image Processing/Channel (channel_block) */
  {
    t_error result;
    result = channel_fifo_create(0, sizeof(uint8_T), 1, 691200, 1,
      (t_channel_fifo *) &basic_IO_qarm_mini_DW.Channel_PWORK.Fifo);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(basic_IO_qarm_mini_M, _rt_error_message);
    }
  }

  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  basic_IO_qarm_mini_X.Integrator_CSTATE[0] =
    basic_IO_qarm_mini_P.Integrator_IC[0];
  basic_IO_qarm_mini_X.Integrator_CSTATE[1] =
    basic_IO_qarm_mini_P.Integrator_IC[1];
  basic_IO_qarm_mini_X.Integrator_CSTATE[2] =
    basic_IO_qarm_mini_P.Integrator_IC[2];
  basic_IO_qarm_mini_X.Integrator_CSTATE[3] =
    basic_IO_qarm_mini_P.Integrator_IC[3];

  /* InitializeConditions for Integrator: '<S2>/Integrator1' */
  basic_IO_qarm_mini_X.Integrator1_CSTATE = basic_IO_qarm_mini_P.Integrator1_IC;

  /* InitializeConditions for Memory: '<S4>/Memory' */
  basic_IO_qarm_mini_DW.Memory_PreviousInput =
    basic_IO_qarm_mini_P.Memory_InitialCondition;
}

/* Model terminate function */
void basic_IO_qarm_mini_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S9>/HIL Initialize' */

  /* S-Function Block: basic_IO_qarm_mini/Qarm Mini Manipulator/Hardware Layer/HIL Initialize (hil_initialize_block) */
  {
    hil_task_stop_all(basic_IO_qarm_mini_DW.HILInitialize_Card);
    hil_monitor_stop_all(basic_IO_qarm_mini_DW.HILInitialize_Card);
    hil_task_delete_all(basic_IO_qarm_mini_DW.HILInitialize_Card);
    hil_monitor_delete_all(basic_IO_qarm_mini_DW.HILInitialize_Card);
    hil_close(basic_IO_qarm_mini_DW.HILInitialize_Card);
    basic_IO_qarm_mini_DW.HILInitialize_Card = NULL;
  }

  /* Terminate for S-Function (stream_server_block): '<S4>/Stream Server' */

  /* S-Function Block: basic_IO_qarm_mini/QBot Hardware/Stream Server (stream_server_block) */
  {
    if (basic_IO_qarm_mini_DW.StreamServer_Stream != NULL) {
      pstream_close(basic_IO_qarm_mini_DW.StreamServer_Stream);
    }

    basic_IO_qarm_mini_DW.StreamServer_Stream = NULL;
  }

  /* Terminate for S-Function (video_capture_block): '<S1>/Video Capture' */
  video_capture_stop(basic_IO_qarm_mini_DW.VideoCapture_VideoCapture);
  video_capture_close(basic_IO_qarm_mini_DW.VideoCapture_VideoCapture);

  /* Terminate for S-Function (image_compress_block): '<S7>/Image Compress' */

  /* S-Function Block: basic_IO_qarm_mini/Image Acquisition & Display/Image Processing/Image Compress (image_compress_block) */
  {
    qjpeg_compress_close(basic_IO_qarm_mini_DW.ImageCompress_Compress);
    basic_IO_qarm_mini_DW.ImageCompress_Compress = NULL;
  }

  /* Terminate for S-Function (channel_block): '<S7>/Channel' */

  /* S-Function Block: basic_IO_qarm_mini/Image Acquisition & Display/Image Processing/Channel (channel_block) */
  {
    channel_fifo_destroy((t_channel_fifo)
                         basic_IO_qarm_mini_DW.Channel_PWORK.Fifo);
    basic_IO_qarm_mini_DW.Channel_PWORK.Fifo = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  basic_IO_qarm_mini_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  basic_IO_qarm_mini_update();
  UNUSED_PARAMETER(tid);
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
  basic_IO_qarm_mini_initialize();
}

void MdlTerminate(void)
{
  basic_IO_qarm_mini_terminate();
}

/* Registration function */
RT_MODEL_basic_IO_qarm_mini_T *basic_IO_qarm_mini(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)basic_IO_qarm_mini_M, 0,
                sizeof(RT_MODEL_basic_IO_qarm_mini_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&basic_IO_qarm_mini_M->solverInfo,
                          &basic_IO_qarm_mini_M->Timing.simTimeStep);
    rtsiSetTPtr(&basic_IO_qarm_mini_M->solverInfo, &rtmGetTPtr
                (basic_IO_qarm_mini_M));
    rtsiSetStepSizePtr(&basic_IO_qarm_mini_M->solverInfo,
                       &basic_IO_qarm_mini_M->Timing.stepSize0);
    rtsiSetdXPtr(&basic_IO_qarm_mini_M->solverInfo,
                 &basic_IO_qarm_mini_M->derivs);
    rtsiSetContStatesPtr(&basic_IO_qarm_mini_M->solverInfo, (real_T **)
                         &basic_IO_qarm_mini_M->contStates);
    rtsiSetNumContStatesPtr(&basic_IO_qarm_mini_M->solverInfo,
      &basic_IO_qarm_mini_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&basic_IO_qarm_mini_M->solverInfo,
      &basic_IO_qarm_mini_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&basic_IO_qarm_mini_M->solverInfo,
      &basic_IO_qarm_mini_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&basic_IO_qarm_mini_M->solverInfo,
      &basic_IO_qarm_mini_M->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&basic_IO_qarm_mini_M->solverInfo, (boolean_T**)
      &basic_IO_qarm_mini_M->contStateDisabled);
    rtsiSetErrorStatusPtr(&basic_IO_qarm_mini_M->solverInfo, (&rtmGetErrorStatus
      (basic_IO_qarm_mini_M)));
    rtsiSetRTModelPtr(&basic_IO_qarm_mini_M->solverInfo, basic_IO_qarm_mini_M);
  }

  rtsiSetSimTimeStep(&basic_IO_qarm_mini_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&basic_IO_qarm_mini_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&basic_IO_qarm_mini_M->solverInfo, false);
  basic_IO_qarm_mini_M->intgData.f[0] = basic_IO_qarm_mini_M->odeF[0];
  basic_IO_qarm_mini_M->contStates = ((real_T *) &basic_IO_qarm_mini_X);
  basic_IO_qarm_mini_M->contStateDisabled = ((boolean_T *)
    &basic_IO_qarm_mini_XDis);
  basic_IO_qarm_mini_M->Timing.tStart = (0.0);
  rtsiSetSolverData(&basic_IO_qarm_mini_M->solverInfo, (void *)
                    &basic_IO_qarm_mini_M->intgData);
  rtsiSetSolverName(&basic_IO_qarm_mini_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = basic_IO_qarm_mini_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "basic_IO_qarm_mini_M points to
       static memory which is guaranteed to be non-NULL" */
    basic_IO_qarm_mini_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    basic_IO_qarm_mini_M->Timing.sampleTimes =
      (&basic_IO_qarm_mini_M->Timing.sampleTimesArray[0]);
    basic_IO_qarm_mini_M->Timing.offsetTimes =
      (&basic_IO_qarm_mini_M->Timing.offsetTimesArray[0]);

    /* task periods */
    basic_IO_qarm_mini_M->Timing.sampleTimes[0] = (0.0);
    basic_IO_qarm_mini_M->Timing.sampleTimes[1] = (0.033333333333333333);

    /* task offsets */
    basic_IO_qarm_mini_M->Timing.offsetTimes[0] = (0.0);
    basic_IO_qarm_mini_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(basic_IO_qarm_mini_M, &basic_IO_qarm_mini_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = basic_IO_qarm_mini_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    basic_IO_qarm_mini_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(basic_IO_qarm_mini_M, -1);
  basic_IO_qarm_mini_M->Timing.stepSize0 = 0.033333333333333333;
  basic_IO_qarm_mini_M->Timing.stepSize1 = 0.033333333333333333;

  /* External mode info */
  basic_IO_qarm_mini_M->Sizes.checksums[0] = (3129828505U);
  basic_IO_qarm_mini_M->Sizes.checksums[1] = (3479425745U);
  basic_IO_qarm_mini_M->Sizes.checksums[2] = (3938711866U);
  basic_IO_qarm_mini_M->Sizes.checksums[3] = (1285833210U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[9];
    basic_IO_qarm_mini_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(basic_IO_qarm_mini_M->extModeInfo,
      &basic_IO_qarm_mini_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(basic_IO_qarm_mini_M->extModeInfo,
                        basic_IO_qarm_mini_M->Sizes.checksums);
    rteiSetTPtr(basic_IO_qarm_mini_M->extModeInfo, rtmGetTPtr
                (basic_IO_qarm_mini_M));
  }

  basic_IO_qarm_mini_M->solverInfoPtr = (&basic_IO_qarm_mini_M->solverInfo);
  basic_IO_qarm_mini_M->Timing.stepSize = (0.033333333333333333);
  rtsiSetFixedStepSize(&basic_IO_qarm_mini_M->solverInfo, 0.033333333333333333);
  rtsiSetSolverMode(&basic_IO_qarm_mini_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  basic_IO_qarm_mini_M->blockIO = ((void *) &basic_IO_qarm_mini_B);
  (void) memset(((void *) &basic_IO_qarm_mini_B), 0,
                sizeof(B_basic_IO_qarm_mini_T));

  {
    basic_IO_qarm_mini_B.Channel = CHANNEL_0;
  }

  /* parameters */
  basic_IO_qarm_mini_M->defaultParam = ((real_T *)&basic_IO_qarm_mini_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &basic_IO_qarm_mini_X;
    basic_IO_qarm_mini_M->contStates = (x);
    (void) memset((void *)&basic_IO_qarm_mini_X, 0,
                  sizeof(X_basic_IO_qarm_mini_T));
  }

  /* disabled states */
  {
    boolean_T *xdis = (boolean_T *) &basic_IO_qarm_mini_XDis;
    basic_IO_qarm_mini_M->contStateDisabled = (xdis);
    (void) memset((void *)&basic_IO_qarm_mini_XDis, 0,
                  sizeof(XDis_basic_IO_qarm_mini_T));
  }

  /* states (dwork) */
  basic_IO_qarm_mini_M->dwork = ((void *) &basic_IO_qarm_mini_DW);
  (void) memset((void *)&basic_IO_qarm_mini_DW, 0,
                sizeof(DW_basic_IO_qarm_mini_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    basic_IO_qarm_mini_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 29;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  basic_IO_qarm_mini_M->Sizes.numContStates = (5);/* Number of continuous states */
  basic_IO_qarm_mini_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  basic_IO_qarm_mini_M->Sizes.numY = (0);/* Number of model outputs */
  basic_IO_qarm_mini_M->Sizes.numU = (0);/* Number of model inputs */
  basic_IO_qarm_mini_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  basic_IO_qarm_mini_M->Sizes.numSampTimes = (2);/* Number of sample times */
  basic_IO_qarm_mini_M->Sizes.numBlocks = (85);/* Number of blocks */
  basic_IO_qarm_mini_M->Sizes.numBlockIO = (26);/* Number of block outputs */
  basic_IO_qarm_mini_M->Sizes.numBlockPrms = (302);/* Sum of parameter "widths" */
  return basic_IO_qarm_mini_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
