/******************************************************************************
*
* Module: Port
*
* File Name: Port.c
*
* Description: Source file for TM4C123GH6PM Microcontroller - Port Driver
*
* Author: Mohanad K. Saeed
******************************************************************************/
#include "Port.h"
#include "Port_Regs.h"
#include "Det.h"

STATIC const Port_ConfigPins * PortConf = NULL_PTR;
STATIC volatile uint8 Port_Status = PORT_NOT_INITIALIZED;

/************************************************************************************
* Service Name: Port_Init
* Service ID[hex]: 0x00
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Initialize the Port module.
************************************************************************************/

void Port_Init(const Port_ConfigType* ConfigPtr) 
{
	boolean error = FALSE;
	#if (PORT_DEV_ERROR_DETECT == STD_ON)
		if (ConfigPtr == NULL_PTR) 
		{
			Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_INIT_SID,PORT_E_PARAM_CONFIG);
			error = TRUE;
		} 
		else
		{
		}
	#endif
	if (error==FALSE){
		{
		volatile uint32 * Port_Ptr = NULL_PTR;
		uint8 Pin_Index;
		boolean state;
                volatile uint32 delay;
		PortConf = ConfigPtr->Pins;
		Port_Status = PORT_INITIALIZED;
		for(Pin_Index=0;Pin_Index<PORT_CONFIGURED_PINS;Pin_Index++)
		{
			switch(PortConf[Pin_Index].port_num)
                        {
				case PORTCFG_PORTA:
					Port_Ptr=(volatile uint32 *)GPIO_PORTA_BASE_ADDRESS;
					break;
				case PORTCFG_PORTB:
					Port_Ptr=(volatile uint32 *)GPIO_PORTB_BASE_ADDRESS;
					break;
				case PORTCFG_PORTC:
					Port_Ptr=(volatile uint32 *)GPIO_PORTC_BASE_ADDRESS;
					break;
				case PORTCFG_PORTD:
					Port_Ptr=(volatile uint32 *)GPIO_PORTD_BASE_ADDRESS;
					break;
				case PORTCFG_PORTE:
					Port_Ptr=(volatile uint32 *)GPIO_PORTE_BASE_ADDRESS;
					break;
				case PORTCFG_PORTF:
					Port_Ptr=(volatile uint32 *)GPIO_PORTF_BASE_ADDRESS;
					break;
				default:
                                  break;
			}
			/* Enable clock for PORT and allow time for clock to start*/
			SYSCTL_REGCGC2_REG |= (STD_ON<<(PortConf[Pin_Index].port_num));
			delay = SYSCTL_REGCGC2_REG;
			if( ((PortConf[Pin_Index].port_num == PORTCFG_PORTD) && (PortConf[Pin_Index].pin_num == PORTCFG_PIN7)) ||\
				((PortConf[Pin_Index].port_num == PORTCFG_PORTF) && (PortConf[Pin_Index].pin_num == PORTCFG_PIN0)) ) /* PD7 or PF0 */
			{
				/* Unlock the GPIOCR register */   
				*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_LOCK_REG_OFFSET) = MAGIC_NUMBER_TO_UNLOCK;    
				/* Set the corresponding bit in GPIOCR register to allow changes on this pin */						
				SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CR_REG_OFFSET),PortConf[Pin_Index].pin_num); 
			}
			else
			{
			}
			/* Insert if the pin analog or not */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_AMSEL_REG_OFFSET)&=~(1<<PortConf[Pin_Index].pin_num);
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_AMSEL_REG_OFFSET)|=(PortConf[Pin_Index].pin_analog<<PortConf[Pin_Index].pin_num);
			
			/* Choose the mode of the pin */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PCTL_REG_OFFSET)&=~(0x0000000F<<(PortConf[Pin_Index].pin_num)*4);
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PCTL_REG_OFFSET)|=((uint32)PortConf[Pin_Index].pin_mode<<(PortConf[Pin_Index].pin_num)*4);

			/* Select Direction of the pin */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET)&=~(1<<PortConf[Pin_Index].pin_num);
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET)|=(PortConf[Pin_Index].pin_direction<<PortConf[Pin_Index].pin_num);

			/* Enable Alternative functions of pin or not */
			state=(PortConf[Pin_Index].pin_mode!=0);
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_AFSEL_REG_OFFSET)&=~(1<<PortConf[Pin_Index].pin_num);
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_AFSEL_REG_OFFSET)|=(state<<PortConf[Pin_Index].pin_num);
			
			/* Pull Up Pin Configuration */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PUR_REG_OFFSET)&=~(1<<PortConf[Pin_Index].pin_num);
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PUR_REG_OFFSET)|=(PortConf[Pin_Index].pin_pull_up<<PortConf[Pin_Index].pin_num);

			/* Pull Down Pin Configuration */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PDR_REG_OFFSET)&=~(1<<PortConf[Pin_Index].pin_num);
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PDR_REG_OFFSET)|=(PortConf[Pin_Index].pin_pull_down<<PortConf[Pin_Index].pin_num);
			
			/* Insert if the pin digital or not */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DEN_REG_OFFSET)&=~(1<<PortConf[Pin_Index].pin_num);
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DEN_REG_OFFSET)|=(!PortConf[Pin_Index].pin_analog<<PortConf[Pin_Index].pin_num);
		
                        /* Insert if the pin initial value */
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DATA_REG_OFFSET)&=~(1<<PortConf[Pin_Index].pin_num);
			*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DATA_REG_OFFSET)|=(PortConf[Pin_Index].pin_initial_level<<PortConf[Pin_Index].pin_num);
                
                }
		}
	}
	else
	{
	}
}

