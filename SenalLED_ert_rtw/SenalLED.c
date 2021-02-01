/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SenalLED.c
 *
 * Code generated for Simulink model 'SenalLED'.
 *
 * Model version                  : 7.21
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Mon Feb  1 17:51:49 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SenalLED.h"
#include "SenalLED_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define SenalLED_IN_Aumento_Vel        ((uint8_T)1U)
#define SenalLED_IN_Decrementa_Vel     ((uint8_T)2U)
#define SenalLED_IN_Giro_Derecha       ((uint8_T)3U)
#define SenalLED_IN_Giro_Izq           ((uint8_T)4U)
#define SenalLED_IN_NO_ACTIVE_CHILD    ((uint8_T)0U)
#define SenalLED_IN_Normal             ((uint8_T)5U)

/* Block signals (default storage) */
B_SenalLED_T SenalLED_B;

/* Block states (default storage) */
DW_SenalLED_T SenalLED_DW;

/* Real-time model */
static RT_MODEL_SenalLED_T SenalLED_M_;
RT_MODEL_SenalLED_T *const SenalLED_M = &SenalLED_M_;
static void rate_scheduler(void);
int32_T div_repeat_s32_floor(int32_T numerator, int32_T denominator, uint16_T
  nRepeatSub)
{
  int32_T quotient;
  uint32_T absDenominator;
  uint32_T absNumerator;
  if (denominator == 0L) {
    quotient = numerator >= 0L ? MAX_int32_T : MIN_int32_T;

    /* Divide by zero handler */
  } else {
    absNumerator = numerator < 0L ? ~(uint32_T)numerator + 1UL : (uint32_T)
      numerator;
    absDenominator = denominator < 0L ? ~(uint32_T)denominator + 1UL : (uint32_T)
      denominator;
    if ((numerator < 0L) != (denominator < 0L)) {
      quotient = -(int32_T)div_nzp_repeat_u32_ceiling(absNumerator,
        absDenominator, nRepeatSub);
    } else {
      quotient = (int32_T)div_nzp_repeat_u32(absNumerator, absDenominator,
        nRepeatSub);
    }
  }

  return quotient;
}

uint32_T div_nzp_repeat_u32_ceiling(uint32_T numerator, uint32_T denominator,
  uint16_T nRepeatSub)
{
  uint32_T quotient;
  uint16_T iRepeatSub;
  boolean_T numeratorExtraBit;
  quotient = numerator / denominator;
  numerator %= denominator;
  for (iRepeatSub = 0U; iRepeatSub < nRepeatSub; iRepeatSub++) {
    numeratorExtraBit = (numerator >= 2147483648UL);
    numerator <<= 1UL;
    quotient <<= 1UL;
    if (numeratorExtraBit || (numerator >= denominator)) {
      quotient++;
      numerator -= denominator;
    }
  }

  if (numerator > 0UL) {
    quotient++;
  }

  return quotient;
}

uint32_T div_nzp_repeat_u32(uint32_T numerator, uint32_T denominator, uint16_T
  nRepeatSub)
{
  uint32_T quotient;
  uint16_T iRepeatSub;
  boolean_T numeratorExtraBit;
  quotient = numerator / denominator;
  numerator %= denominator;
  for (iRepeatSub = 0U; iRepeatSub < nRepeatSub; iRepeatSub++) {
    numeratorExtraBit = (numerator >= 2147483648UL);
    numerator <<= 1UL;
    quotient <<= 1UL;
    if (numeratorExtraBit || (numerator >= denominator)) {
      quotient++;
      numerator -= denominator;
    }
  }

  return quotient;
}

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (SenalLED_M->Timing.TaskCounters.TID[1])++;
  if ((SenalLED_M->Timing.TaskCounters.TID[1]) > 2) {/* Sample time: [0.005s, 0.0s] */
    SenalLED_M->Timing.TaskCounters.TID[1] = 0;
  }

  (SenalLED_M->Timing.TaskCounters.TID[2])++;
  if ((SenalLED_M->Timing.TaskCounters.TID[2]) > 5) {/* Sample time: [0.01s, 0.0s] */
    SenalLED_M->Timing.TaskCounters.TID[2] = 0;
  }

  (SenalLED_M->Timing.TaskCounters.TID[3])++;
  if ((SenalLED_M->Timing.TaskCounters.TID[3]) > 8) {/* Sample time: [0.015s, 0.0s] */
    SenalLED_M->Timing.TaskCounters.TID[3] = 0;
  }

  (SenalLED_M->Timing.TaskCounters.TID[4])++;
  if ((SenalLED_M->Timing.TaskCounters.TID[4]) > 19) {
                                /* Sample time: [0.033333333333333333s, 0.0s] */
    SenalLED_M->Timing.TaskCounters.TID[4] = 0;
  }

  (SenalLED_M->Timing.TaskCounters.TID[5])++;
  if ((SenalLED_M->Timing.TaskCounters.TID[5]) > 59) {/* Sample time: [0.1s, 0.0s] */
    SenalLED_M->Timing.TaskCounters.TID[5] = 0;
  }

  (SenalLED_M->Timing.TaskCounters.TID[6])++;
  if ((SenalLED_M->Timing.TaskCounters.TID[6]) > 239) {/* Sample time: [0.4s, 0.0s] */
    SenalLED_M->Timing.TaskCounters.TID[6] = 0;
  }
}

