
float celsios = 0;
float kelvin = 0;
float fahrenheit = 0;  

int tempo=0;
float t1=0;

void setup() {
 Serial.begin(9600); 
analogReference(INTERNAL);
}
void loop() {
   t1 = map(analogRead(0),472,638,1000,0); 
  
   celsios= t1/10;
   kelvin = celsios + 273;
   fahrenheit = (1.8 * celsios) + 32;

   tempo =millis()/1000;
   
Serial.print ("tempo(s): ");   
Serial.print ( tempo);
Serial.print("\t");

Serial.print (" Celsios = ");   
Serial.print (celsios,1);
Serial.print("\t");

Serial.print (" Kelvin = ");   
Serial.print (kelvin,1);
Serial.print("\t");

Serial.print (" Fahrenheit = ");   
Serial.println (fahrenheit,1);


 delay(1000); 
}
