#include "FreeRTOS.h"
#include "task.h"

#define __NOP() __asm(nop)

void prvSetupHardware(void);
void LED_TASK(void *pvParameters);
void LOOP1_TASK(void *pvParameters);
void LOOP2_TASK(void *pvParameters);

void prvSetupHardware(void)
{
    /**
     * Generate 64 MHz core clock 32 MHz bus clock
     * from 8 MHz external oscillator
     */

    CPMUREFDIV = (0u << 0) | /* fREF = 8 MHz / (0 + 1) = 8 MHz */
                 (2u << 6);  /* 2 if fREF is from 6 MHz to 12 MHz */
    CPMUSYNR = (3u << 0) |   /* fVCO = fREF * 2 * (3 + 1) = 64 MHz */
               (1u << 6);    /* 1 if fVCO is from 48 MHz to 64 MHz */
    CPMUPOSTDIV = (0u << 0); /* fPLL = fVCO / (0 + 1) = 64 MHz */
    CPMUOSC = (1u << 7);     /* Enable external oscillator */
    while ((CPMUIFLG & (1u << 0)) == 0)
    {
        /* Wait for external oscillator */
        __NOP();
    }
    while ((CPMUIFLG & (1u << 3)) == 0)
    {
        /* Wait for PLL to lock */
        __NOP();
    }
    CPMURFLG |= 0x60; /* Clear PORF and LVRF flags */
}

void LED_TASK(void *pvParameters)
{
    /* set PTADL7 output */
    DDRAD_DDRADL7 = 1;
    for (;;)
    {
        /* toggle the LED every 500ms. */
        PTADL_PTADL7 ^= 1u;
        vTaskDelay(500);
    }
}

void LOOP1_TASK(void *pvParameters)
{
    for (;;)
    {
        __NOP();
    }
}

void LOOP2_TASK(void *pvParameters)
{
    for (;;)
    {
        __NOP();
    }
}

void main(void)
{
    prvSetupHardware();

    xTaskCreate(LED_TASK,
                "LED_TASK",
                configMINIMAL_STACK_SIZE,
                NULL,
                3,
                NULL);

    xTaskCreate(LOOP1_TASK,
                "LOOP1_TASK",
                configMINIMAL_STACK_SIZE,
                NULL,
                2,
                NULL);

    xTaskCreate(LOOP2_TASK,
                "LOOP2_TASK",
                configMINIMAL_STACK_SIZE,
                NULL,
                2,
                NULL);

    vTaskStartScheduler();
}
