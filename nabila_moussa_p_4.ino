// C++ code
//
int en1=13;
int en2=12;
int in1=8;
int in2=9;
int in3=10;
int in4=11;
int reading=0;
  void setup(){
    for(int i=8;i<=13;i++){
pinMode(i, OUTPUT);     
}
    Serial.begin(9600);
  }

void loop(){
  if(Serial.available()>0){
  reading=Serial.read();
  switch (reading){
case ('f'): digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
analogWrite(en1,150);
analogWrite(en2,150);
    break;
 case('b'):  digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
analogWrite(en1,150);
analogWrite(en2,150);
    break;
    case('l'):digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
analogWrite(en1,0);
analogWrite(en2,150);
    break;
    case('r'):digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
analogWrite(en1,150);
analogWrite(en2,0);
    break;
    case('s'):digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
analogWrite(en1,0);
analogWrite(en2,0);
    break;}}
  
  
}
