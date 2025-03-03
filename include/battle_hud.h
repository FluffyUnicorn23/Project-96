#ifndef BATTLE_HUD_H
#define BATTLE_HUD_H

#include "helper.h"
#include "spiAVR.h"
#include "screen_functions.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

void write_border1(){
   command(0x2A); //x coordinates
   data(0);
   data(0);//start pixel
   data(0);
   data(129);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(88);
   data(0);
   data(128);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(0);
        SPI_SEND(0);
    }
   ss_pin_set(1);
}


void write_white_rect1(){
   command(0x2A); //x coordinates
   data(0);
   data(3);//start pixel
   data(0);
   data(48);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(93);
   data(0);
   data(126);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(255);
        SPI_SEND(255);
        SPI_SEND(255);
    }
   ss_pin_set(1);
}


void write_white_rect2(){
   command(0x2A); //x coordinates
   data(0);
   data(51);//start pixel
   data(0);
   data(127);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(93);
   data(0);
   data(126);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(255);
        SPI_SEND(255);
        SPI_SEND(255);
    }
   ss_pin_set(1);
}


void write_white_rect4(int val){
   command(0x2A); //x coordinates
   data(0);
   data(4);//start pixel
   data(0);
   data(8);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(96 + val);
   data(0);
   data(104 + val);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(255);
        SPI_SEND(255);
        SPI_SEND(255);
    }
   ss_pin_set(1);
}

void write_battle_hud(){
   write_border1(); //bottom menu for hud
   write_white_rect1();
   write_white_rect2();
}


#endif