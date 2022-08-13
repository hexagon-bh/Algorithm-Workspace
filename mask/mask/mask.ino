char ser;
void setup() {
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
      analogWrite(9, 0);
      analogWrite(10, 255);
      analogWrite(11, 0);
      break;
    case '2':
    
      tone(7,500,500);
      analogWrite(9, 255);
      analogWrite(10, 0);
      analogWrite(11, 0);
  }
}
