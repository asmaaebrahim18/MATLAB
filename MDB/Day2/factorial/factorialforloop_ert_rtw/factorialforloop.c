/*
 * File: factorialforloop.c
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

#include "factorialforloop.h"
#include "factorialforloop_private.h"

/* Block states (default storage) */
DW_factorialforloop_T factorialforloop_DW;

/* External inputs (root inport signals with default storage) */
ExtU_factorialforloop_T factorialforloop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_factorialforloop_T factorialforloop_Y;

/* Real-time model */
RT_MODEL_factorialforloop_T factorialforloop_M_;
RT_MODEL_factorialforloop_T *const factorialforloop_M = &factorialforloop_M_;

/* Model step function */
void factorialforloop_step(void)
{
  int32_T s1_iter;

  /* Outputs for Iterator SubSystem: '<Root>/factorial ' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/Input1 ' */
  for (s1_iter = 1; s1_iter <= factorialforloop_U.Input1; s1_iter++) {
    /* Outport: '<Root>/Output1 ' incorporates:
     *  Delay: '<S1>/Delay'
     *  Product: '<S1>/Multiply'
     */
    factorialforloop_Y.Output1 = s1_iter * factorialforloop_DW.Delay_DSTATE;

    /* Update for Delay: '<S1>/Delay' incorporates:
     *  Outport: '<Root>/Output1 '
     */
    factorialforloop_DW.Delay_DSTATE = factorialforloop_Y.Output1;
  }

  /* End of Inport: '<Root>/Input1 ' */
  /* End of Outputs for SubSystem: '<Root>/factorial ' */
}

/* Model initialize function */
void factorialforloop_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(factorialforloop_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&factorialforloop_DW, 0,
                sizeof(DW_factorialforloop_T));

  /* external inputs */
  factorialforloop_U.Input1 = 0;

  /* external outputs */
  factorialforloop_Y.Output1 = 0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/factorial ' */
  /* InitializeConditions for Delay: '<S1>/Delay' */
  factorialforloop_DW.Delay_DSTATE = 1;

  /* End of SystemInitialize for SubSystem: '<Root>/factorial ' */
}

/* Model terminate function */
void factorialforloop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
