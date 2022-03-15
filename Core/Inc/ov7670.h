/*
 * ov7670.h
 *
 *  Created on: Feb 15, 2022
 *      Author: rfv84
 */

#ifndef INC_OV7670_H_
#define INC_OV7670_H_

#include "stm32f4xx_hal.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* Control Register List */
#define OV7670_MIDH 0x1c /* Manufacturer ID Byte - High */
#define OV7670_MIDL 0x1D /* Manufacturer ID Byte - LOW */
#define OV7670_PID 0x0A /* Product ID Number MSB */
#define OV7670_VER 0x0B /* Product ID Number LSB */
#define OV7670_REG_NUM 122
#define DevAddress_write 0x42
#define DevAddress_read 0x43


void OV7670_Init(void);
void OV7670_RESET(void);
//void DCMI_DMA_init(void);

#endif /* INC_OV7670_H_ */
