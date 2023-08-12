/***************************************************************************************************************************************************************************************/
/************************************************* SWE     : SEVEN SEGMENT DRIVER    *************************************************************************************************************/
/************************************************* BY      : Youssef Ayman           *************************************************************************************************************/
/************************************************* Date    : 27Aug20                 *************************************************************************************************************/
/************************************************* Version : v1.0                    *************************************************************************************************************/
/***************************************************************************************************************************************************************************************/

# ifndef SSD_CONFIG_H
# define SSD_CONFIG_H


# include "DIO_interface.h"

/*Please select one of the following
 * 01 - COM_CATH
 * 02 - COM_ANODE
 * */

//*****************************************************************************
			/* The Actually used Seven Segment Displays on KIT */

//For SSD0 :-

# define SSD0_TYPE           COM_CATH
# define SSD0_PORT           Port_A
# define SSD0_SEG_A_PIN      Pin0
# define SSD0_SEG_B_PIN      Pin1
# define SSD0_SEG_C_PIN      Pin2
# define SSD0_SEG_D_PIN      Pin3
# define SSD0_SEG_E_PIN      Pin4
# define SSD0_SEG_F_PIN      Pin5
# define SSD0_SEG_G_PIN      Pin6

//For SSD1 :-

# define SSD1_TYPE           COM_CATH
# define SSD1_PORT           Port_B
# define SSD1_SEG_A_PIN      Pin0
# define SSD1_SEG_B_PIN      Pin1
# define SSD1_SEG_C_PIN      Pin2
# define SSD1_SEG_D_PIN      Pin3
# define SSD1_SEG_E_PIN      Pin4
# define SSD1_SEG_F_PIN      Pin5
# define SSD1_SEG_G_PIN      Pin6

//*****************************************************************************
			/* Useless,Because I have only 2 Seven Segment Displays on KIT */

//For SSD2 :-

# define SSD2_TYPE           COM_CATH
# define SSD2_PORT           Port_C
# define SSD2_SEG_A_PIN      Pin0
# define SSD2_SEG_B_PIN      Pin1
# define SSD2_SEG_C_PIN      Pin2
# define SSD2_SEG_D_PIN      Pin3
# define SSD2_SEG_E_PIN      Pin4
# define SSD2_SEG_F_PIN      Pin5
# define SSD2_SEG_G_PIN      Pin6

//For SSD3 :-

# define SSD3_TYPE           COM_CATH
# define SSD3_PORT           Port_C
# define SSD3_SEG_A_PIN      Pin0
# define SSD3_SEG_B_PIN      Pin1
# define SSD3_SEG_C_PIN      Pin2
# define SSD3_SEG_D_PIN      Pin3
# define SSD3_SEG_E_PIN      Pin4
# define SSD3_SEG_F_PIN      Pin5
# define SSD3_SEG_G_PIN      Pin6

//For SSD4 :-

# define SSD4_TYPE           COM_CATH
# define SSD4_PORT           Port_C
# define SSD4_SEG_A_PIN      Pin0
# define SSD4_SEG_B_PIN      Pin1
# define SSD4_SEG_C_PIN      Pin2
# define SSD4_SEG_D_PIN      Pin3
# define SSD4_SEG_E_PIN      Pin4
# define SSD4_SEG_F_PIN      Pin5
# define SSD4_SEG_G_PIN      Pin6

//*****************************************************************************





#endif

