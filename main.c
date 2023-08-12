/*
 * main.c
 *
 *  Created on: Sep 9, 2022
 *      Author: hp
 */
# include "STD_TYPES.h"
# include "DIO_interface.h"
# include "SSD_interface.h"
# include "LCD_interface.h"
# include "LCD_config.h"
# include <util/delay.h>


void DISPLAY(u8 u8_CopyItteration);

u8 count=0,f=0;

int main ()
{
//**********************************************************
	u8 Goal_ArrUp[]={ 0b11111,     /*1*/
				      0b11111,     /*2*/
				      0b00001,     /*3*/
				      0b00001,     /*4*/
				      0b00001,     /*5*/
				      0b00001,     /*6*/
				      0b00001,     /*7*/
				      0b00001 };   /*8*/


	u8 Goal_ArrDown[]={ 0b00001,   /*1*/
						0b00001,   /*2*/
						0b00001,   /*3*/
						0b00001,   /*4*/
						0b00001,   /*5*/
						0b00001,   /*6*/
						0b11111,   /*7*/
						0b11111 }; /*8*/


	u8 Hamada_ArrRun1[]={ 0b00100,  /*1*/
					      0b01010,  /*2*/
					      0b01010,  /*3*/
					      0b00101,  /*4*/
					      0b01110,  /*5*/
					      0b10100,  /*6*/
					      0b01010,  /*7*/
					      0b00001 };/*8*/


	u8 Hamada_ArrRun2[]={ 0b00100,  /*1*/
					      0b01010,  /*2*/
				          0b01010,  /*3*/
				          0b00101,  /*4*/
				          0b11111,  /*5*/
				          0b10100,  /*6*/
				          0b01010,  /*7*/
					      0b10010 };/*8*/


	 u8 Ball_ArrRun[]={ 0b00000,    /*1*/
	 				    0b00000,    /*2*/
	 				    0b00000,    /*3*/
	 			        0b00000,    /*4*/
	 			        0b00000,    /*5*/
	 			        0b01000,    /*6*/
	 			        0b10100,    /*7*/
	 			        0b01000 };  /*8*/


	 u8 Hamada_ArrShoot[]={ 0b01000,  /*1*/
	  				        0b10100,  /*2*/
	  				        0b10100,  /*3*/
	  			            0b01010,  /*4*/
	  			            0b11101,  /*5*/
	  			            0b01010,  /*6*/
	  			            0b01100,  /*7*/
	  			            0b10000 };/*8*/


	 u8 Ball_ArrShoot1[]={ 0b00000,   /*1*/
	  				       0b00000,   /*2*/
	  				       0b00000,   /*3*/
	  			           0b00010,   /*4*/
	  			           0b00101,   /*5*/
	  			           0b00010,   /*6*/
	  			           0b00000,   /*7*/
						   0b00000,}; /*8*/


	 u8 Ball_ArrShoot2[]={ 0b00000,  /*1*/
	  				       0b00010,  /*2*/
	  				       0b00101,  /*3*/
	  			           0b00010,  /*4*/
	  			           0b00000,  /*5*/
	  			           0b00000,  /*6*/
	  			           0b00000,  /*7*/
						   0b00000,};/*8*/


	 //u8 Ball_ArrNotGoal1[]={ 0b00010,  /*1*/
		//	                   0b00101,  /*2*/   // No Keeper fel 3arda
	   		//		           0b00010,  /*3*/
	   			//             0b00000,  /*4*/
	   			  //           0b00000,  /*5*/
	   			    //         0b00000,  /*6*/
	   			      //       0b00000,  /*7*/
	  				    //     0b00000,};/*8*/


	// u8 Ball_ArrNotGoal2[]={ 0b00010,  /*1*/      // With keeper above head
		//	                   0b00101,  /*2*/
	   		//		           0b00010,  /*3*/
	   			//             0b10101,  /*4*/
	   			  //           0b01101,  /*5*/
	   			    //         0b00110,  /*6*/
	   			      //       0b11010,  /*7*/
	  				    //     0b00101,};/*8*/


	 u8 Ball_ArrGoal[]={ 0b00001,      /*1*/
	 	  				 0b00001,      /*2*/
	 	  				 0b00001,      /*3*/
	 	  			     0b00101,      /*4*/
	 	  			     0b01011,      /*5*/
	 	  			     0b00101,      /*6*/
	 	  			     0b11111,      /*7*/
	 	 				 0b11111,};    /*8*/


	u8 GoalKeeper_Arr1[]={ 0b00100,   /*1*/
					       0b01010,   /*2*/
					       0b01010,   /*3*/
					       0b10100,   /*4*/
					       0b01110,   /*5*/
					       0b00101,   /*6*/
					       0b01010,   /*7*/
					       0b11011 }; /*8*/


	u8 GoalKeeper_Arr2[]={ 0b00010,   /*1*/
					       0b10101,   /*2*/
					       0b01101,   /*3*/
					       0b10110,   /*4*/
					       0b01110,   /*5*/
					       0b00010,   /*6*/
					       0b00101,   /*7*/
					       0b01001 }; /*8*/


	u8 GoalKeeper_Arr3[]={ 0b00100,   /*1*/
					       0b01010,   /*2*/
					       0b11011,   /*3*/
					       0b10101,   /*4*/
					       0b01110,   /*5*/
					       0b00100,   /*6*/
					       0b01010,   /*7*/
						   0b11011 }; /*8*/

	u8 Stand_Arr[]={ 0b00100,   /*1*/
					 0b01010,   /*2*/
					 0b01010,   /*3*/
					 0b00100,   /*4*/
					 0b11111,   /*5*/
					 0b00100,   /*6*/
					 0b01010,   /*7*/
					 0b01010 }; /*8*/

	u8 Celebrate_Arr[]={ 0b00100,   /*1*/
					     0b01010,   /*2*/
					     0b11011,   /*3*/
					     0b10101,   /*4*/
					     0b11111,   /*5*/
					     0b00100,   /*6*/
					     0b11011,   /*7*/
						 0b00000 }; /*8*/

	u8 Sad_Arr1[]={0b00100,   /*1*/
			       0b01010,   /*2*/
			       0b01010,   /*3*/
			       0b00100,   /*4*/
			       0b11111,   /*5*/
			       0b10101,   /*6*/
			       0b01010,   /*7*/
			       0b01000 }; /*8*/


	u8 Sad_Arr2[]={0b00100,   /*1*/
			       0b01010,   /*2*/
			       0b01010,   /*3*/
			       0b00100,   /*4*/
			       0b11111,   /*5*/
			       0b10101,   /*6*/
			       0b01010,   /*7*/
			       0b00010 }; /*8*/


//*********************************************************************
	u32 time=200;
	u8 x,y,i=0,j,k,flag=0,c;

	DIO_VidSetPortDirection(Port_D,0b11100111);
	DIO_VidSetPortDirection(Port_C,0b11111111);

	SSD_VidInit(SSD_ID0);
	SSD_VidInit(SSD_ID1);

	LCD_VidInit();

	LCD_VidSendString("      START");
	LCD_VidGotoXY(1,5);
	LCD_VidSendString("*******");

	_delay_ms(500);
	LCD_VidDisplayClear();

	while(1)
	{
    	if (flag%2==0)

    	{
    		x=0;
    	}
    	else
    	{
    		x=1;
    	}
//********************************************************************
		if (count==0 && f==1)
		{
		    LCD_VidDisplayClear();
		    LCD_VidSendString("    Time Out");
		    LCD_VidGotoXY(1,4);
		    LCD_VidSendString("--------");
		    _delay_ms(1000);
		    f=0;
		    SSD_VidDisplayNumber(SSD_ID0,0);
		    SSD_VidDisplayNumber(SSD_ID1,0);
		}
		else if (count==0 && f==0)
		{
		    SSD_VidDisplayNumber(SSD_ID0,0);
		    SSD_VidDisplayNumber(SSD_ID1,0);

		}
//********************************************************************
	    for (y=0;y<7;y++)
	    {
	    	DIO_VidSetPinValue(Port_D,Pin1,PinHigh);

	    	LCD_VidSendSpecialChar(Goal_ArrUp    ,0  ,0,15);
	    	LCD_VidSendSpecialChar(Goal_ArrDown  ,1  ,1,15);

	    	if (x==0)
	    	{
				LCD_VidSendSpecialChar(GoalKeeper_Arr1   ,2    ,0 ,  14);
	    	}
	    	else
	    	{
				LCD_VidSendSpecialChar(GoalKeeper_Arr1   ,2    ,1 ,  14);
	    	}

	    	/********************************************************************/

	    	if (i%2==0)

	    	{
	    		LCD_VidSendSpecialChar(Hamada_ArrRun1 ,3  ,x,y);
	    	}
	    	else
	    	{
	    		LCD_VidSendSpecialChar(Hamada_ArrRun2 ,4  ,x,y);
	    	}

	    	i++;

	    	LCD_VidGotoXY(x,y+1);
	    	LCD_VidSendSpecialChar(Ball_ArrRun ,5    ,x,y+1);
	    	_delay_ms(time);

	    	LCD_VidGotoXY(x,y);
	    	LCD_VidSendData(' ');
	    	LCD_VidGotoXY(x,y+1);
	    	LCD_VidSendData(' ');

	    }
//********************************************************************

		LCD_VidSendSpecialChar(Hamada_ArrShoot   ,6    ,x  ,  7 );

		for (j=0;j<3;j++)
		{
			LCD_VidSendSpecialChar(GoalKeeper_Arr1   ,2    ,x ,  14);
			LCD_VidSendSpecialChar(Ball_ArrShoot1 ,5     ,x ,8+j);

			DIO_VidSetPinValue(Port_D,Pin1,PinHigh);
		    _delay_ms(5);
			DIO_VidSetPinValue(Port_D,Pin1,PinLow);
		    _delay_ms(5);
		}

		for (j=0;j<3;j++)
		{
			LCD_VidSendSpecialChar(GoalKeeper_Arr1   ,2    ,x ,  14);
			LCD_VidSendSpecialChar(Ball_ArrShoot2 ,5     ,x ,11+j);

			DIO_VidSetPinValue(Port_D,Pin1,PinHigh);
		    _delay_ms(5);
			DIO_VidSetPinValue(Port_D,Pin1,PinLow);
		    _delay_ms(5);
		}
//********************************************************************
		if (x==0)
		{
		   for (j=0;j<1;j++)
		   {
		   	  LCD_VidSendSpecialChar(GoalKeeper_Arr3 ,7     ,x ,14+j);
		      LCD_VidSendSpecialChar(Goal_ArrUp      ,0     ,0 ,15);
		      LCD_VidSendSpecialChar(Goal_ArrDown    ,1     ,1 ,15);
		   }
		   _delay_ms(500);
		   LCD_VidDisplayClear();

		   DIO_VidSetPinValue(Port_D,Pin0,PinHigh);

		   LCD_VidSendString("     Missed");
		   LCD_VidGotoXY(1,4);
		   LCD_VidSendString("---------");

		   for (c=0;c<3;c++)
		   {
			   LCD_VidSendSpecialChar(Sad_Arr1 ,2     ,0 ,12);
			   _delay_ms(250);
			   LCD_VidSendSpecialChar(Sad_Arr2 ,2     ,0 ,12);
			   _delay_ms(250);

		   }


		   _delay_ms(500);
		   LCD_VidDisplayClear();
		   _delay_ms(50);

 		   DIO_VidSetPinValue(Port_D,Pin0,PinLow);

		   x=1;
		}
		/********************************************************************/
		else
		{
			for (j=0;j<1;j++)
			{
				LCD_VidSendSpecialChar(GoalKeeper_Arr2 ,2     ,x ,14+j);
				LCD_VidSendSpecialChar(Goal_ArrUp    ,0  ,0 ,15);
				LCD_VidSendSpecialChar(Ball_ArrGoal  ,1  ,x ,15);
			}
		    _delay_ms(500);
			LCD_VidDisplayClear();

			DIO_VidSetPinValue(Port_D,Pin2,PinHigh);

			LCD_VidSendString("   Gooaall!");
			LCD_VidGotoXY(1,2);
		    LCD_VidSendString("------------");

			for (c=0;c<3;c++)
			{
			   LCD_VidSendSpecialChar(Stand_Arr ,2     ,0 ,12);
			   _delay_ms(250);
			   LCD_VidSendSpecialChar(Celebrate_Arr ,2     ,0 ,12);
			   _delay_ms(250);

			}
			_delay_ms(500);

			count++;
			SSD_VidTurnOff(SSD_ID0);
			SSD_VidTurnOff(SSD_ID1);


			DISPLAY(count);      /*function call*/

			_delay_ms(500);
			LCD_VidDisplayClear();
			_delay_ms(50);

		    DIO_VidSetPinValue(Port_D,Pin2,PinLow);

		    x=0;
		}

		flag++;

		LCD_VidDisplayClear();
	}
//********************************************************************
}//End main


/* function implementation*/

void DISPLAY(u8 u8_CopyItteration)
{
	u8 first,second,j,flag=0;

   if (u8_CopyItteration<99)
   {
		if (u8_CopyItteration<10)
		{
			SSD_VidDisplayNumber(SSD_ID0,0);
			SSD_VidDisplayNumber(SSD_ID1,u8_CopyItteration);
		}
		else
		{
			second=u8_CopyItteration%10;
			first =(u8_CopyItteration-second)/10;

			SSD_VidDisplayNumber(SSD_ID0,first);
			SSD_VidDisplayNumber(SSD_ID1,second);
		}
   }
        /********************************************************************/
   else
   {
		second=u8_CopyItteration%10;
		first =(u8_CopyItteration-second)/10;

		SSD_VidDisplayNumber(SSD_ID0,first);
		SSD_VidDisplayNumber(SSD_ID1,second);
		_delay_ms(1000);

	    SSD_VidTurnOff(SSD_ID0);
	    SSD_VidTurnOff(SSD_ID1);

     	f=1;

	    count=0;
   }

}


