/*
 * File: Task_2.c
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

#include "Task_2.h"
#include "Task_2_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Task_2_T Task_2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task_2_T Task_2_Y;

/* Real-time model */
RT_MODEL_Task_2_T Task_2_M_;
RT_MODEL_Task_2_T *const Task_2_M = &Task_2_M_;

/* Model step function */
void Task_2_step(void)
{
  /* Outport: '<Root>/AND_Out' incorporates:
   *  Inport: '<Root>/InPut1'
   *  Inport: '<Root>/InPut2'
   *  Logic: '<Root>/AND '
   */
  Task_2_Y.AND_Out = (Task_2_U.InPut1 && Task_2_U.InPut2);

  /* Outport: '<Root>/OR_Out' incorporates:
   *  Inport: '<Root>/InPut1'
   *  Inport: '<Root>/InPut2'
   *  Logic: '<Root>/OR '
   */
  Task_2_Y.OR_Out = (Task_2_U.InPut1 || Task_2_U.InPut2);

  /* Outport: '<Root>/XOR_Out' incorporates:
   *  Inport: '<Root>/InPut1'
   */
  Task_2_Y.XOR_Out = Task_2_U.InPut1;

  /* Logic: '<Root>/NOR ' incorporates:
   *  Inport: '<Root>/InPut1'
   *  Inport: '<Root>/InPut2'
   *  Logic: '<Root>/NOT '
   *  Logic: '<Root>/NOT  '
   */
  Task_2_Y.InPut1Inverter = !Task_2_U.InPut1;
  Task_2_Y.InPut2Inverter = !Task_2_U.InPut2;

  /* Outport: '<Root>/NOR_Out' incorporates:
   *  Logic: '<Root>/NOR '
   */
  Task_2_Y.NOR_Out = (Task_2_Y.InPut1Inverter && Task_2_Y.InPut2Inverter);
}

/* Model initialize function */
void Task_2_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Task_2_M, (NULL));

  /* external inputs */
  (void)memset(&Task_2_U, 0, sizeof(ExtU_Task_2_T));

  /* external outputs */
  (void) memset((void *)&Task_2_Y, 0,
                sizeof(ExtY_Task_2_T));
}

/* Model terminate function */
void Task_2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
