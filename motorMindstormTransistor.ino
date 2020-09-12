void setup() {
  // put your setup code here, to run once:
  pinMode(A0,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(A0, 225);
  delay(20);
  analogWrite(A0, 10);
  delay(10);
  
}
