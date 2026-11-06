/*
 * rtGetNaN.c
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

#include "rtwtypes.h"
#include "rtGetNaN.h"

/* Return rtNaN needed by the generated code. */
real_T rtGetNaN(void)
{
  return rtNaN;
}

/* Return rtNaNF needed by the generated code. */
real32_T rtGetNaNF(void)
{
  return rtNaNF;
}
