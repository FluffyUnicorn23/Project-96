#ifndef HEAL_STRING_H
#define HEAL_STRING_H

#include "spiAVR.h"
#include "screen_functions.h"

void write_H_1(){
    command(0x2A); //x coordinates
   data(0);
   data(10);//start pixel
   data(0);
   data(10);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(106);
   data(0);
   data(114);
  
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

void write_H_2(){
    command(0x2A); //x coordinates
   data(0);
   data(14);//start pixel
   data(0);
   data(14);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(106);
   data(0);
   data(114);
  
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

void write_H_3(){
    command(0x2A); //x coordinates
   data(0);
   data(10);//start pixel
   data(0);
   data(14);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(110);
   data(0);
   data(110);
  
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

void write_H(){
    write_H_1();
    write_H_2();
    write_H_3();
}

void write_e_1(){
   command(0x2A); //x coordinates
   data(0);
   data(16);//start pixel
   data(0);
   data(16);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(110);
   data(0);
   data(113);
  
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

void write_e_2(){
   command(0x2A); //x coordinates
   data(0);
   data(17);//start pixel
   data(0);
   data(19);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(114);
   data(0);
   data(114);
  
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

void write_e_3(){
   command(0x2A); //x coordinates
   data(0);
   data(20);//start pixel
   data(0);
   data(20);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(110);
   data(0);
   data(111);
  
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

void write_e_4(){
   command(0x2A); //x coordinates
   data(0);
   data(17);//start pixel
   data(0);
   data(19);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(109);
   data(0);
   data(111);
  
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

void write_e_5(){
   command(0x2A); //x coordinates
   data(0);
   data(17);//start pixel
   data(0);
   data(19);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(110);
   data(0);
   data(110);
  
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

void write_e(){
    write_e_1();
    write_e_2();
    write_e_3();
    write_e_4();
    write_e_5();
}

void write_a3_1(){
   command(0x2A); //x coordinates
   data(0);
   data(22);//start pixel
   data(0);
   data(22);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(112);
   data(0);
   data(113);
  
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

void write_a3_2(){
   command(0x2A); //x coordinates
   data(0);
   data(23);//start pixel
   data(0);
   data(25);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(111);
   data(0);
   data(114);
  
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

void write_a3_3(){
   command(0x2A); //x coordinates
   data(0);
   data(23);//start pixel
   data(0);
   data(25);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(112);
   data(0);
   data(113);
  
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


void write_a3_4(){
   command(0x2A); //x coordinates
   data(0);
   data(23);//start pixel
   data(0);
   data(25);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(109);
   data(0);
   data(109);
  
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

void write_a3_5(){
   command(0x2A); //x coordinates
   data(0);
   data(26);//start pixel
   data(0);
   data(26);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(110);
   data(0);
   data(114);
  
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

void write_a3(){
    write_a3_1();
    write_a3_2();
    write_a3_3();
    write_a3_4();
    write_a3_5();
}

void write_l(){
   command(0x2A); //x coordinates
   data(0);
   data(28);//start pixel
   data(0);
   data(28);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(106);
   data(0);
   data(114);
  
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

void write_Heal(){
    write_H();
    write_e();
    write_a3();
    write_l();
}

#endif