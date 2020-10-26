/*
 * main.cpp
 *
 *  Created on: Oct 6, 2020
 *      Author: Nikolay Shevyrev
 */

#include "main.h"
#include "delay.h"
#include "gpio.h"
#include "uart.h"

UART uart4;

int main(){

	SystemClock_Config();

	GPIO_Init();

	uart4.Init();

	while(1){
		/*if(GPIO_ReadPin(BUTTON_PIN, BUTTON_PORT)){
			while(GPIO_ReadPin(BUTTON_PIN, BUTTON_PORT)){
				DelayUS(10);
			}
			GPIO_TogglePin(LD1_PIN, LD_PORT);
		}*/

		uart4.Receive();

		if(uart4.received_data & 0x01){
			GPIO_SetPin(LD1_PIN, LD_PORT);
		} else {
			GPIO_ResetPin(LD1_PIN, LD_PORT);
		}
		if(uart4.received_data & 0x02){
			GPIO_SetPin(LD2_PIN, LD_PORT);
		} else {
			GPIO_ResetPin(LD2_PIN, LD_PORT);
		}
		if(uart4.received_data & 0x04){
			GPIO_SetPin(LD3_PIN, LD_PORT);
		} else {
			GPIO_ResetPin(LD3_PIN, LD_PORT);
		}
	}

}


