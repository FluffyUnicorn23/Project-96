#ifndef BATTLE_SPRITES_H
#define BATTLE_SPRITES_H

#include "spiAVR.h"
#include "screen_functions.h"

void write_shield_1(){
   command(0x2A); //x coordinates
   data(0);
   data(57);//start pixel
   data(0);
   data(74);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(47);
   data(0);
   data(59);
  
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

void write_shield_2(){
   command(0x2A); //x coordinates
   data(0);
   data(58);//start pixel
   data(0);
   data(73);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(60);
   data(0);
   data(60);
  
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

void write_shield_3(){
   command(0x2A); //x coordinates
   data(0);
   data(59);//start pixel
   data(0);
   data(72);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(61);
   data(0);
   data(61);
  
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

void write_shield_4(){
   command(0x2A); //x coordinates
   data(0);
   data(60);//start pixel
   data(0);
   data(71);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(62);
   data(0);
   data(62);
  
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

void write_shield_5(){
   command(0x2A); //x coordinates
   data(0);
   data(61);//start pixel
   data(0);
   data(69);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(63);
   data(0);
   data(63);
  
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

void write_shield_6(){
   command(0x2A); //x coordinates
   data(0);
   data(62);//start pixel
   data(0);
   data(68);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(64);
   data(0);
   data(64);
  
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

void write_shield(){
    write_shield_1();
    write_shield_2();
    write_shield_3();
    write_shield_4();
    write_shield_5();
    write_shield_6();
}

void write_fist_1(){
   command(0x2A); //x coordinates
   data(0);
   data(57);//start pixel
   data(0);
   data(74);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(47);
   data(0);
   data(59);
  
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

void write_fist_2(){
   command(0x2A); //x coordinates
   data(0);
   data(58);//start pixel
   data(0);
   data(73);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(48);
   data(0);
   data(58);
  
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

void write_fist_3(){
   command(0x2A); //x coordinates
   data(0);
   data(61);//start pixel
   data(0);
   data(61);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(53);
   data(0);
   data(58);
  
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

void write_fist_4(){
   command(0x2A); //x coordinates
   data(0);
   data(65);//start pixel
   data(0);
   data(65);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(53);
   data(0);
   data(58);
  
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

void write_fist_5(){
   command(0x2A); //x coordinates
   data(0);
   data(69);//start pixel
   data(0);
   data(69);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(53);
   data(0);
   data(58);
  
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

void write_fist_6(){
   command(0x2A); //x coordinates
   data(0);
   data(70);//start pixel
   data(0);
   data(74);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(60);
   data(0);
   data(62);
  
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

void write_fist_7(){
   command(0x2A); //x coordinates
   data(0);
   data(71);//start pixel
   data(0);
   data(73);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(60);
   data(0);
   data(61);
  
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

void write_fist(){
    write_fist_1();
    write_fist_2();
    write_fist_3();
    write_fist_4();
    write_fist_5();
    write_fist_6();
    write_fist_7();
}

void write_heart_1(){
   command(0x2A); //x coordinates
   data(0);
   data(58);//start pixel
   data(0);
   data(63);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(47);
   data(0);
   data(47);
  
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

void write_heart_2(){
   command(0x2A); //x coordinates
   data(0);
   data(69);//start pixel
   data(0);
   data(74);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(47);
   data(0);
   data(47);
  
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

void write_heart_3(){
   command(0x2A); //x coordinates
   data(0);
   data(57);//start pixel
   data(0);
   data(64);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(48);
   data(0);
   data(48);
  
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

void write_heart_4(){
   command(0x2A); //x coordinates
   data(0);
   data(68);//start pixel
   data(0);
   data(75);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(48);
   data(0);
   data(48);
  
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


void write_heart_5(){
   command(0x2A); //x coordinates
   data(0);
   data(56);//start pixel
   data(0);
   data(65);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(49);
   data(0);
   data(53);
  
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

void write_heart_6(){
   command(0x2A); //x coordinates
   data(0);
   data(66);//start pixel
   data(0);
   data(66);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(50);
   data(0);
   data(53);
  
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

void write_heart_7(){
   command(0x2A); //x coordinates
   data(0);
   data(67);//start pixel
   data(0);
   data(76);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(49);
   data(0);
   data(53);
  
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

void write_heart_8(){
   command(0x2A); //x coordinates
   data(0);
   data(57);//start pixel
   data(0);
   data(75);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(54);
   data(0);
   data(54);
  
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

void write_heart_9(){
   command(0x2A); //x coordinates
   data(0);
   data(58);//start pixel
   data(0);
   data(74);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(55);
   data(0);
   data(55);
  
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

void write_heart_10(){
   command(0x2A); //x coordinates
   data(0);
   data(59);//start pixel
   data(0);
   data(73);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(56);
   data(0);
   data(56);
  
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

void write_heart_11(){
   command(0x2A); //x coordinates
   data(0);
   data(60);//start pixel
   data(0);
   data(72);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(57);
   data(0);
   data(57);
  
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

void write_heart_12(){
   command(0x2A); //x coordinates
   data(0);
   data(61);//start pixel
   data(0);
   data(71);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(58);
   data(0);
   data(58);
  
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

void write_heart_13(){
   command(0x2A); //x coordinates
   data(0);
   data(62);//start pixel
   data(0);
   data(70);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(59);
   data(0);
   data(59);
  
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

void write_heart_14(){
   command(0x2A); //x coordinates
   data(0);
   data(63);//start pixel
   data(0);
   data(69);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(60);
   data(0);
   data(60);
  
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

void write_heart_15(){
   command(0x2A); //x coordinates
   data(0);
   data(64);//start pixel
   data(0);
   data(68);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(61);
   data(0);
   data(61);
  
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

void write_heart_16(){
   command(0x2A); //x coordinates
   data(0);
   data(65);//start pixel
   data(0);
   data(67);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(62);
   data(0);
   data(62);
  
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

void write_heart_17(){
   command(0x2A); //x coordinates
   data(0);
   data(66);//start pixel
   data(0);
   data(66);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(63);
   data(0);
   data(63);
  
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

void write_heart(){
    write_heart_1();
    write_heart_2();
    write_heart_3();
    write_heart_4();
    write_heart_5();
    write_heart_6();
    write_heart_7();
    write_heart_8();
    write_heart_9();
    write_heart_10();
    write_heart_11();
    write_heart_12();
    write_heart_13();
    write_heart_14();
    write_heart_15();
    write_heart_16();
    write_heart_17();

}

void erase_sprite(){
   command(0x2A); //x coordinates
   data(0);
   data(55);//start pixel
   data(0);
   data(77);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(45);
   data(0);
   data(65);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(224);
        SPI_SEND(225);
        SPI_SEND(225);
    }
   ss_pin_set(1);
}
#endif