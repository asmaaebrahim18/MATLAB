/*
 * File: Task_2.h
 *
 * Code generated for Simulink model 'Task_2'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb  1 11:29:30 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Task_2_h_
#define RTW_HEADER_Task_2_h_
#include <string.h>
#include <stddef.h>
#ifndef Task_2_COMMON_INCLUDES_
# define Task_2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Task_2_COMMON_INCLUDES_ */

#include "Task_2_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T InPut1;                    /* '<Root>/InPut1' */
  boolean_T InPut2;                    /* '<Root>/InPut2' */
} ExtU_Task_2_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T AND_Out;                   /* '<Root>/AND_Out' */
  boolean_T OR_Out;                    /* '<Root>/OR_Out' */
  boolean_T XOR_Out;                   /* '<Root>/XOR_Out' */
  boolean_T NOR_Out;                   /* '<Root>/NOR_Out' */
  boolean_T InPut1Inverter;            /* '<Root>/InPut1Inverter' */
  boolean_T InPut2Inverter;            /* '<Root>/InPut2Inverter' */
} ExtY_Task_2_T;

/* Real-time Model Data Structure */
struct tag_RTM_Task_2_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Task_2_T Task_2_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Task_2_T Task_2_Y;

/* Model entry point functions */
extern void Task_2_initialize(void);
extern void Task_2_step(void);
extern void Task_2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Task_2_T *const Task_2_M;

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
 * '<Root>' : 'Task_2'
 */
#endif                                 /* RTW_HEADER_Task_2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
