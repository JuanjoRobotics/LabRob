/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SenalLED.c
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
#include "SenalLED_private.h"

/* Block signals (default storage) */
B_SenalLED_T SenalLED_B;

/* Block states (default storage) */
DW_SenalLED_T SenalLED_DW;

/* Real-time model */
static RT_MODEL_SenalLED_T SenalLED_M_;
RT_MODEL_SenalLED_T *const SenalLED_M = &SenalLED_M_;
static void rate_scheduler(void);

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
  if ((SenalLED_M->Timing.TaskCounters.TID[1]) > 2) {/* Sample time: [0.01s, 0.0s] */
    SenalLED_M->Timing.TaskCounters.TID[1] = 0;
  }

  (SenalLED_M->Timing.TaskCounters.TID[2])++;
  if ((SenalLED_M->Timing.TaskCounters.TID[2]) > 9) {
                                /* Sample time: [0.033333333333333333s, 0.0s] */
    SenalLED_M->Timing.TaskCounters.TID[2] = 0;
  }

  (SenalLED_M->Timing.TaskCounters.TID[3])++;
  if ((SenalLED_M->Timing.TaskCounters.TID[3]) > 29) {/* Sample time: [0.1s, 0.0s] */
    SenalLED_M->Timing.TaskCounters.TID[3] = 0;
  }

  (SenalLED_M->Timing.TaskCounters.TID[4])++;
  if ((SenalLED_M->Timing.TaskCounters.TID[4]) > 119) {/* Sample time: [0.4s, 0.0s] */
    SenalLED_M->Timing.TaskCounters.TID[4] = 0;
  }
}

