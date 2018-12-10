void mark_player(int pin){
  lcd.setRow(0,0,false); lcd.setRow(0,7,false); lcd.setColumn(0,0,false); lcd.setColumn(0,7,false);
  if(pin > 19)lcd.setLed(0,7,6,true);
  switch (pin) {
  case 0:
    lcd.setLed(0,7,6,true);
    break;
  case 1:
    lcd.setLed(0,7,5,true);
    break;
  case 2:
    lcd.setLed(0,7,4,true);
    break;
  case 3:
    lcd.setLed(0,7,3,true);
    break;
  case 4:
    lcd.setLed(0,7,2,true);
    break;
  case 5:
    lcd.setLed(0,7,1,true);
    break;
  case 6:
    lcd.setLed(0,5,0,true);
    break;
  case 7:
    lcd.setLed(0,4,0,true);
    break;
  case 8:
    lcd.setLed(0,3,0,true);
    break;
  case 9:
    lcd.setLed(0,2,0,true);
    break;
  case 10:
    lcd.setLed(0,1,0,true);
    break;
  case 11:
    lcd.setLed(0,0,2,true);
    break;
  case 12:
    lcd.setLed(0,0,3,true);
    break;
  case 13:
    lcd.setLed(0,0,4,true);
    break;
  case 14:
    lcd.setLed(0,0,5,true);
    break;
  case 15:
    lcd.setLed(0,1,7,true);
    break;
  case 16:
    lcd.setLed(0,2,7,true);
    break;
  case 17:
    lcd.setLed(0,3,7,true);
    break;
  case 18:
    lcd.setLed(0,4,7,true);
    break;
  case 19:
    lcd.setLed(0,5,7,true);
    break;
  default:
    // statements
    break;
}
  }
