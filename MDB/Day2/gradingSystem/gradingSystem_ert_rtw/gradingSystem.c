/*
 * File: gradingSystem.c
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

#include "gradingSystem.h"
#include "gradingSystem_private.h"

/* Block signals (default storage) */
B_gradingSystem_T gradingSystem_B;

/* External inputs (root inport signals with default storage) */
ExtU_gradingSystem_T gradingSystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_gradingSystem_T gradingSystem_Y;

/* Real-time model */
RT_MODEL_gradingSystem_T gradingSystem_M_;
RT_MODEL_gradingSystem_T *const gradingSystem_M = &gradingSystem_M_;

/* Model step function */
void gradingSystem_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Constant: '<S2>/ascii code for "f"'
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/Input1 '
   */
  if ((gradingSystem_U.Input1 >= 0.0) && (gradingSystem_U.Input1 < 50.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    gradingSystem_B.Merge = 70U;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else {
    if ((gradingSystem_U.Input1 >= 50.0) && (gradingSystem_U.Input1 < 65.0)) {
      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S3>/Action Port'
       */
      gradingSystem_B.Merge = 68U;

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    }
  }

  /* End of If: '<S1>/If' */

  /* If: '<S1>/If1' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/Input1 '
   */
  if ((gradingSystem_U.Input1 >= 65.0) && (gradingSystem_U.Input1 < 75.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    gradingSystem_B.Merge = 67U;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
  } else {
    if ((gradingSystem_U.Input1 >= 75.0) && (gradingSystem_U.Input1 < 85.0)) {
      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      gradingSystem_B.Merge = 66U;

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    }
  }

  /* End of If: '<S1>/If1' */

  /* If: '<S1>/If2' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/Input1 '
   */
  if ((gradingSystem_U.Input1 >= 85.0) && (gradingSystem_U.Input1 < 100.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    gradingSystem_B.Merge = 65U;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
  }

  /* End of If: '<S1>/If2' */

  /* Outport: '<Root>/Output1 ' */
  gradingSystem_Y.Output1 = gradingSystem_B.Merge;
}

/* Model initialize function */
void gradingSystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(gradingSystem_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &gradingSystem_B), 0,
                sizeof(B_gradingSystem_T));

  /* external inputs */
  gradingSystem_U.Input1 = 0.0;

  /* external outputs */
  gradingSystem_Y.Output1 = 0U;
}

/* Model terminate function */
void gradingSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
