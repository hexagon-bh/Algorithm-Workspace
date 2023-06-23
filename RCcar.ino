#include <SoftwareSerial.h>
#include <Servo.h>
#include <String.h>
#define BT_RXD 3
#define BT_TXD 2
SoftwareSerial hc06(BT_RXD, BT_TXD);
int value[4]={0,0,0,0};
char value_input[10]="0";
int v_recog=0;
int t=0;
Servo servo;
int angle=0;
int speed=4;
int dc1_1=5;
int dc1_2=6;
int dc1_s=11;
int dc2_1=7;
int dc2_2=8;
int dc2_s=12;
int speaker=10;
int atoi();
void setup(){
  Serial.begin(9600);
  hc06.begin(9600);
  servo.attach(9);
  pinMode(dc1_1,OUTPUT);
  pinMode(dc1_2,OUTPUT);
  analogWrite(dc1_s,200);
  pinMode(dc2_1,OUTPUT);
  pinMode(dc2_2,OUTPUT);
  analogWrite(dc2_s,200);
}
 
void loop(){
  if (hc06.available()){
    char data=hc06.read();
    if (data=='*'){
      Serial.print("        ");
      Serial.print(value[0]);
      Serial.print(",");
      Serial.print(value[1]);
      Serial.println("");\
      Serial.print("A1(Y축):");
      Serial.print(" ");
      v_recog=0;
      value[v_recog]=0;
    }
    else if (data=='/'){
      Serial.print("        ");
      Serial.print(value[0]);
      Serial.print(",");
      Serial.print(value[1]);
      Serial.println("");
      Serial.print("A0(X축):");
      Serial.print(" ");
      v_recog=1;
      value[v_recog]=0;
    }
    else{
      t=(int)data-48;
      value[v_recog]=value[v_recog]*10+t;
      Serial.print(data);
    }
  }
  if(value[0]<540){
    digitalWrite(dc1_1,LOW);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,200);
    digitalWrite(dc2_1,LOW);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,200); 
  }
  if (value[0]>540){
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,200);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,200); 
  }
    if (value[0]>640){
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,210);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,210); 
  }
    if (value[0]>740){
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,220);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,220); 
  }
    if (value[0]>840){
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,230);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,230); 
  }
  if (value[0]>940){
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,230);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,230); 
  }
  if (value[0]>1000){
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,255);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,255);
  }

}
