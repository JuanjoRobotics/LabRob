/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
 *
 * Code generated for Simulink model 'SenalLED'.
 *
 * Model version                  : 7.14
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sun Jan 31 12:32:48 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SenalLED.h"
#include "rtwtypes.h"
#include "xcp.h"
#include "ext_work.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  SenalLED_step();

  /* Get model outputs here */
#ifndef _MW_ARDUINO_LOOP_

  cli();

#endif;

  OverrunFlag--;
  rtExtModeCheckEndTrigger();
}

extern void rtIOStreamResync();
volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(void)
{
  float modelBaseRate = 0.0033333333333333335;
  float systemClock = 0;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;
  init();
  MW_Arduino_Init();
  rtmSetErrorStatus(SenalLED_M, 0);

  /* initialize external mode */
  rtParseArgsForExtMode(0, NULL);
  SenalLED_initialize();
  cli();
  sei();

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(SenalLED_M));
  rtExtModeCheckInit(5);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(SenalLED_M->extModeInfo, 5, &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(SenalLED_M, true);
    }
  }

  rtERTExtModeStartMsg();
  cli();
  configureArduinoAVRTimer();
  runModel =
    (rtmGetErrorStatus(SenalLED_M) == (NULL)) && !rtmGetStopRequested(SenalLED_M);

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  XcpStatus lastXcpState = xcpStatusGet();
  sei();
  while (runModel) {
    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(SenalLED_M->extModeInfo, 5, &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(SenalLED_M, true);
      }
    }

    stopRequested = !(
                      (rtmGetErrorStatus(SenalLED_M) == (NULL)) &&
                      !rtmGetStopRequested(SenalLED_M));
    runModel = !(stopRequested);
    if (stopRequested)
      disable_rt_OneStep();
    if (lastXcpState==XCP_CONNECTED && xcpStatusGet()==XCP_DISCONNECTED)
      rtIOStreamResync();
    lastXcpState = xcpStatusGet();
    MW_Arduino_Loop();
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  SenalLED_terminate();
  rtExtModeShutdown(5);
  cli();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
