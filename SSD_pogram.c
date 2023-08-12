/***************************************************************************************************************************************************************************************/
/************************************************* SWE     : SEVEN SEGMENT DRIVER    *************************************************************************************************************/
/************************************************* BY      : Youssef Ayman           *************************************************************************************************************/
/************************************************* Date    : 27Aug20                 *************************************************************************************************************/
/************************************************* Version : v1.0                    *************************************************************************************************************/
/***************************************************************************************************************************************************************************************/
# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_interface.h"
# include "SSD_private.h"
# include "SSD_interface.h"
# include "SSD_config.h"

/***********************************************************************************
/*  Prepare the Port pins connected with 7 segment pins to be Output  */

void SSD_VidInit(u8 Copy_u8SSDId)
{
	switch (Copy_u8SSDId)
	{                 /*Set Port pins for 7 segment as output*/
	    case SSD_ID0:
	    	DIO_VidSetPinDirection(SSD0_PORT , SSD0_SEG_A_PIN , Output);
	    	DIO_VidSetPinDirection(SSD0_PORT , SSD0_SEG_B_PIN , Output);
	    	DIO_VidSetPinDirection(SSD0_PORT , SSD0_SEG_C_PIN , Output);
	    	DIO_VidSetPinDirection(SSD0_PORT , SSD0_SEG_D_PIN , Output);
	    	DIO_VidSetPinDirection(SSD0_PORT , SSD0_SEG_E_PIN , Output);
	    	DIO_VidSetPinDirection(SSD0_PORT , SSD0_SEG_F_PIN , Output);
	    	DIO_VidSetPinDirection(SSD0_PORT , SSD0_SEG_G_PIN , Output);
	    	break;

	    case SSD_ID1:
	    	DIO_VidSetPinDirection(SSD1_PORT , SSD1_SEG_A_PIN , Output);
	    	DIO_VidSetPinDirection(SSD1_PORT , SSD1_SEG_B_PIN , Output);
	    	DIO_VidSetPinDirection(SSD1_PORT , SSD1_SEG_C_PIN , Output);
	    	DIO_VidSetPinDirection(SSD1_PORT , SSD1_SEG_D_PIN , Output);
	    	DIO_VidSetPinDirection(SSD1_PORT , SSD1_SEG_E_PIN , Output);
	    	DIO_VidSetPinDirection(SSD1_PORT , SSD1_SEG_F_PIN , Output);
	    	DIO_VidSetPinDirection(SSD1_PORT , SSD1_SEG_G_PIN , Output);
	    	break;

	    case SSD_ID2:
	    	DIO_VidSetPinDirection(SSD2_PORT , SSD2_SEG_A_PIN , Output);
	        DIO_VidSetPinDirection(SSD2_PORT , SSD2_SEG_B_PIN , Output);
	        DIO_VidSetPinDirection(SSD2_PORT , SSD2_SEG_C_PIN , Output);
	        DIO_VidSetPinDirection(SSD2_PORT , SSD2_SEG_D_PIN , Output);
	        DIO_VidSetPinDirection(SSD2_PORT , SSD2_SEG_E_PIN , Output);
	        DIO_VidSetPinDirection(SSD2_PORT , SSD2_SEG_F_PIN , Output);
	        DIO_VidSetPinDirection(SSD2_PORT , SSD2_SEG_G_PIN , Output);
	    	break;

	    case SSD_ID3:
	    	DIO_VidSetPinDirection(SSD3_PORT , SSD3_SEG_A_PIN , Output);
	        DIO_VidSetPinDirection(SSD3_PORT , SSD3_SEG_B_PIN , Output);
	        DIO_VidSetPinDirection(SSD3_PORT , SSD3_SEG_C_PIN , Output);
	        DIO_VidSetPinDirection(SSD3_PORT , SSD3_SEG_D_PIN , Output);
	        DIO_VidSetPinDirection(SSD3_PORT , SSD3_SEG_E_PIN , Output);
	        DIO_VidSetPinDirection(SSD3_PORT , SSD3_SEG_F_PIN , Output);
	        DIO_VidSetPinDirection(SSD3_PORT , SSD3_SEG_G_PIN , Output);
	    	break;

	    case SSD_ID4:
	    	DIO_VidSetPinDirection(SSD4_PORT , SSD4_SEG_A_PIN , Output);
	        DIO_VidSetPinDirection(SSD4_PORT , SSD4_SEG_B_PIN , Output);
	        DIO_VidSetPinDirection(SSD4_PORT , SSD4_SEG_C_PIN , Output);
	        DIO_VidSetPinDirection(SSD4_PORT , SSD4_SEG_D_PIN , Output);
	        DIO_VidSetPinDirection(SSD4_PORT , SSD4_SEG_E_PIN , Output);
	        DIO_VidSetPinDirection(SSD4_PORT , SSD4_SEG_F_PIN , Output);
	        DIO_VidSetPinDirection(SSD4_PORT , SSD4_SEG_G_PIN , Output);
	    		break;

	}

}

/***********************************************************************************
/* Display a Number from 0 to 9 on a 7 segment  */

void SSD_VidDisplayNumber(u8 Copy_u8SSDId , u8 Copy_u8Number)
{
	switch (Copy_u8SSDId)
	{
	    case SSD_ID0:
	    	DIO_VidSetPortValue(SSD0_PORT,SSD_CommCathArr[Copy_u8Number]);
	    	break;

	    case SSD_ID1:
	    	DIO_VidSetPortValue(SSD1_PORT,SSD_CommCathArr[Copy_u8Number]);
	    	break;

	    case SSD_ID2:
	    	DIO_VidSetPortValue(SSD2_PORT,SSD_CommCathArr[Copy_u8Number]);
	    	break;

	    case SSD_ID3:
	    	DIO_VidSetPortValue(SSD3_PORT,SSD_CommCathArr[Copy_u8Number]);
	    	break;

	    case SSD_ID4:
	    	DIO_VidSetPortValue(SSD4_PORT,SSD_CommCathArr[Copy_u8Number]);
	    	break;

	}

}

/***********************************************************************************
/* Turn OFF any 7 segment  */


void SSD_VidTurnOff(u8 Copy_u8SSDId)
{
	switch (Copy_u8SSDId)
	{
	    case SSD_ID0:
	    	DIO_VidSetPortValue(SSD0_PORT,0x00);
	    	break;

	    case SSD_ID1:
	    	DIO_VidSetPortValue(SSD1_PORT,0x00);
	    	break;

	    case SSD_ID2:
	    	 DIO_VidSetPortValue(SSD2_PORT,0x00);
	    	 break;

	    case SSD_ID3:
	    	 DIO_VidSetPortValue(SSD3_PORT,0x00);
	    	 break;

	    case SSD_ID4:
	    	 DIO_VidSetPortValue(SSD4_PORT,0x00);
	    	 break;
	}
	
}
