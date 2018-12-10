void tests(){
  lcd1.setCursor(0, 0); lcd1.print("Testing...");                       // sets the starting point and prints "Testing..."
  delay(10000);                                                         // delay for 10s
  lcd1.setCursor(0, 0); lcd1.print("Roll a dice?"); delay(1000);        // sets the starting point and prints "Roll a dice?" and delays 1s
  rolling_a_dice();                                                     // call a function to animate a dice roll
  dice_number = 19;                                                     // sets the dice nummber to 19 for testing
  lcd1.print(dice_number);                                              // prints the dice number on 20x2 lcd
  delay(100);                                                           // delays for 100ms
  for (int i = player1; i < player1 + dice_number + 1; i++){            // Starting the for loop to count the steps for the player  
  move_player(ledpin[i]);                                               // function to animate moving the player
    if(player1 + dice_number == i){                                     // moving the player until the player1 is on the correct posision
      player1 = i;                                                      // set the player to be the number of the field that it is on
      dice_number = 0;                                                  // set the dice number to zero
      mark_player(player1);                                             // mark the player1 on a outside of the board
      lcd1.clear();                                                     // clear the lcd screen
    }
  }
  lcd1.setCursor(0, 0); lcd1.print("Press button for");                 // set the starting point and print "Press button for"
  lcd1.setCursor(0, 1); lcd1.print("player 1");                         // set the next row as starting point and print "player 1"
  while(1){                                                             // start the loop
    buttonState1 = digitalRead(button);                                 // check if the button is pressed 
    if(buttonState1 == HIGH){lcd1.clear(); break;}                      // if it is, break and clear lcd
  }
  lcd1.setCursor(0, 0); lcd1.print("Press button for");                 // set the starting point and print "Press button for"
  lcd1.setCursor(0, 1); lcd1.print("player 2");                         // set the next row as starting point and print "player 2"
  while(1){                                                             // start the loop
    buttonState2 = digitalRead(button_red);                             // check if the button is pressed 
    if(buttonState2 == HIGH){lcd1.clear(); break;}                      // if it is, break and clear lcd
  }
  lcd1.setCursor(0, 0); lcd1.print("Test has been passed");              // lcd print "Test has been passed"
  buttonState1 = 0, player1 = 0, dice_number = 0, go_back = 0, remainder = 0, buttonState2 = 0, remainder2 = 0, player2 = 0, dice_number2 = 0, go_back2 = 0;
  lcd.setRow(0,0,false); lcd.setRow(0,7,false); lcd.setColumn(0,0,false); lcd.setColumn(0,7,false);
  delay(10000);
  lcd1.clear();
}
