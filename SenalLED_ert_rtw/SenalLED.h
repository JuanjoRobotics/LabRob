/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SenalLED.h
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

#ifndef RTW_HEADER_SenalLED_h_
#define RTW_HEADER_SenalLED_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef SenalLED_COMMON_INCLUDES_
#define SenalLED_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "ext_work.h"
#include "MW_arduino_digitalio.h"
#include "MW_SerialRead.h"
#include "MW_SerialWrite.h"
#endif                                 /* SenalLED_COMMON_INCLUDES_ */

#include "SenalLED_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T PulseGenerator;               /* '<S1>/Pulse Generator' */
  int16_T In1;                         /* '<S2>/In1' */
  int16_T SerialReceive_o1;            /* '<Root>/Serial Receive' */
  uint8_T SerialReceive_o2;            /* '<Root>/Serial Receive' */
  boolean_T LogicalOperator2;          /* '<S1>/Logical Operator2' */
  boolean_T LogicalOperator1;          /* '<S1>/Logical Operator1' */
  boolean_T LogicalOperator;           /* '<S1>/Logical Operator' */
} B_SenalLED_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Serial Receive' */
  codertarget_arduinobase_block_T obj_p;/* '<S1>/RED' */
  codertarget_arduinobase_block_T obj_g;/* '<S1>/GREEN' */
  codertarget_arduinobase_block_T obj_h;/* '<S1>/BLUE' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Leds_;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Led_h;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Led_g;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Logic;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Log_o;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Log_a;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Pulse;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Seria;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Ser_g;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsy;   /* synthesized block */

  int32_T clockTickCounter;            /* '<S1>/Pulse Generator' */
  int16_T senal;                       /* '<Root>/Data Store Memory' */
  int8_T Subsystem_SubsysRanBC;        /* '<Root>/Subsystem' */
} DW_SenalLED_T;

/* Parameters (default storage) */
struct P_SenalLED_T_ {
  real_T SerialReceive_Protocol;       /* Expression: 0
                                        * Referenced by: '<Root>/Serial Receive'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S1>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<S1>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<S1>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S1>/Pulse Generator'
                                        */
  real_T SimulationPace_P1;            /* Expression: SimulationPace
                                        * Referenced by: '<S1>/Simulation Pace'
                                        */
  real_T SimulationPace_P2;            /* Expression: SleepMode
                                        * Referenced by: '<S1>/Simulation Pace'
                                        */
  real_T SimulationPace_P3;            /* Expression: OutputPaceError
                                        * Referenced by: '<S1>/Simulation Pace'
                                        */
  real_T SimulationPace_P4;            /* Expression: SampleTime
                                        * Referenced by: '<S1>/Simulation Pace'
                                        */
  int16_T Out1_Y0;                     /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S2>/Out1'
                                        */
  int16_T DataStoreMemory_InitialValue;
                             /* Computed Parameter: DataStoreMemory_InitialValue
                              * Referenced by: '<Root>/Data Store Memory'
                              */
};

/* Real-time Model Data Structure */
struct tag_RTM_SenalLED_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTick2;
    uint32_T clockTick3;
    uint32_T clockTick4;
    struct {
      uint8_T TID[5];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_SenalLED_T SenalLED_P;

/* Block signals (default storage) */
extern B_SenalLED_T SenalLED_B;

/* Block states (default storage) */
extern DW_SenalLED_T SenalLED_DW;

/* Model entry point functions */
extern void SenalLED_initialize(void);
extern void SenalLED_step(void);
extern void SenalLED_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SenalLED_T *const SenalLED_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'SenalLED'
 * '<S1>'   : 'SenalLED/Leds_RGB '
 * '<S2>'   : 'SenalLED/Subsystem'
 */
#endif                                 /* RTW_HEADER_SenalLED_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
