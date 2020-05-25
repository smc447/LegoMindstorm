
void setup() {
  pinMode(A0,OUTPUT); #connect Lego Mindstorm motor to analog pin
  pinMode(A1,OUTPUT);
}

void loop() {
 
  analogWrite(A0, 225);
  analogWrite(A1, 255);#drive the car straight
  
}
