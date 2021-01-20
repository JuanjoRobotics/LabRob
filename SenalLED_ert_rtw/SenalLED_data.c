/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SenalLED_data.c
 *
 * Code generated for Simulink model 'SenalLED'.
 *
 * Model version                  : 7.12
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Jan 20 12:39:48 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SenalLED.h"
#include "SenalLED_private.h"

/* Block parameters (default storage) */
P_SenalLED_T SenalLED_P = {
  /* Expression: 0
   * Referenced by: '<Root>/Serial Receive'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<S1>/Pulse Generator'
   */
  5.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<S1>/Pulse Generator'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S1>/Pulse Generator'
   */
  0.0,

  /* Expression: SimulationPace
   * Referenced by: '<S1>/Simulation Pace'
   */
  1.0,

  /* Expression: SleepMode
   * Referenced by: '<S1>/Simulation Pace'
   */
  2.0,

  /* Expression: OutputPaceError
   * Referenced by: '<S1>/Simulation Pace'
   */
  0.0,

  /* Expression: SampleTime
   * Referenced by: '<S1>/Simulation Pace'
   */
  0.033333333333333333,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S2>/Out1'
   */
  0,

  /* Computed Parameter: DataStoreMemory_InitialValue
   * Referenced by: '<Root>/Data Store Memory'
   */
  0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
