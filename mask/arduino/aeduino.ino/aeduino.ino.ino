char ser;
void setup() {
  pinMode(13, OUTPUT); //LED
  pinMode(7, OUTPUT);  //부저
  pinMode(9, OUTPUT); //R
  pinMode(10, OUTPUT); //G
  pinMode(11, OUTPUT); //B
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {
    ser = Serial.read();
  }
  switch(ser) {
    case '1':
      digitalWrite(13,HIGH);  //LED 켜기
      analogWrite(9, 0);
      analogWrite(10, 255);
      analogWrite(11, 0);
      break;
    case '2':
      tone(7,523,300);  //7번핀 부저를 500의 주파수로 0.3초간 울림
      analogWrite(9, 255);
      analogWrite(10, 0);
      analogWrite(11, 0);
    case '3':
      digitalWrite(13,LOW);  //LED 끄기
      analogWrite(9, 0);
      analogWrite(10, 0);
      analogWrite(11, 255);
      break;      
  }
}
