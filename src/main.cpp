#include "helper.h"
#include "timerISR.h"
#include "spiAVR.h"
#include "screen_functions.h"
#include "battle_hud.h"
#include "characters_sprites.h"
#include "arrow.h"
#include "attack_string.h"
#include "Heal_string.h"
#include "guard_string.h"
#include "character_stats.h"
#include "character_names.h"
#include "battle_sprites.h"
#include "other_menus.h"
#include "numbers.h"
#include "stdlib.h"
#include "irAVR.h"
#include "time.h"

#define NUM_TASKS 4

int turn_count;
short your_turn;
short arrow_position;
short j;
bool in_battle;
bool dead;
decode_results results;

int notes[7] = {6429,4290,4818,5104,6429,7633,6499};


typedef struct _task{
	signed 	 char state; 		//Task's current state
	unsigned int period; 		//Task period
	unsigned int elapsedTime; 	//Time elapsed since last task tick
	int (*TickFct)(int); 		//Task tick function
} task;


//TODO: Define Periods for each task
// e.g. const unsined long TASK1_PERIOD = <PERIOD>
const unsigned int TASK1_Period = 100;
const unsigned int TASK2_Period = 100;
const unsigned int TASK3_Period = 100;
const unsigned int TASK4_Period = 1000;
const unsigned int GCD_PERIOD = 100;//TODO:Set the GCD Period

task tasks[NUM_TASKS]; // declared task array with 5 tasks;


void TimerISR() {
	for ( unsigned int i = 0; i < NUM_TASKS; i++ ) {                   // Iterate through each task in the task array
		if ( tasks[i].elapsedTime == tasks[i].period ) {           // Check if the task is ready to tick
			tasks[i].state = tasks[i].TickFct(tasks[i].state); // Tick and set the next state for this task
			tasks[i].elapsedTime = 0;                          // Reset the elapsed time for the next tick
		}
		tasks[i].elapsedTime += GCD_PERIOD;                        // Increment the elapsed time by GCD_PERIOD
	}
}

enum GAME_STATES {GAME_INIT, GAME_MAIN_MENU, GAME_IN_PROGRESS, GAME_WIN, GAME_LOSE} GAME_STATE;
  int TICK_GAME_STATES (int GAME_STATE){
    switch (GAME_STATE){
      case GAME_INIT:
      write_main_menu();
      GAME_STATE = GAME_MAIN_MENU;
      break;
      case GAME_MAIN_MENU:
      if (IRdecode(&results)){
        if (results.value == 16712445){
          hp_stats[0] = 8;
          hp_stats[1] = 10; 
          hp_stats[2] = 30;
          defense_stats[0]= 4;
          defense_stats[1]= 6;
          results.value = 0;
          turn_count = 1;
          dead = false;
          write_battle_hud();
          write_Paper_Shredder();
          write_player1();
          write_player2();
          write_Attack();
          write_Heal();
          write_Guard();
          write_Brisk();
          write_Norm();
          write_blue_arrow(your_turn);
          write_number((hp_stats[0] / 10), 90, 97);
          write_number((hp_stats[0] % 10), 97, 97);
          write_number((hp_stats[1] / 10), 90, 107);
          write_number((hp_stats[1] % 10), 97, 107);
          write_number((turn_count / 10), 4, 2);
          write_number((turn_count % 10), 11, 2);
          GAME_STATE = GAME_IN_PROGRESS;
        }
        IRresume();
      }
      break;
      case GAME_IN_PROGRESS:
      if (hp_stats[2] <= 0 && turn_count < 50){
        IRresume();
        GAME_STATE = GAME_WIN;
      }
      
      else if (dead || turn_count >= 50){
        IRresume();
        GAME_STATE = GAME_LOSE;
      }
      else if (results.value == 16753245){
        IRresume();
        GAME_STATE = GAME_INIT;
      }
      break;
      case GAME_WIN:
      if (results.value == 16753245){
        IRresume();
        GAME_STATE = GAME_INIT;
      }
      break;
      case GAME_LOSE:
      if (results.value == 16753245){
        IRresume();
        GAME_STATE = GAME_INIT;
      }
      break;
    }

    switch (GAME_STATE){
      case GAME_INIT:
      break;
      case GAME_MAIN_MENU:
      in_battle = false;
      break;
      case GAME_IN_PROGRESS:
      in_battle = true;
      break;
      case GAME_WIN:
      write_win_menu();
      in_battle = false;
      break;
      case GAME_LOSE:
      write_lose_menu();
      in_battle = false;
      break;
    }

    return GAME_STATE;
  }

