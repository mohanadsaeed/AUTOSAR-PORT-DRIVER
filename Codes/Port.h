 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Mohanad K. Saeed
 ******************************************************************************/
 
#ifndef PORT_H
#define PORT_H

/* Id for the company in the AUTOSAR
 * for example Mohanad Saeed's ID = 1419 */
#define PORT_VENDOR_ID    				(1419U)

/* Port Module Id */
#define PORT_MODULE_ID    				(120U)

/* Port Instance Id */
#define PORT_INSTANCE_ID  				(0U)

/*
 * Module Version 1.0.0
 */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)

/*
 * Macros for Dio Status
 */
#define PORT_INITIALIZED                	(1U)
#define PORT_NOT_INITIALIZED            	(0U)

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* AUTOSAR checking between Std Types and Port Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* Port Pre-Compile Configuration Header file */
#include "Port_Cfg.h"

/* AUTOSAR Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port_Cfg.h does not match the expected version"
#endif

/* Software Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Port_Cfg.h does not match the expected version"
#endif

/* Non AUTOSAR files */
#include "Common_Macros.h"

/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/
/* Service ID for PORT Initialization  */
#define PORT_INIT_SID           				     (uint8)0x00

/* Service ID for PORT set pin direction */
#define PORT_SET_PIN_DIRECTION_SID          		 (uint8)0x01

/* Service ID for PORT refresh direction */
#define PORT_REFRESH_PORT_DIRECTION_SID              (uint8)0x02

/* Service ID for PORT get info */
#define PORT_GET_INFO_SID              			 	 (uint8)0x03

/* Service ID for PORT set pin mode */
#define PORT_SET_PIN_MODE_SID						 (uint8)0x04


/*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/
/* Invalid Port Pin ID requested */
#define PORT_E_PARAM_PIN 			   	             (uint8)0x0A

/* Port Pin not configured as changeable */
#define PORT_E_DIRECTION_UNCHANGEABLE  				     (uint8)0x0B

/* API Port_Init service called with wrong parameter */
#define PORT_E_PARAM_CONFIG 		   			     (uint8)0x0C

/* API Port_SetPinMode service called with invalid mode */
#define PORT_E_PARAM_INVALID_MODE 	   			     (uint8)0x0D

/* API Port_SetPinMode service called when mode is unchangeable */
#define PORT_E_MODE_UNCHANGEABLE 	   		             (uint8)0x0E

/* API service called without module initialization */
#define PORT_E_UNINIT 				   	             (uint8)0x0F

/* APIs called with a Null Pointer */
#define PORT_E_PARAM_POINTER 		   		             (uint8)0x10

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
/* Data type for the symbolic name of a port pin */
typedef uint8 Port_PinType;

/* Data type for the symbolic name of a port */
typedef uint8 Port_PortType;

/* Different port pin modes */
typedef uint8 Port_PinModeType;

typedef uint8 Port_PinInitialLevel;

typedef uint8 Port_PinDirectionChangeable;

typedef uint8 Port_PinModeChangeable;

typedef uint8 Port_PinAnalog;

/* Possible directions of a port pin */
typedef enum {
	PORT_PIN_IN,
	PORT_PIN_OUT
} Port_PinDirectionType;

typedef enum {
	DISABLE_PULL_UP,
	ENABLE_PULL_UP
} Port_PinPullUp;

typedef enum {
	DISABLE_PULL_DOWN,
	ENABLE_PULL_DOWN
} Port_PinPullDown;


typedef struct {
	Port_PortType port_num;
	Port_PinType pin_num;
	Port_PinDirectionType pin_direction;
	Port_PinDirectionChangeable pin_direction_changeable;
	Port_PinPullUp pin_pull_up;
	Port_PinPullDown pin_pull_down;
	Port_PinInitialLevel pin_initial_level;
	Port_PinModeType pin_mode;
	Port_PinModeChangeable pin_mode_changeable;
	Port_PinAnalog pin_analog;
} Port_ConfigPins;

/* Type of the external data structure containing the initialization data for this module */
typedef struct {
	Port_ConfigPins Pins[PORT_CONFIGURED_PINS];
} Port_ConfigType;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/* Initializes the Port Driver module */
void Port_Init(const Port_ConfigType *ConfigPtr);

/* Sets the port pin direction */
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction);
#endif

/* Refreshes port direction */
void Port_RefreshPortDirection(void);

/* Returns the version information of this module */
#if (Port_GetVersionInfo_API == STD_ON)
void Port_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif

/*Sets the port pin mode*/
void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode);

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/
/* Extern PB structures to be used by Port and other modules */
extern const Port_ConfigType Port_Configuration;

#endif

/*********************************************************************************
 * 			        PIN Definitions 														 *
 * *******************************************************************************/
#define PORTCFG_PORTA 						(Port_PortType)0
#define PORTCFG_PORTB 						(Port_PortType)1
#define PORTCFG_PORTC 						(Port_PortType)2
#define PORTCFG_PORTD 						(Port_PortType)3
#define PORTCFG_PORTE						(Port_PortType)4
#define PORTCFG_PORTF 						(Port_PortType)5
#define PORTCFG_PIN0 						 (Port_PinType)0
#define PORTCFG_PIN1 						 (Port_PinType)1
#define PORTCFG_PIN2 						 (Port_PinType)2
#define PORTCFG_PIN3 						 (Port_PinType)3
#define PORTCFG_PIN4 						 (Port_PinType)4
#define PORTCFG_PIN5 						 (Port_PinType)5
#define PORTCFG_PIN6 						 (Port_PinType)6
#define PORTCFG_PIN7 						 (Port_PinType)7