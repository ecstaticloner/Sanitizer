const int ProxSensor=2;

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);     
  //Pin 2 is connected to the output of proximity sensor
  pinMode(ProxSensor,INPUT);
}

void loop() {
  if(digitalRead(ProxSensor)==LOW)      //Check the sensor output
  {
    digitalWrite(13, HIGH);// set the LED on
    delay(250);
    
    while(digitalRead(ProxSensor)==LOW)
    {digitalWrite(13, LOW);}
  }
  else
  {
    digitalWrite(13, LOW);    // set the LED off
  }
  delay(100);              // wait for a second
}
