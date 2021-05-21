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
 
#ifndef PORT_CFG_H_
#define PORT_CFG_H_

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION           		   	            (1U)
#define PORT_CFG_SW_MINOR_VERSION           		   	            (0U)
#define PORT_CFG_SW_PATCH_VERSION            		  	            (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION    		  	            (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     		 	            (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     			            (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT					        (STD_ON)
/* Pre-compile option for presence of Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API					(STD_ON)

/* Pre-compile option for Version Info API */
#define	PORT_VERSION_INFO_API						(STD_ON)

#define PORT_CONFIGURED_PINS					           (44U) /*Excluded the 4 pins of JTAG*/

/*******************************************************************************
 *                    PINS DIRECTION CONFIGURATIONS                            *
 *******************************************************************************/
#define PORTA_PIN0_DIRECTION					   (PORT_PIN_IN)
#define PORTA_PIN1_DIRECTION			               	   (PORT_PIN_IN)
#define PORTA_PIN2_DIRECTION					   (PORT_PIN_IN)
#define PORTA_PIN3_DIRECTION					   (PORT_PIN_IN)
#define PORTA_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTA_PIN5_DIRECTION			      		   (PORT_PIN_IN)
#define PORTA_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTA_PIN7_DIRECTION					   (PORT_PIN_IN)

#define PORTB_PIN0_DIRECTION			   		   (PORT_PIN_IN)
#define PORTB_PIN1_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN2_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN3_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN5_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN7_DIRECTION					   (PORT_PIN_IN)

#define PORTC_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTC_PIN5_DIRECTION					   (PORT_PIN_IN)	
#define PORTC_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTC_PIN7_DIRECTION					   (PORT_PIN_IN)

#define PORTD_PIN0_DIRECTION					   (PORT_PIN_IN)
#define PORTD_PIN1_DIRECTION					   (PORT_PIN_IN)
#define PORTD_PIN2_DIRECTION					   (PORT_PIN_IN)	
#define PORTD_PIN3_DIRECTION				           (PORT_PIN_IN)
#define PORTD_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTD_PIN5_DIRECTION					   (PORT_PIN_IN)
#define PORTD_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTD_PIN7_DIRECTION					   (PORT_PIN_IN)  /*LOCKED*/

#define PORTE_PIN0_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN1_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN2_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN3_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN5_DIRECTION					   (PORT_PIN_IN)	
#define PORTE_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN7_DIRECTION					   (PORT_PIN_IN)

#define PORTF_PIN0_DIRECTION					   (PORT_PIN_IN)  /*LOCKED*/
#define PORTF_PIN1_DIRECTION					   (PORT_PIN_OUT)
#define PORTF_PIN2_DIRECTION					   (PORT_PIN_IN)	
#define PORTF_PIN3_DIRECTION					   (PORT_PIN_IN)
#define PORTF_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTF_PIN5_DIRECTION					   (PORT_PIN_IN)
#define PORTF_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTF_PIN7_DIRECTION					   (PORT_PIN_IN)

/*******************************************************************************
 *                    PINS DIRECTION CHANGEABILITY CONFIGURATIONS                            *
 *******************************************************************************/
#define PORTA_PIN0_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN1_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN2_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN3_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)

#define PORTB_PIN0_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN1_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN2_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN3_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)

#define PORTC_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTC_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)	
#define PORTC_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTC_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)

#define PORTD_PIN0_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN1_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN2_DIRECTION_CHANGEABLE				       (STD_OFF)	
#define PORTD_PIN3_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)  /*LOCKED*/

#define PORTE_PIN0_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN1_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN2_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN3_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)	
#define PORTE_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)

#define PORTF_PIN0_DIRECTION_CHANGEABLE				       (STD_OFF)  /*LOCKED*/
#define PORTF_PIN1_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN2_DIRECTION_CHANGEABLE				       (STD_OFF)	
#define PORTF_PIN3_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)

/*******************************************************************************
 *            PINS INTERNAL RESISTOR PULL UP CONFIGURATIONS                    *
 *******************************************************************************/
#define PORTA_PIN0_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN1_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN2_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN3_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN4_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN6_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN7_PULL_UP				       (DISABLE_PULL_UP)

#define PORTB_PIN0_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN1_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN2_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN3_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN4_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN6_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN7_PULL_UP		     		       (DISABLE_PULL_UP)

#define PORTC_PIN4_PULL_UP				       (DISABLE_PULL_UP)
#define PORTC_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTC_PIN6_PULL_UP				       (DISABLE_PULL_UP)
#define PORTC_PIN7_PULL_UP				       (DISABLE_PULL_UP)

#define PORTD_PIN0_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN1_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN2_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN3_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN4_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN6_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN7_PULL_UP				       (DISABLE_PULL_UP) /*LOCKED*/

