/*
 * File: trafficstateflow.h
 *
 * Code generated for Simulink model 'trafficstateflow'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Apr  5 22:31:01 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_trafficstateflow_h_
#define RTW_HEADER_trafficstateflow_h_
#include <stddef.h>
#include <string.h>
#ifndef trafficstateflow_COMMON_INCLUDES_
# define trafficstateflow_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* trafficstateflow_COMMON_INCLUDES_ */

#include "trafficstateflow_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_trafficstateflow;/* '<Root>/Chart' */
  uint8_T is_c3_trafficstateflow;      /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_trafficstateflow_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Out1;                        /* '<Root>/Out1' */
  uint8_T Out2;                        /* '<Root>/Out2' */
  uint8_T Out3;                        /* '<Root>/Out3' */
} ExtY_trafficstateflow_T;

/* Real-time Model Data Structure */
struct tag_RTM_trafficstateflow_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_trafficstateflow_T trafficstateflow_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_trafficstateflow_T trafficstateflow_Y;

/* Model entry point functions */
extern void trafficstateflow_initialize(void);
extern void trafficstateflow_step(void);
extern void trafficstateflow_terminate(void);

/* Real-time Model object */
extern RT_MODEL_trafficstateflow_T *const trafficstateflow_M;

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
 * '<Root>' : 'trafficstateflow'
 * '<S1>'   : 'trafficstateflow/Chart'
 */
#endif                                 /* RTW_HEADER_trafficstateflow_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
