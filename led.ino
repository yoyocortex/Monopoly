void led(int pin)
{
  switch (pin) {
  case 0:
    lcd.setLed(0,6,6,true);
    break;
  case 1:
    lcd.setLed(0,6,5,true);
    break;
  case 2:
    lcd.setLed(0,6,4,true);
    break;
  case 3:
    lcd.setLed(0,6,3,true);
    break;
  case 4:
    lcd.setLed(0,6,2,true);
    break;
  case 5:
    lcd.setLed(0,6,1,true);
    break;
  case 6:
    lcd.setLed(0,5,1,true);
    break;
  case 7:
    lcd.setLed(0,4,1,true);
    break;
  case 8:
    lcd.setLed(0,3,1,true);
    break;
  case 9:
    lcd.setLed(0,2,1,true);
    break;
  case 10:
    lcd.setLed(0,1,1,true);
    break;
  case 11:
    lcd.setLed(0,1,2,true);
    break;
  case 12:
    lcd.setLed(0,1,3,true);
    break;
  case 13:
    lcd.setLed(0,1,4,true);
    break;
  case 14:
    lcd.setLed(0,1,5,true);
    break;
  case 15:
    lcd.setLed(0,1,6,true);
    break;
  case 16:
    lcd.setLed(0,2,6,true);
    break;
  case 17:
    lcd.setLed(0,3,6,true);
    break;
  case 18:
    lcd.setLed(0,4,6,true);
    break;
  case 19:
    lcd.setLed(0,5,6,true);
    break;
  default:
    // statements
    break;
}
}
