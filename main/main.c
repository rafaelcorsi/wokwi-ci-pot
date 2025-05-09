/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

 #include <stdio.h>
 #include "pico/stdlib.h"
 #include "hardware/gpio.h"
 #include "hardware/timer.h"
 #include "hardware/adc.h"
 
 int main() {
     stdio_init_all();

     adc_init();
     adc_gpio_init(28);
 
     while (1) {
         adc_select_input(2);
         printf("%d \n", adc_read());
       	 sleep_ms(10);
     }
 }
