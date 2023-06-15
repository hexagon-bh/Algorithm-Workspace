#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
#include <Servo.h>
//led
int relay=14; 
//초음파
#define trig 9
#define echo 8
//실
int strap=0;
//서보
int servoPin = 6;
Servo servo;
int angle = 0;
//엔코더
#define CLK 7
#define DT 13
#define SW 5
int counter = 0;           // 회전 카운터 측정용 변수
int currentStateCLK;       // CLK의 현재 신호상태 저장용 변수
int lastStateCLK;          // 직전 CLK의 신호상태 저장용 변수 
String currentDir ="";    // 현재 회전 방향 출력용 문자열 저장 변수
unsigned long lastButtonPress = 0;   // 버튼 눌림 상태 확인용 변수
//랜덤
long randNumber;
//mp3
SoftwareSerial mySoftwareSerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);
void setup() {
  //시리얼
  mySoftwareSerial.begin(9600);
  Serial.begin(115200);
  //초음파
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  //led
  pinMode(relay,OUTPUT);
  //servo
  servo.attach(servoPin);
  //엔코더
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);
  pinMode(SW, INPUT_PULLUP);
  lastStateCLK = digitalRead(CLK);
  //mp3
  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
  
  if (!myDFPlayer.begin(mySoftwareSerial)) {
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true){
      delay(0); 
    }
  }
  Serial.println(F("DFPlayer Mini online."));
  digitalWrite(relay,HIGH); //LED 켜짐
  myDFPlayer.volume(30);
  myDFPlayer.play(1); //공포 브금 재생
  servo.write(180);
  delay(500);
  randomSeed(analogRead(0));  //랜덤 값 생성
  randNumber = random(3);
  Serial.print("random: ");
  Serial.println(randNumber);
}

void loop() {
  //초음파
  long duration,distance; //초음파 코드: 거리 측정
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance = duration * 17 / 1000;

  //작동
  if (distance<=10){  //조건: 거리가 10cm 이하일 때
    currentStateCLK = digitalRead(CLK);
    if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){
      if (digitalRead(DT) != currentStateCLK) {
        counter ++;   //엔코더를 오른쪽으로 돌리면 변수 counter가 1 증가
        currentDir ="right";
      } else {
        counter --; //엔코더를 왼쪽으로 돌리면 변수 counter가 1 감소
        currentDir ="left";
      }
      Serial.print("rotate: ");             
      Serial.print(currentDir); 
      Serial.print(" | Counter: ");
      Serial.println(counter);
    }
    lastStateCLK = currentStateCLK;
    if (counter==randNumber){
      servo.write(30);  //서보 모터 30도: 손이 화면을 친다.
      delay(1000);
      servo.write(180); //서보 모터: 180도: 손을 다시 재친다.
      randNumber = random(50);  //다시 랜덤값 생성
      Serial.print("random: ");
      Serial.println(randNumber);
    }
  }

}