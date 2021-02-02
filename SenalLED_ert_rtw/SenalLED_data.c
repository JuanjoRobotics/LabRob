/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SenalLED_data.c
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

#include "SenalLED.h"
#include "SenalLED_private.h"

/* Block parameters (default storage) */
P_SenalLED_T SenalLED_P = {
  /* Mask Parameter: PIDController_I
   * Referenced by: '<S34>/Integral Gain'
   */
  0.00690918586029116,

  /* Mask Parameter: PIDDerecho_I
   * Referenced by: '<S90>/Integral Gain'
   */
  1059.70408231349,

  /* Mask Parameter: PIDIzquerdo_I
   * Referenced by: '<S138>/Integral Gain'
   */
  1002.95209765011,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S161>/UD'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S37>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDDerecho_InitialConditionForI
   * Referenced by: '<S93>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDIzquerdo_InitialConditionFor
   * Referenced by: '<S141>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_LowerSaturationLi
   * Referenced by: '<S44>/Saturation'
   */
  -0.78539816339744828,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S42>/Proportional Gain'
   */
  0.632422046521945,

  /* Mask Parameter: PIDDerecho_P
   * Referenced by: '<S98>/Proportional Gain'
   */
  7.94778061735116,

  /* Mask Parameter: PIDIzquerdo_P
   * Referenced by: '<S146>/Proportional Gain'
   */
  7.52214073237579,

  /* Mask Parameter: PIDController_UpperSaturationLi
   * Referenced by: '<S44>/Saturation'
   */
  0.78539816339744828,

  /* Mask Parameter: PIDDerecho_LowerSaturationLimit
   * Referenced by: '<S100>/Saturation'
   */
  0,

  /* Mask Parameter: PIDIzquerdo_LowerSaturationLimi
   * Referenced by: '<S148>/Saturation'
   */
  0,

  /* Mask Parameter: PIDDerecho_UpperSaturationLimit
   * Referenced by: '<S100>/Saturation'
   */
  255,

  /* Mask Parameter: PIDIzquerdo_UpperSaturationLimi
   * Referenced by: '<S148>/Saturation'
   */
  255,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S164>/Constant'
   */
  0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S163>/Constant'
   */
  0,

  /* Expression: 0
   * Referenced by: '<Root>/Serial Receive'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S2>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<S2>/Pulse Generator'
   */
  5.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<S2>/Pulse Generator'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S2>/Pulse Generator'
   */
  0.0,

  /* Expression: SimulationPace
   * Referenced by: '<S2>/Simulation Pace'
   */
  1.0,

  /* Expression: SleepMode
   * Referenced by: '<S2>/Simulation Pace'
   */
  2.0,

  /* Expression: OutputPaceError
   * Referenced by: '<S2>/Simulation Pace'
   */
  0.0,

  /* Expression: SampleTime
   * Referenced by: '<S2>/Simulation Pace'
   */
  0.033333333333333333,

  /* Expression: 0
   * Referenced by: '<Root>/Unit Delay1'
   */
  0.0,

  /* Computed Parameter: IntegradorDiscreto_gainval
   * Referenced by: '<S57>/Integrador Discreto'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S57>/Integrador Discreto'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S37>/Integrator'
   */
  0.005,

  /* Expression: [1 -d/2;1 d/2]
   * Referenced by: '<S56>/Constant'
   */
  { 1.0, 1.0, -0.095, 0.095 },

  /* Expression: 0
   * Referenced by: '<S54>/Memory'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_e
   * Referenced by: '<S93>/Integrator'
   */
  0.015,

  /* Computed Parameter: Integrator_gainval_k
   * Referenced by: '<S141>/Integrator'
   */
  0.015,

  /* Expression: -pi*0.067/(1978)
   * Referenced by: '<S160>/Gain'
   */
  -0.00010641390687083728,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S161>/TSamp'
   */
  66.666666666666671,

  /* Expression: [1/2 1/2; -1/d 1/d]
   * Referenced by: '<S55>/Constant'
   */
  { 0.5, -5.2631578947368425, 0.5, 5.2631578947368425 },

  /* Expression: 1
   * Referenced by: '<S57>/Gain'
   */
  1.0,

  /* Expression: int32([0,1])
   * Referenced by: '<S160>/S-Function Builder'
   */
  { 0, 1 },

  /* Expression: int32([2,18])
   * Referenced by: '<S160>/S-Function Builder'
   */
  { 2, 18 },

  /* Expression: int32([3,19])
   * Referenced by: '<S160>/S-Function Builder'
   */
  { 3, 19 },

  /* Computed Parameter: ModeloRuedaIzquierda_InitialSta
   * Referenced by: '<S159>/Modelo Rueda Izquierda'
   */
  0,

  /* Computed Parameter: ModeloRuedaDerecha_InitialState
   * Referenced by: '<S159>/Modelo Rueda Derecha'
   */
  0,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S162>/Saturation'
   */
  255,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S162>/Saturation'
   */
  0,

  /* Computed Parameter: Saturation4_UpperSat
   * Referenced by: '<S162>/Saturation4'
   */
  0,

  /* Computed Parameter: Saturation4_LowerSat
   * Referenced by: '<S162>/Saturation4'
   */
  -255,

  /* Computed Parameter: Saturation3_UpperSat
   * Referenced by: '<S162>/Saturation3'
   */
  0,

  /* Computed Parameter: Saturation3_LowerSat
   * Referenced by: '<S162>/Saturation3'
   */
  -255,

  /* Computed Parameter: Saturation2_UpperSat
   * Referenced by: '<S162>/Saturation2'
   */
  255,

  /* Computed Parameter: Saturation2_LowerSat
   * Referenced by: '<S162>/Saturation2'
   */
  0,

  /* Computed Parameter: ModeloRuedaIzquierda_DenCoef
   * Referenced by: '<S159>/Modelo Rueda Izquierda'
   */
  { 16384, -24924, 9876 },

  /* Computed Parameter: ModeloRuedaDerecha_DenCoef
   * Referenced by: '<S159>/Modelo Rueda Derecha'
   */
  { 16384, -24702, 9690 },

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S162>/Gain1'
   */
  -32768,

  /* Computed Parameter: ModeloRuedaIzquierda_NumCoef
   * Referenced by: '<S159>/Modelo Rueda Izquierda'
   */
  { 0, 18134 },

  /* Computed Parameter: ModeloRuedaDerecha_NumCoef
   * Referenced by: '<S159>/Modelo Rueda Derecha'
   */
  { 0, 17631 },

  /* Computed Parameter: Dato_Y0
   * Referenced by: '<S4>/Dato'
   */
  0U,

  /* Computed Parameter: DataStoreMemory_InitialValue
   * Referenced by: '<Root>/Data Store Memory'
   */
  0U,

  /* Expression: switch_mode
   * Referenced by: '<S158>/Switch Control'
   */
  0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
