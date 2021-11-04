long myVariable;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));

}

void loop() {
  myVariable =random(200,1001);
  Serial.println("My random numer is = " + (String) myVariable);
  delay(2000);
}
