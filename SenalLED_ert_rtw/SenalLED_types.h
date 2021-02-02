/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SenalLED_types.h
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

#ifndef RTW_HEADER_SenalLED_types_h_
#define RTW_HEADER_SenalLED_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef struct_tag_E7ZjpEHEQzzHgi4oOkm0RC
#define struct_tag_E7ZjpEHEQzzHgi4oOkm0RC

struct tag_E7ZjpEHEQzzHgi4oOkm0RC
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_E7ZjpEHEQzzHgi4oOkm0RC*/

#ifndef typedef_b_arduinodriver_ArduinoDigita_T
#define typedef_b_arduinodriver_ArduinoDigita_T

typedef struct tag_E7ZjpEHEQzzHgi4oOkm0RC b_arduinodriver_ArduinoDigita_T;

#endif                               /*typedef_b_arduinodriver_ArduinoDigita_T*/

#ifndef struct_tag_KPrkuOK6ssObybfxqijZPC
#define struct_tag_KPrkuOK6ssObybfxqijZPC

struct tag_KPrkuOK6ssObybfxqijZPC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_arduinodriver_ArduinoDigita_T DigitalIODriverObj;
};

#endif                                 /*struct_tag_KPrkuOK6ssObybfxqijZPC*/

#ifndef typedef_codertarget_arduinobase_block_T
#define typedef_codertarget_arduinobase_block_T

typedef struct tag_KPrkuOK6ssObybfxqijZPC codertarget_arduinobase_block_T;

#endif                               /*typedef_codertarget_arduinobase_block_T*/

/* Custom Type definition for MATLABSystem: '<S162>/Izq_Atras' */
#include "MW_SVD.h"
#ifndef struct_tag_ioKPFkOtLGdRlGav7pT3yD
#define struct_tag_ioKPFkOtLGdRlGav7pT3yD

struct tag_ioKPFkOtLGdRlGav7pT3yD
{
  int16_T __dummy;
};

#endif                                 /*struct_tag_ioKPFkOtLGdRlGav7pT3yD*/

#ifndef typedef_c_arduinodriver_ArduinoSerial_T
#define typedef_c_arduinodriver_ArduinoSerial_T

typedef struct tag_ioKPFkOtLGdRlGav7pT3yD c_arduinodriver_ArduinoSerial_T;

#endif                               /*typedef_c_arduinodriver_ArduinoSerial_T*/

#ifndef struct_tag_2MXFmq8tqMwlyFFQKTNrDC
#define struct_tag_2MXFmq8tqMwlyFFQKTNrDC

struct tag_2MXFmq8tqMwlyFFQKTNrDC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T Protocol;
  uint16_T DataSizeInBytes;
  uint16_T DataTypeWidth;
  c_arduinodriver_ArduinoSerial_T SerialDriverObj;
};

#endif                                 /*struct_tag_2MXFmq8tqMwlyFFQKTNrDC*/

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct tag_2MXFmq8tqMwlyFFQKTNrDC codertarget_arduinobase_inter_T;

#endif                               /*typedef_codertarget_arduinobase_inter_T*/

#ifndef struct_tag_lMInmD9zWRzKpUCrv0OfsC
#define struct_tag_lMInmD9zWRzKpUCrv0OfsC

struct tag_lMInmD9zWRzKpUCrv0OfsC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_PWM_HANDLE;
  uint32_T PinPWM;
};

#endif                                 /*struct_tag_lMInmD9zWRzKpUCrv0OfsC*/

#ifndef typedef_codertarget_arduinobase_int_a_T
#define typedef_codertarget_arduinobase_int_a_T

typedef struct tag_lMInmD9zWRzKpUCrv0OfsC codertarget_arduinobase_int_a_T;

#endif                               /*typedef_codertarget_arduinobase_int_a_T*/

/* Parameters (default storage) */
typedef struct P_SenalLED_T_ P_SenalLED_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_SenalLED_T RT_MODEL_SenalLED_T;

#endif                                 /* RTW_HEADER_SenalLED_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
