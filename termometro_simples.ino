float celsios= 0;
int tempo=0;
float t1=0;
void setup() {
Serial.begin(9600);
analogReference(INTERNAL);
}
void loop() {
t1 = map(analogRead(0),472,638,1000,0);
celsios= t1/10;
tempo =millis()/1000;
Serial.print (tempo);
Serial.print (" Temperatura = ");
Serial.print (celsios,1);
Serial.println (" *C");
delay(1000);
}
