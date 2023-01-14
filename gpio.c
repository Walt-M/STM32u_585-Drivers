#include<gpio.h>

void GPIO_Init(GPIO_ConfigDef_t *pGPIO_Config, GPIO_RegDef_t *pGPIOx){
  //Look through all the pins
  
  //Set mode
  pGPIOx->MODER &= ~(pGPIO_Config->mode << pGPIO_Config->pin*2U);
  pGPIOx->MODER |= (pGPIO_Config->mode << pGPIO_Config->pin*2U);
  
  //Set speed
  pGPIOx->OSPEEDR &= ~(pGPIO_Config->speed << pGPIO_Config->pin*2U);
  pGPIOx->OSPEEDR |= (pGPIO_Config->speed << pGPIO_Config->pin*2U);
  
  //Set output type if the mode is output
  
  //Set PUPD resistor
  
  //Set alf function
}