/* Model step function */
void SenalLED_step(void)
{
  codertarget_arduinobase_int_a_T *obj;
  real_T Sum_idx_1;
  real_T rtb_IntegralGain;
  real_T rtb_TSamp_idx_0;
  real_T rtb_TSamp_idx_1;
  real_T tmp;
  int32_T denAccum;
  int16_T y;
  uint16_T b_dataOut;
  uint8_T rtb_IntegertoBitConverter_idx_1;
  uint8_T status;
  boolean_T rtb_LogicalOperator4;
  if (SenalLED_M->Timing.TaskCounters.TID[2] == 0) {
    /* MATLABSystem: '<Root>/Serial Receive' incorporates:
     *  Inport: '<S4>/In1'
     */
    if (SenalLED_DW.obj.Protocol != SenalLED_P.SerialReceive_Protocol) {
      SenalLED_DW.obj.Protocol = SenalLED_P.SerialReceive_Protocol;
    }

    MW_Serial_read(3, SenalLED_DW.obj.DataSizeInBytes, &b_dataOut, &status);

    /* Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
     *  EnablePort: '<S4>/Enable'
     */
    if (status > 0) {
      SenalLED_B.In1 = b_dataOut;
    }

    /* End of MATLABSystem: '<Root>/Serial Receive' */
    /* End of Outputs for SubSystem: '<Root>/Subsystem' */
  }

  if (SenalLED_M->Timing.TaskCounters.TID[5] == 0) {
    /* DataStoreWrite: '<Root>/Data Store Write' */
    SenalLED_DW.senal = SenalLED_B.In1;
  }

  if (SenalLED_M->Timing.TaskCounters.TID[3] == 0) {
    /* UnitDelay: '<Root>/Unit Delay' */
    SenalLED_B.UnitDelay = SenalLED_DW.UnitDelay_DSTATE;

    /* UnitDelay: '<Root>/Unit Delay1' */
    SenalLED_B.UnitDelay1 = SenalLED_DW.UnitDelay1_DSTATE;
  }

  if (SenalLED_M->Timing.TaskCounters.TID[2] == 0) {
    /* DiscreteIntegrator: '<S57>/Integrador Discreto' */
    SenalLED_B.IntegradorDiscreto[0] = SenalLED_DW.IntegradorDiscreto_DSTATE[0];
    SenalLED_B.IntegradorDiscreto[1] = SenalLED_DW.IntegradorDiscreto_DSTATE[1];
    SenalLED_B.IntegradorDiscreto[2] = SenalLED_DW.IntegradorDiscreto_DSTATE[2];
  }

  if (SenalLED_M->Timing.TaskCounters.TID[1] == 0) {
    /* Chart: '<Root>/Chart' */
    if (SenalLED_DW.is_active_c3_SenalLED == 0U) {
      SenalLED_DW.is_active_c3_SenalLED = 1U;
      SenalLED_DW.is_c3_SenalLED = SenalLED_IN_Normal;
      SenalLED_B.V = SenalLED_B.UnitDelay;
      SenalLED_B.O = SenalLED_B.UnitDelay1;
    } else {
      switch (SenalLED_DW.is_c3_SenalLED) {
       case SenalLED_IN_Aumento_Vel:
        if (SenalLED_B.In1 == 2608U) {
          SenalLED_DW.is_c3_SenalLED = SenalLED_IN_Normal;
          SenalLED_B.V = SenalLED_B.UnitDelay;
          SenalLED_B.O = SenalLED_B.UnitDelay1;
        } else {
          SenalLED_B.V = SenalLED_B.UnitDelay + 0.05;
          SenalLED_B.O = SenalLED_B.UnitDelay1;
        }
        break;

       case SenalLED_IN_Decrementa_Vel:
        if (SenalLED_B.In1 == 2608U) {
          SenalLED_DW.is_c3_SenalLED = SenalLED_IN_Normal;
          SenalLED_B.V = SenalLED_B.UnitDelay;
          SenalLED_B.O = SenalLED_B.UnitDelay1;
        } else {
          SenalLED_B.V = SenalLED_B.UnitDelay - 0.05;
          SenalLED_B.O = SenalLED_B.UnitDelay1;
        }
        break;

       case SenalLED_IN_Giro_Derecha:
        if (SenalLED_B.In1 == 2608U) {
          SenalLED_DW.is_c3_SenalLED = SenalLED_IN_Normal;
          SenalLED_B.V = SenalLED_B.UnitDelay;
          SenalLED_B.O = SenalLED_B.UnitDelay1;
        } else {
          SenalLED_B.V = SenalLED_B.UnitDelay;
          SenalLED_B.O = SenalLED_B.UnitDelay1 - 0.52359877559829882;
        }
        break;

       case SenalLED_IN_Giro_Izq:
        if (SenalLED_B.In1 == 2608U) {
          SenalLED_DW.is_c3_SenalLED = SenalLED_IN_Normal;
          SenalLED_B.V = SenalLED_B.UnitDelay;
          SenalLED_B.O = SenalLED_B.UnitDelay1;
        } else {
          SenalLED_B.V = SenalLED_B.UnitDelay;
          SenalLED_B.O = SenalLED_B.UnitDelay1 + 0.52359877559829882;
        }
        break;

       default:
        /* case IN_Normal: */
        switch (SenalLED_B.In1) {
         case 2611U:
          SenalLED_DW.is_c3_SenalLED = SenalLED_IN_Decrementa_Vel;
          SenalLED_B.V = SenalLED_B.UnitDelay - 0.05;
          SenalLED_B.O = SenalLED_B.UnitDelay1;
          break;

         case 2610U:
          SenalLED_DW.is_c3_SenalLED = SenalLED_IN_Giro_Derecha;
          SenalLED_B.V = SenalLED_B.UnitDelay;
          SenalLED_B.O = SenalLED_B.UnitDelay1 - 0.52359877559829882;
          break;

         case 2612U:
          SenalLED_DW.is_c3_SenalLED = SenalLED_IN_Giro_Izq;
          SenalLED_B.V = SenalLED_B.UnitDelay;
          SenalLED_B.O = SenalLED_B.UnitDelay1 + 0.52359877559829882;
          break;

         case 2609U:
          SenalLED_DW.is_c3_SenalLED = SenalLED_IN_Aumento_Vel;
          SenalLED_B.V = SenalLED_B.UnitDelay + 0.05;
          SenalLED_B.O = SenalLED_B.UnitDelay1;
          break;

         default:
          SenalLED_B.V = SenalLED_B.UnitDelay;
          SenalLED_B.O = SenalLED_B.UnitDelay1;
          break;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/Chart' */

    /* Sum: '<Root>/Sum' */
    SenalLED_B.O -= SenalLED_B.IntegradorDiscreto[2];

    /* Gain: '<S34>/Integral Gain' */
    rtb_IntegralGain = SenalLED_P.PIDController_I * SenalLED_B.O;

    /* Sum: '<S46>/Sum' incorporates:
     *  DiscreteIntegrator: '<S37>/Integrator'
     *  Gain: '<S42>/Proportional Gain'
     */
    Sum_idx_1 = SenalLED_P.PIDController_P * SenalLED_B.O +
      SenalLED_DW.Integrator_DSTATE;

    /* Saturate: '<S44>/Saturation' */
    if (Sum_idx_1 > SenalLED_P.PIDController_UpperSaturationLi) {
      Sum_idx_1 = SenalLED_P.PIDController_UpperSaturationLi;
    } else {
      if (Sum_idx_1 < SenalLED_P.PIDController_LowerSaturationLi) {
        Sum_idx_1 = SenalLED_P.PIDController_LowerSaturationLi;
      }
    }

    /* Product: '<S56>/Matrix Multiply' incorporates:
     *  Constant: '<S56>/Constant'
     *  Saturate: '<S44>/Saturation'
     *  SignalConversion generated from: '<S56>/Matrix Multiply'
     */
    SenalLED_B.MatrixMultiply[0] = 0.0;
    SenalLED_B.MatrixMultiply[0] += SenalLED_P.Constant_Value[0] * SenalLED_B.V;
    SenalLED_B.MatrixMultiply[0] += SenalLED_P.Constant_Value[2] * Sum_idx_1;
    SenalLED_B.MatrixMultiply[1] = 0.0;
    SenalLED_B.MatrixMultiply[1] += SenalLED_P.Constant_Value[1] * SenalLED_B.V;
    SenalLED_B.MatrixMultiply[1] += SenalLED_P.Constant_Value[3] * Sum_idx_1;
  }

  /* Sum: '<S54>/Sum' incorporates:
   *  Memory: '<S54>/Memory'
   */
  SenalLED_B.O = SenalLED_B.MatrixMultiply[0] - SenalLED_B.EnvironmentSwitch[0];
  Sum_idx_1 = SenalLED_B.MatrixMultiply[1] - SenalLED_B.EnvironmentSwitch[1];
  if (SenalLED_M->Timing.TaskCounters.TID[3] == 0) {
    /* Gain: '<S90>/Integral Gain' */
    SenalLED_B.IntegralGain_e = SenalLED_P.PIDDerecho_I * Sum_idx_1;

    /* Sum: '<S102>/Sum' incorporates:
     *  DiscreteIntegrator: '<S93>/Integrator'
     *  Gain: '<S98>/Proportional Gain'
     */
    Sum_idx_1 = SenalLED_P.PIDDerecho_P * Sum_idx_1 +
      SenalLED_DW.Integrator_DSTATE_o;

    /* Saturate: '<S100>/Saturation' */
    if (Sum_idx_1 > SenalLED_P.PIDDerecho_UpperSaturationLimit) {
      Sum_idx_1 = SenalLED_P.PIDDerecho_UpperSaturationLimit;
    } else {
      if (Sum_idx_1 < SenalLED_P.PIDDerecho_LowerSaturationLimit) {
        Sum_idx_1 = SenalLED_P.PIDDerecho_LowerSaturationLimit;
      }
    }

    Sum_idx_1 = floor(Sum_idx_1);
    if (rtIsNaN(Sum_idx_1)) {
      Sum_idx_1 = 0.0;
    } else {
      Sum_idx_1 = fmod(Sum_idx_1, 65536.0);
    }

    /* Saturate: '<S100>/Saturation' */
    SenalLED_B.Saturation = Sum_idx_1 < 0.0 ? -(int16_T)(uint16_T)-Sum_idx_1 :
      (int16_T)(uint16_T)Sum_idx_1;

    /* Gain: '<S138>/Integral Gain' */
    SenalLED_B.IntegralGain_a = SenalLED_P.PIDIzquerdo_I * SenalLED_B.O;

    /* Sum: '<S150>/Sum' incorporates:
     *  DiscreteIntegrator: '<S141>/Integrator'
     *  Gain: '<S146>/Proportional Gain'
     */
    Sum_idx_1 = SenalLED_P.PIDIzquerdo_P * SenalLED_B.O +
      SenalLED_DW.Integrator_DSTATE_h;

    /* Saturate: '<S148>/Saturation' */
    if (Sum_idx_1 > SenalLED_P.PIDIzquerdo_UpperSaturationLimi) {
      Sum_idx_1 = SenalLED_P.PIDIzquerdo_UpperSaturationLimi;
    } else {
      if (Sum_idx_1 < SenalLED_P.PIDIzquerdo_LowerSaturationLimi) {
        Sum_idx_1 = SenalLED_P.PIDIzquerdo_LowerSaturationLimi;
      }
    }

    Sum_idx_1 = floor(Sum_idx_1);
    if (rtIsNaN(Sum_idx_1)) {
      Sum_idx_1 = 0.0;
    } else {
      Sum_idx_1 = fmod(Sum_idx_1, 65536.0);
    }

    /* Saturate: '<S148>/Saturation' */
    SenalLED_B.Saturation_n = Sum_idx_1 < 0.0 ? -(int16_T)(uint16_T)-Sum_idx_1 :
      (int16_T)(uint16_T)Sum_idx_1;

    /* S-Function (MisEncoderss): '<S160>/S-Function Builder' */
    MisEncoderss_Outputs_wrapper(&SenalLED_B.SFunctionBuilder[0],
      &SenalLED_DW.SFunctionBuilder_DSTATE, SenalLED_P.SFunctionBuilder_P1, 2,
      SenalLED_P.SFunctionBuilder_P2, 2, SenalLED_P.SFunctionBuilder_P3, 2);

    /* SampleTimeMath: '<S161>/TSamp' incorporates:
     *  Gain: '<S160>/Gain'
     *  S-Function (MisEncoderss): '<S160>/S-Function Builder'
     *
     * About '<S161>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_TSamp_idx_0 = SenalLED_P.Gain_Gain * SenalLED_B.SFunctionBuilder[0] *
      SenalLED_P.TSamp_WtEt;
    rtb_TSamp_idx_1 = SenalLED_P.Gain_Gain * SenalLED_B.SFunctionBuilder[1] *
      SenalLED_P.TSamp_WtEt;

    /* Switch: '<S158>/Environment Switch' incorporates:
     *  Constant: '<S158>/Switch Control'
     */
    if (SenalLED_P.SwitchControl_Value) {
      /* Switch: '<S158>/Environment Switch' incorporates:
       *  DataTypeConversion: '<S159>/Data Type Conversion'
       *  DiscreteFilter: '<S159>/Modelo Rueda Derecha'
       *  DiscreteFilter: '<S159>/Modelo Rueda Izquierda'
       */
      SenalLED_B.EnvironmentSwitch[0] = (real_T)((int32_T)
        SenalLED_P.ModeloRuedaIzquierda_NumCoef[1L] *
        SenalLED_DW.ModeloRuedaIzquierda_states[0L]) * 7.4505805969238281E-9;
      SenalLED_B.EnvironmentSwitch[1] = (real_T)((int32_T)
        SenalLED_P.ModeloRuedaDerecha_NumCoef[1L] *
        SenalLED_DW.ModeloRuedaDerecha_states[0L]) * 7.4505805969238281E-9;
    } else {
      /* Switch: '<S158>/Environment Switch' incorporates:
       *  SampleTimeMath: '<S161>/TSamp'
       *  Sum: '<S161>/Diff'
       *  UnitDelay: '<S161>/UD'
       *
       * About '<S161>/TSamp':
       *  y = u * K where K = 1 / ( w * Ts )
       *
       * Block description for '<S161>/Diff':
       *
       *  Add in CPU
       *
       * Block description for '<S161>/UD':
       *
       *  Store in Global RAM
       */
      SenalLED_B.EnvironmentSwitch[0] = rtb_TSamp_idx_0 - SenalLED_DW.UD_DSTATE
        [0];
      SenalLED_B.EnvironmentSwitch[1] = rtb_TSamp_idx_1 - SenalLED_DW.UD_DSTATE
        [1];
    }

    /* End of Switch: '<S158>/Environment Switch' */

    /* MATLABSystem: '<S162>/Digital Output' incorporates:
     *  Constant: '<S164>/Constant'
     *  RelationalOperator: '<S164>/Compare'
     */
    writeDigitalPin(10, (uint8_T)(SenalLED_B.Saturation !=
      SenalLED_P.CompareToConstant1_const));

    /* MATLABSystem: '<S162>/Digital Output1' incorporates:
     *  Constant: '<S163>/Constant'
     *  RelationalOperator: '<S163>/Compare'
     */
    writeDigitalPin(5, (uint8_T)(SenalLED_B.Saturation_n !=
      SenalLED_P.CompareToConstant_const));

    /* MATLABSystem: '<S162>/Drch_Adelante' */
    obj = &SenalLED_DW.obj_f;
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_f.PinPWM);

    /* Saturate: '<S162>/Saturation2' */
    if (SenalLED_B.Saturation > SenalLED_P.Saturation2_UpperSat) {
      y = SenalLED_P.Saturation2_UpperSat;
    } else if (SenalLED_B.Saturation < SenalLED_P.Saturation2_LowerSat) {
      y = SenalLED_P.Saturation2_LowerSat;
    } else {
      y = SenalLED_B.Saturation;
    }

    /* End of Saturate: '<S162>/Saturation2' */

    /* MATLABSystem: '<S162>/Drch_Adelante' */
    if (y < 255.0) {
      SenalLED_B.O = y;
    } else {
      SenalLED_B.O = 255.0;
    }

    if (!(SenalLED_B.O > 0.0)) {
      SenalLED_B.O = 0.0;
    }

    MW_PWM_SetDutyCycle(SenalLED_DW.obj_f.MW_PWM_HANDLE, SenalLED_B.O);

    /* MATLABSystem: '<S162>/Drch_Atras' */
    obj = &SenalLED_DW.obj_jg;
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_jg.PinPWM);

    /* Saturate: '<S162>/Saturation3' */
    if (SenalLED_B.Saturation > SenalLED_P.Saturation3_UpperSat) {
      y = SenalLED_P.Saturation3_UpperSat;
    } else if (SenalLED_B.Saturation < SenalLED_P.Saturation3_LowerSat) {
      y = SenalLED_P.Saturation3_LowerSat;
    } else {
      y = SenalLED_B.Saturation;
    }

    /* End of Saturate: '<S162>/Saturation3' */

    /* MATLABSystem: '<S162>/Drch_Atras' incorporates:
     *  Gain: '<S162>/Gain1'
     */
    MW_PWM_SetDutyCycle(SenalLED_DW.obj_jg.MW_PWM_HANDLE, (real_T)(uint8_T)
                        (((int32_T)SenalLED_P.Gain1_Gain * y) >> 15));

    /* MATLABSystem: '<S162>/Izq_Adelante' */
    obj = &SenalLED_DW.obj_b;
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_b.PinPWM);

    /* Saturate: '<S162>/Saturation4' */
    if (SenalLED_B.Saturation_n > SenalLED_P.Saturation4_UpperSat) {
      y = SenalLED_P.Saturation4_UpperSat;
    } else if (SenalLED_B.Saturation_n < SenalLED_P.Saturation4_LowerSat) {
      y = SenalLED_P.Saturation4_LowerSat;
    } else {
      y = SenalLED_B.Saturation_n;
    }

    /* End of Saturate: '<S162>/Saturation4' */

    /* Abs: '<S162>/Abs1' */
    if (y < 0) {
      y = -y;
    }

    /* End of Abs: '<S162>/Abs1' */

    /* MATLABSystem: '<S162>/Izq_Adelante' */
    if (y < 255.0) {
      SenalLED_B.O = y;
    } else {
      SenalLED_B.O = 255.0;
    }

    if (!(SenalLED_B.O > 0.0)) {
      SenalLED_B.O = 0.0;
    }

    MW_PWM_SetDutyCycle(SenalLED_DW.obj_b.MW_PWM_HANDLE, SenalLED_B.O);

    /* MATLABSystem: '<S162>/Izq_Atras' */
    obj = &SenalLED_DW.obj_j;
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_j.PinPWM);

    /* Saturate: '<S162>/Saturation' */
    if (SenalLED_B.Saturation_n > SenalLED_P.Saturation_UpperSat) {
      y = SenalLED_P.Saturation_UpperSat;
    } else if (SenalLED_B.Saturation_n < SenalLED_P.Saturation_LowerSat) {
      y = SenalLED_P.Saturation_LowerSat;
    } else {
      y = SenalLED_B.Saturation_n;
    }

    /* End of Saturate: '<S162>/Saturation' */

    /* MATLABSystem: '<S162>/Izq_Atras' */
    if (y < 255.0) {
      SenalLED_B.O = y;
    } else {
      SenalLED_B.O = 255.0;
    }

    if (!(SenalLED_B.O > 0.0)) {
      SenalLED_B.O = 0.0;
    }

    MW_PWM_SetDutyCycle(SenalLED_DW.obj_j.MW_PWM_HANDLE, SenalLED_B.O);

    /* Product: '<S55>/Matrix Multiply' incorporates:
     *  Constant: '<S55>/Constant'
     *  Switch: '<S158>/Environment Switch'
     */
    SenalLED_B.MatrixMultiply_p[0] = 0.0;
    SenalLED_B.MatrixMultiply_p[0] += SenalLED_P.Constant_Value_c[0] *
      SenalLED_B.EnvironmentSwitch[0];
    SenalLED_B.MatrixMultiply_p[0] += SenalLED_P.Constant_Value_c[2] *
      SenalLED_B.EnvironmentSwitch[1];
    SenalLED_B.MatrixMultiply_p[1] = 0.0;
    SenalLED_B.MatrixMultiply_p[1] += SenalLED_P.Constant_Value_c[1] *
      SenalLED_B.EnvironmentSwitch[0];
    SenalLED_B.MatrixMultiply_p[1] += SenalLED_P.Constant_Value_c[3] *
      SenalLED_B.EnvironmentSwitch[1];

    /* Gain: '<S57>/Gain' */
    SenalLED_B.Gain = SenalLED_P.Gain_Gain_j * SenalLED_B.MatrixMultiply_p[0];
  }

  if (SenalLED_M->Timing.TaskCounters.TID[2] == 0) {
    /* Trigonometry: '<S57>/Cos' */
    SenalLED_B.Cos = cos(SenalLED_B.IntegradorDiscreto[2]);

    /* Trigonometry: '<S57>/Sin' */
    SenalLED_B.Sin = sin(SenalLED_B.IntegradorDiscreto[2]);
  }

  if (SenalLED_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S57>/Product' */
    SenalLED_B.Product = SenalLED_B.Gain * SenalLED_B.Sin;

    /* Product: '<S57>/Product1' */
    SenalLED_B.Product1 = SenalLED_B.MatrixMultiply_p[0] * SenalLED_B.Cos;
  }

  if (SenalLED_M->Timing.TaskCounters.TID[6] == 0) {
    /* DiscretePulseGenerator: '<S2>/Pulse Generator' */
    SenalLED_B.PulseGenerator = (SenalLED_DW.clockTickCounter <
      SenalLED_P.PulseGenerator_Duty) && (SenalLED_DW.clockTickCounter >= 0L) ?
      SenalLED_P.PulseGenerator_Amp : 0.0;

    /* DiscretePulseGenerator: '<S2>/Pulse Generator' */
    if (SenalLED_DW.clockTickCounter >= SenalLED_P.PulseGenerator_Period - 1.0)
    {
      SenalLED_DW.clockTickCounter = 0L;
    } else {
      SenalLED_DW.clockTickCounter++;
    }
  }

  if (SenalLED_M->Timing.TaskCounters.TID[5] == 0) {
    /* S-Function (scominttobit): '<S2>/Integer to Bit Converter' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read'
     */
    /* Integer to Bit Conversion */
    b_dataOut = SenalLED_DW.senal >> 1;
    status = (uint8_T)((int16_T)b_dataOut & 1);
    b_dataOut >>= 1;
    rtb_IntegertoBitConverter_idx_1 = (uint8_T)((int16_T)b_dataOut & 1);
    b_dataOut >>= 1;

    /* Logic: '<S2>/Logical Operator4' incorporates:
     *  Logic: '<S2>/Logical Operator3'
     *  S-Function (scominttobit): '<S2>/Integer to Bit Converter'
     */
    rtb_LogicalOperator4 = ((SenalLED_B.PulseGenerator != 0.0) || ((uint8_T)
      ((int16_T)b_dataOut & 1) == 0));

    /* MATLABSystem: '<S2>/BLUE' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read'
     *  Logic: '<S2>/Logical Operator2'
     *  S-Function (scominttobit): '<S2>/Integer to Bit Converter'
     */
    writeDigitalPin(49, (uint8_T)(rtb_LogicalOperator4 && ((uint8_T)((int16_T)
      SenalLED_DW.senal & 1) != 0)));

    /* MATLABSystem: '<S2>/GREEN' incorporates:
     *  Logic: '<S2>/Logical Operator'
     */
    writeDigitalPin(53, (uint8_T)(rtb_LogicalOperator4 &&
      (rtb_IntegertoBitConverter_idx_1 != 0)));

    /* MATLABSystem: '<S2>/RED' incorporates:
     *  Logic: '<S2>/Logical Operator1'
     */
    writeDigitalPin(51, (uint8_T)(rtb_LogicalOperator4 && (status != 0)));
  }

  if (SenalLED_M->Timing.TaskCounters.TID[4] == 0) {
    /* S-Function (saeroclockpacer): '<S2>/Simulation Pace' */
    /*
     * The Clock Pacer generates no code, it is only active in
     * interpreted simulation.
     */
  }

  if (SenalLED_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update for UnitDelay: '<Root>/Unit Delay' */
    SenalLED_DW.UnitDelay_DSTATE = SenalLED_B.V;

    /* Update for UnitDelay: '<Root>/Unit Delay1' */
    SenalLED_DW.UnitDelay1_DSTATE = SenalLED_B.IntegradorDiscreto[2];
  }

  if (SenalLED_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update for DiscreteIntegrator: '<S57>/Integrador Discreto' */
    Sum_idx_1 = SenalLED_DW.IntegradorDiscreto_DSTATE[0];
    SenalLED_B.O = SenalLED_DW.IntegradorDiscreto_DSTATE[1];
    tmp = SenalLED_DW.IntegradorDiscreto_DSTATE[2];
    SenalLED_DW.IntegradorDiscreto_DSTATE[0] =
      SenalLED_P.IntegradorDiscreto_gainval * SenalLED_B.Product1 + Sum_idx_1;
    SenalLED_DW.IntegradorDiscreto_DSTATE[1] =
      SenalLED_P.IntegradorDiscreto_gainval * SenalLED_B.Product + SenalLED_B.O;
    SenalLED_DW.IntegradorDiscreto_DSTATE[2] =
      SenalLED_P.IntegradorDiscreto_gainval * SenalLED_B.MatrixMultiply_p[1] +
      tmp;
  }

  if (SenalLED_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for DiscreteIntegrator: '<S37>/Integrator' */
    SenalLED_DW.Integrator_DSTATE += SenalLED_P.Integrator_gainval *
      rtb_IntegralGain;
  }

  if (SenalLED_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update for DiscreteIntegrator: '<S93>/Integrator' */
    SenalLED_DW.Integrator_DSTATE_o += SenalLED_P.Integrator_gainval_e *
      SenalLED_B.IntegralGain_e;

    /* Update for DiscreteIntegrator: '<S141>/Integrator' */
    SenalLED_DW.Integrator_DSTATE_h += SenalLED_P.Integrator_gainval_k *
      SenalLED_B.IntegralGain_a;

    /* Update for DiscreteFilter: '<S159>/Modelo Rueda Izquierda' */
    denAccum = div_repeat_s32_floor((((int32_T)SenalLED_B.Saturation_n << 14) -
      (int32_T)SenalLED_P.ModeloRuedaIzquierda_DenCoef[1L] *
      SenalLED_DW.ModeloRuedaIzquierda_states[0L]) - (int32_T)
      SenalLED_P.ModeloRuedaIzquierda_DenCoef[2L] *
      SenalLED_DW.ModeloRuedaIzquierda_states[1L],
      SenalLED_P.ModeloRuedaIzquierda_DenCoef[0], 14U);
    SenalLED_DW.ModeloRuedaIzquierda_states[1L] =
      SenalLED_DW.ModeloRuedaIzquierda_states[0L];
    SenalLED_DW.ModeloRuedaIzquierda_states[0L] = (int16_T)(denAccum >> 14);

    /* Update for DiscreteFilter: '<S159>/Modelo Rueda Derecha' */
    denAccum = div_repeat_s32_floor((((int32_T)SenalLED_B.Saturation << 14) -
      (int32_T)SenalLED_P.ModeloRuedaDerecha_DenCoef[1L] *
      SenalLED_DW.ModeloRuedaDerecha_states[0L]) - (int32_T)
      SenalLED_P.ModeloRuedaDerecha_DenCoef[2L] *
      SenalLED_DW.ModeloRuedaDerecha_states[1L],
      SenalLED_P.ModeloRuedaDerecha_DenCoef[0], 14U);
    SenalLED_DW.ModeloRuedaDerecha_states[1L] =
      SenalLED_DW.ModeloRuedaDerecha_states[0L];
    SenalLED_DW.ModeloRuedaDerecha_states[0L] = (int16_T)(denAccum >> 14);

    /* Update for S-Function (MisEncoderss): '<S160>/S-Function Builder' */

    /* S-Function "MisEncoderss_wrapper" Block: <S160>/S-Function Builder */
    MisEncoderss_Update_wrapper(&SenalLED_B.SFunctionBuilder[0],
      &SenalLED_DW.SFunctionBuilder_DSTATE, SenalLED_P.SFunctionBuilder_P1, 2,
      SenalLED_P.SFunctionBuilder_P2, 2, SenalLED_P.SFunctionBuilder_P3, 2);

    /* Update for UnitDelay: '<S161>/UD' incorporates:
     *  SampleTimeMath: '<S161>/TSamp'
     *
     * About '<S161>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     *
     * Block description for '<S161>/UD':
     *
     *  Store in Global RAM
     */
    SenalLED_DW.UD_DSTATE[0] = rtb_TSamp_idx_0;
    SenalLED_DW.UD_DSTATE[1] = rtb_TSamp_idx_1;
  }

  rate_scheduler();
}

