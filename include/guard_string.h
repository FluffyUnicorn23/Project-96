#ifndef GUARD_STRING_H
#define GUARD_STRING_H


#include "spiAVR.h"
#include "screen_functions.h"

void write_G_1(){
   command(0x2A); //x coordinates
   data(0);
   data(10);//start pixel
   data(0);
   data(10);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(117);
   data(0);
   data(123);
  
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

void write_G_2(){
   command(0x2A); //x coordinates
   data(0);
   data(11);//start pixel
   data(0);
   data(13);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(116);
   data(0);
   data(116);
  
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

void write_G_3(){
   command(0x2A); //x coordinates
   data(0);
   data(10);//start pixel
   data(0);
   data(13);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(124);
   data(0);
   data(124);
  
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

void write_G_4(){
   command(0x2A); //x coordinates
   data(0);
   data(12);//start pixel
   data(0);
   data(14);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(120);
   data(0);
   data(123);
  
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

void write_G_5(){
   command(0x2A); //x coordinates
   data(0);
   data(12);//start pixel
   data(0);
   data(13);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(121);
   data(0);
   data(123);
  
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

void write_u_1(){
   command(0x2A); //x coordinates
   data(0);
   data(16);//start pixel
   data(0);
   data(16);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(119);
   data(0);
   data(123);
  
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

void write_G(){
    write_G_1();
    write_G_2();
    write_G_3();
    write_G_4();
    write_G_5();
}

void write_u_2(){
   command(0x2A); //x coordinates
   data(0);
   data(17);//start pixel
   data(0);
   data(19);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(124);
   data(0);
   data(124);
  
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

void write_u_3(){
   command(0x2A); //x coordinates
   data(0);
   data(19);//start pixel
   data(0);
   data(19);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(119);
   data(0);
   data(123);
  
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

void write_u(){
    write_u_1();
    write_u_2();
    write_u_3();
}


void write_a2_1(){
   command(0x2A); //x coordinates
   data(0);
   data(21);//start pixel
   data(0);
   data(21);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(122);
   data(0);
   data(123);
  
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

void write_a2_2(){
   command(0x2A); //x coordinates
   data(0);
   data(22);//start pixel
   data(0);
   data(24);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(121);
   data(0);
   data(124);
  
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

void write_a2_3(){
   command(0x2A); //x coordinates
   data(0);
   data(22);//start pixel
   data(0);
   data(24);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(122);
   data(0);
   data(123);
  
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


void write_a2_4(){
   command(0x2A); //x coordinates
   data(0);
   data(22);//start pixel
   data(0);
   data(24);//end pixel

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

void write_a2_5(){
   command(0x2A); //x coordinates
   data(0);
   data(25);//start pixel
   data(0);
   data(25);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(120);
   data(0);
   data(124);
  
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

void write_a2(){
    write_a2_1();
    write_a2_2();
    write_a2_3();
    write_a2_4();
    write_a2_5();
}

void write_r1_1(){
   command(0x2A); //x coordinates
   data(0);
   data(27);//start pixel
   data(0);
   data(27);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(119);
   data(0);
   data(124);
  
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

void write_r1_2(){
   command(0x2A); //x coordinates
   data(0);
   data(28);//start pixel
   data(0);
   data(28);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(120);
   data(0);
   data(120);
  
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

void write_r1_3(){
   command(0x2A); //x coordinates
   data(0);
   data(29);//start pixel
   data(0);
   data(30);//end pixel

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

void write_r1(){
    write_r1_1();
    write_r1_2();
    write_r1_3();
}

void write_d_1(){
   command(0x2A); //x coordinates
   data(0);
   data(32);//start pixel
   data(0);
   data(32);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(120);
   data(0);
   data(123);
  
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

void write_d_2(){
   command(0x2A); //x coordinates
   data(0);
   data(33);//start pixel
   data(0);
   data(36);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(119);
   data(0);
   data(124);
  
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

void write_d_3(){
   command(0x2A); //x coordinates
   data(0);
   data(33);//start pixel
   data(0);
   data(35);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(120);
   data(0);
   data(123);
  
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

void write_d_4(){
   command(0x2A); //x coordinates
   data(0);
   data(36);//start pixel
   data(0);
   data(36);//end pixel

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

void write_d(){
    write_d_1();
    write_d_2();
    write_d_3();
    write_d_4();
}

void write_Guard(){
    write_G();
    write_u();
    write_a2();
    write_r1();
    write_d();
}

#endif