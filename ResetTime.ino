void Reset(){
 now = RTC.now();
  int jam = now.hour();
  int menit = now.minute();
  int detik = now.second();

  if(jam==00 && menit==00 && detik==00){
    delay(1000);
    digitalWrite(reset,LOW);
  }
}
