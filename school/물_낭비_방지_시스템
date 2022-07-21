#include "DHT.h"
#define DHTPIN 7     // DHT11이 연결된 핀
#define DHTTYPE DHT11   // DHT 11, DHT시리즈중 11을 선택합니다.
#define trig 2 //TRIG 핀 설정 (초음파 보내는 핀)
#define echo 3 //ECHO 핀 설정 (초음파 받는 핀)
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  dht.begin();
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  delay(2000);

  float h = dht.readHumidity();// 습도를 측정합니다.
  float t = dht.readTemperature();// 온도를 측정합니다.
  float f = dht.readTemperature(true);// 화씨 온도를 측정합니다.

  // 값 읽기에 오류가 있으면 오류를 출력합니다.
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
  }

  // 보정된 섭씨 값을 가져옵니다.
  float hic = dht.computeHeatIndex(t, h, false);
  Serial.println(hic,h);
  digitalWrite(trig, LOW);
  digitalWrite(echo, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  unsigned long duration = pulseIn(echo, HIGH); 
//  Serial.print(duration);
  float distance = ((float)(340 * duration) / 10000) / 2;  
  Serial.println(distance);
  if (distance>30&&h>75){
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    tone(8,440,200);
  }
  else{
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    noTone(8);
  }
}
