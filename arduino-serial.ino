// github.com/but-1-eno //

// código executado em um Arduino Open-Hardware
// modelo ROBO-CORE Blackboard v1.1
// Saiba mais sobre arduino, componentes para automação / IoT, cursos e kits com preços e velocidade 
// de entrega excelentes em
// https://www.robocore.net/




//declaração de variáveis usadas.
int pinLed[9] = {12,11,10,9,8,7,6,5,4};
int numeroLed;

void setup() {
//comando pinmode repete usando for ate que x seja <= 8 (9 portas)
  int x;
  Serial.begin(9600);
  for (x = 0; x <= 8; x = x + 1){
  pinMode(pinLed[x], OUTPUT);
  
  }
}

void loop() {

  //LIGA TODOS OS LEDS 1 A 1
  for (numeroLed=0; numeroLed <= 8; numeroLed = numeroLed + 1) {
    digitalWrite(pinLed[numeroLed], HIGH);
    delay(60); 
     Serial.print("Ligando led: ");
     Serial.println(numeroLed);
  }
    Serial.println(); //quebra de linha no monitor serial
  
  //DESLIGA TODOS OS LEDS 1 A 1
  for (numeroLed=0; numeroLed <= 8; numeroLed = numeroLed + 1) {
    digitalWrite(pinLed[numeroLed], LOW);
    delay(60);
    Serial.print("Desligando led: ");
    Serial.println(numeroLed);
  }
  
  Serial.println(); //quebra de linha no monitor serial
  
  //pisca-verde
  delay(300); //timer espera para comecar piscar
  
  digitalWrite(pinLed[0], HIGH);
    Serial.print("Ligando pisca verde na porta: ");
    Serial.println(pinLed[0]);
  digitalWrite(pinLed[1], HIGH);
    Serial.print("Ligando pisca verde na porta: ");
    Serial.println(pinLed[1]);
  digitalWrite(pinLed[2], HIGH);
    Serial.print("Ligando pisca verde na porta: ");
    Serial.println(pinLed[2]);
  
  delay(100); //timer para manter ligado
  Serial.println(); //Quebra Linha na Serial monitor
  
  digitalWrite(pinLed[0], LOW);
    Serial.print("Desligando pisca verde na porta: ");
    Serial.println(pinLed[0]);
  digitalWrite(pinLed[1], LOW);
    Serial.print("Desligando pisca verde na porta: ");
    Serial.println(pinLed[1]);
  digitalWrite(pinLed[2], LOW);
    Serial.print("Desligando pisca verde na porta: ");
    Serial.println(pinLed[2]);
  
  delay(100); //timer manter desligado
  Serial.println(); //Quebra Linha na Serial monitor

  digitalWrite(pinLed[0], HIGH);
    Serial.print("Ligando pisca verde na porta: ");
    Serial.println(pinLed[0]);
  digitalWrite(pinLed[1], HIGH);
    Serial.print("Ligando pisca verde na porta: ");
    Serial.println(pinLed[1]);
  digitalWrite(pinLed[2], HIGH);
    Serial.print("Ligando pisca verde na porta: ");
    Serial.println(pinLed[2]);
  
  delay(100); //timer para manter ligado
  Serial.println(); //Quebra Linha na Serial monitor
  
  digitalWrite(pinLed[0], LOW);
    Serial.print("Desligando pisca verde na porta: ");
    Serial.println(pinLed[0]);
  digitalWrite(pinLed[1], LOW);
    Serial.print("Desligando pisca verde na porta: ");
    Serial.println(pinLed[0]);
  digitalWrite(pinLed[2], LOW);
    Serial.print("Desligando pisca verde na porta: ");
   Serial.println(pinLed[0]);
  
  delay(100); //timer para manter desligado
  Serial.println(); //Quebra Linha na Serial monitor

  
  //pisca amarelo
  Serial.println("Inicio pisca amarelo");
  delay(300);
  Serial.println(); //Quebra Linha na Serial monitor
  
  digitalWrite(pinLed[3], HIGH);
    Serial.print("Ligando pisca amarelo na porta: ");
    Serial.println(pinLed[3]);
  digitalWrite(pinLed[4], HIGH);
    Serial.print("Ligando pisca amarelo na porta: ");
    Serial.println(pinLed[4]);
  digitalWrite(pinLed[5], HIGH);
    Serial.print("Ligando pisca amarelo na porta: ");
    Serial.println(pinLed[5]);

    Serial.println();
    
  delay(100);
  
  digitalWrite(pinLed[3], LOW);
    Serial.print("Desligando pisca amarelo na porta: ");
    Serial.println(pinLed[3]);
  digitalWrite(pinLed[4], LOW);
    Serial.print("Desligando pisca amarelo na porta: ");
    Serial.println(pinLed[4]);
  digitalWrite(pinLed[5], LOW);
    Serial.print("Desligando pisca amarelo na porta: ");
    Serial.println(pinLed[5]);
  
  delay(100); //timer para manter desligado
  
  digitalWrite(pinLed[3], HIGH);
    Serial.print("ligando pisca amarelo na porta: ");
    Serial.println(pinLed[3]);
  digitalWrite(pinLed[4], HIGH);
    Serial.print("ligando pisca amarelo na porta: ");
    Serial.println(pinLed[4]);
  digitalWrite(pinLed[5], HIGH);
    Serial.print("ligando pisca amarelo na porta: ");
    Serial.println(pinLed[5]);
  
  delay(100); //timer para manter desligado
  
  digitalWrite(pinLed[3], LOW);
    Serial.print("Desligando pisca amarelo na porta: ");
    Serial.println(pinLed[3]);
  digitalWrite(pinLed[4], LOW);
    Serial.print("Desligando pisca amarelo na porta: ");
    Serial.println(pinLed[4]);
  digitalWrite(pinLed[5], LOW);
    Serial.print("Desligando pisca amarelo na porta: ");
    Serial.println(pinLed[5]);

    Serial.println(); //quebra de linha - fim de pisca

  //pisca vermelho
  Serial.println("Inicio pisca vermelho");
  delay(300);
  Serial.println(); //Quebra Linha - inicio de pisca
  
  digitalWrite(pinLed[6], HIGH);
    Serial.print("Ligando pisca vermelho na porta: ");
    Serial.println(pinLed[6]);
  digitalWrite(pinLed[7], HIGH);
    Serial.print("Ligando pisca vermelho na porta: ");
    Serial.println(pinLed[7]);
  digitalWrite(pinLed[8], HIGH);
    Serial.print("Ligando pisca vermelho na porta: ");
    Serial.println(pinLed[8]);
  
  delay(100);
  
  digitalWrite(pinLed[6], LOW);
    Serial.print("Desigando pisca vermelho na porta: ");
    Serial.println(pinLed[6]);
  digitalWrite(pinLed[7], LOW);
    Serial.print("Desigando pisca vermelho na porta: ");
    Serial.println(pinLed[7]);
  digitalWrite(pinLed[8], LOW);
    Serial.print("Desigando pisca vermelho na porta: ");
    Serial.println(pinLed[8]);
    
  delay(100);
  
  digitalWrite(pinLed[6], HIGH);
    Serial.print("Ligando pisca vermelho na porta: ");
    Serial.println(pinLed[6]);
  digitalWrite(pinLed[7], HIGH);
    Serial.print("Ligando pisca vermelho na porta: ");
    Serial.println(pinLed[7]);
  digitalWrite(pinLed[8], HIGH);
    Serial.print("Ligando pisca vermelho na porta: ");
    Serial.println(pinLed[8]);
    
  delay(100);
  
  digitalWrite(pinLed[6], LOW);
    Serial.print("Desligando pisca vermelho na porta: ");
    Serial.println(pinLed[6]);
  digitalWrite(pinLed[7], LOW);
    Serial.print("Desligando pisca vermelho na porta: ");
    Serial.println(pinLed[7]);
  digitalWrite(pinLed[8], LOW);
    Serial.print("Desligando pisca vermelho na porta: ");
    Serial.println(pinLed[8]);

  Serial.println();
  delay(500); //PAUSA PÓS PISCADA

  //ACENDE TODAS
  Serial.println("Todos Leds  ON");
  for(numeroLed = 0; numeroLed <=8; numeroLed = numeroLed + 1){
    digitalWrite(pinLed[numeroLed], HIGH);
  }
  Serial.println();
  delay(1000); //PAUSA LIGADO
  
  //APAGA TODAS
  Serial.println("Todos Leds  OFF");
  for(numeroLed = 0; numeroLed <=8; numeroLed = numeroLed + 1){
    digitalWrite(pinLed[numeroLed], LOW);

  }
    Serial.println();
    delay(500);//PAUSA DO FIM DO CICLO
}
