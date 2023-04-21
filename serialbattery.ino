int analogpin=A1;
int val=0;
//int val1=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(analogpin);
  Serial.println(val);
//val1=val/150;
//Serial.println(val1);
}
