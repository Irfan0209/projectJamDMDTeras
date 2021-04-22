

void Indikator(){
unsigned long currentMillis = millis(); // grab current time
  
 // check if "interval" time has passed (1000 milliseconds)
 if ((unsigned long)(currentMillis - previousMillis) >= interval) {
   
   ledState = !ledState; // "toggles" the state
   digitalWrite(indikator, ledState); // sets the LED based on ledState
   // save the "current" time
   previousMillis = millis();
 }
}
