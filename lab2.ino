int x;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
    Serial.begin(9600);          //  setup serial
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(0);

  digitalWrite(13, HIGH);
  delay(x);
  digitalWrite(13, LOW);
  delay(x);
    Serial.println(x);             // debug value

}
