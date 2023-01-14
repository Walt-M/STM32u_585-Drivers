//Header file for STM32U-585 MC. Generic 

#ifndef INC_STM32U585_H_
#define INC_STM32U585_H_

#include<stddef.h>
#include<stdint.h>

//Processor specific details

//Non-sequre Memory base addres
#define FLASH_BASEADDR   0x08000000
#define SRAM1_BASEADDR   0x0A000000
#define SRAM2_BASEADDR   0x0A030000
#define SRAM3_BASEADDR   0x0A040000
#define SRAM            SRAM1_BASEADDR

//Sequre Memory base addres
#define FLASH_S_BASEADDR      0x0C000000
#define SRAM1_S_BASEADDR      0x0E000000
#define SRAM2_S_BASEADDR      0x0E030000
#define SRAM3_S_BASEADDR      0x0E040000
#define SRAM_S                SRAM1_S_BASEADDR

//Non-secure AHB and APB periperal bus addresses
#define PERIF_BASEADDR          0x40000000
#define APB1_BASEADDR    PERIF_BASEADDR
#define APB2_BASEADDR    0x40012C00
#define AHB1_BASEADDR    0x40020000
#define AHB2_BASEADDR    0x42020000
#define AHB3_BASEADDR    0x46000400

//Non-secure AHB and APB periperal bus addresses
#define PERIF_S_BASEADDR          0x50000000
#define APB1_S_BASEADDR       PERIF_BASEADDR
#define APB2_S_BASEADDR       0x50012C00
#define AHB1_S_BASEADDR       0x50020000
#define AHB2_S_BASEADDR       0x52020000
#define AHB3_S_BASEADDR       0x56000400

/*
*Defines all regiesters that control GPIO functions. Each register has an offset
*of 32 bits or 0x04 in hex due to data type.
*/
typedef struct{
  volatile uint32_t MODER;      
  volatile uint32_t OTYPER;
  volatile uint32_t OSPEEDR;
  volatile uint32_t PUPDR;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t LCKR;
  volatile uint32_t BRR;
  volatile uint32_t AFRH;
  volatile uint32_t AFRL;
  volatile uint32_t HSLVR;
  volatile uint32_t SECCFGR
}GPIO_RegDef_t;

/*
* Defines all registers for the EXTI periperal
*/
typedef struct
{
  volatile uint32_t RSTR1;
  volatile uint32_t FTSR1;
  volatile uint32_t SWIER1;
  volatile uint32_t RPR1;
  volatile uint32_t FPR1;
  volatile uint32_t SECCFGR1;
  volatile uint32_t PRIVCFGR1;
  volatile uint32_t RESERVED0[17];
  volatile uint32_t EXTICR1;
  volatile uint32_t EXTICR2;
  volatile uint32_t EXTICR3;
  volatile uint32_t EXTICR4;
  volatile uint32_t LOCKR;
  volatile uint32_t RESERVED1[3];
  volatile uint32_t IMR1;
  volatile uint32_t EMR1;
}EXTI_RegDef_t

