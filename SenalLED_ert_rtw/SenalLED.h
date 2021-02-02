/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SenalLED.h
 *
 * Code generated for Simulink model 'SenalLED'.
 *
 * Model version                  : 7.31
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Tue Feb  2 18:19:05 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SenalLED_h_
#define RTW_HEADER_SenalLED_h_
#include <math.h>
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
#include "MW_PWM.h"
#endif                                 /* SenalLED_COMMON_INCLUDES_ */

#include "SenalLED_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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
  real_T PulseGenerator;               /* '<S2>/Pulse Generator' */
  real_T UnitDelay1;                   /* '<Root>/Unit Delay1' */
  real_T IntegradorDiscreto[3];        /* '<S57>/Integrador Discreto' */
  real_T MatrixMultiply[2];            /* '<S56>/Matrix Multiply' */
  real_T SFunctionBuilder[2];          /* '<S160>/S-Function Builder' */
  real_T EnvironmentSwitch[2];         /* '<S158>/Environment Switch' */
  real_T MatrixMultiply_p[2];          /* '<S55>/Matrix Multiply' */
  real_T Cos;                          /* '<S57>/Cos' */
  real_T Gain;                         /* '<S57>/Gain' */
  real_T Sin;                          /* '<S57>/Sin' */
  real_T Product;                      /* '<S57>/Product' */
  real_T Product1;                     /* '<S57>/Product1' */
  real_T V;                            /* '<Root>/Chart1' */
  real_T O;                            /* '<Root>/Chart1' */
  real_T Saturation_m;                 /* '<S44>/Saturation' */
  real_T IntegralGain_a;               /* '<S138>/Integral Gain' */
  real_T IntegralGain_e;               /* '<S90>/Integral Gain' */
  uint16_T In1;                        /* '<S4>/In1' */
  uint16_T SerialReceive_o1;           /* '<Root>/Serial Receive' */
  int16_T Saturation;                  /* '<S100>/Saturation' */
  int16_T Saturation_n;                /* '<S148>/Saturation' */
  int16_T Saturation_c;                /* '<S162>/Saturation' */
  int16_T Abs1;                        /* '<S162>/Abs1' */
  int16_T Saturation2;                 /* '<S162>/Saturation2' */
  uint8_T IntegertoBitConverter1[4];   /* '<S2>/Integer to Bit Converter1' */
  uint8_T Gain1;                       /* '<S162>/Gain1' */
  boolean_T LogicalOperator2;          /* '<S2>/Logical Operator2' */
  boolean_T LogicalOperator1;          /* '<S2>/Logical Operator1' */
  boolean_T LogicalOperator;           /* '<S2>/Logical Operator' */
  boolean_T Compare;                   /* '<S164>/Compare' */
  boolean_T Compare_a;                 /* '<S163>/Compare' */
} B_SenalLED_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Serial Receive' */
  codertarget_arduinobase_int_a_T obj_j;/* '<S162>/Izq_Atras' */
  codertarget_arduinobase_int_a_T obj_b;/* '<S162>/Izq_Adelante' */
  codertarget_arduinobase_int_a_T obj_jg;/* '<S162>/Drch_Atras' */
  codertarget_arduinobase_int_a_T obj_f;/* '<S162>/Drch_Adelante' */
  codertarget_arduinobase_block_T obj_e;/* '<S162>/Digital Output1' */
  codertarget_arduinobase_block_T obj_d;/* '<S162>/Digital Output' */
  codertarget_arduinobase_block_T obj_p;/* '<S2>/RED' */
  codertarget_arduinobase_block_T obj_g;/* '<S2>/GREEN' */
  codertarget_arduinobase_block_T obj_h;/* '<S2>/BLUE' */
  real_T UnitDelay1_DSTATE;            /* '<Root>/Unit Delay1' */
  real_T IntegradorDiscreto_DSTATE[3]; /* '<S57>/Integrador Discreto' */
  real_T Integrator_DSTATE;            /* '<S37>/Integrator' */
  real_T Integrator_DSTATE_o;          /* '<S93>/Integrator' */
  real_T Integrator_DSTATE_h;          /* '<S141>/Integrator' */
  real_T SFunctionBuilder_DSTATE;      /* '<S160>/S-Function Builder' */
  real_T UD_DSTATE[2];                 /* '<S161>/UD' */
  real_T velocidad;                    /* '<Root>/Chart1' */
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
  } TAQSigLogging_InsertedFor_Integ;   /* synthesized block */

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
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Chart;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Demux;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_n;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Seria;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsy;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SFunc;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Abs1_;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Compa;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Com_j;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Gain1;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Satur;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sat_b;   /* synthesized block */

  int32_T clockTickCounter;            /* '<S2>/Pulse Generator' */
  uint32_T is_c1_SenalLED;             /* '<Root>/Chart1' */
  int16_T ModeloRuedaIzquierda_states[2];/* '<S159>/Modelo Rueda Izquierda' */
  int16_T ModeloRuedaDerecha_states[2];/* '<S159>/Modelo Rueda Derecha' */
  uint16_T senal;                      /* '<Root>/Data Store Memory' */
  int8_T Subsystem_SubsysRanBC;        /* '<Root>/Subsystem' */
  uint8_T is_active_c1_SenalLED;       /* '<Root>/Chart1' */
} DW_SenalLED_T;

