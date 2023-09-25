void setup() {
 pinMode(5,INPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
Serial.begin(9600);
}

void loop() {
int sensorValue = digitalRead(5);
Serial.println(sensorValue);
delay(100); 
if(sensorValue==1){
    digitalWrite(6,1);
    delay(100);
    digitalWrite(6,0);
    delay(100);
    digitalWrite(7,1);
    delay(100);
     digitalWrite(7,0);
    delay(100);
  }
  else{
    digitalWrite(6,0);
    digitalWrite(7,0);
  }
}