#define PORTE_PIN0_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN1_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN2_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN3_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN4_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN6_PULL_UP			               (DISABLE_PULL_UP)
#define PORTE_PIN7_PULL_UP				       (DISABLE_PULL_UP)

#define PORTF_PIN0_PULL_UP				       (DISABLE_PULL_UP) /*LOCKED*/
#define PORTF_PIN1_PULL_UP				       (DISABLE_PULL_UP)
#define PORTF_PIN2_PULL_UP				       (DISABLE_PULL_UP)
#define PORTF_PIN3_PULL_UP				       (DISABLE_PULL_UP)
#define PORTF_PIN4_PULL_UP				       (ENABLE_PULL_UP)
#define PORTF_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTF_PIN6_PULL_UP				       (DISABLE_PULL_UP)
#define PORTF_PIN7_PULL_UP				       (DISABLE_PULL_UP)

/*******************************************************************************
 *            PINS INTERNAL RESISTOR PULL DOWN CONFIGURATIONS                  *
 *******************************************************************************/
#define PORTA_PIN0_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTA_PIN1_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTA_PIN2_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTA_PIN3_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTA_PIN4_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTA_PIN5_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTA_PIN6_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTA_PIN7_PULL_DOWN				     (DISABLE_PULL_DOWN)

#define PORTB_PIN0_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTB_PIN1_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTB_PIN2_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTB_PIN3_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTB_PIN4_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTB_PIN5_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTB_PIN6_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTB_PIN7_PULL_DOWN		                     (DISABLE_PULL_DOWN)

#define PORTC_PIN4_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTC_PIN5_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTC_PIN6_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTC_PIN7_PULL_DOWN			             (DISABLE_PULL_DOWN)

#define PORTD_PIN0_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTD_PIN1_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTD_PIN2_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTD_PIN3_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTD_PIN4_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTD_PIN5_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTD_PIN6_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTD_PIN7_PULL_DOWN				     (DISABLE_PULL_DOWN) /*LOCKED*/

#define PORTE_PIN0_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN1_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN2_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN3_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN4_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN5_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN6_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN7_PULL_DOWN				     (DISABLE_PULL_DOWN)

#define PORTF_PIN0_PULL_DOWN				     (DISABLE_PULL_DOWN) /*LOCKED*/
#define PORTF_PIN1_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN2_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN3_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN4_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN5_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN6_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN7_PULL_DOWN				     (DISABLE_PULL_DOWN)

/*******************************************************************************
 *              PINS INTERNAL INITIAL LEVEL CONFIGURATIONS                     *
 *******************************************************************************/
#define PORTA_PIN0_INITIAL_LEVEL			               (STD_LOW)
#define PORTA_PIN1_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN2_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN3_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN7_INITIAL_LEVEL				       (STD_LOW)

#define PORTB_PIN0_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN1_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN2_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN3_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN7_INITIAL_LEVEL				       (STD_LOW)

#define PORTC_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTC_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTC_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTC_PIN7_INITIAL_LEVEL				       (STD_LOW)

#define PORTD_PIN0_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN1_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN2_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN3_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN7_INITIAL_LEVEL				       (STD_LOW) /*LOCKED*/

#define PORTE_PIN0_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN1_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN2_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN3_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN7_INITIAL_LEVEL				       (STD_LOW)

#define PORTF_PIN0_INITIAL_LEVEL				       (STD_LOW) /*LOCKED*/
#define PORTF_PIN1_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN2_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN3_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN7_INITIAL_LEVEL				       (STD_LOW)

/*******************************************************************************
 *                        PINS MODE CONFIGURATIONS                             *
 *******************************************************************************/
#define PORTA_PIN0_MODE				             (Port_PinModeType)0
#define PORTA_PIN1_MODE					     (Port_PinModeType)0
#define PORTA_PIN2_MODE				             (Port_PinModeType)0
#define PORTA_PIN3_MODE				             (Port_PinModeType)0
#define PORTA_PIN4_MODE					     (Port_PinModeType)0
#define PORTA_PIN5_MODE					     (Port_PinModeType)0
#define PORTA_PIN6_MODE					     (Port_PinModeType)0
#define PORTA_PIN7_MODE					     (Port_PinModeType)0

#define PORTB_PIN0_MODE				             (Port_PinModeType)0
#define PORTB_PIN1_MODE					     (Port_PinModeType)0
#define PORTB_PIN2_MODE					     (Port_PinModeType)0
#define PORTB_PIN3_MODE					     (Port_PinModeType)0
#define PORTB_PIN4_MODE					     (Port_PinModeType)0
#define PORTB_PIN5_MODE					     (Port_PinModeType)0
#define PORTB_PIN6_MODE					     (Port_PinModeType)0
#define PORTB_PIN7_MODE				             (Port_PinModeType)0