enum BATTLE_STATES {BATTLE_INIT, BATTLE_OUT, BATTLE_YOUR_TURN, BATTLE_ENEMY_TURN} BATTLE_STATE;
  int TICK_BATTLE_STATES (int BATTLE_STATE){
    switch (BATTLE_STATE){
      case BATTLE_INIT:
      BATTLE_STATE = BATTLE_OUT;
      break;

      case BATTLE_OUT:
      if (in_battle){
        BATTLE_STATE = BATTLE_YOUR_TURN;
      }
      break;

      case BATTLE_YOUR_TURN:
      if (results.value == 16753245 || dead || hp_stats[2] <= 0){
        IRresume();
        BATTLE_STATE = BATTLE_OUT;
      }
      else if (your_turn >= 2){
        BATTLE_STATE = BATTLE_ENEMY_TURN; 
      }
      
      case BATTLE_ENEMY_TURN:
      if (results.value == 16753245 || dead){
        IRresume();
        BATTLE_STATE = BATTLE_OUT;
      }
      else {
        if (your_turn >= 3){
          defense_stats[0]= 4;
          defense_stats[1]= 6;
          your_turn = 0;
          write_blue_arrow(0);
          BATTLE_STATE = BATTLE_YOUR_TURN;
        }
      }
      break;
    }

    switch (BATTLE_STATE){
      case BATTLE_INIT:
      break;
      case BATTLE_OUT:
      break;
      case BATTLE_YOUR_TURN:
      if (hp_stats[your_turn] <= 0){
        erase_blue_arrow(your_turn);
        ++your_turn;
      }

      else if (IRdecode(&results)){
        if(results.value == 16712445){
          erase_blue_arrow(your_turn);
          if (arrow_position == 0){
          write_fist();
          hp_stats[2] -= ((attack_stats[your_turn] + (rand() % 3)) - defense_stats[2]);
          erase_sprite();
          ++your_turn;
        }
        else if(arrow_position == 1){
          write_heart();
          if (hp_stats[your_turn] + 3 > hp_stats1[your_turn]){
            hp_stats[your_turn] = hp_stats1[your_turn];
          }
          else {
            hp_stats[your_turn] += 4;
          }
          erase_number(90, ((your_turn * 10) + 97));
          erase_number(97, ((your_turn * 10) + 97));
          write_number((hp_stats[your_turn] / 10), 90, ((your_turn * 10) + 97));
          write_number((hp_stats[your_turn] % 10), 97, ((your_turn * 10) + 97));
          erase_sprite();
          ++your_turn;
        }

        else if(arrow_position == 2){
          write_shield();
          defense_stats[your_turn] -= 2;
          erase_sprite();
          ++your_turn;
        }

        if (your_turn < 2){
          write_blue_arrow(your_turn);
          IRresume();
        }
        
        }
      }
      break;

      case BATTLE_ENEMY_TURN:
      int select = rand() % 2;
      hp_stats[select] += (attack_stats[3] + rand() % 2 - defense_stats[select]);
      if (hp_stats[select] <= 0){
        hp_stats[select] = 0;
      }

        erase_number(90, ((select * 10) + 97));
        erase_number(97, ((select * 10) + 97));
        write_number((hp_stats[select] / 10), 90, ((select * 10) + 97));
        write_number((hp_stats[select] % 10), 97, ((select * 10) + 97));
      

      if ((hp_stats[0] <= 0) && (hp_stats[1] <= 0)){
        dead = true;
      }
      IRresume();
      ++your_turn;
      ++turn_count;
      erase_number(4,2);
      erase_number(11,2);
      write_number(turn_count / 10, 4, 2);    
      write_number(turn_count % 10, 11, 2);
      break;
    }

    return BATTLE_STATE;
  }

