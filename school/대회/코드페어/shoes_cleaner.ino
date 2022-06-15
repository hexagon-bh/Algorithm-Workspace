#include <Servo.h>
Servo servo1;
Servo servo2;
char data;
char a;

int i1 = 0;
int i2 = 0;
int n = 0;
const int uv1 = 13;
const int uv2 = 12;
const int sweep1 = 9;
const int sweep2 = 8;
const int onled = 2;
const int offled = 7;
const int onoffbt = 3;  //핀 설정

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); //lcd 설정

void spin1() {
  for (i1=0; i1<180; i1++) {
    servo1.write(i1);
    servo2.write(i1);
    delay(5);
  }
}

void spin2() {
  for (i2=179; i2>0; i2--) {
    servo1.write(i2);
    servo2.write(i2);
    delay(5);
  }
}

void uvon() {
  digitalWrite(uv1,HIGH);
  digitalWrite(uv2,HIGH);
}

void uvoff() {
  digitalWrite(uv1,LOW);
  digitalWrite(uv2,LOW);
}

void lcdst() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean start in 5s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean start in 4s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean start in 3s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean start in 2s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean start in 1s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("cleaning...");
}

void lcdend() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean end in 5s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean end in 4s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean end in 3s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean end in 2s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean end in 1s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("clean end.");
  delay(2000);
  lcd.clear();
  
}

void setup() {
  pinMode(uv1,OUTPUT);
  pinMode(uv2,OUTPUT);               //자외선 살균
  pinMode(sweep1,OUTPUT);
  pinMode(sweep2,OUTPUT);            //밑바닥 터는 모터
  pinMode(onoffbt,INPUT_PULLUP);      //작동버튼
  pinMode(onled,OUTPUT);              //작동 LED
  pinMode(offled,OUTPUT);             //비작동 LED
  servo1.attach(sweep1);
  servo2.attach(sweep2);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);

}

void loop() {
  int onoff = 0;
  onoff = digitalRead(onoffbt);
  digitalWrite(offled,HIGH);
  if (Serial.available() == 1){  //날씨 데이터 받아오기
     data=Serial.read();
  }
  if (onoff==LOW) {
    if (data=='0'){ //조건:비가 안온다면
        digitalWrite(offled,LOW);
        digitalWrite(onled,HIGH);
        lcdst();
        uvon();
        while (n<10) {   //솔 돌리기
          spin1();
          spin2();
          n+=1;
        }
        lcdend();
        uvoff();
        digitalWrite(onled,LOW);
        digitalWrite(offled,HIGH);
        n = 0;
      } 
      
      if(data=='1') {//비가 온다면
        digitalWrite(offled,LOW);
        digitalWrite(onled,HIGH);
        lcdst();
        uvon();
        while(n<10){
          spin1();
          spin2();
          n+=1;
       }
       lcdend();
       uvoff();
       digitalWrite(onled,LOW);
       digitalWrite(offled,HIGH);
       n=0;
    }
  }
}