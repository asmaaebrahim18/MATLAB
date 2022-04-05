/*
 * File: trafficstateflow.c
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

#include "trafficstateflow.h"
#include "trafficstateflow_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define trafficstate_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define trafficstateflow_IN_Green_     ((uint8_T)1U)
#define trafficstateflow_IN_Ready_     ((uint8_T)2U)
#define trafficstateflow_IN_Stop_      ((uint8_T)3U)

/* Block states (default storage) */
DW_trafficstateflow_T trafficstateflow_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_trafficstateflow_T trafficstateflow_Y;

/* Real-time model */
RT_MODEL_trafficstateflow_T trafficstateflow_M_;
RT_MODEL_trafficstateflow_T *const trafficstateflow_M = &trafficstateflow_M_;

/* Model step function */
void trafficstateflow_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (trafficstateflow_DW.temporalCounter_i1 < 31U) {
    trafficstateflow_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (trafficstateflow_DW.is_active_c3_trafficstateflow == 0U) {
    /* Entry: Chart */
    trafficstateflow_DW.is_active_c3_trafficstateflow = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    trafficstateflow_DW.is_c3_trafficstateflow = trafficstateflow_IN_Stop_;
    trafficstateflow_DW.temporalCounter_i1 = 0U;

    /* Outport: '<Root>/Out1' */
    /* Entry 'Stop_': '<S1>:1' */
    trafficstateflow_Y.Out1 = 0U;

    /* Outport: '<Root>/Out2' */
    trafficstateflow_Y.Out2 = 0U;

    /* Outport: '<Root>/Out3' */
    trafficstateflow_Y.Out3 = 0U;
  } else {
    switch (trafficstateflow_DW.is_c3_trafficstateflow) {
     case trafficstateflow_IN_Green_:
      /* During 'Green_': '<S1>:4' */
      if (trafficstateflow_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:9' */
        trafficstateflow_DW.is_c3_trafficstateflow = trafficstateflow_IN_Stop_;
        trafficstateflow_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        /* Entry 'Stop_': '<S1>:1' */
        trafficstateflow_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        trafficstateflow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        trafficstateflow_Y.Out3 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        trafficstateflow_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        trafficstateflow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        trafficstateflow_Y.Out3 = 1U;
      }
      break;

     case trafficstateflow_IN_Ready_:
      /* During 'Ready_': '<S1>:3' */
      if (trafficstateflow_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:8' */
        trafficstateflow_DW.is_c3_trafficstateflow = trafficstateflow_IN_Green_;
        trafficstateflow_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        /* Entry 'Green_': '<S1>:4' */
        trafficstateflow_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        trafficstateflow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        trafficstateflow_Y.Out3 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        trafficstateflow_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        trafficstateflow_Y.Out2 = 1U;

        /* Outport: '<Root>/Out3' */
        trafficstateflow_Y.Out3 = 0U;
      }
      break;

     default:
      /* During 'Stop_': '<S1>:1' */
      if (trafficstateflow_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:5' */
        trafficstateflow_DW.is_c3_trafficstateflow = trafficstateflow_IN_Ready_;
        trafficstateflow_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        /* Entry 'Ready_': '<S1>:3' */
        trafficstateflow_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        trafficstateflow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        trafficstateflow_Y.Out3 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        trafficstateflow_Y.Out1 = 1U;

        /* Outport: '<Root>/Out2' */
        trafficstateflow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        trafficstateflow_Y.Out3 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void trafficstateflow_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(trafficstateflow_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&trafficstateflow_DW, 0,
                sizeof(DW_trafficstateflow_T));

  /* external outputs */
  (void) memset((void *)&trafficstateflow_Y, 0,
                sizeof(ExtY_trafficstateflow_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  trafficstateflow_DW.temporalCounter_i1 = 0U;
  trafficstateflow_DW.is_active_c3_trafficstateflow = 0U;
  trafficstateflow_DW.is_c3_trafficstateflow = trafficstate_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void trafficstateflow_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
