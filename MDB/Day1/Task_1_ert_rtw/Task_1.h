/*
 * File: Task_1.h
 *
 * Code generated for Simulink model 'Task_1'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb  1 11:14:14 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task_1_h_
#define RTW_HEADER_Task_1_h_
#include <string.h>
#include <stddef.h>
#ifndef Task_1_COMMON_INCLUDES_
# define Task_1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Task_1_COMMON_INCLUDES_ */

#include "Task_1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Constant;                     /* '<S3>/Constant' */
} B_Task_1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T DataInput1;                   /* '<Root>/DataInput1 ' */
  real_T DataInput2;                   /* '<Root>/DataInput2' */
} ExtU_Task_1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T ADDout;                       /* '<Root>/ADDout' */
  real_T SubOut;                       /* '<Root>/SubOut ' */
  real_T MULOut;                       /* '<Root>/MULOut' */
  real_T DevOut;                       /* '<Root>/DevOut' */
  boolean_T DevByZeroFlag;             /* '<Root>/DevByZeroFlag' */
} ExtY_Task_1_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task_1_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Task_1_T Task_1_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_Task_1_T Task_1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task_1_T Task_1_Y;

/* Model entry point functions */
extern void Task_1_initialize(void);
extern void Task_1_step(void);
extern void Task_1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task_1_T *const Task_1_M;

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
 * '<Root>' : 'Task_1'
 * '<S1>'   : 'Task_1/Divde'
 * '<S2>'   : 'Task_1/Divde/If Action Subsystem'
 * '<S3>'   : 'Task_1/Divde/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_Task_1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
