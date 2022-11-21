#include <Servo.h> 
#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>
#define trig 9
#define echo 8
#define CLK 7
#define DT 13
#define SW 4
int Dir1Pin_A=2;
int Dir2Pin_A=3;
int SpeedPin_A=10;
int servoPin = 11;
int angle = 0;
int counter = 0;           // 회전 카운터 측정용 변수
int currentStateCLK;       // CLK의 현재 신호상태 저장용 변수
int lastStateCLK;          // 직전 CLK의 신호상태 저장용 변수 
String currentDir ="";      // 현재 회전 방향 출력용 문자열 저장 변수
unsigned long lastButtonPress = 0;     // 버튼 눌림 상태 확인용 변수
long randNumber;
Servo servo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(Dir1Pin_A,OUTPUT);
  pinMode(Dir2Pin_A,OUTPUT);
  pinMode(SpeedPin_A,OUTPUT);
  servo.attach(servoPin);
  pinMode(CLK,INPUT);
	pinMode(DT,INPUT);
	pinMode(SW, INPUT_PULLUP);
  lastStateCLK = digitalRead(CLK);
  mp3_set_serial (Serial);      // DFPlayer-mini mp3 module 시리얼 세팅
  delay(1);                     // 볼륨값 적용을 위한 delay
  mp3_set_volume (30);          // 볼륨조절 값 0~30
  randomSeed(analogRead(0));
  randNumber = random(30);
  Serial.print("random: ");
  Serial.println(randNumber);
}

void loop() {
  long duration,distance;
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration=pulseIn(echo,HIGH);
  distance = duration * 17 / 1000;

  if (distance<=10){
      	// CLK핀의 상태를 확인
    currentStateCLK = digitalRead(CLK);

    // CLK핀의 신호가 바뀌었고(즉, 로터리엔코더의 회전이 발생했했고), 그 상태가 HIGH이면(최소 회전단위의 회전이 발생했다면) 
    if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){

      // DT핀의 신호를 확인해서 엔코더의 회전 방향을 확인함.

      if (digitalRead(DT) != currentStateCLK) {  // 신호가 다르다면 시계방향 회전
        counter ++;                           // 카운팅 용 숫자 1 증가
        currentDir ="right";
      } else {                                 // 신호가 같다면 반시계방향 회전
        counter --;                         // 카운팅 용 숫자 1 감소
        currentDir ="left";
      }
        
      Serial.print("rotate: ");             
      Serial.print(currentDir);           //회전방향 출력
      Serial.print(" | Counter: ");
      Serial.println(counter);           // 회전 카운팅 출력
    }

    // 현재의 CLK상태를 저장
    lastStateCLK = currentStateCLK;
    while (counter==randNumber){
      Serial.println("hello");
      digitalWrite(Dir1Pin_A,HIGH);
      digitalWrite(Dir2Pin_A,LOW);
      analogWrite(SpeedPin_A,225);
      delay(5000);
      digitalWrite(Dir1Pin_A,HIGH);
      digitalWrite(Dir2Pin_A,LOW);
      servo.write(0);
      randNumber = random(30);
      delay(1000);
      Serial.print("random: ");
      Serial.println(randNumber);
      servo.write(60);
    }
  }
}
