int redPin = 6;
int greenPin = 5; 
int bluePin = 3; 

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, 128);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(1000);
  analogWrite(redPin, 0);
  analogWrite(greenPin, 128);
  analogWrite(bluePin, 0);
  delay(1000);
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 128);
  delay(1000);
}