enum ARROW_STATES {ARROW_INIT, ARROW_POSITION_1, ARROW_POSITION_2, ARROW_POSITION_3, ARROW_GONE} ARROW_STATE;
int TICK_ARROW_STATES(int ARROW_STATE){
  switch(ARROW_STATE){
    case ARROW_INIT:
    ARROW_STATE = ARROW_GONE;
    break;

    case ARROW_POSITION_1:
    if (IRdecode(&results)){
      if ((results.value == 16754775)){
      results.value = 0;
      write_white_rect4(0);
      write_arrow(10);
      IRresume();
      ARROW_STATE = ARROW_POSITION_2;
    }
    else if ((results.value == 16736925)){
      results.value = 0;
      write_white_rect4(0);
      write_arrow(20);
      IRresume();
      ARROW_STATE = ARROW_POSITION_3;
      }
    }
    else if(!in_battle){
      write_white_rect4(0);
      ARROW_STATE = ARROW_GONE;
    }

    IRresume();
    break;

    case ARROW_POSITION_2:
    if (IRdecode(&results)){
      if ((results.value == 16754775)){
      results.value = 0;
      write_white_rect4(10);
      write_arrow(20);
      IRresume();
      ARROW_STATE = ARROW_POSITION_3;
    }
    else if ((results.value == 16736925)){
      results.value = 0;
      write_white_rect4(10);
      write_arrow(0);
      IRresume();
      ARROW_STATE = ARROW_POSITION_1;
    }

    }
    else if(!in_battle){
      write_white_rect4(10);
      ARROW_STATE = ARROW_GONE;
    }
    break;

    case ARROW_POSITION_3:
    if (IRdecode(&results)){
      if ((results.value == 16754775)){
      results.value = 0;  
      write_white_rect4(20);
      write_arrow(0);
      IRresume();
      ARROW_STATE = ARROW_POSITION_1;
    }
      else if ((results.value == 16736925)){
      results.value = 0;
      write_white_rect4(20);
      write_arrow(10);
      IRresume();
      ARROW_STATE = ARROW_POSITION_2;
      }
    }
    
    else if(!in_battle){
      write_white_rect4(20);
      ARROW_STATE = ARROW_GONE;
    }

    break;
    case ARROW_GONE:
    if(in_battle){
      write_arrow(0);
      ARROW_STATE = ARROW_POSITION_1;
    }
    IRresume();
    break;
  }

  switch(ARROW_STATE){
    case ARROW_INIT:
    break;
    case ARROW_POSITION_1:
    arrow_position = 0;
    break;
    case ARROW_POSITION_2:
    arrow_position = 1;
    break;
    case ARROW_POSITION_3:
    arrow_position = 2;
    break;
    case ARROW_GONE:
    arrow_position = 3;
    break;
  }
  return ARROW_STATE;
}

enum MUSIC_STATES {MUSIC_OFF, MUSIC_ON} MUSIC_STATE;
int TICK_MUSIC_STATES(int MUSIC_STATE){
  switch(MUSIC_STATE){
    case MUSIC_OFF:
    if (in_battle){ //just a booleaon value 
      j = 0;
      ICR1 = notes[j];
      MUSIC_STATE = MUSIC_ON;
    }
    break;
    case MUSIC_ON:
    if (!in_battle){
      ICR1 = 0;
      MUSIC_STATE = MUSIC_OFF;
    }
    break;
  }

  switch(MUSIC_STATE){
    case MUSIC_OFF:
    OCR1A = 0; 
    break;
    case MUSIC_ON:
    OCR1A = notes[j] / 2;
    if (j == 7){
      j = 0;
      ICR1 = notes[j];
    }
    else {
      ++j;
      ICR1 = notes[j];
    }

    break;
  }

  return MUSIC_STATE;
}

int main (void){
  DDRC = 0x00; PORTC = 0x01; //ANALOG
  DDRB = 0xFF; PORTB = 0xFF; 
  DDRD = 0xBF; PORTD = 0xFF;

  srand(time(NULL));
  SPI_INIT();
  ST7735_init();
  IRinit(&PORTD,&PIND, 6);

  short x = 0;
  j = 0;

  TCCR1A |= (1 << WGM11) | (1 << COM1A1); //COM1A1 sets it to channel A
  TCCR1B |= (1 << WGM12) | (1 << WGM13) | (1 << CS11); //CS11 sets the prescaler to be 8
  //WGM11, WGM12, WGM13 set timer to fast pwm mode
  ICR1 = 7633; 

  tasks[x].period = TASK1_Period;
  tasks[x].state = GAME_INIT;
  tasks[x].elapsedTime = tasks[x].period;
  tasks[x].TickFct = &TICK_GAME_STATES;
  ++x;
  tasks[x].period = TASK2_Period;
  tasks[x].state = BATTLE_INIT;
  tasks[x].elapsedTime = tasks[x].period;
  tasks[x].TickFct = &TICK_BATTLE_STATES;
  ++x;
  tasks[x].period = TASK3_Period;
  tasks[x].state = ARROW_INIT;
  tasks[x].elapsedTime = tasks[x].period;
  tasks[x].TickFct = &TICK_ARROW_STATES;
  ++x;
  tasks[x].period = TASK4_Period;
  tasks[x].state = MUSIC_OFF;
  tasks[x].elapsedTime = tasks[x].period;
  tasks[x].TickFct = &TICK_MUSIC_STATES;
  ++x;

  TimerSet(GCD_PERIOD);
  TimerOn();

  while (1) {
    }
  return 0;
}