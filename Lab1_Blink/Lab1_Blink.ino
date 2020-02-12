#define LED_PIN 2

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

void timedBlink(double interval){
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000*interval);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000*interval);                       // wait for a second
}

void loop() {
  // put your main code here, to run repeatedly:
  timedBlink(.25);
  timedBlink(.5);
  timedBlink(1);
}
