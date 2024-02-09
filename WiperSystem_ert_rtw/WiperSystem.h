/*
 * File: WiperSystem.h
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

#ifndef RTW_HEADER_WiperSystem_h_
#define RTW_HEADER_WiperSystem_h_
#ifndef WiperSystem_COMMON_INCLUDES_
#define WiperSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* WiperSystem_COMMON_INCLUDES_ */

#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Mode;                        /* '<Root>/Mode' */
  boolean_T isRaining;                 /* '<Root>/isRaining' */
  uint8_T WiperSpeed;                  /* '<Root>/WiperSpeed' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T pwmDutyCycle;               /* '<Root>/pwmDutyCycle' */
  boolean_T isWiperOn;                 /* '<Root>/isWiperOn' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void WiperSystem_initialize(void);

/* Exported entry point function */
extern void WiperSystemTask_10ms(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

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
 * '<Root>' : 'WiperSystem'
 * '<S1>'   : 'WiperSystem/WiperSystem'
 * '<S2>'   : 'WiperSystem/WiperSystem/Compare To Constant'
 * '<S3>'   : 'WiperSystem/WiperSystem/Smoothing'
 */
#endif                                 /* RTW_HEADER_WiperSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
