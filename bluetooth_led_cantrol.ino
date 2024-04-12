const int LED = 5;
char switchstate;

void setup()  {
Serial.begin(9600);

pinMode(LED,  OUTPUT);

}
void loop() {
while(Serial.available()>0){ 

switchstate = Serial.read();

Serial.print(switchstate);

Serial.print("\ ");

delay(15);

if(switchstate  == 'W'){
 digitalWrite(5, HIGH);
 
}
else if(switchstate == 'w'){
 digitalWrite(5, LOW);
}
}
}