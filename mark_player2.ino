void mark_player2(int pin){
  lcd.setLed(0,5,5,false);lcd.setLed(0,5,4,false);lcd.setLed(0,5,3,false);lcd.setLed(0,5,2,false);lcd.setLed(0,4,2,false);lcd.setLed(0,3,2,false);lcd.setLed(0,2,2,false);
  lcd.setLed(0,2,3,false);lcd.setLed(0,2,4,false);lcd.setLed(0,2,5,false);lcd.setLed(0,3,5,false);lcd.setLed(0,4,5,false);
  if(pin > 19)lcd.setLed(0,5,5,true);
  switch (pin) {
  case 0:
    lcd.setLed(0,5,5,true);
    break;
  case 1:
    lcd.setLed(0,5,5,true);
    break;
  case 2:
    lcd.setLed(0,5,4,true);
    break;
  case 3:
    lcd.setLed(0,5,3,true);
    break;
  case 4:
    lcd.setLed(0,5,2,true);
    break;
  case 5:
    lcd.setLed(0,5,2,true);
    break;
  case 6:
    lcd.setLed(0,5,2,true);
    break;
  case 7:
    lcd.setLed(0,4,2,true);
    break;
  case 8:
    lcd.setLed(0,3,2,true);
    break;
  case 9:
    lcd.setLed(0,2,2,true);
    break;
  case 10:
    lcd.setLed(0,2,2,true);
    break;
  case 11:
    lcd.setLed(0,2,2,true);
    break;
  case 12:
    lcd.setLed(0,2,3,true);
    break;
  case 13:
    lcd.setLed(0,2,4,true);
    break;
  case 14:
    lcd.setLed(0,2,5,true);
    break;
  case 15:
    lcd.setLed(0,2,5,true);
    break;
  case 16:
    lcd.setLed(0,2,5,true);
    break;
  case 17:
    lcd.setLed(0,3,5,true);
    break;
  case 18:
    lcd.setLed(0,4,5,true);
    break;
  case 19:
    lcd.setLed(0,5,5,true);
    break;
  default:
    // statements
    break;
}
  }
