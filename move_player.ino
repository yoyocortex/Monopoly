void move_player(int pin){
  switch (pin) {
  case 0:
    lcd.setLed(0,6,6,false); delay(500); lcd.setLed(0,6,6,true); delay(500);
    break;
  case 1:
    lcd.setLed(0,6,5,false); delay(500);lcd.setLed(0,6,5,true); delay(500);
    break;
  case 2:
    lcd.setLed(0,6,4,false);delay(500);lcd.setLed(0,6,4,true); delay(500);
    break;
  case 3:
    lcd.setLed(0,6,3,false); delay(500); lcd.setLed(0,6,3,true); delay(500);
    break;
  case 4:
    lcd.setLed(0,6,2,false); delay(500); lcd.setLed(0,6,2,true); delay(500);
    break;
  case 5:
    lcd.setLed(0,6,1,false);delay(500);lcd.setLed(0,6,1,true);delay(500);
    break;
  case 6:
    lcd.setLed(0,5,1,false);delay(500);lcd.setLed(0,5,1,true);delay(500);
    break;
  case 7:
    lcd.setLed(0,4,1,false);delay(500);lcd.setLed(0,4,1,true);delay(500);
    break;
  case 8:
    lcd.setLed(0,3,1,false);delay(500);lcd.setLed(0,3,1,true);delay(500);
    break;
  case 9:
    lcd.setLed(0,2,1,false);delay(500);lcd.setLed(0,2,1,true);delay(500);
    break;
  case 10:
    lcd.setLed(0,1,1,false);delay(500);lcd.setLed(0,1,1,true);delay(500);
    break;
  case 11:
    lcd.setLed(0,1,2,false);delay(500);lcd.setLed(0,1,2,true);delay(500);
    break;
  case 12:
    lcd.setLed(0,1,3,false);delay(500);lcd.setLed(0,1,3,true);delay(500);
    break;
  case 13:
    lcd.setLed(0,1,4,false);delay(500);lcd.setLed(0,1,4,true);delay(500);
    break;
  case 14:
    lcd.setLed(0,1,5,false);delay(500);lcd.setLed(0,1,5,true);delay(500);
    break;
  case 15:
    lcd.setLed(0,1,6,false);delay(500);lcd.setLed(0,1,6,true);delay(500);
    break;
  case 16:
    lcd.setLed(0,2,6,false);delay(500);lcd.setLed(0,2,6,true);delay(500);
    break;
  case 17:
    lcd.setLed(0,3,6,false);delay(500);lcd.setLed(0,3,6,true);delay(500);
    break;
  case 18:
    lcd.setLed(0,4,6,false);delay(500);lcd.setLed(0,4,6,true);delay(500);
    break;
  case 19:
    lcd.setLed(0,5,6,false);delay(500);lcd.setLed(0,5,6,true);delay(500);
    break;
  default:
    // statements
    break;
}
  }
