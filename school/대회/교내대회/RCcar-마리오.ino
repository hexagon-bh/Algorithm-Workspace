#include <SoftwareSerial.h>
#include <Servo.h>
#include <String.h>
#define BT_RXD 2
#define BT_TXD 3
SoftwareSerial hc06(BT_RXD, BT_TXD);
int value[4]={0,0,1,0};
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
  pinMode(speaker,OUTPUT);
}
 
void loop(){
 if (hc06.available()){
    char data=hc06.read();
    if (data=='*'){   //Y축(A1)
      Serial.println("");
      Serial.print("A1(Y축):");
      Serial.print(" ");
      v_recog=0;
      value[v_recog]=0;
    }
    else if (data=='/'){  //X축(A0)
      Serial.print("        ");
      Serial.print(value[0]);
      Serial.print(",");
      Serial.print(value[1]);
      Serial.print("  ");
      Serial.println("");
      Serial.print("A0(X축):");
      Serial.print(" ");
      v_recog=1;
      value[v_recog]=0;
    }
    else if (data=='-'){  //클락션(D8)
      Serial.print("        ");
      Serial.print(value[0]);
      Serial.print(",");
      Serial.print(value[1]);
      Serial.println("");
      Serial.print("D8(클락션):");
      Serial.print(" ");
      v_recog=2;
      value[v_recog]=1;
    }
    else{
      //아스키코드를 통한 숫자 변환
      t=(int)data-48;
      value[v_recog]=value[v_recog]*10+t;
      Serial.print(data);
    }
  }
    //DC 모터
    if (value[0]<300){          //1단 후진
    digitalWrite(dc1_1,LOW);
    digitalWrite(dc1_2,HIGH);
    analogWrite(dc1_s,180);
    digitalWrite(dc2_1,LOW);
    digitalWrite(dc2_2,HIGH);
    analogWrite(dc2_s,180); 
  }
    if (value[0]<200){          //2단 후진
    digitalWrite(dc1_1,LOW);
    digitalWrite(dc1_2,HIGH);
    analogWrite(dc1_s,190);
    digitalWrite(dc2_1,LOW);
    digitalWrite(dc2_2,HIGH);
    analogWrite(dc2_s,190); 
  }
    if (value[0]<100){          //3단 후진
    digitalWrite(dc1_1,LOW);
    digitalWrite(dc1_2,HIGH);
    analogWrite(dc1_s,200);
    digitalWrite(dc2_1,LOW);
    digitalWrite(dc2_2,HIGH);
    analogWrite(dc2_s,250); 
  }
  if(value[0]<500 && value[0]<600){     //정지
    digitalWrite(dc1_1,LOW);
    digitalWrite(dc1_2,LOW);
    digitalWrite(dc2_1,LOW);
    digitalWrite(dc2_2,LOW);
  }
  if (value[0]>600){                //1단 전진
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,180);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,180); 
  }
    if (value[0]>700){              //2단 전진
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,200);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,200); 
  }
    if (value[0]>800){            //3단 전진
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,220);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,220); 
  }
    if (value[0]>900){            //4단 전진
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,230);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,230); 
  }
  if (value[0]>950){            //5단 전진
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,240);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,240); 
  }
  if (value[0]>1000){           //6단 전진
    digitalWrite(dc1_1,HIGH);
    digitalWrite(dc1_2,LOW);
    analogWrite(dc1_s,255);
    digitalWrite(dc2_1,HIGH);
    digitalWrite(dc2_2,LOW);
    analogWrite(dc2_s,255);
  }
  //서보모터
  //클락션
  if (value[2]==10){
    tone(speaker,150);
  }
  if (value[2]==11){
    noTone(speaker);
  }

}
