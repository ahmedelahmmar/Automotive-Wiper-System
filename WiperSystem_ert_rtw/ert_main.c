/*
 * File: ert_main.c
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

#include <stdio.h>
#include "WiperSystem.h"               /* Model header file */

/* Example use case for call to exported function: WiperSystemTask_10ms */
extern void sample_usage_WiperSystemTask_10ms(void);
void sample_usage_WiperSystemTask_10ms(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  WiperSystemTask_10ms();

  /* Read function outputs here */
}

/*
 * The example main function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching exported functions to a real-time clock is target specific.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Initialize model */
  WiperSystem_initialize();
  while (rtmGetErrorStatus(rtM) == (NULL)) {
    /*  Perform application tasks here. */
  }

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
