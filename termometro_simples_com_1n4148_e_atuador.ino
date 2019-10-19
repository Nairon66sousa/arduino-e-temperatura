float celsios= 0;
int tempo=0;
float t1=0;

int led = 2;
void setup() {
Serial.begin(9600);
analogReference(INTERNAL);
pinMode(led, OUTPUT);
}
void loop() {
t1 = map(analogRead(0),472,638,1000,0);
celsios= t1/10;
tempo =millis()/1000;
Serial.print (tempo);
Serial.print (" Temperatura = ");
Serial.print (celsios,1);
Serial.println (" *C");

if (celsios > 32)
{
  digitalWrite(led, HIGH);
}
else
{
   digitalWrite(led, LOW);
}

delay(1000);
}
