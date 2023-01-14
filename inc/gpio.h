//Define to prevent recursive inclusion
#ifdef GPIO_H
#define GPIO_H

#include "STM32u_585.h"



typedef struct{
  uint8_t pin;         //Selects pin to be set
  uint8_t mode;        //Selects mode for pin to be set 
  uint8_t speed;       //Sets speed of the pinto
  uint8_t output_type; //push pull or open drain
  uint8_t PUPD_resistor; //Set internal resistor
  uint8_t alt_func; // set alternate function
}GPIO_ConfigDef_t


void GPIO_Init(GPIO_ConfigDef_t *pGpioConfig, GPIO_RegDef_t *pGpiox);

//Define lables for pin
#define GPIO_PIN_0 0
#define GPIO_PIN_1 1
#define GPIO_PIN_2 2
#define GPIO_PIN_3 3
#define GPIO_PIN_4 4
#define GPIO_PIN_5 5
#define GPIO_PIN_6 6
#define GPIO_PIN_7 7
#define GPIO_PIN_8 8
#define GPIO_PIN_9 9
#define GPIO_PIN_10 10
#define GPIO_PIN_11 11
#define GPIO_PIN_12 12
#define GPIO_PIN_13 13
#define GPIO_PIN_14 14
#define GPIO_PIN_15 15

//Define lables for mode
#define GPIO_IN
#define GPIO_OUT
#define GPIO_ALT
#define GPIO_AN

//Define lables for speed
#define GPIO_LOW 0
#define GPIO_MED 1
#define GPIO_HIGH 2
#define GPIO_VHIGH 3

//define lables for output type
#define GPIO_PP 0
#define GPIO_OD 1

//Define labeles for internal resistor
#define GPIO_NO_PUPD 0
#define GPIO_PU 1
#degine GPIO_PD 2

//define alternate function

#define GPIO_AF_0 0
#define GPIO_AF_1 1
#define GPIO_AF_2 2
#define GPIO_AF_3 3
#define GPIO_AF_4 4
#define GPIO_AF_5 5
#define GPIO_AF_6 6
#define GPIO_AF_7 7
#define GPIO_AF_8 8
#define GPIO_AF_9 9
#define GPIO_AF_10 10
#define GPIO_AF_11 11
#define GPIO_AF_12 12
#define GPIO_AF_13 13
#define GPIO_AF_14 14
#define GPIO_AF_15 15

