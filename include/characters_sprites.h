#ifndef CHARACTERS_SPRITES_H
#define CHARACTERS_SPRITES_H


#include "spiAVR.h"
#include "screen_functions.h"

void write_Paper_Shredder_1(){
   command(0x2A); //x coordinates
   data(0);
   data(10);//start pixel
   data(0);
   data(37);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(39);
   data(0);
   data(76);
  
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

void write_Paper_Shredder_2(){
   command(0x2A); //x coordinates
   data(0);
   data(16);//start pixel
   data(0);
   data(31);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(39);
   data(0);
   data(40);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(70);
        SPI_SEND(70);
        SPI_SEND(70);
    }
   ss_pin_set(1);
}

void write_Paper_Shredder_3(){
   command(0x2A); //x coordinates
   data(0);
   data(17);//start pixel
   data(0);
   data(30);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(53);
   data(0);
   data(60);
  
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

void write_Paper_Shredder_4(){
   command(0x2A); //x coordinates
   data(0);
   data(17);//start pixel
   data(0);
   data(31);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(32);
   data(0);
   data(38);
  
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

void write_Paper_Shredder_5(){
   command(0x2A); //x coordinates
   data(0);
   data(18);//start pixel
   data(0);
   data(18);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(34);
   data(0);
   data(34);
  
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

void write_Paper_Shredder_6(){
   command(0x2A); //x coordinates
   data(0);
   data(19);//start pixel
   data(0);
   data(19);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(35);
   data(0);
   data(35);
  
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

void write_Paper_Shredder_7(){
   command(0x2A); //x coordinates
   data(0);
   data(20);//start pixel
   data(0);
   data(20);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(36);
   data(0);
   data(36);
  
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

void write_Paper_Shredder_8(){
   command(0x2A); //x coordinates
   data(0);
   data(28);//start pixel
   data(0);
   data(28);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(36);
   data(0);
   data(36);
  
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

void write_Paper_Shredder_9(){
   command(0x2A); //x coordinates
   data(0);
   data(29);//start pixel
   data(0);
   data(29);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(35);
   data(0);
   data(35);
  
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

void write_Paper_Shredder_10(){
   command(0x2A); //x coordinates
   data(0);
   data(30);//start pixel
   data(0);
   data(30);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(34);
   data(0);
   data(34);
  
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

void write_Paper_Shredder(){
   write_Paper_Shredder_1();
   write_Paper_Shredder_2();
   write_Paper_Shredder_3();
   write_Paper_Shredder_4();
   write_Paper_Shredder_5();
   write_Paper_Shredder_6();
   write_Paper_Shredder_7();
   write_Paper_Shredder_8();
   write_Paper_Shredder_9();
   write_Paper_Shredder_10();
}

void write_player1_1(){
   command(0x2A); //x coordinates
   data(0);
   data(92);//start pixel
   data(0);
   data(106);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(15);
   data(0);
   data(18);
  
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

void write_player1_2(){
   command(0x2A); //x coordinates
   data(0);
   data(92);//start pixel
   data(0);
   data(106);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(15);
   data(0);
   data(18);
  
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

void write_player1_3(){
   command(0x2A); //x coordinates
   data(0);
   data(88);//start pixel
   data(0);
   data(110);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(19);
   data(0);
   data(19);
  
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

void write_player1_4(){
   command(0x2A); //x coordinates
   data(0);
   data(90);//start pixel
   data(0);
   data(108);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(20);
   data(0);
   data(31);
  
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

void write_player1_5(){
   command(0x2A); //x coordinates
   data(0);
   data(95);//start pixel
   data(0);
   data(95);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(24);
   data(0);
   data(24);
  
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

void write_player1_6(){
   command(0x2A); //x coordinates
   data(0);
   data(97);//start pixel
   data(0);
   data(108);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(32);
   data(0);
   data(32);
  
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

void write_player1_7(){
   command(0x2A); //x coordinates
   data(0);
   data(92);//start pixel
   data(0);
   data(108);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(33);
   data(0);
   data(34);
  
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


void write_player1(){
   write_player1_1();
   write_player1_2();
   write_player1_3();
   write_player1_4();
   write_player1_5();
   write_player1_6();
   write_player1_7();
}

void write_player2_1(){
   command(0x2A); //x coordinates
   data(0);
   data(92);//start pixel
   data(0);
   data(108);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(44);
   data(0);
   data(59);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(126);
        SPI_SEND(255);
    }
   ss_pin_set(1);
}

void write_player2_2(){
   command(0x2A); //x coordinates
   data(0);
   data(96);//start pixel
   data(0);
   data(99);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(40);
   data(0);
   data(40);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(255);
        SPI_SEND(0);
    }
   ss_pin_set(1);
}

void write_player2_3(){
   command(0x2A); //x coordinates
   data(0);
   data(101);//start pixel
   data(0);
   data(104);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(40);
   data(0);
   data(40);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(255);
        SPI_SEND(0);
    }
   ss_pin_set(1);
}

void write_player2_4(){
   command(0x2A); //x coordinates
   data(0);
   data(99);//start pixel
   data(0);
   data(101);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(41);
   data(0);
   data(43);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(255);
        SPI_SEND(0);
    }
   ss_pin_set(1);
}

void write_player2_5(){
   command(0x2A); //x coordinates
   data(0);
   data(101);//start pixel
   data(0);
   data(104);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(40);
   data(0);
   data(40);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0);
        SPI_SEND(255);
        SPI_SEND(0);
    }
   ss_pin_set(1);
}

void write_player2_6(){
   command(0x2A); //x coordinates
   data(0);
   data(97);//start pixel
   data(0);
   data(97);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(48);
   data(0);
   data(51);
  
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

void write_player2_7(){
   command(0x2A); //x coordinates
   data(0);
   data(102);//start pixel
   data(0);
   data(102);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(48);
   data(0);
   data(51);
  
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

void write_player2_8(){
   command(0x2A); //x coordinates
   data(0);
   data(96);//start pixel
   data(0);
   data(96);//end pixel

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
        SPI_SEND(0);
    }
   ss_pin_set(1);
}

void write_player2_9(){
   command(0x2A); //x coordinates
   data(0);
   data(97);//start pixel
   data(0);
   data(103);//end pixel

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
        SPI_SEND(0);
    }
   ss_pin_set(1);
}

void write_player2_10(){
   command(0x2A); //x coordinates
   data(0);
   data(104);//start pixel
   data(0);
   data(104);//end pixel

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
        SPI_SEND(0);
    }
   ss_pin_set(1);
}

void write_player2(){
   write_player2_1();
   write_player2_2();
   write_player2_3();
   write_player2_4();
   write_player2_5();
   write_player2_6();
   write_player2_7();
   write_player2_8();
   write_player2_9();
   write_player2_10();
}

#endif