/* Model initialize function */
void SenalLED_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)SenalLED_M, 0,
                sizeof(RT_MODEL_SenalLED_T));

  /* block I/O */
  (void) memset(((void *) &SenalLED_B), 0,
                sizeof(B_SenalLED_T));

  /* states (dwork) */
  (void) memset((void *)&SenalLED_DW, 0,
                sizeof(DW_SenalLED_T));

  {
    codertarget_arduinobase_int_a_T *obj;

    /* Start for DiscretePulseGenerator: '<S2>/Pulse Generator' */
    SenalLED_DW.clockTickCounter = 0L;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
    SenalLED_DW.senal = SenalLED_P.DataStoreMemory_InitialValue;

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
    SenalLED_DW.UnitDelay_DSTATE = SenalLED_P.UnitDelay_InitialCondition;

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
    SenalLED_DW.UnitDelay1_DSTATE = SenalLED_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S57>/Integrador Discreto' */
    SenalLED_DW.IntegradorDiscreto_DSTATE[0] = SenalLED_P.IntegradorDiscreto_IC;
    SenalLED_DW.IntegradorDiscreto_DSTATE[1] = SenalLED_P.IntegradorDiscreto_IC;
    SenalLED_DW.IntegradorDiscreto_DSTATE[2] = SenalLED_P.IntegradorDiscreto_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S37>/Integrator' */
    SenalLED_DW.Integrator_DSTATE = SenalLED_P.PIDController_InitialConditionF;

    /* InitializeConditions for DiscreteIntegrator: '<S93>/Integrator' */
    SenalLED_DW.Integrator_DSTATE_o = SenalLED_P.PIDDerecho_InitialConditionForI;

    /* InitializeConditions for DiscreteIntegrator: '<S141>/Integrator' */
    SenalLED_DW.Integrator_DSTATE_h = SenalLED_P.PIDIzquerdo_InitialConditionFor;

    /* InitializeConditions for Memory: '<S54>/Memory' */
    SenalLED_B.EnvironmentSwitch[0] = SenalLED_P.Memory_InitialCondition;

    /* InitializeConditions for DiscreteFilter: '<S159>/Modelo Rueda Izquierda' */
    SenalLED_DW.ModeloRuedaIzquierda_states[0] =
      SenalLED_P.ModeloRuedaIzquierda_InitialSta;

    /* InitializeConditions for DiscreteFilter: '<S159>/Modelo Rueda Derecha' */
    SenalLED_DW.ModeloRuedaDerecha_states[0] =
      SenalLED_P.ModeloRuedaDerecha_InitialState;

    /* InitializeConditions for Memory: '<S54>/Memory' */
    SenalLED_B.EnvironmentSwitch[1] = SenalLED_P.Memory_InitialCondition;

    /* InitializeConditions for DiscreteFilter: '<S159>/Modelo Rueda Izquierda' */
    SenalLED_DW.ModeloRuedaIzquierda_states[1] =
      SenalLED_P.ModeloRuedaIzquierda_InitialSta;

    /* InitializeConditions for DiscreteFilter: '<S159>/Modelo Rueda Derecha' */
    SenalLED_DW.ModeloRuedaDerecha_states[1] =
      SenalLED_P.ModeloRuedaDerecha_InitialState;

    /* InitializeConditions for S-Function (MisEncoderss): '<S160>/S-Function Builder' */

    /* S-Function Block: <S160>/S-Function Builder */
    {
      real_T initVector[1] = { 0 };

      {
        int_T i1;
        for (i1=0; i1 < 1; i1++) {
          SenalLED_DW.SFunctionBuilder_DSTATE = initVector[0];
        }
      }
    }

    /* InitializeConditions for UnitDelay: '<S161>/UD'
     *
     * Block description for '<S161>/UD':
     *
     *  Store in Global RAM
     */
    SenalLED_DW.UD_DSTATE[0] = SenalLED_P.DiscreteDerivative_ICPrevScaled;
    SenalLED_DW.UD_DSTATE[1] = SenalLED_P.DiscreteDerivative_ICPrevScaled;

    /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem' */
    /* SystemInitialize for Outport: '<S4>/Dato' incorporates:
     *  Inport: '<S4>/In1'
     */
    SenalLED_B.In1 = SenalLED_P.Dato_Y0;

    /* End of SystemInitialize for SubSystem: '<Root>/Subsystem' */

    /* SystemInitialize for Chart: '<Root>/Chart' */
    SenalLED_DW.is_active_c3_SenalLED = 0U;
    SenalLED_DW.is_c3_SenalLED = SenalLED_IN_NO_ACTIVE_CHILD;

    /* Start for MATLABSystem: '<Root>/Serial Receive' */
    SenalLED_DW.obj.matlabCodegenIsDeleted = false;
    SenalLED_DW.obj.Protocol = SenalLED_P.SerialReceive_Protocol;
    SenalLED_DW.obj.isInitialized = 1L;
    SenalLED_DW.obj.DataTypeWidth = 2U;
    SenalLED_DW.obj.DataSizeInBytes = SenalLED_DW.obj.DataTypeWidth;
    MW_SCI_Open(3);
    SenalLED_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<S162>/Digital Output' */
    SenalLED_DW.obj_d.matlabCodegenIsDeleted = false;
    SenalLED_DW.obj_d.isInitialized = 1L;
    digitalIOSetup(10, 1);
    SenalLED_DW.obj_d.isSetupComplete = true;

    /* Start for MATLABSystem: '<S162>/Digital Output1' */
    SenalLED_DW.obj_e.matlabCodegenIsDeleted = false;
    SenalLED_DW.obj_e.isInitialized = 1L;
    digitalIOSetup(5, 1);
    SenalLED_DW.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<S162>/Drch_Adelante' */
    SenalLED_DW.obj_f.matlabCodegenIsDeleted = true;
    SenalLED_DW.obj_f.isInitialized = 0L;
    SenalLED_DW.obj_f.matlabCodegenIsDeleted = false;
    SenalLED_DW.obj_f.PinPWM = 13UL;
    obj = &SenalLED_DW.obj_f;
    SenalLED_DW.obj_f.isSetupComplete = false;
    SenalLED_DW.obj_f.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(SenalLED_DW.obj_f.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_f.PinPWM);
    MW_PWM_Start(SenalLED_DW.obj_f.MW_PWM_HANDLE);
    SenalLED_DW.obj_f.isSetupComplete = true;

    /* Start for MATLABSystem: '<S162>/Drch_Atras' */
    SenalLED_DW.obj_jg.matlabCodegenIsDeleted = true;
    SenalLED_DW.obj_jg.isInitialized = 0L;
    SenalLED_DW.obj_jg.matlabCodegenIsDeleted = false;
    SenalLED_DW.obj_jg.PinPWM = 8UL;
    obj = &SenalLED_DW.obj_jg;
    SenalLED_DW.obj_jg.isSetupComplete = false;
    SenalLED_DW.obj_jg.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(SenalLED_DW.obj_jg.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_jg.PinPWM);
    MW_PWM_Start(SenalLED_DW.obj_jg.MW_PWM_HANDLE);
    SenalLED_DW.obj_jg.isSetupComplete = true;

    /* Start for MATLABSystem: '<S162>/Izq_Adelante' */
    SenalLED_DW.obj_b.matlabCodegenIsDeleted = true;
    SenalLED_DW.obj_b.isInitialized = 0L;
    SenalLED_DW.obj_b.matlabCodegenIsDeleted = false;
    SenalLED_DW.obj_b.PinPWM = 7UL;
    obj = &SenalLED_DW.obj_b;
    SenalLED_DW.obj_b.isSetupComplete = false;
    SenalLED_DW.obj_b.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(SenalLED_DW.obj_b.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_b.PinPWM);
    MW_PWM_Start(SenalLED_DW.obj_b.MW_PWM_HANDLE);
    SenalLED_DW.obj_b.isSetupComplete = true;

    /* Start for MATLABSystem: '<S162>/Izq_Atras' */
    SenalLED_DW.obj_j.matlabCodegenIsDeleted = true;
    SenalLED_DW.obj_j.isInitialized = 0L;
    SenalLED_DW.obj_j.matlabCodegenIsDeleted = false;
    SenalLED_DW.obj_j.PinPWM = 6UL;
    obj = &SenalLED_DW.obj_j;
    SenalLED_DW.obj_j.isSetupComplete = false;
    SenalLED_DW.obj_j.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(SenalLED_DW.obj_j.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_j.PinPWM);
    MW_PWM_Start(SenalLED_DW.obj_j.MW_PWM_HANDLE);
    SenalLED_DW.obj_j.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/BLUE' */
    SenalLED_DW.obj_h.matlabCodegenIsDeleted = false;
    SenalLED_DW.obj_h.isInitialized = 1L;
    digitalIOSetup(49, 1);
    SenalLED_DW.obj_h.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/GREEN' */
    SenalLED_DW.obj_g.matlabCodegenIsDeleted = false;
    SenalLED_DW.obj_g.isInitialized = 1L;
    digitalIOSetup(53, 1);
    SenalLED_DW.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/RED' */
    SenalLED_DW.obj_p.matlabCodegenIsDeleted = false;
    SenalLED_DW.obj_p.isInitialized = 1L;
    digitalIOSetup(51, 1);
    SenalLED_DW.obj_p.isSetupComplete = true;
  }
}