/* Model step function */
void SenalLED_step(void)
{
  uint16_T u;
  uint8_T LogicalOperator2_tmp;
  uint8_T rtb_IntegertoBitConverter_idx_1;
  uint8_T rtb_IntegertoBitConverter_idx_2;
  boolean_T rtb_LogicalOperator4;

  /* Reset subsysRan breadcrumbs */
  srClearBC(SenalLED_DW.Subsystem_SubsysRanBC);
  if (SenalLED_M->Timing.TaskCounters.TID[1] == 0) {
    /* MATLABSystem: '<Root>/Serial Receive' */
    if (SenalLED_DW.obj.Protocol != SenalLED_P.SerialReceive_Protocol) {
      SenalLED_DW.obj.Protocol = SenalLED_P.SerialReceive_Protocol;
    }

    /* MATLABSystem: '<Root>/Serial Receive' */
    MW_Serial_read(3, SenalLED_DW.obj.DataSizeInBytes,
                   &SenalLED_B.SerialReceive_o1, &SenalLED_B.SerialReceive_o2);

    /* Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
     *  EnablePort: '<S2>/Enable'
     */
    if (SenalLED_B.SerialReceive_o2 > 0) {
      /* Inport: '<S2>/In1' */
      SenalLED_B.In1 = SenalLED_B.SerialReceive_o1;
      srUpdateBC(SenalLED_DW.Subsystem_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<Root>/Subsystem' */
  }

  if (SenalLED_M->Timing.TaskCounters.TID[4] == 0) {
    /* DiscretePulseGenerator: '<S1>/Pulse Generator' */
    SenalLED_B.PulseGenerator = (SenalLED_DW.clockTickCounter <
      SenalLED_P.PulseGenerator_Duty) && (SenalLED_DW.clockTickCounter >= 0L) ?
      SenalLED_P.PulseGenerator_Amp : 0.0;

    /* DiscretePulseGenerator: '<S1>/Pulse Generator' */
    if (SenalLED_DW.clockTickCounter >= SenalLED_P.PulseGenerator_Period - 1.0)
    {
      SenalLED_DW.clockTickCounter = 0L;
    } else {
      SenalLED_DW.clockTickCounter++;
    }
  }

  if (SenalLED_M->Timing.TaskCounters.TID[3] == 0) {
    /* DataStoreWrite: '<Root>/Data Store Write' */
    SenalLED_DW.senal = SenalLED_B.In1;

    /* S-Function (scominttobit): '<S1>/Integer to Bit Converter' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    /* Integer to Bit Conversion */
    u = SenalLED_DW.senal >> 1;
    rtb_IntegertoBitConverter_idx_2 = (uint8_T)((int16_T)u & 1);
    u >>= 1;
    rtb_IntegertoBitConverter_idx_1 = (uint8_T)((int16_T)u & 1);
    u >>= 1;

    /* Logic: '<S1>/Logical Operator4' incorporates:
     *  Logic: '<S1>/Logical Operator3'
     *  S-Function (scominttobit): '<S1>/Integer to Bit Converter'
     */
    rtb_LogicalOperator4 = ((SenalLED_B.PulseGenerator != 0.0) || ((uint8_T)
      ((int16_T)u & 1) == 0));

    /* S-Function (scominttobit): '<S1>/Integer to Bit Converter' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read'
     *  S-Function (scominttobit): '<S1>/Integer to Bit Converter1'
     */
    LogicalOperator2_tmp = (uint8_T)((int16_T)SenalLED_DW.senal & 1);

    /* Logic: '<S1>/Logical Operator2' incorporates:
     *  S-Function (scominttobit): '<S1>/Integer to Bit Converter'
     */
    SenalLED_B.LogicalOperator2 = (rtb_LogicalOperator4 && (LogicalOperator2_tmp
      != 0));

    /* Logic: '<S1>/Logical Operator1' */
    SenalLED_B.LogicalOperator1 = (rtb_LogicalOperator4 &&
      (rtb_IntegertoBitConverter_idx_2 != 0));

    /* Logic: '<S1>/Logical Operator' */
    SenalLED_B.LogicalOperator = (rtb_LogicalOperator4 &&
      (rtb_IntegertoBitConverter_idx_1 != 0));

    /* MATLABSystem: '<S1>/BLUE' */
    writeDigitalPin(49, (uint8_T)SenalLED_B.LogicalOperator2);

    /* S-Function (scominttobit): '<S1>/Integer to Bit Converter1' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    /* Integer to Bit Conversion */
    SenalLED_B.IntegertoBitConverter1[3L] = LogicalOperator2_tmp;
    u = SenalLED_DW.senal >> 1;
    SenalLED_B.IntegertoBitConverter1[2L] = (uint8_T)((int16_T)u & 1);
    u >>= 1;
    SenalLED_B.IntegertoBitConverter1[1L] = (uint8_T)((int16_T)u & 1);
    u >>= 1;
    SenalLED_B.IntegertoBitConverter1[0L] = (uint8_T)((int16_T)u & 1);

    /* MATLABSystem: '<S1>/GREEN' */
    writeDigitalPin(53, (uint8_T)SenalLED_B.LogicalOperator);

    /* MATLABSystem: '<S1>/RED' */
    writeDigitalPin(51, (uint8_T)SenalLED_B.LogicalOperator1);
  }

  if (SenalLED_M->Timing.TaskCounters.TID[4] == 0) {
  }

  if (SenalLED_M->Timing.TaskCounters.TID[2] == 0) {
    /* S-Function (saeroclockpacer): '<S1>/Simulation Pace' */
    /*
     * The Clock Pacer generates no code, it is only active in
     * interpreted simulation.
     */
  }

  if (SenalLED_M->Timing.TaskCounters.TID[1] == 0) {
  }

  /* External mode */
  rtExtModeUploadCheckTrigger(5);

  {                            /* Sample time: [0.0033333333333333335s, 0.0s] */
    rtExtModeUpload(0, (real_T)SenalLED_M->Timing.taskTime0);
  }

  if (SenalLED_M->Timing.TaskCounters.TID[1] == 0) {/* Sample time: [0.01s, 0.0s] */
    rtExtModeUpload(1, (real_T)((SenalLED_M->Timing.clockTick1) * 0.01));
  }

  if (SenalLED_M->Timing.TaskCounters.TID[2] == 0) {
                                /* Sample time: [0.033333333333333333s, 0.0s] */
    rtExtModeUpload(2, (real_T)((SenalLED_M->Timing.clockTick2) *
      0.033333333333333333));
  }

  if (SenalLED_M->Timing.TaskCounters.TID[3] == 0) {/* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(3, (real_T)((SenalLED_M->Timing.clockTick3) * 0.1));
  }

  if (SenalLED_M->Timing.TaskCounters.TID[4] == 0) {/* Sample time: [0.4s, 0.0s] */
    rtExtModeUpload(4, (real_T)((SenalLED_M->Timing.clockTick4) * 0.4));
  }

  /* signal main to stop simulation */
  {                            /* Sample time: [0.0033333333333333335s, 0.0s] */
    if ((rtmGetTFinal(SenalLED_M)!=-1) &&
        !((rtmGetTFinal(SenalLED_M)-SenalLED_M->Timing.taskTime0) >
          SenalLED_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(SenalLED_M, "Simulation finished");
    }

    if (rtmGetStopRequested(SenalLED_M)) {
      rtmSetErrorStatus(SenalLED_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  SenalLED_M->Timing.taskTime0 =
    ((time_T)(++SenalLED_M->Timing.clockTick0)) * SenalLED_M->Timing.stepSize0;
  if (SenalLED_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    SenalLED_M->Timing.clockTick1++;
  }

  if (SenalLED_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update absolute timer for sample time: [0.033333333333333333s, 0.0s] */
    /* The "clockTick2" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.033333333333333333, which is the step size
     * of the task. Size of "clockTick2" ensures timer will not overflow during the
     * application lifespan selected.
     */
    SenalLED_M->Timing.clockTick2++;
  }

  if (SenalLED_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick3" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.1, which is the step size
     * of the task. Size of "clockTick3" ensures timer will not overflow during the
     * application lifespan selected.
     */
    SenalLED_M->Timing.clockTick3++;
  }

  if (SenalLED_M->Timing.TaskCounters.TID[4] == 0) {
    /* Update absolute timer for sample time: [0.4s, 0.0s] */
    /* The "clockTick4" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.4, which is the step size
     * of the task. Size of "clockTick4" ensures timer will not overflow during the
     * application lifespan selected.
     */
    SenalLED_M->Timing.clockTick4++;
  }

  rate_scheduler();
}

/* Model initialize function */
void SenalLED_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)SenalLED_M, 0,
                sizeof(RT_MODEL_SenalLED_T));
  rtmSetTFinal(SenalLED_M, -1);
  SenalLED_M->Timing.stepSize0 = 0.0033333333333333335;

  /* External mode info */
  SenalLED_M->Sizes.checksums[0] = (3392555801U);
  SenalLED_M->Sizes.checksums[1] = (859116809U);
  SenalLED_M->Sizes.checksums[2] = (189824965U);
  SenalLED_M->Sizes.checksums[3] = (1408456651U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    SenalLED_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = (sysRanDType *)&SenalLED_DW.Subsystem_SubsysRanBC;
    rteiSetModelMappingInfoPtr(SenalLED_M->extModeInfo,
      &SenalLED_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(SenalLED_M->extModeInfo, SenalLED_M->Sizes.checksums);
    rteiSetTPtr(SenalLED_M->extModeInfo, rtmGetTPtr(SenalLED_M));
  }

  /* block I/O */
  (void) memset(((void *) &SenalLED_B), 0,
                sizeof(B_SenalLED_T));

  /* states (dwork) */
  (void) memset((void *)&SenalLED_DW, 0,
                sizeof(DW_SenalLED_T));

  /* Start for DiscretePulseGenerator: '<S1>/Pulse Generator' */
  SenalLED_DW.clockTickCounter = 0L;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  SenalLED_DW.senal = SenalLED_P.DataStoreMemory_InitialValue;

  /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem' */
  /* SystemInitialize for Outport: '<S2>/Out1' incorporates:
   *  Inport: '<S2>/In1'
   */
  SenalLED_B.In1 = SenalLED_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem' */

  /* Start for MATLABSystem: '<Root>/Serial Receive' */
  SenalLED_DW.obj.matlabCodegenIsDeleted = false;
  SenalLED_DW.obj.Protocol = SenalLED_P.SerialReceive_Protocol;
  SenalLED_DW.obj.isInitialized = 1L;
  SenalLED_DW.obj.DataTypeWidth = 2U;
  SenalLED_DW.obj.DataSizeInBytes = SenalLED_DW.obj.DataTypeWidth;
  MW_SCI_Open(3);
  SenalLED_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/BLUE' */
  SenalLED_DW.obj_h.matlabCodegenIsDeleted = false;
  SenalLED_DW.obj_h.isInitialized = 1L;
  digitalIOSetup(49, 1);
  SenalLED_DW.obj_h.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/GREEN' */
  SenalLED_DW.obj_g.matlabCodegenIsDeleted = false;
  SenalLED_DW.obj_g.isInitialized = 1L;
  digitalIOSetup(53, 1);
  SenalLED_DW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/RED' */
  SenalLED_DW.obj_p.matlabCodegenIsDeleted = false;
  SenalLED_DW.obj_p.isInitialized = 1L;
  digitalIOSetup(51, 1);
  SenalLED_DW.obj_p.isSetupComplete = true;
}

/* Model terminate function */
void SenalLED_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Serial Receive' */
  if (!SenalLED_DW.obj.matlabCodegenIsDeleted) {
    SenalLED_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Serial Receive' */
  /* Terminate for MATLABSystem: '<S1>/BLUE' */
  if (!SenalLED_DW.obj_h.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S1>/BLUE' */

  /* Terminate for MATLABSystem: '<S1>/GREEN' */
  if (!SenalLED_DW.obj_g.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S1>/GREEN' */

  /* Terminate for MATLABSystem: '<S1>/RED' */
  if (!SenalLED_DW.obj_p.matlabCodegenIsDeleted) {
    SenalLED_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S1>/RED' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
