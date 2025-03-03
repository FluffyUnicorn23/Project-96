#ifndef ARROW_H
#define ARROW_H


#include "spiAVR.h"
#include "screen_functions.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

void write_arrow_line1(short val){
   command(0x2A); //x coordinates
   data(0);
   data(4);//start pixel
   data(0);
   data(4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(96 + val);
   data(0);
   data(104 + val);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(0);
        SPI_SEND(255);
    }
   ss_pin_set(1);
}

void write_arrow_line2(short val){
   command(0x2A); //x coordinates
   data(0);
   data(5);//start pixel
   data(0);
   data(5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(97 + val);
   data(0);
   data(103 + val);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(0);
        SPI_SEND(255);
    }
   ss_pin_set(1);
}

void write_arrow_line3(short val){
   command(0x2A); //x coordinates
   data(0);
   data(6);//start pixel
   data(0);
   data(6);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(98 + val);
   data(0);
   data(102 + val);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(0);
        SPI_SEND(255);
    }
   ss_pin_set(1);
}

void write_arrow_line4(short val){
   command(0x2A); //x coordinates
   data(0);
   data(7);//start pixel
   data(0);
   data(7);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(99 + val);
   data(0);
   data(101 + val);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(0);
        SPI_SEND(255);
    }
   ss_pin_set(1);
}

void write_arrow_line5(short val){
   command(0x2A); //x coordinates
   data(0);
   data(8);//start pixel
   data(0);
   data(8);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100 + val);
   data(0);
   data(100 + val);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(0);
        SPI_SEND(255);
    }
   ss_pin_set(1);
}

void write_arrow(short val){
    write_arrow_line1(val);
    write_arrow_line2(val);
    write_arrow_line3(val);
    write_arrow_line4(val);
    write_arrow_line5(val);
}

void write_blue_arrow_1(short player){
   command(0x2A); //x coordinates
   data(0);
   data(52);//start pixel
   data(0);
   data(52);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(98 + (player * 10));
   data(0);
   data(102 + (player * 10));
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(255);
        SPI_SEND(0);
        SPI_SEND(0);
    }
   ss_pin_set(1);

}

void write_blue_arrow_2(short player){
   command(0x2A); //x coordinates
   data(0);
   data(53);//start pixel
   data(0);
   data(53);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(99 + (player * 10));
   data(0);
   data(101 + (player * 10));
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(255);
        SPI_SEND(0);
        SPI_SEND(0);
    }
   ss_pin_set(1);

}

void write_blue_arrow_3(short player){
   command(0x2A); //x coordinates
   data(0);
   data(53);//start pixel
   data(0);
   data(53);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100 + (player * 10));
   data(0);
   data(100 + (player * 10));
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(255);
        SPI_SEND(0);
        SPI_SEND(0);
    }
   ss_pin_set(1);
}

void erase_blue_arrow(short player){
   command(0x2A); //x coordinates
   data(0);
   data(52);//start pixel
   data(0);
   data(54);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(98 + (player * 10));
   data(0);
   data(102 + (player * 10));
  
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

void write_blue_arrow(short player){
   write_blue_arrow_1(player);
   write_blue_arrow_2(player);
   write_blue_arrow_3(player);
}
#endif