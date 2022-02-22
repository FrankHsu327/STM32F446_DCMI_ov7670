/*
 * ov7670.h
 *
 *  Created on: Feb 15, 2022
 *      Author: rfv84
 */

#ifndef INC_OV7670_H_
#define INC_OV7670_H_

#include "stm32f4xx_hal.h"

/* Control Register List */
#define OV7670_MIDH 0x1c /* Manufacturer ID Byte - High */
#define OV7670_MIDL 0x1D /* Manufacturer ID Byte - LOW */
#define OV7670_PID 0x0A /* Product ID Number MSB */
#define OV7670_VER 0x0B /* Product ID Number LSB */
#define OV7670_REG_NUM 121

const uint8_t OV7670_reg[OV7670_REG_NUM][2] =
{
	/*
	 * Reset register
	 *
	 * */
    { 0x12, 0x80 }, /* COM7:
                           Bit[7]: SCCB register reset
                               0: No change
                               1: Reset all registers to default values
                           Bit[6]: Reserved
                           Bit[5]: Output format - CIF selection
                           Bit[4]: Output format - QVGA selection
                           Bit[3]: Output format - QCIF selection
                           Bit[2]: Output format - RGB selection(see below)
                           Bit[1]: Color bar
                               0: Disable
                               1: Enable
                           Bit[0]: Output format - Raw RGB(see below)

                           COM7[2] COM7[0]
                     YUV        0       0
                     RGB        1       0
               Bayer RAW        0       1
     Processed Bayer RAW        1       1 */

	/*
	 * Image format
	 *
	 * */
	{ 0x12, 0x8}, /* 0x14 = QVGA size, RGB mode; 0x8 = QCIF, YUV, 0xc = QCIF (RGB) */
	{ 0x40, 0xd0},		/* COM15:
	                           Bit[7:6]: Data formatRGB565*/
	{ 0xb0, 0x84},		//Color mode

	{ 0x11, 0x01 }, /* CLKRC: Internal clock
	                            Bit[7]: Reserved
	                            Bit[6]: Use external clock directly
	                            Bit[5:0]: Internal clock pre-scaler */

};

#endif /* INC_OV7670_H_ */
