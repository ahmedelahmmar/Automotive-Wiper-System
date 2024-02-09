/*
 * File: WiperSystem.c
 *
 * Code generated for Simulink model 'WiperSystem'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Fri Feb  9 03:00:06 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "WiperSystem.h"
#include "rtwtypes.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void WiperSystemTask_10ms(void)
{
  real_T rtb_ModeSwitch;
  real32_T u0;

  /* RootInportFunctionCallGenerator generated from: '<Root>/WiperSystemTask_10ms' incorporates:
   *  SubSystem: '<Root>/WiperSystem'
   */
  /* MultiPortSwitch: '<S1>/ModeSwitch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/Mode'
   */
  switch (rtU.Mode) {
   case 0:
    rtb_ModeSwitch = 0.0;
    break;

   case 1:
    rtb_ModeSwitch = 0.4;
    break;

   case 2:
    rtb_ModeSwitch = 0.7;
    break;

   case 3:
    /* Switch: '<S1>/isRainingSwitch' incorporates:
     *  Constant: '<S1>/Constant4'
     *  Inport: '<Root>/isRaining'
     */
    if (rtU.isRaining) {
      /* MultiPortSwitch: '<S1>/WiperSpeedSwitch' incorporates:
       *  Constant: '<S1>/Constant10'
       *  Constant: '<S1>/Constant11'
       *  Constant: '<S1>/Constant12'
       *  Constant: '<S1>/Constant13'
       *  Constant: '<S1>/Constant5'
       *  Constant: '<S1>/Constant6'
       *  Constant: '<S1>/Constant7'
       *  Constant: '<S1>/Constant8'
       *  Constant: '<S1>/Constant9'
       *  Inport: '<Root>/WiperSpeed'
       */
      switch (rtU.WiperSpeed) {
       case 0:
        rtb_ModeSwitch = 0.0;
        break;

       case 1:
        rtb_ModeSwitch = 0.4;
        break;

       case 2:
        rtb_ModeSwitch = 0.45;
        break;

       case 3:
        rtb_ModeSwitch = 0.5;
        break;

       case 4:
        rtb_ModeSwitch = 0.55;
        break;

       case 5:
        rtb_ModeSwitch = 0.6;
        break;

       case 6:
        rtb_ModeSwitch = 0.65;
        break;

       case 7:
        rtb_ModeSwitch = 0.7;
        break;

       default:
        rtb_ModeSwitch = 0.0;
        break;
      }

      /* End of MultiPortSwitch: '<S1>/WiperSpeedSwitch' */
    } else {
      rtb_ModeSwitch = 0.0;
    }

    /* End of Switch: '<S1>/isRainingSwitch' */
    break;

   default:
    rtb_ModeSwitch = 0.0;
    break;
  }

  /* End of MultiPortSwitch: '<S1>/ModeSwitch' */

  /* Sum: '<S3>/Sum' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  UnitDelay: '<S3>/Unit Delay'
   */
  u0 = (real32_T)rtb_ModeSwitch - rtY.pwmDutyCycle;

  /* Saturate: '<S3>/Saturation' */
  if (u0 > 0.0025F) {
    u0 = 0.0025F;
  } else if (u0 < -0.0025F) {
    u0 = -0.0025F;
  }

  /* Outport: '<Root>/pwmDutyCycle' incorporates:
   *  Saturate: '<S3>/Saturation'
   *  Sum: '<S3>/Sum1'
   *  UnitDelay: '<S3>/Unit Delay'
   */
  rtY.pwmDutyCycle += u0;

  /* Outport: '<Root>/isWiperOn' incorporates:
   *  Constant: '<S2>/Constant'
   *  Outport: '<Root>/pwmDutyCycle'
   *  RelationalOperator: '<S2>/Compare'
   */
  rtY.isWiperOn = (rtY.pwmDutyCycle > 0.0F);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/WiperSystemTask_10ms' */
}

/* Model initialize function */
void WiperSystem_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
