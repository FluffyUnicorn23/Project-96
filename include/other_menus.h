#ifndef OTHER_MENUS_H
#define OTHER_MENUS_H

#include "spiAVR.h"
#include "screen_functions.h"

void write_main_menu(){
   command(0x2A); //x coordinates
   data(0);
   data(0);//start pixel
   data(0);
   data(129);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(0);
   data(0);
   data(129);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(224);
        SPI_SEND(225);
        SPI_SEND(225);;
    }
   ss_pin_set(1);
}

void write_win_menu(){
   command(0x2A); //x coordinates
   data(0);
   data(0);//start pixel
   data(0);
   data(129);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(0);
   data(0);
   data(129);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(165);
        SPI_SEND(255);
    }
   ss_pin_set(1);
}

void write_lose_menu(){
   command(0x2A); //x coordinates
   data(0);
   data(0);//start pixel
   data(0);
   data(129);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(0);
   data(0);
   data(129);
  
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
#endif