//Defines all registers for RCC control
//TODO: Finish createding register headers
typedef struct{
  volatile uint32_t CR;
  uint32_t RESERVED0;
  volatile uint32_t ICSCR1;
  volatile uint32_t ICSCR2;
  volatile uint32_t ICSCR3;
  volatile uint32_t CRRCR;
  uint32_t RESERVED1;
  volatile uint32_t CRGR1;
  volatile uint32_t CFGR2;
  volatile uint32_t CFGR3;
  volatile uint32_t PLL1CFGR;
  volatile uint32_t PLL2CFGR;
  volatile uint32_t PLL3CFGR;
  volatile uint32_t PLL1DIVR;
  volatile uint32_t PLL1FRACR;
  volatile uint32_t PLL2DIVR;
  volatile uint32_t PLL2FRACR;
  volatile uint32_t PLL3DIVR;
  volatile uint32_t PLL3FRACR;
  uint32_t RESERVED2;
  volatile uint32_t CIER;
  volatile uint32_t CIFR;
  volatile uint32_t CICR;
  uint32_t RESERVED3;
  volatile uint32_t AHB1RSTR;
  volatile uint32_t AHB2RSTR1;
  volatile uint32_t AHB2RSTR2;
  volatile uint32_t AHB3RSTR;
  uint32_t RESERVED4;
  volatile uint32_t APB1RSTR1;
  volatile uint32_t APB1RSTR2;
  volatile uint32_t APB2RSTR;
  volatile uint32_t APB3RSTR1;
  uint32_t RESERVED5;
  volatile uint32_t AHB1ENBR;
  volatile uint32_t AHB2ENBR1;
  volatile uint32_t AHB2ENBR2;
  volatile uint32_t AHB3ENBR;
  uint32_t RESERVED6;
  volatile uint32_t APB1ENBR1;
  volatile uint32_t APB1ENBR2;
  volatile uint32_t APB2ENBR;
  volatile uint32_t APB3ENBR;
  uint32_t RESERVED7;
  volatile uint32_t AHB1SEMENR;
  volatile uint32_t AHB2SEMENR1;
  volatile uint32_t AHB2SEMENR2;
  volatile uint32_t AHB3SEMENR;
  uint32_t RESERVED8;
  volatile uint32_t APB1SEMENR1;
  volatile uint32_t APB1SEMENR2;
  volatile uint32_t APB2SEMENR;
  volatile uint32_t APB3SEMENR;
  uint32_t RESERVED9;
  volatile uint32_t SRDAMR;
  volatile uint32_t CCIPR1;
  volatile uint32_t CCIPR2;
  volatile uint32_t CCIPR3;
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
  uint32_t RESERVED10[5];
  volatile uint32_t SECCFGR;
  volatile uint32_t PRIVCFGR;
}RCC_RegDef_t

/*
* Defined AHB3 registers
*/
//Exti register
#define EXTI               ((EXTI_RegDeg_t*)AHB3_BASEADDR + 0x2000)
#define EXTI_S             ((EXTI_RegDeg_t*)AHB3_S_BASEADDR + 0x2000)

/*
* Defined AHB2 Registers
*/
//GPIO registers
#define GPIOA              ((GPIO_RegDef_t*)AHB2_BASEADDR + 0x0000)
#define GPIOB              ((GPIO_RegDef_t*)AHB2_BASEADDR + 0x0400)
#define GPIOC              ((GPIO_RegDef_t*)AHB2_BASEADDR + 0x0800)
#define GPIOD              ((GPIO_RegDef_t*)AHB2_BASEADDR + 0x0C00)
#define GPIOE              ((GPIO_RegDef_t*)AHB2_BASEADDR + 0x1000)
#define GPIOF              ((GPIO_RegDef_t*)AHB2_BASEADDR + 0x1400)
#define GPIOG              ((GPIO_RegDef_t*)AHB2_BASEADDR + 0x1800)
#define GPIOH              ((GPIO_RegDef_t*)AHB2_BASEADDR + 0x1C00)
#define GPIOI              ((GPIO_RegDef_t*)AHB2_BASEADDR + 0x2000)

//Sequre GPIO registers
#define GPIOA_S              ((GPIO_RegDef_t*)AHB2_S_BASEADDR + 0x0000)
#define GPIOB_S              ((GPIO_RegDef_t*)AHB2_S_BASEADDR + 0x0400)
#define GPIOC_S              ((GPIO_RegDef_t*)AHB2_S_BASEADDR + 0x0800)
#define GPIOD_S              ((GPIO_RegDef_t*)AHB2_S_BASEADDR + 0x0C00)
#define GPIOE_S              ((GPIO_RegDef_t*)AHB2_S_BASEADDR + 0x1000)
#define GPIOF_S              ((GPIO_RegDef_t*)AHB2_S_BASEADDR + 0x1400)
#define GPIOG_S              ((GPIO_RegDef_t*)AHB2_S_BASEADDR + 0x1800)
#define GPIOH_S              ((GPIO_RegDef_t*)AHB2_S_BASEADDR + 0x1C00)
#define GPIOI_S              ((GPIO_RegDef_t*)AHB2_S_BASEADDR + 0x2000)

#endif
