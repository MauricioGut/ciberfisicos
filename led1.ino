const int entrada = 7;

void setup() {
  
  pinMode(13, OUTPUT);      // Configura el pin del LED como salida
  pinMode(entrada, INPUT);  // Configura el pin del LED como salida
}


void loop() {
	if(digitalRead(entrada) == HIGH){
		digitalWrite(13, HIGH);
  }
  else{
      digitalWrite(13, HIGH);  // Enciende el LED
      //delay(1);
      for(unsigned long i = 0; i < 1600000000UL; i++){}  // Simula un retraso de 1 milisegundo con un ciclo for vacío
      digitalWrite(13, LOW);   // Apaga el LED                   
      //delay(1);
      for(unsigned long i = 0; i < 1600000000UL; i++){}  // Simula un retraso de 1 milisegundo con un ciclo for vacío
		  
  }
}
