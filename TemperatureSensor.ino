//LM35////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Declaracion de variables globales
      float tempC; // Variable para almacenar el valor obtenido del sensor (0 a 1023)
      int pinLM35 = 0; // Variable del pin de entrada del sensor (A0)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
        Serial.begin(9600);
        analogReference(INTERNAL); 
}

void loop() {
    //Sensor LM35 (Sensor de Temperatura)
          // Con analogRead (Valores de 0 a 1023)
          tempC = analogRead(pinLM35); 
             
            // Calculamos la temperatura con la fórmula
            tempC = (1.1 * tempC * 100.0)/1024.0; 
          
            // Envia el dato al puerto serial
            Serial.print(tempC);
            Serial.println(" °C");
            
            // Esperamos un tiempo para repetir el loop
            delay(1000);
}
