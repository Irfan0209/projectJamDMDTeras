
void Reset(){
  now = RTC.now();
  int jam = now.hour();
  int menit = now.minute();
  int detik = now.second();

  if(jam==00 && menit==00 && detik==00){
    digitalWrite(BUZZ,HIGH);
    delay(1000);
    digitalWrite(BUZZ,LOW);
    digitalWrite(reset,LOW);
  }
}
