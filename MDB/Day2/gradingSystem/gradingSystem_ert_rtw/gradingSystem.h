/*
 * File: gradingSystem.h
 *
 * Code generated for Simulink model 'gradingSystem'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Mar 17 04:01:39 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_gradingSystem_h_
#define RTW_HEADER_gradingSystem_h_
#include <stddef.h>
#include <string.h>
#ifndef gradingSystem_COMMON_INCLUDES_
# define gradingSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* gradingSystem_COMMON_INCLUDES_ */

#include "gradingSystem_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  uint8_T Merge;                       /* '<S1>/Merge' */
} B_gradingSystem_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input1;                       /* '<Root>/Input1 ' */
} ExtU_gradingSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Output1;                     /* '<Root>/Output1 ' */
} ExtY_gradingSystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_gradingSystem_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_gradingSystem_T gradingSystem_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_gradingSystem_T gradingSystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_gradingSystem_T gradingSystem_Y;

/* Model entry point functions */
extern void gradingSystem_initialize(void);
extern void gradingSystem_step(void);
extern void gradingSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_gradingSystem_T *const gradingSystem_M;

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
 * '<Root>' : 'gradingSystem'
 * '<S1>'   : 'gradingSystem/grading system'
 * '<S2>'   : 'gradingSystem/grading system/If Action Subsystem'
 * '<S3>'   : 'gradingSystem/grading system/If Action Subsystem1'
 * '<S4>'   : 'gradingSystem/grading system/If Action Subsystem2'
 * '<S5>'   : 'gradingSystem/grading system/If Action Subsystem3'
 * '<S6>'   : 'gradingSystem/grading system/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_gradingSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