#define PORTC_PIN4_MODE					     (Port_PinModeType)0
#define PORTC_PIN5_MODE					     (Port_PinModeType)0
#define PORTC_PIN6_MODE					     (Port_PinModeType)0
#define PORTC_PIN7_MODE					     (Port_PinModeType)0

#define PORTD_PIN0_MODE					     (Port_PinModeType)0
#define PORTD_PIN1_MODE					     (Port_PinModeType)0
#define PORTD_PIN2_MODE					     (Port_PinModeType)0
#define PORTD_PIN3_MODE					     (Port_PinModeType)0
#define PORTD_PIN4_MODE					     (Port_PinModeType)0
#define PORTD_PIN5_MODE				             (Port_PinModeType)0
#define PORTD_PIN6_MODE					     (Port_PinModeType)0
#define PORTD_PIN7_MODE				             (Port_PinModeType)0 /*LOCKED*/

#define PORTE_PIN0_MODE				             (Port_PinModeType)0
#define PORTE_PIN1_MODE				             (Port_PinModeType)0
#define PORTE_PIN2_MODE					     (Port_PinModeType)0
#define PORTE_PIN3_MODE					     (Port_PinModeType)0
#define PORTE_PIN4_MODE			          	     (Port_PinModeType)0
#define PORTE_PIN5_MODE					     (Port_PinModeType)0
#define PORTE_PIN6_MODE					     (Port_PinModeType)0
#define PORTE_PIN7_MODE					     (Port_PinModeType)0

#define PORTF_PIN0_MODE					     (Port_PinModeType)0 /*LOCKED*/
#define PORTF_PIN1_MODE					     (Port_PinModeType)0
#define PORTF_PIN2_MODE					     (Port_PinModeType)0
#define PORTF_PIN3_MODE					     (Port_PinModeType)0
#define PORTF_PIN4_MODE					     (Port_PinModeType)0
#define PORTF_PIN5_MODE					     (Port_PinModeType)0
#define PORTF_PIN6_MODE					     (Port_PinModeType)0
#define PORTF_PIN7_MODE					     (Port_PinModeType)0

/*******************************************************************************
 *                  PINS MODE CHANGEABILITY CONFIGURATIONS                     *
 *******************************************************************************/
#define PORTA_PIN0_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN1_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN2_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN3_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN4_MODE_CHANGEABLE		 		       (STD_OFF)
#define PORTA_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN7_MODE_CHANGEABLE				       (STD_OFF)

#define PORTB_PIN0_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN1_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN2_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN3_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN4_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN7_MODE_CHANGEABLE				       (STD_OFF)

#define PORTC_PIN4_MODE_CHANGEABLE				       (STD_OFF)
#define PORTC_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTC_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTC_PIN7_MODE_CHANGEABLE				       (STD_OFF)

#define PORTD_PIN0_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN1_MODE_CHANGEABLE			               (STD_OFF)
#define PORTD_PIN2_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN3_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN4_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN7_MODE_CHANGEABLE				       (STD_OFF) /*LOCKED*/

#define PORTE_PIN0_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN1_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN2_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN3_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN4_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN7_MODE_CHANGEABLE				       (STD_OFF)

#define PORTF_PIN0_MODE_CHANGEABLE				       (STD_OFF) /*LOCKED*/
#define PORTF_PIN1_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN2_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN3_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN4_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN7_MODE_CHANGEABLE				       (STD_OFF)

/*******************************************************************************
 *                PINS Analog Mode CONFIGURATIONS                       *
 *******************************************************************************/
#define PORTA_PIN0_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN1_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN2_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN3_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN4_ANALOG_MODE   		 	               (STD_OFF)
#define PORTA_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN7_ANALOG_MODE  			               (STD_OFF)

#define PORTB_PIN0_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN1_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN2_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN3_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN4_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN7_ANALOG_MODE  				       (STD_OFF)

#define PORTC_PIN4_ANALOG_MODE  				       (STD_OFF)
#define PORTC_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTC_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTC_PIN7_ANALOG_MODE  				       (STD_OFF)

#define PORTD_PIN0_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN1_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN2_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN3_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN4_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN7_ANALOG_MODE  				       (STD_OFF) /*LOCKED*/

#define PORTE_PIN0_ANALOG_MODE  				       (STD_OFF)
#define PORTE_PIN1_ANALOG_MODE  			               (STD_OFF)
#define PORTE_PIN2_ANALOG_MODE  			               (STD_OFF)
#define PORTE_PIN3_ANALOG_MODE  				       (STD_OFF)
#define PORTE_PIN4_ANALOG_MODE  				       (STD_OFF)
#define PORTE_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTE_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTE_PIN7_ANALOG_MODE  				       (STD_OFF)

#define PORTF_PIN0_ANALOG_MODE  				       (STD_OFF) /*LOCKED*/
#define PORTF_PIN1_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN2_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN3_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN4_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN7_ANALOG_MODE  				       (STD_OFF)

#endif