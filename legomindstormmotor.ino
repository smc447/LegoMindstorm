int tach1 = 0;
int tach0 = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,OUTPUT);
  //pinMode(9, INPUT);
  //pinMode(10, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(A0, 225);
  //tach1 = digitalRead(9);
  //tach0 =digitalRead(10);
  tach1 = analogRead(A3);
  tach0 = analogRead(A4);
  Serial.println("tacho0 is");
  Serial.println(tach0);
  Serial.println("\t");
  Serial.println("tacho1 is");
  Serial.println(tach1);
  Serial.println("\t");
  
}
