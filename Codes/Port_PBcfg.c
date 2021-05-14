 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
#include "Port.h"

#ifndef PORT_PBCFG_H_
#define PORT_PBCFG_H_
/*Module Version*/
#define PORT_PBCFG_SW_MAJOR_VERSION		(1U)
#define PORT_PBCFG_SW_MINOR_VERSION		(0U)
#define PORT_PBCFG_SW_PATCH_VERSION		(0U)

/*AUTOSAR Version*/
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION		(4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION		(0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION		(3U)

/* AUTOSAR Version checking between PORT_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port_PBcfg.c does not match the expected version"
#endif

/* Software Version checking between PORT_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Port_PBcfg.c does not match the expected version"
#endif

const Port_ConfigType Port_Configuration = {
	
	PORTCFG_PORTA,PORTCFG_PIN0,PORTA_PIN0_DIRECTION,PORTA_PIN0_DIRECTION_CHANGEABLE,PORTA_PIN0_PULL_UP,PORTA_PIN0_PULL_DOWN,\
	PORTA_PIN0_INITIAL_LEVEL,PORTA_PIN0_MODE,PORTA_PIN0_MODE_CHANGEABLE,PORTA_PIN0_ANALOG_MODE,\
	
	PORTCFG_PORTA,PORTCFG_PIN1,PORTA_PIN1_DIRECTION,PORTA_PIN1_DIRECTION_CHANGEABLE,PORTA_PIN1_PULL_UP,PORTA_PIN1_PULL_DOWN,\
	PORTA_PIN1_INITIAL_LEVEL,PORTA_PIN1_MODE,PORTA_PIN1_MODE_CHANGEABLE,PORTA_PIN1_ANALOG_MODE,\
	
	PORTCFG_PORTA,PORTCFG_PIN2,PORTA_PIN2_DIRECTION,PORTA_PIN2_DIRECTION_CHANGEABLE,PORTA_PIN2_PULL_UP,PORTA_PIN2_PULL_DOWN,\
	PORTA_PIN2_INITIAL_LEVEL,PORTA_PIN2_MODE,PORTA_PIN2_MODE_CHANGEABLE,PORTA_PIN2_ANALOG_MODE,\
	
	PORTCFG_PORTA,PORTCFG_PIN3,PORTA_PIN3_DIRECTION,PORTA_PIN3_DIRECTION_CHANGEABLE,PORTA_PIN3_PULL_UP,PORTA_PIN3_PULL_DOWN,\
	PORTA_PIN3_INITIAL_LEVEL,PORTA_PIN3_MODE,PORTA_PIN3_MODE_CHANGEABLE,PORTA_PIN3_ANALOG_MODE,\
	
	PORTCFG_PORTA,PORTCFG_PIN4,PORTA_PIN4_DIRECTION,PORTA_PIN4_DIRECTION_CHANGEABLE,PORTA_PIN4_PULL_UP,PORTA_PIN4_PULL_DOWN,\
	PORTA_PIN4_INITIAL_LEVEL,PORTA_PIN4_MODE,PORTA_PIN4_MODE_CHANGEABLE,PORTA_PIN4_ANALOG_MODE,\
	
	PORTCFG_PORTA,PORTCFG_PIN5,PORTA_PIN5_DIRECTION,PORTA_PIN5_DIRECTION_CHANGEABLE,PORTA_PIN5_PULL_UP,PORTA_PIN5_PULL_DOWN,\
	PORTA_PIN5_INITIAL_LEVEL,PORTA_PIN5_MODE,PORTA_PIN5_MODE_CHANGEABLE,PORTA_PIN5_ANALOG_MODE,\
	
	PORTCFG_PORTA,PORTCFG_PIN6,PORTA_PIN6_DIRECTION,PORTA_PIN6_DIRECTION_CHANGEABLE,PORTA_PIN6_PULL_UP,PORTA_PIN6_PULL_DOWN,\
	PORTA_PIN6_INITIAL_LEVEL,PORTA_PIN6_MODE,PORTA_PIN6_MODE_CHANGEABLE,PORTA_PIN6_ANALOG_MODE,\
	
	PORTCFG_PORTA,PORTCFG_PIN7,PORTA_PIN7_DIRECTION,PORTA_PIN7_DIRECTION_CHANGEABLE,PORTA_PIN7_PULL_UP,PORTA_PIN7_PULL_DOWN,\
	PORTA_PIN7_INITIAL_LEVEL,PORTA_PIN7_MODE,PORTA_PIN7_MODE_CHANGEABLE,PORTA_PIN7_ANALOG_MODE,\
	
	PORTCFG_PORTB,PORTCFG_PIN0,PORTB_PIN0_DIRECTION,PORTB_PIN0_DIRECTION_CHANGEABLE,PORTB_PIN0_PULL_UP,PORTB_PIN0_PULL_DOWN,\
	PORTB_PIN0_INITIAL_LEVEL,PORTB_PIN0_MODE,PORTB_PIN0_MODE_CHANGEABLE,PORTB_PIN0_ANALOG_MODE,\
	
	PORTCFG_PORTB,PORTCFG_PIN1,PORTB_PIN1_DIRECTION,PORTB_PIN1_DIRECTION_CHANGEABLE,PORTB_PIN1_PULL_UP,PORTB_PIN1_PULL_DOWN,\
	PORTB_PIN1_INITIAL_LEVEL,PORTB_PIN1_MODE,PORTB_PIN1_MODE_CHANGEABLE,PORTB_PIN1_ANALOG_MODE,\
	
	PORTCFG_PORTB,PORTCFG_PIN2,PORTB_PIN2_DIRECTION,PORTB_PIN2_DIRECTION_CHANGEABLE,PORTB_PIN2_PULL_UP,PORTB_PIN2_PULL_DOWN,\
	PORTB_PIN2_INITIAL_LEVEL,PORTB_PIN2_MODE,PORTB_PIN2_MODE_CHANGEABLE,PORTB_PIN2_ANALOG_MODE,\
	
	PORTCFG_PORTB,PORTCFG_PIN3,PORTB_PIN3_DIRECTION,PORTB_PIN3_DIRECTION_CHANGEABLE,PORTB_PIN3_PULL_UP,PORTB_PIN3_PULL_DOWN,\
	PORTB_PIN3_INITIAL_LEVEL,PORTB_PIN3_MODE,PORTB_PIN3_MODE_CHANGEABLE,PORTB_PIN3_ANALOG_MODE,\
	
	PORTCFG_PORTB,PORTCFG_PIN4,PORTB_PIN4_DIRECTION,PORTB_PIN4_DIRECTION_CHANGEABLE,PORTB_PIN4_PULL_UP,PORTB_PIN4_PULL_DOWN,\
	PORTB_PIN4_INITIAL_LEVEL,PORTB_PIN4_MODE,PORTB_PIN4_MODE_CHANGEABLE,PORTB_PIN4_ANALOG_MODE,\
	
	PORTCFG_PORTB,PORTCFG_PIN5,PORTB_PIN5_DIRECTION,PORTB_PIN5_DIRECTION_CHANGEABLE,PORTB_PIN5_PULL_UP,PORTB_PIN5_PULL_DOWN,\
	PORTB_PIN5_INITIAL_LEVEL,PORTB_PIN5_MODE,PORTB_PIN5_MODE_CHANGEABLE,PORTB_PIN5_ANALOG_MODE,\
	
	PORTCFG_PORTB,PORTCFG_PIN6,PORTB_PIN6_DIRECTION,PORTB_PIN6_DIRECTION_CHANGEABLE,PORTB_PIN6_PULL_UP,PORTB_PIN6_PULL_DOWN,\
	PORTB_PIN6_INITIAL_LEVEL,PORTB_PIN6_MODE,PORTB_PIN6_MODE_CHANGEABLE,PORTB_PIN6_ANALOG_MODE,\
	
	PORTCFG_PORTB,PORTCFG_PIN7,PORTB_PIN7_DIRECTION,PORTB_PIN7_DIRECTION_CHANGEABLE,PORTB_PIN7_PULL_UP,PORTB_PIN7_PULL_DOWN,\
	PORTB_PIN7_INITIAL_LEVEL,PORTB_PIN7_MODE,PORTB_PIN7_MODE_CHANGEABLE,PORTB_PIN7_ANALOG_MODE,\
		
	PORTCFG_PORTC,PORTCFG_PIN4,PORTC_PIN4_DIRECTION,PORTC_PIN4_DIRECTION_CHANGEABLE,PORTC_PIN4_PULL_UP,PORTC_PIN4_PULL_DOWN,\
	PORTC_PIN4_INITIAL_LEVEL,PORTC_PIN4_MODE,PORTC_PIN4_MODE_CHANGEABLE,PORTC_PIN4_ANALOG_MODE,\
	
	PORTCFG_PORTC,PORTCFG_PIN5,PORTC_PIN5_DIRECTION,PORTC_PIN5_DIRECTION_CHANGEABLE,PORTC_PIN5_PULL_UP,PORTC_PIN5_PULL_DOWN,\
	PORTC_PIN5_INITIAL_LEVEL,PORTC_PIN5_MODE,PORTC_PIN5_MODE_CHANGEABLE,PORTC_PIN5_ANALOG_MODE,\
	
	PORTCFG_PORTC,PORTCFG_PIN6,PORTC_PIN6_DIRECTION,PORTC_PIN6_DIRECTION_CHANGEABLE,PORTC_PIN6_PULL_UP,PORTC_PIN6_PULL_DOWN,\
	PORTC_PIN6_INITIAL_LEVEL,PORTC_PIN6_MODE,PORTC_PIN6_MODE_CHANGEABLE,PORTC_PIN6_ANALOG_MODE,\
	
	PORTCFG_PORTC,PORTCFG_PIN7,PORTC_PIN7_DIRECTION,PORTC_PIN7_DIRECTION_CHANGEABLE,PORTC_PIN7_PULL_UP,PORTC_PIN7_PULL_DOWN,\
	PORTC_PIN7_INITIAL_LEVEL,PORTC_PIN7_MODE,PORTC_PIN7_MODE_CHANGEABLE,PORTC_PIN7_ANALOG_MODE,\
	
	PORTCFG_PORTD,PORTCFG_PIN0,PORTD_PIN0_DIRECTION,PORTD_PIN0_DIRECTION_CHANGEABLE,PORTD_PIN0_PULL_UP,PORTD_PIN0_PULL_DOWN,\
	PORTD_PIN0_INITIAL_LEVEL,PORTD_PIN0_MODE,PORTD_PIN0_MODE_CHANGEABLE,PORTD_PIN0_ANALOG_MODE,\
	
	PORTCFG_PORTD,PORTCFG_PIN1,PORTD_PIN1_DIRECTION,PORTD_PIN1_DIRECTION_CHANGEABLE,PORTD_PIN1_PULL_UP,PORTD_PIN1_PULL_DOWN,\
	PORTD_PIN1_INITIAL_LEVEL,PORTD_PIN1_MODE,PORTD_PIN1_MODE_CHANGEABLE,PORTD_PIN1_ANALOG_MODE,\
	
	PORTCFG_PORTD,PORTCFG_PIN2,PORTD_PIN2_DIRECTION,PORTD_PIN2_DIRECTION_CHANGEABLE,PORTD_PIN2_PULL_UP,PORTD_PIN2_PULL_DOWN,\
	PORTD_PIN2_INITIAL_LEVEL,PORTD_PIN2_MODE,PORTD_PIN2_MODE_CHANGEABLE,PORTD_PIN2_ANALOG_MODE,\
	
	PORTCFG_PORTD,PORTCFG_PIN3,PORTD_PIN3_DIRECTION,PORTD_PIN3_DIRECTION_CHANGEABLE,PORTD_PIN3_PULL_UP,PORTD_PIN3_PULL_DOWN,\
	PORTD_PIN3_INITIAL_LEVEL,PORTD_PIN3_MODE,PORTD_PIN3_MODE_CHANGEABLE,PORTD_PIN3_ANALOG_MODE,\
	
	PORTCFG_PORTD,PORTCFG_PIN4,PORTD_PIN4_DIRECTION,PORTD_PIN4_DIRECTION_CHANGEABLE,PORTD_PIN4_PULL_UP,PORTD_PIN4_PULL_DOWN,\
	PORTD_PIN4_INITIAL_LEVEL,PORTD_PIN4_MODE,PORTD_PIN4_MODE_CHANGEABLE,PORTD_PIN4_ANALOG_MODE,\
	
	PORTCFG_PORTD,PORTCFG_PIN5,PORTD_PIN5_DIRECTION,PORTD_PIN5_DIRECTION_CHANGEABLE,PORTD_PIN5_PULL_UP,PORTD_PIN5_PULL_DOWN,\
	PORTD_PIN5_INITIAL_LEVEL,PORTD_PIN5_MODE,PORTD_PIN5_MODE_CHANGEABLE,PORTD_PIN5_ANALOG_MODE,\
	
	PORTCFG_PORTD,PORTCFG_PIN6,PORTD_PIN6_DIRECTION,PORTD_PIN6_DIRECTION_CHANGEABLE,PORTD_PIN6_PULL_UP,PORTD_PIN6_PULL_DOWN,\
	PORTD_PIN6_INITIAL_LEVEL,PORTD_PIN6_MODE,PORTD_PIN6_MODE_CHANGEABLE,PORTD_PIN6_ANALOG_MODE,\
	
	PORTCFG_PORTD,PORTCFG_PIN7,PORTD_PIN7_DIRECTION,PORTD_PIN7_DIRECTION_CHANGEABLE,PORTD_PIN7_PULL_UP,PORTD_PIN7_PULL_DOWN,\
	PORTD_PIN7_INITIAL_LEVEL,PORTD_PIN7_MODE,PORTD_PIN7_MODE_CHANGEABLE,PORTD_PIN7_ANALOG_MODE,\
	
	PORTCFG_PORTE,PORTCFG_PIN0,PORTE_PIN0_DIRECTION,PORTE_PIN0_DIRECTION_CHANGEABLE,PORTE_PIN0_PULL_UP,PORTE_PIN0_PULL_DOWN,\
	PORTE_PIN0_INITIAL_LEVEL,PORTE_PIN0_MODE,PORTE_PIN0_MODE_CHANGEABLE,PORTE_PIN0_ANALOG_MODE,\
	
	PORTCFG_PORTE,PORTCFG_PIN1,PORTE_PIN1_DIRECTION,PORTE_PIN1_DIRECTION_CHANGEABLE,PORTE_PIN1_PULL_UP,PORTE_PIN1_PULL_DOWN,\
	PORTE_PIN1_INITIAL_LEVEL,PORTE_PIN1_MODE,PORTE_PIN1_MODE_CHANGEABLE,PORTE_PIN1_ANALOG_MODE,\
	
	PORTCFG_PORTE,PORTCFG_PIN2,PORTE_PIN2_DIRECTION,PORTE_PIN2_DIRECTION_CHANGEABLE,PORTE_PIN2_PULL_UP,PORTE_PIN2_PULL_DOWN,\
	PORTE_PIN2_INITIAL_LEVEL,PORTE_PIN2_MODE,PORTE_PIN2_MODE_CHANGEABLE,PORTE_PIN2_ANALOG_MODE,\
	
	PORTCFG_PORTE,PORTCFG_PIN3,PORTE_PIN3_DIRECTION,PORTE_PIN3_DIRECTION_CHANGEABLE,PORTE_PIN3_PULL_UP,PORTE_PIN3_PULL_DOWN,\
	PORTE_PIN3_INITIAL_LEVEL,PORTE_PIN3_MODE,PORTE_PIN3_MODE_CHANGEABLE,PORTE_PIN3_ANALOG_MODE,\
	
	PORTCFG_PORTE,PORTCFG_PIN4,PORTE_PIN4_DIRECTION,PORTE_PIN4_DIRECTION_CHANGEABLE,PORTE_PIN4_PULL_UP,PORTE_PIN4_PULL_DOWN,\
	PORTE_PIN4_INITIAL_LEVEL,PORTE_PIN4_MODE,PORTE_PIN4_MODE_CHANGEABLE,PORTE_PIN4_ANALOG_MODE,\
	
	PORTCFG_PORTE,PORTCFG_PIN5,PORTE_PIN5_DIRECTION,PORTE_PIN5_DIRECTION_CHANGEABLE,PORTE_PIN5_PULL_UP,PORTE_PIN5_PULL_DOWN,\
	PORTE_PIN5_INITIAL_LEVEL,PORTE_PIN5_MODE,PORTE_PIN5_MODE_CHANGEABLE,PORTE_PIN5_ANALOG_MODE,\
	
	PORTCFG_PORTE,PORTCFG_PIN6,PORTE_PIN6_DIRECTION,PORTE_PIN6_DIRECTION_CHANGEABLE,PORTE_PIN6_PULL_UP,PORTE_PIN6_PULL_DOWN,\
	PORTE_PIN6_INITIAL_LEVEL,PORTE_PIN6_MODE,PORTE_PIN6_MODE_CHANGEABLE,PORTE_PIN6_ANALOG_MODE,\
	
	PORTCFG_PORTE,PORTCFG_PIN7,PORTE_PIN7_DIRECTION,PORTE_PIN7_DIRECTION_CHANGEABLE,PORTE_PIN7_PULL_UP,PORTE_PIN7_PULL_DOWN,\
	PORTE_PIN7_INITIAL_LEVEL,PORTE_PIN7_MODE,PORTE_PIN7_MODE_CHANGEABLE,PORTE_PIN7_ANALOG_MODE,\
	
	PORTCFG_PORTF,PORTCFG_PIN0,PORTF_PIN0_DIRECTION,PORTF_PIN0_DIRECTION_CHANGEABLE,PORTF_PIN0_PULL_UP,PORTF_PIN0_PULL_DOWN,\
	PORTF_PIN0_INITIAL_LEVEL,PORTF_PIN0_MODE,PORTF_PIN0_MODE_CHANGEABLE,PORTF_PIN0_ANALOG_MODE,\

	PORTCFG_PORTF,PORTCFG_PIN1,PORTF_PIN1_DIRECTION,PORTF_PIN1_DIRECTION_CHANGEABLE,PORTF_PIN1_PULL_UP,PORTF_PIN1_PULL_DOWN,\
	PORTF_PIN1_INITIAL_LEVEL,PORTF_PIN1_MODE,PORTF_PIN1_MODE_CHANGEABLE,PORTF_PIN1_ANALOG_MODE,\
	
	PORTCFG_PORTF,PORTCFG_PIN2,PORTF_PIN2_DIRECTION,PORTF_PIN2_DIRECTION_CHANGEABLE,PORTF_PIN2_PULL_UP,PORTF_PIN2_PULL_DOWN,\
	PORTF_PIN2_INITIAL_LEVEL,PORTF_PIN2_MODE,PORTF_PIN2_MODE_CHANGEABLE,PORTF_PIN2_ANALOG_MODE,\
	
	PORTCFG_PORTF,PORTCFG_PIN3,PORTF_PIN3_DIRECTION,PORTF_PIN3_DIRECTION_CHANGEABLE,PORTF_PIN3_PULL_UP,PORTF_PIN3_PULL_DOWN,\
	PORTF_PIN3_INITIAL_LEVEL,PORTF_PIN3_MODE,PORTF_PIN3_MODE_CHANGEABLE,PORTF_PIN3_ANALOG_MODE,\
	
	PORTCFG_PORTF,PORTCFG_PIN4,PORTF_PIN4_DIRECTION,PORTF_PIN4_DIRECTION_CHANGEABLE,PORTF_PIN4_PULL_UP,PORTF_PIN4_PULL_DOWN,\
	PORTF_PIN4_INITIAL_LEVEL,PORTF_PIN4_MODE,PORTF_PIN4_MODE_CHANGEABLE,PORTF_PIN4_ANALOG_MODE,\
	
	PORTCFG_PORTF,PORTCFG_PIN5,PORTF_PIN5_DIRECTION,PORTF_PIN5_DIRECTION_CHANGEABLE,PORTF_PIN5_PULL_UP,PORTF_PIN5_PULL_DOWN,\
	PORTF_PIN5_INITIAL_LEVEL,PORTF_PIN5_MODE,PORTF_PIN5_MODE_CHANGEABLE,PORTF_PIN5_ANALOG_MODE,\
	
	PORTCFG_PORTF,PORTCFG_PIN6,PORTF_PIN6_DIRECTION,PORTF_PIN6_DIRECTION_CHANGEABLE,PORTF_PIN6_PULL_UP,PORTF_PIN6_PULL_DOWN,\
	PORTF_PIN6_INITIAL_LEVEL,PORTF_PIN6_MODE,PORTF_PIN6_MODE_CHANGEABLE,PORTF_PIN6_ANALOG_MODE,\
	
	PORTCFG_PORTF,PORTCFG_PIN7,PORTF_PIN7_DIRECTION,PORTF_PIN7_DIRECTION_CHANGEABLE,PORTF_PIN7_PULL_UP,PORTF_PIN7_PULL_DOWN,\
	PORTF_PIN7_INITIAL_LEVEL,PORTF_PIN7_MODE,PORTF_PIN7_MODE_CHANGEABLE,PORTF_PIN7_ANALOG_MODE,\
	
};

#endif 