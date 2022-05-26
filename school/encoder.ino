#define CLK 12    // 2번핀을 CLK로 지정
#define DT 11    // 3번핀을 DT로 지정
#define SW 10     // 4번핀을 스위치핀으로 지정
#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile
#include <time.h>

RH_ASK driver;

char buff[256];
int value = 300;
int counter = 0;           // 회전 카운터 측정용 변수
int currentStateCLK;       // CLK의 현재 신호상태 저장용 변수
int lastStateCLK;          // 직전 CLK의 신호상태 저장용 변수 
String currentDir ="";      // 현재 회전 방향 출력용 문자열 저장 변수
unsigned long lastButtonPress = 0;     // 버튼 눌림 상태 확인용 변수
int a=0;

void setup() {
  
  // 엔코더의 핀들을 입력으로 설정
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);
  pinMode(SW, INPUT_PULLUP);     // 스위치핀은 내부 풀업저항 사용
  pinMode(2,OUTPUT);
  pinMode(6,INPUT_PULLUP);

  // 시리얼통신 개시
  Serial.begin(9600);

  // CLK핀의 현재 상태 확인
  lastStateCLK = digitalRead(CLK);
}

void loop() {
  value==300;
  // CLK핀의 상태를 확인
  currentStateCLK = digitalRead(CLK);

  // CLK핀의 신호가 바뀌었고(즉, 로터리엔코더의 회전이 발생했했고), 그 상태가 HIGH이면(최소 회전단위의 회전이 발생했다면) 
  if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){
    
    // DT핀의 신호를 확인해서 엔코더의 회전 방향을 확인함
    if (digitalRead(DT) != currentStateCLK) {  // 신호가 다르다면 시계방향 회전
      digitalWrite(2,LOW);
      counter++;// 카운팅 용 숫자 1 증가
      currentDir ="right rotate";
      //value=coutner;
      if (counter==12){
        counter=11;
        digitalWrite(2,HIGH);
        value=300;
      }
      else{
        Serial.print("");
      }
      }
    else   {                                 // 신호가 같다면 반시계방향 회전
      digitalWrite(2,LOW);
      counter--;                         // 카운팅 용 숫자 1 감소
      currentDir ="left rotate";
     if(counter==-12){
      digitalWrite(2,HIGH);
      counter=-11;
      value=300;
     }
     else{
      Serial.print("");
     }
    }
      
    Serial.print("roatation director: ");             
    Serial.print(currentDir);           //회전방향 출력
    Serial.print(" | Counter: ");
    Serial.println(counter);           // 회전 카운팅 출력
  }
    
  if (digitalRead(6)==HIGH){
    value=260;
  }
  // 현재의 CLK상태를 저장
  lastStateCLK = currentStateCLK;

  // 버튼(스위치)이 눌렸는지 확인
  int btnState = digitalRead(SW);


    if (value!=300){
     sprintf(buff,"%d",value); //int to char
     Serial.println(buff);
     const char *msg = buff;
     if (driver.send((uint8_t *)msg, strlen(msg))) {
         driver.waitPacketSent();
         Serial.println(msg);
         Serial.println("It was sent as an RC car.");
      }

     
  // 잠시 대기
  delay(1);
    }
    }
