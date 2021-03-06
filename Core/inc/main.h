/*
 * main.h
 *
 *  Created on: Oct 6, 2020
 *      Author: Nikolay Shevyrev
 */

#ifndef CORE_INC_MAIN_H_
#define CORE_INC_MAIN_H_

/* Includes ------------------------------------------------------------------*/
#include "stm32f767xx.h"
#include "stm32f7xx.h"

/* Function prototypes -------------------------------------------------------*/
void SystemClock_Config(void);

/* Defines -------------------------------------------------------------------*/
#define LD1_PIN 0
#define LD2_PIN 7
#define LD3_PIN 14
#define LD_PORT GPIOB

#define BUTTON_PIN 13
#define BUTTON_PORT GPIOC

#define UART4_RX_PIN 0
#define UART4_TX_PIN 1
#define UART4_PORT GPIOD

#endif /* CORE_INC_MAIN_H_ */
