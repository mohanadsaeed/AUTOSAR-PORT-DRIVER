 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Regs.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver Registers
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
 #define MAGIC_NUMBER_TO_UNLOCK           0x4C4F434B
 
/* GPIO Registers base addresses */
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_AFSEL_REG_OFFSET             0x420
#define PORT_PUR_REG_OFFSET               0x510
#define PORT_PDR_REG_OFFSET  	          0x514
#define PORT_DEN_REG_OFFSET    		  0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_CR_REG_OFFSET                0x524
#define PORT_AMSEL_REG_OFFSET  		  0x528
#define PORT_PCTL_REG_OFFSET              0x52C

#define SYSCTL_REGCGC2_REG        (*((volatile unsigned long *)0x400FE108))