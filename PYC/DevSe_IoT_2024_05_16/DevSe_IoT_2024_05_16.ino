#include <SoftwareSerial.h>
#define led 9
#define BTtx 7
#define BTrx 8

SoftwareSerial BT(BTtx,BTrx);

char data =0;

void setup(){
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop(){
  if(BT.available()>0){
    data=BT.read();
  }
  if(data=='0'){
    digitalWrite(led,LOW);
    Serial.println("Turn OFF");
  }
  else if(data=='1'){
    digitalWrite(led,HIGH);
    Serial.println("Turn on");
  }
  data = 0;
}