/* Model terminate function */
void SenalLED_terminate(void)
{
  codertarget_arduinobase_int_a_T *obj;

  /* Terminate for MATLABSystem: '<Root>/Serial Receive' */
  if (!SenalLED_DW.obj.matlabCodegenIsDeleted) {
    SenalLED_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Serial Receive' */

  /* Terminate for MATLABSystem: '<S162>/Digital Output' */
  if (!SenalLED_DW.obj_d.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S162>/Digital Output' */

  /* Terminate for MATLABSystem: '<S162>/Digital Output1' */
  if (!SenalLED_DW.obj_e.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S162>/Digital Output1' */

  /* Terminate for MATLABSystem: '<S162>/Drch_Adelante' */
  obj = &SenalLED_DW.obj_f;
  if (!SenalLED_DW.obj_f.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_f.matlabCodegenIsDeleted = true;
    if ((SenalLED_DW.obj_f.isInitialized == 1L) &&
        SenalLED_DW.obj_f.isSetupComplete) {
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_f.PinPWM);
      MW_PWM_SetDutyCycle(SenalLED_DW.obj_f.MW_PWM_HANDLE, 0.0);
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_f.PinPWM);
      MW_PWM_Close(SenalLED_DW.obj_f.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S162>/Drch_Adelante' */

  /* Terminate for MATLABSystem: '<S162>/Drch_Atras' */
  obj = &SenalLED_DW.obj_jg;
  if (!SenalLED_DW.obj_jg.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_jg.matlabCodegenIsDeleted = true;
    if ((SenalLED_DW.obj_jg.isInitialized == 1L) &&
        SenalLED_DW.obj_jg.isSetupComplete) {
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_jg.PinPWM);
      MW_PWM_SetDutyCycle(SenalLED_DW.obj_jg.MW_PWM_HANDLE, 0.0);
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_jg.PinPWM);
      MW_PWM_Close(SenalLED_DW.obj_jg.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S162>/Drch_Atras' */

  /* Terminate for MATLABSystem: '<S162>/Izq_Adelante' */
  obj = &SenalLED_DW.obj_b;
  if (!SenalLED_DW.obj_b.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_b.matlabCodegenIsDeleted = true;
    if ((SenalLED_DW.obj_b.isInitialized == 1L) &&
        SenalLED_DW.obj_b.isSetupComplete) {
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_b.PinPWM);
      MW_PWM_SetDutyCycle(SenalLED_DW.obj_b.MW_PWM_HANDLE, 0.0);
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_b.PinPWM);
      MW_PWM_Close(SenalLED_DW.obj_b.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S162>/Izq_Adelante' */

  /* Terminate for MATLABSystem: '<S162>/Izq_Atras' */
  obj = &SenalLED_DW.obj_j;
  if (!SenalLED_DW.obj_j.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_j.matlabCodegenIsDeleted = true;
    if ((SenalLED_DW.obj_j.isInitialized == 1L) &&
        SenalLED_DW.obj_j.isSetupComplete) {
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_j.PinPWM);
      MW_PWM_SetDutyCycle(SenalLED_DW.obj_j.MW_PWM_HANDLE, 0.0);
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(SenalLED_DW.obj_j.PinPWM);
      MW_PWM_Close(SenalLED_DW.obj_j.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S162>/Izq_Atras' */

  /* Terminate for MATLABSystem: '<S2>/BLUE' */
  if (!SenalLED_DW.obj_h.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S2>/BLUE' */

  /* Terminate for MATLABSystem: '<S2>/GREEN' */
  if (!SenalLED_DW.obj_g.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S2>/GREEN' */

  /* Terminate for MATLABSystem: '<S2>/RED' */
  if (!SenalLED_DW.obj_p.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S2>/RED' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
