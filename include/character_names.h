#ifndef CHARACTERS_NAMES_H
#define CHARACTERS_NAMES_H


#include "spiAVR.h"
#include "screen_functions.h"


void write_B_Brisk_1(){
   command(0x2A); //x coordinates
   data(0);
   data(55);//start pixel
   data(0);
   data(55);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(96);
   data(0);
   data(103);
  
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

void write_B_Brisk_2(){
   command(0x2A); //x coordinates
   data(0);
   data(56);//start pixel
   data(0);
   data(58);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(96);
   data(0);
   data(103);
  
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

void write_B_Brisk_3(){
   command(0x2A); //x coordinates
   data(0);
   data(59);//start pixel
   data(0);
   data(59);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(97);
   data(0);
   data(98);
  
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

void write_B_Brisk_4(){
   command(0x2A); //x coordinates
   data(0);
   data(59);//start pixel
   data(0);
   data(59);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100);
   data(0);
   data(102);
  
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

void write_B_Brisk_5(){
   command(0x2A); //x coordinates
   data(0);
   data(56);//start pixel
   data(0);
   data(58);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(97);
   data(0);
   data(98);
  
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

void write_B_Brisk_6(){
   command(0x2A); //x coordinates
   data(0);
   data(56);//start pixel
   data(0);
   data(58);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100);
   data(0);
   data(102);
  
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

void write_B_Brisk(){
    write_B_Brisk_1();
    write_B_Brisk_2();
    write_B_Brisk_3();
    write_B_Brisk_4();
    write_B_Brisk_5();
    write_B_Brisk_6();
}

void write_r_Brisk_1(){
   command(0x2A); //x coordinates
   data(0);
   data(61);//start pixel
   data(0);
   data(61);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100);
   data(0);
   data(103);
  
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

void write_r_Brisk_2(){
   command(0x2A); //x coordinates
   data(0);
   data(62);//start pixel
   data(0);
   data(62);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(101);
   data(0);
   data(101);
  
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

void write_r_Brisk_3(){
   command(0x2A); //x coordinates
   data(0);
   data(63);//start pixel
   data(0);
   data(64);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100);
   data(0);
   data(100);
  
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

void write_r_Brisk(){
    write_r_Brisk_1();
    write_r_Brisk_2();
    write_r_Brisk_3();
}

void write_i_Brisk_1(){
   command(0x2A); //x coordinates
   data(0);
   data(66);//start pixel
   data(0);
   data(66);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100);
   data(0);
   data(103);
  
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

void write_i_Brisk_2(){
   command(0x2A); //x coordinates
   data(0);
   data(66);//start pixel
   data(0);
   data(66);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(98);
   data(0);
   data(98);
  
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

void write_i_Brisk(){
    write_i_Brisk_1();
    write_i_Brisk_2();
}

void write_Brisk_s_1(){
   command(0x2A); //x coordinates
   data(0);
   data(69);//start pixel
   data(0);
   data(71);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(99);
   data(0);
   data(99);
  
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

void write_Brisk_s_2(){
   command(0x2A); //x coordinates
   data(0);
   data(68);//start pixel
   data(0);
   data(68);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100);
   data(0);
   data(100);
  
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

void write_Brisk_s_3(){
   command(0x2A); //x coordinates
   data(0);
   data(69);//start pixel
   data(0);
   data(70);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(101);
   data(0);
   data(101);
  
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

void write_Brisk_s_4(){
   command(0x2A); //x coordinates
   data(0);
   data(71);//start pixel
   data(0);
   data(71);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(102);
   data(0);
   data(102);
  
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

void write_Brisk_s_5(){
   command(0x2A); //x coordinates
   data(0);
   data(68);//start pixel
   data(0);
   data(70);
   command(0x2B); //y coordinates
   data(0);
   data(103);
   data(0);
   data(103);
  
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

void write_Brisk_s(){
    write_Brisk_s_1();
    write_Brisk_s_2();
    write_Brisk_s_3();
    write_Brisk_s_4();
    write_Brisk_s_5();
}

void write_Brisk_k_1(){
   command(0x2A); //x coordinates
   data(0);
   data(73);//start pixel
   data(0);
   data(73);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(96);
   data(0);
   data(103);
  
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

void write_Brisk_k_2(){
   command(0x2A); //x coordinates
   data(0);
   data(74);//start pixel
   data(0);
   data(74);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100);
   data(0);
   data(101);
  
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

void write_Brisk_k_3(){
   command(0x2A); //x coordinates
   data(0);
   data(75);//start pixel
   data(0);
   data(75);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(99);
   data(0);
   data(99);
  
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

void write_Brisk_k_4(){
   command(0x2A); //x coordinates
   data(0);
   data(75);//start pixel
   data(0);
   data(75);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(102);
   data(0);
   data(102);
  
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

void write_Brisk_k_5(){
   command(0x2A); //x coordinates
   data(0);
   data(76);//start pixel
   data(0);
   data(76);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(103);
   data(0);
   data(103);
  
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

void write_Brisk_k(){
    write_Brisk_k_1();
    write_Brisk_k_2();
    write_Brisk_k_3();
    write_Brisk_k_4();
    write_Brisk_k_5();
}

void write_Brisk(){
    write_B_Brisk();
    write_r_Brisk();
    write_i_Brisk();
    write_Brisk_s();
    write_Brisk_k();
}

void write_Norm_N_1(){
   command(0x2A); //x coordinates
   data(0);
   data(55);//start pixel
   data(0);
   data(55);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(106);
   data(0);
   data(112);
  
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

void write_Norm_N_2(){
   command(0x2A); //x coordinates
   data(0);
   data(60);//start pixel
   data(0);
   data(60);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(106);
   data(0);
   data(112);
  
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

void write_Norm_N_3(){
   command(0x2A); //x coordinates
   data(0);
   data(56);//start pixel
   data(0);
   data(56);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(107);
   data(0);
   data(108);
  
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

void write_Norm_N_4(){
   command(0x2A); //x coordinates
   data(0);
   data(57);//start pixel
   data(0);
   data(57);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(108);
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

void write_Norm_N_5(){
   command(0x2A); //x coordinates
   data(0);
   data(58);//start pixel
   data(0);
   data(58);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(109);
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

void write_Norm_N_6(){
   command(0x2A); //x coordinates
   data(0);
   data(59);//start pixel
   data(0);
   data(59);//end pixel

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

void write_Norm_N(){
    write_Norm_N_1();
    write_Norm_N_2();
    write_Norm_N_3();
    write_Norm_N_4();
    write_Norm_N_5();
    write_Norm_N_6();
}

void write_Norm_o_1(){
   command(0x2A); //x coordinates
   data(0);
   data(63);//start pixel
   data(0);
   data(65);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(108);
   data(0);
   data(112);
  
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

void write_Norm_o_2(){
   command(0x2A); //x coordinates
   data(0);
   data(62);//start pixel
   data(0);
   data(66);//end pixel

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

void write_Norm_o_3(){
   command(0x2A); //x coordinates
   data(0);
   data(63);//start pixel
   data(0);
   data(65);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(109);
   data(0);
   data(111);
  
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

void write_Norm_o(){
    write_Norm_o_1();
    write_Norm_o_2();
    write_Norm_o_3();
}
void write_Norm_r_1(){
   command(0x2A); //x coordinates
   data(0);
   data(68);//start pixel
   data(0);
   data(68);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(108);
   data(0);
   data(112);
  
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

void write_Norm_r_2(){
   command(0x2A); //x coordinates
   data(0);
   data(69);//start pixel
   data(0);
   data(69);//end pixel

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

void write_Norm_r_3(){
   command(0x2A); //x coordinates
   data(0);
   data(70);//start pixel
   data(0);
   data(71);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(108);
   data(0);
   data(108);
  
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

void write_Norm_r(){
    write_Norm_r_1();
    write_Norm_r_2();
    write_Norm_r_3();
}

void write_Norm_m_1(){
   command(0x2A); //x coordinates
   data(0);
   data(73);//start pixel
   data(0);
   data(73);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(108);
   data(0);
   data(112);
  
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

void write_Norm_m_2(){
   command(0x2A); //x coordinates
   data(0);
   data(74);//start pixel
   data(0);
   data(74);//end pixel

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

void write_Norm_m_3(){
   command(0x2A); //x coordinates
   data(0);
   data(75);//start pixel
   data(0);
   data(75);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(108);
   data(0);
   data(108);
  
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

void write_Norm_m_4(){
   command(0x2A); //x coordinates
   data(0);
   data(76);//start pixel
   data(0);
   data(76);//end pixel

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

void write_Norm_m_5(){
   command(0x2A); //x coordinates
   data(0);
   data(77);//start pixel
   data(0);
   data(77);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(108);
   data(0);
   data(108);
  
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

void write_Norm_m_6(){
   command(0x2A); //x coordinates
   data(0);
   data(78);//start pixel
   data(0);
   data(78);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(109);
   data(0);
   data(112);
  
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

void write_Norm_m(){
    write_Norm_m_1();
    write_Norm_m_2();
    write_Norm_m_3();
    write_Norm_m_4();
    write_Norm_m_5();
    write_Norm_m_6();
}

void write_Norm(){
    write_Norm_N();
    write_Norm_o();
    write_Norm_r();
    write_Norm_m();
}

void write_Scotty_S_1(){
   command(0x2A); //x coordinates
   data(0);
   data(56);//start pixel
   data(0);
   data(60);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(115);
   data(0);
   data(115);
  
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

void write_Scotty_S_2(){
   command(0x2A); //x coordinates
   data(0);
   data(55);//start pixel
   data(0);
   data(55);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(116);
   data(0);
   data(118);
  
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

void write_Scotty_S_3(){
   command(0x2A); //x coordinates
   data(0);
   data(56);//start pixel
   data(0);
   data(60);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(119);
   data(0);
   data(119);
  
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

void write_Scotty_S_4(){
   command(0x2A); //x coordinates
   data(0);
   data(61);//start pixel
   data(0);
   data(61);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(120);
   data(0);
   data(121);
  
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

void write_Scotty_S_5(){
   command(0x2A); //x coordinates
   data(0);
   data(56);//start pixel
   data(0);
   data(60);
   command(0x2B); //y coordinates
   data(0);
   data(122);
   data(0);
   data(122);
  
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