/*
 * FreeRTOS Kernel V10.3.1
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://www.FreeRTOS.org
 * http://aws.amazon.com/freertos
 *
 * 1 tab == 4 spaces!
 */

/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"

#define TIMER_RELOAD ( configCPU_CLOCK_HZ / 1000u / 2u )

/*
 * Setup the timer to generate the tick interrupts.  The implementation in this
 * file is weak to allow application writers to change the timer used to
 * generate the tick interrupt.
 */
void vPortSetupTimerInterrupt( void );

/*
 * Exception handlers.
 */
void xPortSysTickHandler( void );

void vPortYield( void );


/*-----------------------------------------------------------*/

/*
 * See header file for description.
 */
StackType_t *pxPortInitialiseStack( StackType_t * pxTopOfStack,
                                    TaskFunction_t pxCode,
                                    void * pvParameters )
{
    /* Simulate the stack frame as it would be created by a context switch
     * interrupt. */

    /* S12ZCPU_RM_V1.pdf
     * https://www.nxp.com/webapp/Download?colCode=S12ZCPURM
     * Table 7-1. S12Z CPU Stacking Order on Entry to Interrupts */

    /* Return Address */
    *( --pxTopOfStack ) = ( StackType_t ) ( ( (uint32_t) pxCode ) >> 0 ) & 0xff;
    *( --pxTopOfStack ) = ( StackType_t ) ( ( (uint32_t) pxCode ) >> 8 ) & 0xff;
    *( --pxTopOfStack ) = ( StackType_t ) ( ( (uint32_t) pxCode ) >> 16 ) & 0xff;

    /* Y */
    *( --pxTopOfStack ) = ( StackType_t ) 0x00;
    *( --pxTopOfStack ) = ( StackType_t ) 0x00;
    *( --pxTopOfStack ) = ( StackType_t ) 0x00;

    /* X */
    *( --pxTopOfStack ) = ( StackType_t ) ( ( (uint32_t) pvParameters ) >> 0 ) & 0xff;
    *( --pxTopOfStack ) = ( StackType_t ) ( ( (uint32_t) pvParameters ) >> 8 ) & 0xff;
    *( --pxTopOfStack ) = ( StackType_t ) ( ( (uint32_t) pvParameters ) >> 16 ) & 0xff;

    /* D7 */
    *( --pxTopOfStack ) = ( StackType_t ) 0x77;
    *( --pxTopOfStack ) = ( StackType_t ) 0x77;
    *( --pxTopOfStack ) = ( StackType_t ) 0x77;
    *( --pxTopOfStack ) = ( StackType_t ) 0x77;

    /* D6 */
    *( --pxTopOfStack ) = ( StackType_t ) 0x66;
    *( --pxTopOfStack ) = ( StackType_t ) 0x66;
    *( --pxTopOfStack ) = ( StackType_t ) 0x66;
    *( --pxTopOfStack ) = ( StackType_t ) 0x66;

    /* D5 */
    *( --pxTopOfStack ) = ( StackType_t ) 0x55;
    *( --pxTopOfStack ) = ( StackType_t ) 0x55;

    /* D4 */
    *( --pxTopOfStack ) = ( StackType_t ) 0x44;
    *( --pxTopOfStack ) = ( StackType_t ) 0x44;

    /* D3 */
    *( --pxTopOfStack ) = ( StackType_t ) 0x33;
    *( --pxTopOfStack ) = ( StackType_t ) 0x33;

    /* D2 */
    *( --pxTopOfStack ) = ( StackType_t ) 0x22;
    *( --pxTopOfStack ) = ( StackType_t ) 0x22;

    /* D1 */
    *( --pxTopOfStack ) = ( StackType_t ) 0x11;

    /* D0 */
    *( --pxTopOfStack ) = ( StackType_t ) 0x00;

    /* CCL */
    *( --pxTopOfStack ) = ( StackType_t ) 0x00;

    /* CCH */
    *( --pxTopOfStack ) = ( StackType_t ) 0x00;

    return pxTopOfStack;
}
/*-----------------------------------------------------------*/

/*
 * See header file for description.
 */
BaseType_t xPortStartScheduler( void )
{
    /* Start the timer that generates the tick ISR.  Interrupts are disabled
     * here already. */
    vPortSetupTimerInterrupt();

	/* Restore the context of the first task. */
    portRESTORE_CONTEXT();

    /* Simulate the end of an interrupt to start the scheduler off. */
	__asm( rti );

    /* Should not get here! */
    return 0;
}
/*-----------------------------------------------------------*/

void vPortEndScheduler( void )
{
    /* Not implemented in ports where there is nothing to return to.
     * Artificially force an assert. */
    configASSERT( pdFALSE );
}

/*-----------------------------------------------------------*/

/*
 * Setup the systick timer to generate the tick interrupts at the required
 * frequency.
 */
void vPortSetupTimerInterrupt( void )
{
    /* The default interrupt priority is 1, which is the minimum. */

    TIM0TSCR1 = 0x08;       /* Enable precision timer */
    TIM0OCPD = 0x0F;        /* Disables the timer channel port */
    TIM0TIOS = 0x01;        /* Timer Input Capture/Output Compare Select */
    TIM0TCTL2 = 0x00;       /* Timer Control Register 1 */
    TIM0TSCR2 = 0x00;       /* Timer System Control Register 2 */
    TIM0TFLG1 = 0xFF;       /* Clear flags */
    TIM0PTPSR = 0x00;       /* Prescale Factor = 1 */
    TIM0TC0 = TIMER_RELOAD; /* Set Reload value */
    TIM0TIE = 0x01;         /* Enable timer interrupt */
    TIM0TSCR1 = 0x80;       /* Enable timer */
}

/*-----------------------------------------------------------*/

interrupt VectorNumber_Vtim0ch0 void xPortSysTickHandler( void )
{
	portSAVE_CONTEXT();

    /* Increment the RTOS tick. */
    if ( xTaskIncrementTick() != pdFALSE )
    {
        /* Pend a context switch. */
        vTaskSwitchContext();
    }

    TIM0TC0 += TIMER_RELOAD; /* Set new reload value */
    TIM0TFLG1 |= 0x01u;      /* Reset interrupt request flag */

    portRESTORE_CONTEXT();
}

/*-----------------------------------------------------------*/

/*
 * Manual context switch called by portYIELD or taskYIELD.
 * This is the SWI handler.
 */
interrupt VectorNumber_Vswi void vPortYield( void )
{
	portSAVE_CONTEXT();
	vTaskSwitchContext();
	portRESTORE_CONTEXT();
}
