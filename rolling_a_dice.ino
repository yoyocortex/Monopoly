void rolling_a_dice(){
  lcd1.clear(); lcd1.setCursor(0, 0); lcd1.print("Rolling a dice");
  for(int i = 0; i<5; i++){
    lcd1.print(".");
    delay(1000);
  }
}
