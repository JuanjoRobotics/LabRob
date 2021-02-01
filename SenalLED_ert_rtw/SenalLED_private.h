/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SenalLED_private.h
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

#ifndef RTW_HEADER_SenalLED_private_h_
#define RTW_HEADER_SenalLED_private_h_
#include "rtwtypes.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFU) ) || ( INT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFUL) ) || ( LONG_MAX != (0x7FFFFFFFL) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void MisEncoderss_Start_wrapper(real_T *xD,
    const int32_T *enc, const int_T p_width0,
    const int32_T *pinA, const int_T p_width1,
    const int32_T *pinB, const int_T p_width2);
  extern void MisEncoderss_Outputs_wrapper(real_T *pos,
    const real_T *xD,
    const int32_T *enc, const int_T p_width0,
    const int32_T *pinA, const int_T p_width1,
    const int32_T *pinB, const int_T p_width2);
  extern void MisEncoderss_Update_wrapper(real_T *pos,
    real_T *xD,
    const int32_T *enc, const int_T p_width0,
    const int32_T *pinA, const int_T p_width1,
    const int32_T *pinB, const int_T p_width2);
  extern void MisEncoderss_Terminate_wrapper(real_T *xD,
    const int32_T *enc, const int_T p_width0,
    const int32_T *pinA, const int_T p_width1,
    const int32_T *pinB, const int_T p_width2);

#ifdef __cplusplus

}
#endif

extern int32_T div_repeat_s32_floor(int32_T numerator, int32_T denominator,
  uint16_T nRepeatSub);
extern uint32_T div_nzp_repeat_u32_ceiling(uint32_T numerator, uint32_T
  denominator, uint16_T nRepeatSub);
extern uint32_T div_nzp_repeat_u32(uint32_T numerator, uint32_T denominator,
  uint16_T nRepeatSub);

#endif                                 /* RTW_HEADER_SenalLED_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