/* Parameters (default storage) */
struct P_SenalLED_T_ {
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S34>/Integral Gain'
                                        */
  real_T PIDDerecho_I;                 /* Mask Parameter: PIDDerecho_I
                                        * Referenced by: '<S90>/Integral Gain'
                                        */
  real_T PIDIzquerdo_I;                /* Mask Parameter: PIDIzquerdo_I
                                        * Referenced by: '<S138>/Integral Gain'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S161>/UD'
                               */
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S37>/Integrator'
                               */
  real_T PIDDerecho_InitialConditionForI;
                              /* Mask Parameter: PIDDerecho_InitialConditionForI
                               * Referenced by: '<S93>/Integrator'
                               */
  real_T PIDIzquerdo_InitialConditionFor;
                              /* Mask Parameter: PIDIzquerdo_InitialConditionFor
                               * Referenced by: '<S141>/Integrator'
                               */
  real_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S44>/Saturation'
                               */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S42>/Proportional Gain'
                                        */
  real_T PIDDerecho_P;                 /* Mask Parameter: PIDDerecho_P
                                        * Referenced by: '<S98>/Proportional Gain'
                                        */
  real_T PIDIzquerdo_P;                /* Mask Parameter: PIDIzquerdo_P
                                        * Referenced by: '<S146>/Proportional Gain'
                                        */
  real_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S44>/Saturation'
                               */
  int16_T PIDDerecho_LowerSaturationLimit;
                              /* Mask Parameter: PIDDerecho_LowerSaturationLimit
                               * Referenced by: '<S100>/Saturation'
                               */
  int16_T PIDIzquerdo_LowerSaturationLimi;
                              /* Mask Parameter: PIDIzquerdo_LowerSaturationLimi
                               * Referenced by: '<S148>/Saturation'
                               */
  int16_T PIDDerecho_UpperSaturationLimit;
                              /* Mask Parameter: PIDDerecho_UpperSaturationLimit
                               * Referenced by: '<S100>/Saturation'
                               */
  int16_T PIDIzquerdo_UpperSaturationLimi;
                              /* Mask Parameter: PIDIzquerdo_UpperSaturationLimi
                               * Referenced by: '<S148>/Saturation'
                               */
  int16_T CompareToConstant1_const;  /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S164>/Constant'
                                      */
  int16_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S163>/Constant'
                                       */
  real_T SerialReceive_Protocol;       /* Expression: 0
                                        * Referenced by: '<Root>/Serial Receive'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<S2>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<S2>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  real_T SimulationPace_P1;            /* Expression: SimulationPace
                                        * Referenced by: '<S2>/Simulation Pace'
                                        */
  real_T SimulationPace_P2;            /* Expression: SleepMode
                                        * Referenced by: '<S2>/Simulation Pace'
                                        */
  real_T SimulationPace_P3;            /* Expression: OutputPaceError
                                        * Referenced by: '<S2>/Simulation Pace'
                                        */
  real_T SimulationPace_P4;            /* Expression: SampleTime
                                        * Referenced by: '<S2>/Simulation Pace'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay1'
                                        */
  real_T IntegradorDiscreto_gainval;
                               /* Computed Parameter: IntegradorDiscreto_gainval
                                * Referenced by: '<S57>/Integrador Discreto'
                                */
  real_T IntegradorDiscreto_IC;        /* Expression: 0
                                        * Referenced by: '<S57>/Integrador Discreto'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S37>/Integrator'
                                        */
  real_T Constant_Value[4];            /* Expression: [1 -d/2;1 d/2]
                                        * Referenced by: '<S56>/Constant'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S54>/Memory'
                                        */
  real_T Integrator_gainval_e;       /* Computed Parameter: Integrator_gainval_e
                                      * Referenced by: '<S93>/Integrator'
                                      */
  real_T Integrator_gainval_k;       /* Computed Parameter: Integrator_gainval_k
                                      * Referenced by: '<S141>/Integrator'
                                      */
  real_T Gain_Gain;                    /* Expression: -pi*0.067/(1978)
                                        * Referenced by: '<S160>/Gain'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S161>/TSamp'
                                        */
  real_T Constant_Value_c[4];          /* Expression: [1/2 1/2; -1/d 1/d]
                                        * Referenced by: '<S55>/Constant'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1
                                        * Referenced by: '<S57>/Gain'
                                        */
  int32_T SFunctionBuilder_P1[2];      /* Expression: int32([0,1])
                                        * Referenced by: '<S160>/S-Function Builder'
                                        */
  int32_T SFunctionBuilder_P2[2];      /* Expression: int32([2,18])
                                        * Referenced by: '<S160>/S-Function Builder'
                                        */
  int32_T SFunctionBuilder_P3[2];      /* Expression: int32([3,19])
                                        * Referenced by: '<S160>/S-Function Builder'
                                        */
  int16_T ModeloRuedaIzquierda_InitialSta;
                          /* Computed Parameter: ModeloRuedaIzquierda_InitialSta
                           * Referenced by: '<S159>/Modelo Rueda Izquierda'
                           */
  int16_T ModeloRuedaDerecha_InitialState;
                          /* Computed Parameter: ModeloRuedaDerecha_InitialState
                           * Referenced by: '<S159>/Modelo Rueda Derecha'
                           */
  int16_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                       * Referenced by: '<S162>/Saturation'
                                       */
  int16_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                       * Referenced by: '<S162>/Saturation'
                                       */
  int16_T Saturation4_UpperSat;      /* Computed Parameter: Saturation4_UpperSat
                                      * Referenced by: '<S162>/Saturation4'
                                      */
  int16_T Saturation4_LowerSat;      /* Computed Parameter: Saturation4_LowerSat
                                      * Referenced by: '<S162>/Saturation4'
                                      */
  int16_T Saturation3_UpperSat;      /* Computed Parameter: Saturation3_UpperSat
                                      * Referenced by: '<S162>/Saturation3'
                                      */
  int16_T Saturation3_LowerSat;      /* Computed Parameter: Saturation3_LowerSat
                                      * Referenced by: '<S162>/Saturation3'
                                      */
  int16_T Saturation2_UpperSat;      /* Computed Parameter: Saturation2_UpperSat
                                      * Referenced by: '<S162>/Saturation2'
                                      */
  int16_T Saturation2_LowerSat;      /* Computed Parameter: Saturation2_LowerSat
                                      * Referenced by: '<S162>/Saturation2'
                                      */
  int16_T ModeloRuedaIzquierda_DenCoef[3];
                             /* Computed Parameter: ModeloRuedaIzquierda_DenCoef
                              * Referenced by: '<S159>/Modelo Rueda Izquierda'
                              */
  int16_T ModeloRuedaDerecha_DenCoef[3];
                               /* Computed Parameter: ModeloRuedaDerecha_DenCoef
                                * Referenced by: '<S159>/Modelo Rueda Derecha'
                                */
  int16_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S162>/Gain1'
                                        */
  int16_T ModeloRuedaIzquierda_NumCoef[2];
                             /* Computed Parameter: ModeloRuedaIzquierda_NumCoef
                              * Referenced by: '<S159>/Modelo Rueda Izquierda'
                              */
  int16_T ModeloRuedaDerecha_NumCoef[2];
                               /* Computed Parameter: ModeloRuedaDerecha_NumCoef
                                * Referenced by: '<S159>/Modelo Rueda Derecha'
                                */
  uint16_T Dato_Y0;                    /* Computed Parameter: Dato_Y0
                                        * Referenced by: '<S4>/Dato'
                                        */
  uint16_T DataStoreMemory_InitialValue;
                             /* Computed Parameter: DataStoreMemory_InitialValue
                              * Referenced by: '<Root>/Data Store Memory'
                              */
  boolean_T SwitchControl_Value;       /* Expression: switch_mode
                                        * Referenced by: '<S158>/Switch Control'
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
    uint32_T clockTick5;
    uint32_T clockTick6;
    struct {
      uint16_T TID[7];
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
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S161>/Data Type Duplicate' : Unused code path elimination
 * Block '<S58>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S158>/Numerical Unity' : Eliminate redundant signal conversion block
 */

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
 * '<S1>'   : 'SenalLED/Chart1'
 * '<S2>'   : 'SenalLED/Leds_RGB '
 * '<S3>'   : 'SenalLED/PID Controller'
 * '<S4>'   : 'SenalLED/Subsystem'
 * '<S5>'   : 'SenalLED/Subsystem1'
 * '<S6>'   : 'SenalLED/PID Controller/Anti-windup'
 * '<S7>'   : 'SenalLED/PID Controller/D Gain'
 * '<S8>'   : 'SenalLED/PID Controller/Filter'
 * '<S9>'   : 'SenalLED/PID Controller/Filter ICs'
 * '<S10>'  : 'SenalLED/PID Controller/I Gain'
 * '<S11>'  : 'SenalLED/PID Controller/Ideal P Gain'
 * '<S12>'  : 'SenalLED/PID Controller/Ideal P Gain Fdbk'
 * '<S13>'  : 'SenalLED/PID Controller/Integrator'
 * '<S14>'  : 'SenalLED/PID Controller/Integrator ICs'
 * '<S15>'  : 'SenalLED/PID Controller/N Copy'
 * '<S16>'  : 'SenalLED/PID Controller/N Gain'
 * '<S17>'  : 'SenalLED/PID Controller/P Copy'
 * '<S18>'  : 'SenalLED/PID Controller/Parallel P Gain'
 * '<S19>'  : 'SenalLED/PID Controller/Reset Signal'
 * '<S20>'  : 'SenalLED/PID Controller/Saturation'
 * '<S21>'  : 'SenalLED/PID Controller/Saturation Fdbk'
 * '<S22>'  : 'SenalLED/PID Controller/Sum'
 * '<S23>'  : 'SenalLED/PID Controller/Sum Fdbk'
 * '<S24>'  : 'SenalLED/PID Controller/Tracking Mode'
 * '<S25>'  : 'SenalLED/PID Controller/Tracking Mode Sum'
 * '<S26>'  : 'SenalLED/PID Controller/Tsamp - Integral'
 * '<S27>'  : 'SenalLED/PID Controller/Tsamp - Ngain'
 * '<S28>'  : 'SenalLED/PID Controller/postSat Signal'
 * '<S29>'  : 'SenalLED/PID Controller/preSat Signal'
 * '<S30>'  : 'SenalLED/PID Controller/Anti-windup/Passthrough'
 * '<S31>'  : 'SenalLED/PID Controller/D Gain/Disabled'
 * '<S32>'  : 'SenalLED/PID Controller/Filter/Disabled'
 * '<S33>'  : 'SenalLED/PID Controller/Filter ICs/Disabled'
 * '<S34>'  : 'SenalLED/PID Controller/I Gain/Internal Parameters'
 * '<S35>'  : 'SenalLED/PID Controller/Ideal P Gain/Passthrough'
 * '<S36>'  : 'SenalLED/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S37>'  : 'SenalLED/PID Controller/Integrator/Discrete'
 * '<S38>'  : 'SenalLED/PID Controller/Integrator ICs/Internal IC'
 * '<S39>'  : 'SenalLED/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S40>'  : 'SenalLED/PID Controller/N Gain/Disabled'
 * '<S41>'  : 'SenalLED/PID Controller/P Copy/Disabled'
 * '<S42>'  : 'SenalLED/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S43>'  : 'SenalLED/PID Controller/Reset Signal/Disabled'
 * '<S44>'  : 'SenalLED/PID Controller/Saturation/Enabled'
 * '<S45>'  : 'SenalLED/PID Controller/Saturation Fdbk/Disabled'
 * '<S46>'  : 'SenalLED/PID Controller/Sum/Sum_PI'
 * '<S47>'  : 'SenalLED/PID Controller/Sum Fdbk/Disabled'
 * '<S48>'  : 'SenalLED/PID Controller/Tracking Mode/Disabled'
 * '<S49>'  : 'SenalLED/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S50>'  : 'SenalLED/PID Controller/Tsamp - Integral/Passthrough'
 * '<S51>'  : 'SenalLED/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S52>'  : 'SenalLED/PID Controller/postSat Signal/Forward_Path'
 * '<S53>'  : 'SenalLED/PID Controller/preSat Signal/Forward_Path'
 * '<S54>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY'
 * '<S55>'  : 'SenalLED/Subsystem1/Modelo Cinemático Directo'
 * '<S56>'  : 'SenalLED/Subsystem1/Modelo Cinemático Inverso'
 * '<S57>'  : 'SenalLED/Subsystem1/Odometría'
 * '<S58>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador'
 * '<S59>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/PIERO_DIY'
 * '<S60>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho'
 * '<S61>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo'
 * '<S62>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Anti-windup'
 * '<S63>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/D Gain'
 * '<S64>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Filter'
 * '<S65>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Filter ICs'
 * '<S66>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/I Gain'
 * '<S67>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Ideal P Gain'
 * '<S68>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Ideal P Gain Fdbk'
 * '<S69>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Integrator'
 * '<S70>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Integrator ICs'
 * '<S71>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/N Copy'
 * '<S72>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/N Gain'
 * '<S73>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/P Copy'
 * '<S74>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Parallel P Gain'
 * '<S75>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Reset Signal'
 * '<S76>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Saturation'
 * '<S77>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Saturation Fdbk'
 * '<S78>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Sum'
 * '<S79>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Sum Fdbk'
 * '<S80>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Tracking Mode'
 * '<S81>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Tracking Mode Sum'
 * '<S82>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Tsamp - Integral'
 * '<S83>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Tsamp - Ngain'
 * '<S84>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/postSat Signal'
 * '<S85>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/preSat Signal'
 * '<S86>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Anti-windup/Passthrough'
 * '<S87>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/D Gain/Disabled'
 * '<S88>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Filter/Disabled'
 * '<S89>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Filter ICs/Disabled'
 * '<S90>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/I Gain/Internal Parameters'
 * '<S91>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Ideal P Gain/Passthrough'
 * '<S92>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Ideal P Gain Fdbk/Disabled'
 * '<S93>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Integrator/Discrete'
 * '<S94>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Integrator ICs/Internal IC'
 * '<S95>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/N Copy/Disabled wSignal Specification'
 * '<S96>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/N Gain/Disabled'
 * '<S97>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/P Copy/Disabled'
 * '<S98>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Parallel P Gain/Internal Parameters'
 * '<S99>'  : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Reset Signal/Disabled'
 * '<S100>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Saturation/Enabled'
 * '<S101>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Saturation Fdbk/Disabled'
 * '<S102>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Sum/Sum_PI'
 * '<S103>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Sum Fdbk/Disabled'
 * '<S104>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Tracking Mode/Disabled'
 * '<S105>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Tracking Mode Sum/Passthrough'
 * '<S106>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Tsamp - Integral/Passthrough'
 * '<S107>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/Tsamp - Ngain/Passthrough'
 * '<S108>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/postSat Signal/Forward_Path'
 * '<S109>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Derecho/preSat Signal/Forward_Path'
 * '<S110>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Anti-windup'
 * '<S111>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/D Gain'
 * '<S112>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Filter'
 * '<S113>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Filter ICs'
 * '<S114>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/I Gain'
 * '<S115>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Ideal P Gain'
 * '<S116>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Ideal P Gain Fdbk'
 * '<S117>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Integrator'
 * '<S118>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Integrator ICs'
 * '<S119>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/N Copy'
 * '<S120>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/N Gain'
 * '<S121>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/P Copy'
 * '<S122>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Parallel P Gain'
 * '<S123>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Reset Signal'
 * '<S124>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Saturation'
 * '<S125>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Saturation Fdbk'
 * '<S126>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Sum'
 * '<S127>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Sum Fdbk'
 * '<S128>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Tracking Mode'
 * '<S129>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Tracking Mode Sum'
 * '<S130>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Tsamp - Integral'
 * '<S131>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Tsamp - Ngain'
 * '<S132>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/postSat Signal'
 * '<S133>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/preSat Signal'
 * '<S134>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Anti-windup/Passthrough'
 * '<S135>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/D Gain/Disabled'
 * '<S136>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Filter/Disabled'
 * '<S137>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Filter ICs/Disabled'
 * '<S138>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/I Gain/Internal Parameters'
 * '<S139>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Ideal P Gain/Passthrough'
 * '<S140>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Ideal P Gain Fdbk/Disabled'
 * '<S141>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Integrator/Discrete'
 * '<S142>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Integrator ICs/Internal IC'
 * '<S143>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/N Copy/Disabled wSignal Specification'
 * '<S144>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/N Gain/Disabled'
 * '<S145>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/P Copy/Disabled'
 * '<S146>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Parallel P Gain/Internal Parameters'
 * '<S147>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Reset Signal/Disabled'
 * '<S148>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Saturation/Enabled'
 * '<S149>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Saturation Fdbk/Disabled'
 * '<S150>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Sum/Sum_PI'
 * '<S151>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Sum Fdbk/Disabled'
 * '<S152>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Tracking Mode/Disabled'
 * '<S153>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Tracking Mode Sum/Passthrough'
 * '<S154>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Tsamp - Integral/Passthrough'
 * '<S155>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/Tsamp - Ngain/Passthrough'
 * '<S156>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/postSat Signal/Forward_Path'
 * '<S157>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/Controlador/PID Izquerdo/preSat Signal/Forward_Path'
 * '<S158>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/PIERO_DIY/Environment Controller'
 * '<S159>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/PIERO_DIY/Modelo PieroDIY'
 * '<S160>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/PIERO_DIY/PIERO'
 * '<S161>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/PIERO_DIY/PIERO/Discrete Derivative'
 * '<S162>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/PIERO_DIY/PIERO/Motores_L298N'
 * '<S163>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/PIERO_DIY/PIERO/Motores_L298N/Compare To Constant'
 * '<S164>' : 'SenalLED/Subsystem1/Control Velocidad Ruedas Piero_DIY/PIERO_DIY/PIERO/Motores_L298N/Compare To Constant1'
 */
#endif                                 /* RTW_HEADER_SenalLED_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
