int val = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(9,INPUT);
Serial.begin(9600);

}

void loop() {
 val = digitalRead(9);
 Serial.print(val);
 Serial.print("\n");

}
