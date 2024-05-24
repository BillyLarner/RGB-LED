int ledPinR = 11 ;  // creates variable ledPinR and assigns it the value of 11
int ledPinG = 10 ;  // creates variable ledPinG and assigns it the value of 10
int ledPinB = 9 ;   // creates variable ledPinB and assigns it the value of 9

void setup() {
  // sets pins to outputs using variables
  pinMode (ledPinR, OUTPUT) ;
  pinMode (ledPinG, OUTPUT) ;
  pinMode (ledPinB, OUTPUT) ;
}

void loop() {
  int adcValue; // creates the variable adcValue
// converts analog port A0 and gives it digital PWM duty cycles for ledPinR
  adcValue = analogRead(A0);
  analogWrite(ledPinR, map(adcValue, 0, 1023, 0, 255));
  // converts analog port A1 and gives it digital PWM duty cycles for ledPinG
  adcValue = analogRead(A1); 
  analogWrite(ledPinG, map(adcValue, 0, 1023, 0, 255));
  // converts analog port A2 and gives it digital PWM duty cycles for ledPinB
  adcValue = analogRead(A2);
  analogWrite(ledPinB, map(adcValue, 0, 1023, 0, 255));
}