#include<Ultrasonic.h>
Ultrasonic ultrasonic(12,13);
int dist;
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
 dist=ultrasonic.read();
  if(dist<=5){
    
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    
  }
  else if( dist>5 && dist<=10) {
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(11,LOW);
    }
    else if (dist>10){
      digitalWrite(11,HIGH);
       digitalWrite(10,LOW);
       digitalWrite(9,LOW);
      }
      delay(1000);
      Serial.print("dist in cm=");
      Serial.println(dist);
  // put your main code here, to run repeatedly:

}