/************************************************************************************
* Service Name: Port_SetPinDirection
* Service ID[hex]: 0x01
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): Pin - Port Pin ID number
*				   Direction - Port Pin Direction
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to set the port pin direction.
************************************************************************************/
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction )
{
	boolean error = FALSE;
	#if (DIO_DEV_ERROR_DETECT == STD_ON)
		/* Check if the Driver is initialized before using this function */
		if (PORT_NOT_INITIALIZED == Port_Status)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_API_SID,PORT_E_UNINIT);
			error = TRUE;
		}
		else
		{
		}
		/* Check if the used pin is within the valid range */
		if (PORT_CONFIGURED_PINS <= Pin)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_API_SID,PORT_E_PARAM_PIN);
			error = TRUE;
		}
		else
		{
		}
		/* Check if the used pin is direction changeable or not */
		if (PortConf[Pin].pin_direction_changeable == STD_OFF)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_API_SID,PORT_E_DIRECTION_UNCHANGEABLE);
			error = TRUE;
		}
		else
		{
		}
		
	#endif
	
	if (error == FALSE)
	{
	{
		volatile uint32 * Port_Ptr = NULL_PTR;
		switch(PortConf[Pin].port_num){
                        case PORTCFG_PORTA:
				Port_Ptr=(volatile uint32 *)GPIO_PORTA_BASE_ADDRESS;
				break;
			case PORTCFG_PORTB:
				Port_Ptr=(volatile uint32 *)GPIO_PORTB_BASE_ADDRESS;
				break;
			case PORTCFG_PORTC:
				Port_Ptr=(volatile uint32 *)GPIO_PORTC_BASE_ADDRESS;
				break;
			case PORTCFG_PORTD:
				Port_Ptr=(volatile uint32 *)GPIO_PORTD_BASE_ADDRESS;
				break;
			case PORTCFG_PORTE:
				Port_Ptr=(volatile uint32 *)GPIO_PORTE_BASE_ADDRESS;
				break;
			case PORTCFG_PORTF:
				Port_Ptr=(volatile uint32 *)GPIO_PORTF_BASE_ADDRESS;
				break;
			default:
                                break;
		}

		/* Select Direction of the pin */
		*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET)&=~(1<<PortConf[Pin].pin_num);
		*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET)|=(Direction<<PortConf[Pin].pin_num);
	}
	}
	else 
	{
	}
}
#endif

/************************************************************************************
* Service Name: Port_RefreshPortDirection
* Service ID[hex]: 0x02
* Sync/Async: Synchronous
* Reentrancy: Non Reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to refresh port direction
************************************************************************************/
void Port_RefreshPortDirection( void )
{
	boolean error=FALSE;
	#if (DIO_DEV_ERROR_DETECT == STD_ON)
		/* Check if the Driver is initialized before using this function */
		if (PORT_NOT_INITIALIZED == Port_Status)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,PORT_REFRESH_PORT_DIRECTION_SID,PORT_E_UNINIT);
			error = TRUE;
		}
		else
		{
		}
	#endif /* (DIO_DEV_ERROR_DETECT == STD_ON) */
	if (error==FALSE)
	{
	{
                uint8 Pin_Index;
		volatile uint32 * Port_Ptr = NULL_PTR;
		for(Pin_Index=0;Pin_Index<PORT_CONFIGURED_PINS;Pin_Index++)
		{
                        switch(PortConf[Pin_Index].port_num){
			case PORTCFG_PORTA:
				Port_Ptr=(volatile uint32 *)GPIO_PORTA_BASE_ADDRESS;
				break;
			case PORTCFG_PORTB:
				Port_Ptr=(volatile uint32 *)GPIO_PORTB_BASE_ADDRESS;
				break;
			case PORTCFG_PORTC:
				Port_Ptr=(volatile uint32 *)GPIO_PORTC_BASE_ADDRESS;
				break;
			case PORTCFG_PORTD:
				Port_Ptr=(volatile uint32 *)GPIO_PORTD_BASE_ADDRESS;
				break;
			case PORTCFG_PORTE:
				Port_Ptr=(volatile uint32 *)GPIO_PORTE_BASE_ADDRESS;
				break;
			case PORTCFG_PORTF:
				Port_Ptr=(volatile uint32 *)GPIO_PORTF_BASE_ADDRESS;
				break;
			default:
                                break;
                        }

			/* Select Direction of the pin */
			if (PortConf[Pin_Index].pin_direction_changeable==STD_OFF)
			{
				*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET)&=~(1<<PortConf[Pin_Index].pin_num);
				*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET)|=(PortConf[Pin_Index].pin_direction<<PortConf[Pin_Index].pin_num);
			}
			else
			{
			}
		}
	}
	}	
}

