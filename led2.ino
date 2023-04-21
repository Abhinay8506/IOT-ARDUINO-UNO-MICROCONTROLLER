#define LED 13
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);

}

void loop() {
  digitalWrite(LED,HIGH);
  delay(1000);
  // put your main code here, to run repeatedly:
  digitalWrite(LED,LOW);
  delay(1000);
}
