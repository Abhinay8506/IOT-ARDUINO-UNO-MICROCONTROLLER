#include<math.h>
int analogpin=A1;
int x=0;
int y=0,z=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  x=analogRead(analogpin);
  y =-31.84*log(x) + 267.47;
  
  Serial.println(x); 
  Serial.println(y);

}

void loop() {
  // put your main code here, to run repeatedly:
  z=constrain(x,50,100);
  Serial.println(z);

}
