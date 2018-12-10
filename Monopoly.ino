//We include the library
#include "LedControl.h"
#include "Wire.h"
#include "Adafruit_LiquidCrystal.h"
#include <binary.h>

const int button = 8;                                                //set the pin 8 for the first button
const int button_red = 9;                                            //set the pin 9 for the first button

LedControl lcd=LedControl(12,11,10,1);                               // initialize the pins for 8x8 lcd screen
Adafruit_LiquidCrystal lcd1(7, 6, 5, 4, 3, 2);                       // initialize the pins for 20x2 lcd screen

int ledpin[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };   // make an array for the "Monopoly board" and leds
int buttonState1 = 0, player1 = 0, dice_number = 0, go_back = 0, remainder = 0;           // setting all variables
int buttonState2 = 0, remainder2 = 0, player2 = 0, dice_number2 = 0, go_back2 = 0;        // setting all variables

void setup() {
  lcd.shutdown(0,false);                                             // starting 8x8 screen
  lcd.setIntensity(0,8);                                             // Set the brightness to a medium values 
  lcd.clearDisplay(0);                                               // clear the display 
  
  lcd1.begin(20, 2);                                                 // set up the LCD's number of rows and columns

  pinMode(button, INPUT);                                            // button as an Input
  pinMode(button_red, INPUT);                                        // button as an Input
  tests();                                                           // calling a function for testing the game
  start();                                                           // call a function to start the filds of the game
}
void loop() { // starting the void loop 
  lcd1.setCursor(0, 0); lcd1.print("Player 1 or Player 2");          // setting the starting point on a 20x2 LCD screen and printing "Player 1 or Player 2"
  buttonState1 = digitalRead(button);                                // check if player1 has pressed a button to start his move
  if(buttonState1 == HIGH){ lcd1.clear();                            // if the button is pressed, clear a display and go to another loop
    while(1){                                                        // going to a loop
      lcd1.setCursor(0, 0); lcd1.print("Roll a dice?"); delay(1000); // setting the starting point and printing "Roll a dice?" and delay for 1000 ms
      buttonState1 = digitalRead(button);                            // check if player1 has pressed a button to roll a dice
      if(buttonState1 == HIGH){                                      // if the button is pressed, clear a display and go to another loop
        rolling_a_dice();                                            // call a function to animate a dice roll
        dice_number = random(1,6);                                   // creating a random number between 1 and 6
        lcd1.print(dice_number);                                     // printing the random number to a screen
        delay(100);                                                  // delay 100 ms
        for (int i = player1; i < player1 + dice_number + 1; i++){   // Starting the for loop to count the steps for the player 
          move_player(ledpin[i]);                                    // function to animate moving the player
          if(player1 + dice_number == i){                            // moving the player until the player1 is on the correct posision
            player1 = i;                                             // set the player to be the number of the field that it is on
            dice_number = 0;                                         // set the dice number to zero
            mark_player(player1);                                    // mark the player1 on a outside of the board
            if(player1 > 18){                                        // starting a if statement that checks if the player has made a full circle
              remainder = player1 % 20;                              // if yes, take a remainder from the player1
              player1 = 0;                                           // set the player1 to zero possition 
              player1 = player1 + remainder;                         // then add remainder to player1
              go_back = 1;                                           // set go back to one
              dice_number = 0;                                       // dice number to zero
              mark_player(player1);                                  // mark the new place of the player1
              lcd1.clear();                                          // clear the lcd 20x2 screen
              break;                                                 // break
            }
            lcd1.clear();                                            // clear the screen if it doesn't go to an if statement from before
            go_back = 1;                                             // set go back to one
          }
          if(go_back == 1){break;}                                   // if go back is one, break again
        }
      }
      if(go_back == 1){go_back = 0; break;}                          // if go back is one, break again and set go back to zero
    }
  }
  buttonState2 = digitalRead(button_red);                            // check if player2 has pressed a button to start his move
  if(buttonState2 == HIGH){ lcd1.clear();                            // if the button is pressed, clear a display and go to another loop
  while(1){                                                          // going to a loop
      lcd1.setCursor(0, 0); lcd1.print("Roll a dice?"); delay(1000); // setting the starting point and printing "Roll a dice?" and delay for 1000 ms
      buttonState2 = digitalRead(button_red);                        // check if player2 has pressed a button to roll a dice
      if(buttonState2 == HIGH){                                      // if the button is pressed, clear a display and go to another loop
        rolling_a_dice();                                            // call a function to animate a dice roll
        dice_number2 = random(1,6);                                  // creating a random number between 1 and 6
        lcd1.print(dice_number2);                                    // printing the random number to a screen
        delay(100);                                                  // delay 100 ms
        for (int i = player2; i < player2 + dice_number2 + 1; i++){  // Starting the for loop to count the steps for the player 
          move_player(ledpin[i]);                                    // function to animate moving the player
          if(player2 + dice_number2 == i){                           // moving the player until the player1 is on the correct posision
            player2 = i;                                             // set the player to be the number of the field that it is on
            dice_number2 = 0;                                        // set the dice number to zero
            mark_player2(player2);                                   // mark the player2 on a inside of the board
            if(player2 > 18){                                        // starting a if statement that checks if the player has made a full circle
              remainder2 = player2 % 20;                             // if yes, take a remainder from the player2
              player2 = 0;                                           // set the player2 to zero possition 
              player2 = player2 + remainder2;                        // then add remainder to player2
              go_back2 = 1;                                          // set go back to one
              dice_number2 = 0;                                      // dice number to zero
              mark_player2(player2);                                 // mark the new place of the player2
              lcd1.clear();                                          // clear the lcd 20x2 screen
              break;                                                 // break
            }
            lcd1.clear();                                            // clear the screen if it doesn't go to an if statement from before
            go_back2 = 1;                                            // set go back to one
          }
          if(go_back2 == 1){break;}                                  // if go back is one, break again
        }
      }
      if(go_back2 == 1){go_back2 = 0; break;}                        // if go back is one, break again and set go back to zero
    }
  }
}

