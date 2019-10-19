float celsios = 0;  
const float alfa = 0.95;

int tempo=0;
float t1=0;

void setup() {
 Serial.begin(9600); 
analogReference(INTERNAL);
}
void loop() {
  static float valor_filtrado = 0.0;
   t1 = map(analogRead(0),472,638,1000,0); 
   celsios= t1/10;
   valor_filtrado = (alfa * valor_filtrado) + ((1-alfa)*celsios);                
   tempo =millis()/1000;
   
Serial.print (" Temperatura = ");   
Serial.print (celsios,1);
Serial.print ("  ===>  ");
Serial.println (valor_filtrado,1);
 delay(1000); 
}
