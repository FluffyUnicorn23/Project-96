#ifndef NUMBERS_H
#define NUMBERS_H

#include "spiAVR.h"
#include "screen_functions.h"


void no_0_1(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y + 6);
  
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

void no_0_2(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 5);
  
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

void write_zero(int x, int y){
    no_0_1(x,y);
    no_0_2(x,y);
}

void no_one_1(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 1);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 1);
  
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

void no_one_2(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 2);//start pixel
   data(0);
   data(x + 2);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y + 6);
  
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

void no_one_3(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 1);
  
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

void write_one(int x, int y){
    no_one_1(x,y);
    no_one_2(x,y);
    no_one_3(x,y);
}

void no_two_1(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 1);
  
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

void no_two_2(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y);
  
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

void no_two_3(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 5);//start pixel
   data(0);
   data(x+ 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 1);
  
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

void no_two_4(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 7);
   data(0);
   data(y + 7);
  
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

void no_two_5(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 4);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 3);
   data(0);
   data(y + 3);
  
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

void no_two_6(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 3);//start pixel
   data(0);
   data(x + 3);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 4);
   data(0);
   data(y + 4);
  
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

void no_two_7(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 2);//start pixel
   data(0);
   data(x + 2);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 5);
   data(0);
   data(y + 5);
  
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

void no_two_8(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 1);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 6);
   data(0);
   data(y + 6);
  
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



void write_two(int x, int y){
   no_two_1(x,y);
   no_two_2(x,y);
   no_two_3(x,y);
   no_two_4(x,y);
   no_two_5(x,y);
   no_two_6(x,y);
   no_two_7(x,y);
   no_two_8(x,y);
}

void no_three_1(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 1);
  
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

void no_three_2(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y);
  
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

void no_three_3(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 5);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 2);
  
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

void no_three_4(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 3);
   data(0);
   data(y + 3);
  
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

void no_three_5(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 5);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 4);
   data(0);
   data(y + 6);
  
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

void no_three_6(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 7);
   data(0);
   data(y + 7);
  
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

void no_three_7(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 6);
   data(0);
   data(y + 6);
  
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

void write_three(int x, int y){
   no_three_1(x,y);
   no_three_2(x,y);
   no_three_3(x,y);
   no_three_4(x,y);
   no_three_5(x,y);
   no_three_6(x,y);
   no_three_7(x,y);
}

void no_four_1(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y + 3);
  
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

void no_four_2(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 3);
   data(0);
   data(y + 3);
  
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

void no_four_3(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 5);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y + 7);
  
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

void write_four(int x, int y){
   no_four_1(x,y);
   no_four_2(x,y);
   no_four_3(x,y);
}

void no_five_1(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x+5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y);
  
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

void no_five_2(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 3);
  
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

void no_five_3(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 3);
   data(0);
   data(y + 3);
  
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

void no_five_4(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 5);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 4);
   data(0);
   data(y + 6);
  
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

void no_five_5(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 7);
   data(0);
   data(y + 7);
  
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

void no_five_6(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 6);
   data(0);
   data(y + 6);
  
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

void write_five(int x, int y){
   no_five_1(x,y);
   no_five_2(x,y);
   no_five_3(x,y);
   no_five_4(x,y);
   no_five_5(x,y);
   no_five_6(x,y);
}

void no_six_1(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 6);
  
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

void no_six_2(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y);
  
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

void no_six_3(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 3);
   data(0);
   data(y + 3);
  
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

void no_six_4(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 5);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 4);
   data(0);
   data(y + 6);
  
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

void no_six_5(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 7);
   data(0);
   data(y + 7);
  
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

void write_six(int x, int y){
   no_six_1(x,y);
   no_six_2(x,y);
   no_six_3(x,y);
   no_six_4(x,y);
   no_six_5(x,y);
}

void no_seven_1(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y);
  
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

void no_seven_2(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 5);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 2);
  
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

void no_seven_3(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 4);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 3);
   data(0);
   data(y + 3);
  
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

void no_seven_4(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 3);//start pixel
   data(0);
   data(x + 3);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 4);
   data(0);
   data(y + 4);
  
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

void no_seven_5(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 2);//start pixel
   data(0);
   data(x + 2);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 5);
   data(0);
   data(y + 7);
  
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

void write_seven(int x, int y){
   no_seven_1(x,y);
   no_seven_2(x,y);
   no_seven_3(x,y);
   no_seven_4(x,y);
   no_seven_5(x,y);
}

void no_eight_1(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 2);
  
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

void no_eight_2(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y);
  
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

void no_eight_3(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 5);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 2);
  
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

void no_eight_4(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 3);
   data(0);
   data(y + 3);
  
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

void no_eight_5(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 5);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 4);
   data(0);
   data(y + 6);
  
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

void no_eight_6(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 7);
   data(0);
   data(y + 7);
  
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

void no_eight_7(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 4);
   data(0);
   data(y + 6);
  
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

void write_eight(int x, int y){
   no_eight_1(x,y);
   no_eight_2(x,y);
   no_eight_3(x,y);
   no_eight_4(x,y);
   no_eight_5(x,y);
   no_eight_6(x,y);
   no_eight_7(x,y);
}

void no_nine_1(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 3);
  
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

void no_nine_2(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y + 4);
  
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

void no_nine_3(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 1);//start pixel
   data(0);
   data(x + 4);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 1);
   data(0);
   data(y + 3);
  
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

void no_nine_4(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x + 5);//start pixel
   data(0);
   data(x + 5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y + 5);
   data(0);
   data(y + 7);
  
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

void write_nine(int x, int y){
   no_nine_1(x,y);
   no_nine_2(x,y);
   no_nine_3(x,y);
   no_nine_4(x,y);
}

void erase_number(int x, int y){
   command(0x2A); //x coordinates
   data(0);
   data(x);//start pixel
   data(0);
   data(x+5);//end pixel

   command(0x2B); //y coordinates
   data(0);
   data(y);
   data(0);
   data(y + 7);
  
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

void write_number(int number, int x, int y){
   if (number == 0){
      write_zero(x,y);
   }
   else if (number == 1){
      write_one(x,y);
   }
   else if (number == 2){
      write_two(x,y);
   }
   else if (number == 3){
      write_three(x,y);
   }
   else if (number == 4){
      write_four(x,y);
   }
   else if (number == 5){
      write_five(x,y);
   }
   else if (number == 6){
      write_six(x,y);
   }
   else if (number == 7){
      write_seven(x,y);
   }
   else if (number == 8){
      write_eight(x,y);
   }
   else if (number == 9){
      write_nine(x,y);
   }
}

#endif