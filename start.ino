void start()
{
  lcd1.setCursor(0, 0);
  lcd1.print("Click to start!");
  while(1)
  {
    lcd.setLed(0,6,6,false);
    delay(500);
    lcd.setLed(0,6,6,true);
    delay(500);
    buttonState1 = digitalRead(button);
    buttonState2 = digitalRead(button_red);
    if(buttonState1 == HIGH or buttonState2 == HIGH){
      lcd1.clear(); 
      lcd1.setCursor(0, 0); 
      lcd1.print("Starting");
      for(int i = 0; i<5; i++){
        lcd1.print(".");
        delay(1000);
      }
      lcd1.clear(); 
      break;
    }
  }
}
