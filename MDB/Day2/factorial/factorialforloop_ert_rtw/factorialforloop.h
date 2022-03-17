/*
 * File: factorialforloop.h
 *
 * Code generated for Simulink model 'factorialforloop'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Mar 17 03:48:19 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_factorialforloop_h_
#define RTW_HEADER_factorialforloop_h_
#include <stddef.h>
#include <string.h>
#ifndef factorialforloop_COMMON_INCLUDES_
# define factorialforloop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* factorialforloop_COMMON_INCLUDES_ */

#include "factorialforloop_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T Delay_DSTATE;                /* '<S1>/Delay' */
} DW_factorialforloop_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T Input1;                      /* '<Root>/Input1 ' */
} ExtU_factorialforloop_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T Output1;                     /* '<Root>/Output1 ' */
} ExtY_factorialforloop_T;

/* Real-time Model Data Structure */
struct tag_RTM_factorialforloop_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_factorialforloop_T factorialforloop_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_factorialforloop_T factorialforloop_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_factorialforloop_T factorialforloop_Y;

/* Model entry point functions */
extern void factorialforloop_initialize(void);
extern void factorialforloop_step(void);
extern void factorialforloop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_factorialforloop_T *const factorialforloop_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'factorialforloop'
 * '<S1>'   : 'factorialforloop/factorial '
 */
#endif                                 /* RTW_HEADER_factorialforloop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
