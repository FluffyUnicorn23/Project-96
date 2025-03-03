#ifndef SCREEN_FUNCTIONS_H
#define SCREEN_FUNCTIONS_H



#include "helper.h"
#include "timerISR.h"
#include "spiAVR.h"



void HardwareReset(){
PORTB = SetBit(PORTB, 0, 0);
_delay_ms(200);
PORTB = SetBit(PORTB, 0, 1);
_delay_ms(200);
}

void data_pin_set(bool bit){
  PORTB = SetBit(PORTB, 0, bit);
}

void ss_pin_set(bool bit){
  PORTB = SetBit(PORTB, 2, bit); //set to low to draw pixel
}

void command(int command_number){
data_pin_set(0);
ss_pin_set(0);
SPI_SEND(command_number);
ss_pin_set(1);
}

void data(int data){
data_pin_set(1);
ss_pin_set(0);
SPI_SEND(data);
ss_pin_set(1);
}

void ST7735_init(){
HardwareReset();
command(0x01);
_delay_ms(150);
command(0x11);
_delay_ms(200);
command(0x3A);
data(0x06);
_delay_ms(10);
command(0x29);
_delay_ms(200);
}


#endif