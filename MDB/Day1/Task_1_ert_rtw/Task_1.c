/*
 * File: Task_1.c
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

#include "Task_1.h"
#include "Task_1_private.h"

/* Block signals (default storage) */
B_Task_1_T Task_1_B;

/* External inputs (root inport signals with default storage) */
ExtU_Task_1_T Task_1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Task_1_T Task_1_Y;

/* Real-time model */
RT_MODEL_Task_1_T Task_1_M_;
RT_MODEL_Task_1_T *const Task_1_M = &Task_1_M_;

/* Model step function */
void Task_1_step(void)
{
  /* Outport: '<Root>/ADDout' incorporates:
   *  Inport: '<Root>/DataInput1 '
   *  Inport: '<Root>/DataInput2'
   *  Sum: '<Root>/ADD'
   */
  Task_1_Y.ADDout = Task_1_U.DataInput1 + Task_1_U.DataInput2;

  /* Outport: '<Root>/SubOut ' incorporates:
   *  Inport: '<Root>/DataInput1 '
   *  Inport: '<Root>/DataInput2'
   *  Sum: '<Root>/Subtract '
   */
  Task_1_Y.SubOut = Task_1_U.DataInput1 - Task_1_U.DataInput2;

  /* Outport: '<Root>/MULOut' incorporates:
   *  Inport: '<Root>/DataInput1 '
   *  Inport: '<Root>/DataInput2'
   *  Product: '<Root>/Multiply '
   */
  Task_1_Y.MULOut = Task_1_U.DataInput1 * Task_1_U.DataInput2;

  /* If: '<S1>/If' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/DataInput2'
   */
  if (Task_1_U.DataInput2 != 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/DevOut' incorporates:
     *  Inport: '<Root>/DataInput1 '
     *  Product: '<S2>/Divide'
     */
    Task_1_Y.DevOut = Task_1_U.DataInput1 / Task_1_U.DataInput2;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    Task_1_B.Constant = 1.0;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  }

  /* End of If: '<S1>/If' */

  /* Outport: '<Root>/DevByZeroFlag' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   */
  Task_1_Y.DevByZeroFlag = (Task_1_B.Constant != 0.0);
}

/* Model initialize function */
void Task_1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Task_1_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Task_1_B), 0,
                sizeof(B_Task_1_T));

  /* external inputs */
  (void)memset(&Task_1_U, 0, sizeof(ExtU_Task_1_T));

  /* external outputs */
  (void) memset((void *)&Task_1_Y, 0,
                sizeof(ExtY_Task_1_T));
}

/* Model terminate function */
void Task_1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