/************************************************************************************
* Service Name: Port_GetVersionInfo
* Service ID[hex]: 0x03
* Sync/Async: Synchronous
* Reentrancy: Non Reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): versioninfo - Pointer to where to store the version information of this module 
* Return value: None
* Description: Function to return the version information of this module
************************************************************************************/
#if (Port_GetVersionInfo_API == STD_ON)
void Port_GetVersionInfo(Std_VersionInfoType* versioninfo)
{
	boolean error=FALSE;
	#if (DIO_DEV_ERROR_DETECT == STD_ON)
		/* Check if the Driver is initialized before using this function */
		if (PORT_NOT_INITIALIZED == Port_Status)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,PORT_GET_INFO_SID,PORT_E_UNINIT);
			error = TRUE;
		}
		else
		{
		}
		/* Check if input pointer is not Null pointer */
		if(NULL_PTR == versioninfo)
		{
			/* Report to DET  */
			Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_GET_INFO_SID,PORT_E_PARAM_POINTER);
			error = TRUE;
		}
		else
		{
		}
	#endif /* (DIO_DEV_ERROR_DETECT == STD_ON) */
	if (error==FALSE)
	{
		/* Copy the vendor Id */
		versioninfo->vendorID = (uint16)PORT_VENDOR_ID;
		/* Copy the module Id */
		versioninfo->moduleID = (uint16)PORT_MODULE_ID;
		/* Copy Software Major Version */
		versioninfo->sw_major_version = (uint8)PORT_SW_MAJOR_VERSION;
		/* Copy Software Minor Version */
		versioninfo->sw_minor_version = (uint8)PORT_SW_MINOR_VERSION;
		/* Copy Software Patch Version */
		versioninfo->sw_patch_version = (uint8)PORT_SW_PATCH_VERSION;
	}
	else
	{
	}
}
#endif

/************************************************************************************
* Service Name: Port_SetPinMode
* Service ID[hex]: 0x04
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): Pin - Port Pin ID number
*				   Mode - New Port Pin mode to be set on port pin
* Parameters (inout): None
* Parameters (out): versioninfo - Pointer to where to store the version information of this module 
* Return value: None
* Description: Function to set the port pin mode
************************************************************************************/
void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode)
{
	boolean error=FALSE;
	#if (DIO_DEV_ERROR_DETECT == STD_ON)
		/* Check if the Driver is initialized before using this function */
		if (PORT_NOT_INITIALIZED == Port_Status)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_UNINIT);
			error = TRUE;
		}
		else
		{
		}
		/* Check if the pin mode is changeable or not */
		if(PortConfig[Pin].pin_mode_changeable == STD_OFF)
		{
			/* Report to DET  */
			Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_MODE_UNCHANGEABLE);
			error = TRUE;
		}
		else
		{
		}
		/* Check if the used pin is within the valid range */
		if (PORT_CONFIGURED_PINS <= Pin)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_PARAM_PIN);
			error = TRUE;
		}
		else
		{
		}
		/* Check if the pin mode is invalid */
		if (PORT_MODES_NUMBER < mode)
		{
			Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_PARAM_INVALID_MODE);
			error = TRUE;

		}
		else
		{
		}
	#endif /* (DIO_DEV_ERROR_DETECT == STD_ON) */
	if (error==FALSE)
	{
	{
		boolean state;
		volatile uint32 * Port_Ptr = NULL_PTR;
		switch(PortConf[Pin].port_num){
			case PORTCFG_PORTA:
				Port_Ptr=(volatile uint32 *)GPIO_PORTA_BASE_ADDRESS;
				break;
			case PORTCFG_PORTB:
				Port_Ptr=(volatile uint32 *)GPIO_PORTB_BASE_ADDRESS;
				break;
			case PORTCFG_PORTC:
				Port_Ptr=(volatile uint32 *)GPIO_PORTC_BASE_ADDRESS;
				break;
			case PORTCFG_PORTD:
				Port_Ptr=(volatile uint32 *)GPIO_PORTD_BASE_ADDRESS;
				break;
			case PORTCFG_PORTE:
				Port_Ptr=(volatile uint32 *)GPIO_PORTE_BASE_ADDRESS;
				break;
			case PORTCFG_PORTF:
				Port_Ptr=(volatile uint32 *)GPIO_PORTF_BASE_ADDRESS;
				break;
			default:
                                break;
		}
		/* Choose the mode of the pin */
		*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PCTL_REG_OFFSET)&=~(0x0000000F<<(PortConf[Pin].pin_num)*4);
		*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PCTL_REG_OFFSET)|=((uint32)Mode<<(PortConf[Pin].pin_num)*4);
		/* Enable Alternative functions of pin or not */
		state=(Mode!=0);
		*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_AFSEL_REG_OFFSET)&=~(1<<PortConf[Pin].pin_num);
		*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_AFSEL_REG_OFFSET)|=(state<<PortConf[Pin].pin_num);
	}
	}
}

