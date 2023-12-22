/*
 * SEVEN_SEGMENT_interface.h
 *
 * Created: 8/27/2023 4:08:51 PM
 *  Author: Ahmed saleh
 */

#ifndef SEVEN_SEGMENT_INTERFACE_H_
#define SEVEN_SEGMENT_INTERFACE_H_

void SSD_Vid_Init();
void SEVEN_SEGMENT_Write_Val(u8 number);
void SSD_DIS();
void SSD_EN();
void SSD_TOGGLE();

#endif /* SEVEN_SEGMENT_INTERFACE_H_ */