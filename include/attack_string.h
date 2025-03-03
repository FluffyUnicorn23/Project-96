#ifndef ATTACK_STRING_H
#define ATTACK_STRING_H

#include "spiAVR.h"
#include "screen_functions.h"

void write_A_1(){
   command(0x2A); //x coordinates
   data(0);
   data(10);//start pixel
   data(0);
   data(10);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(97);//start pixel
   data(0);
   data(104);
  
   command(0x2C);
   data_pin_set(1);
   ss_pin_set(0);

   for(int a = 0; a < 16512; ++a){
        SPI_SEND(0); //blue
        SPI_SEND(0); //green
        SPI_SEND(0); //red
    }
   ss_pin_set(1);
}
void write_A_2(){
   command(0x2A); //x coordinates
   data(0);
   data(14);//start pixel
   data(0);
   data(14);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(97);
   data(0);
   data(104);
  
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
void write_A_3(){
   command(0x2A); //x coordinates
   data(0);
   data(11);//start pixel
   data(0);
   data(13);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(96);
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
void write_A_4(){
   command(0x2A); //x coordinates
   data(0);
   data(11);//start pixel
   data(0);
   data(13);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(97);
   data(0);
   data(99);
  
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


void write_A(){
    write_A_1();
    write_A_2();
    write_A_3();
    write_A_4();
}

void write_t1_1(){
   command(0x2A); //x coordinates
   data(0);
   data(16);//start pixel
   data(0);
   data(20);//end pixel

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


void write_t1_2(){
   command(0x2A); //x coordinates
   data(0);
   data(18);//start pixel
   data(0);
   data(18);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(96);
   data(0);
   data(104);
  
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

void write_t1(){
    write_t1_1();
    write_t1_2();
}

void write_t2_1(){
   command(0x2A); //x coordinates
   data(0);
   data(22);//start pixel
   data(0);
   data(26);//end pixel

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


void write_t2_2(){
   command(0x2A); //x coordinates
   data(0);
   data(24);//start pixel
   data(0);
   data(24);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(96);
   data(0);
   data(104);
  
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

void write_t2(){
    write_t2_1();
    write_t2_2();
}



void write_a_1(){
   command(0x2A); //x coordinates
   data(0);
   data(28);//start pixel
   data(0);
   data(28);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(102);
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

void write_a_2(){
   command(0x2A); //x coordinates
   data(0);
   data(29);//start pixel
   data(0);
   data(32);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(101);
   data(0);
   data(104);
  
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

void write_a_3(){
   command(0x2A); //x coordinates
   data(0);
   data(29);//start pixel
   data(0);
   data(31);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(102);
   data(0);
   data(103);
  
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


void write_a_4(){
   command(0x2A); //x coordinates
   data(0);
   data(29);//start pixel
   data(0);
   data(31);//end pixel

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

void write_a_5(){
   command(0x2A); //x coordinates
   data(0);
   data(32);//start pixel
   data(0);
   data(32);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100);
   data(0);
   data(104);
  
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

void write_a(){
    write_a_1();
    write_a_2();
    write_a_3();
    write_a_4();
    write_a_5();
}

void write_c_1(){
   command(0x2A); //x coordinates
   data(0);
   data(34);//start pixel
   data(0);
   data(34);//end pixel

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

void write_c_2(){
   command(0x2A); //x coordinates
   data(0);
   data(35);//start pixel
   data(0);
   data(37);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(99);
   data(0);
   data(104);
  
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

void write_c_3(){
   command(0x2A); //x coordinates
   data(0);
   data(35);//start pixel
   data(0);
   data(37);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(100);
   data(0);
   data(103);
  
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

void write_c(){
    write_c_1();
    write_c_2();
    write_c_3();
}

void write_k_1(){
   command(0x2A); //x coordinates
   data(0);
   data(39);//start pixel
   data(0);
   data(39);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(96);
   data(0);
   data(104);
  
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

void write_k_2(){
   command(0x2A); //x coordinates
   data(0);
   data(40);//start pixel
   data(0);
   data(40);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(101);
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

void write_k_3(){
   command(0x2A); //x coordinates
   data(0);
   data(41);//start pixel
   data(0);
   data(41);//end pixel

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

void write_k_4(){
   command(0x2A); //x coordinates
   data(0);
   data(41);//start pixel
   data(0);
   data(41);//end pixel

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

void write_k_5(){
   command(0x2A); //x coordinates
   data(0);
   data(42);//start pixel
   data(0);
   data(42);//end pixel

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

void write_k_6(){
   command(0x2A); //x coordinates
   data(0);
   data(42);//start pixel
   data(0);
   data(42);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(104);
   data(0);
   data(104);
  
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

void write_k(){
    write_k_1();
    write_k_2();
    write_k_3();
    write_k_4();
    write_k_5();
    write_k_6();
}


void write_Attack(){
    write_A();
    write_t1();
    write_t2();
    write_a();
    write_c();
    write_k();
}

#endif