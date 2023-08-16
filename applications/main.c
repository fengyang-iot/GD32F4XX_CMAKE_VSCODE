/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-08-20     BruceOu      first implementation
 */

#include <stdio.h>
#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>
#include "io.h"
/* defined the LED2 pin: PC6 */
#define LED2_PIN GET_PIN(C, 6)

int main(void)
{
   // int count = 1;

    /* set LED2 pin mode to output */
   // rt_pin_mode(LED2_PIN, PIN_MODE_OUTPUT);

    while (1)
    {
		DO_0_ON();
        rt_thread_mdelay(2000);
		DO_0_OFF();
        rt_thread_mdelay(2000);
    }

    return RT_EOK;
}
