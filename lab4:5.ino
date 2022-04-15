int numberOfLeds = 4;
int startingPin = 2;
int endingPin = startingPin + numberOfLeds;

int totalDelay = 50;
int subDelay = totalDelay / 2;

int increasePin = 13;
int decreasePin = 12;

void setup() {
  pinMode(increasePin, INPUT);
  pinMode(decreasePin, INPUT);
  
  // put your setup code here, to run once:
  for (int i = startingPin; i < endingPin; i++){
    pinMode(i, OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = startingPin; i < endingPin; i++){
    digitalWrite(i, HIGH);
    delay(subDelay);
    digitalWrite(i, LOW);
    delay(subDelay);
  }

  if (digitalRead(increasePin) == LOW){
    totalDelay = totalDelay + 50;
  }

  if (digitalRead(decreasePin) == HIGH){
    totalDelay = totalDelay - 50;
  }

  subDelay = totalDelay / 2;
}
