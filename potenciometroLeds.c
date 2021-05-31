int potenciometro = A0;

const int verde = 13;
const int amarelo = 12;
const int laranja = 8;
const int vermelho = 7;

void setup()
  {pinMode(verde, OUTPUT); 
   pinMode(amarelo, OUTPUT); 
   pinMode(laranja, OUTPUT); 
   pinMode(vermelho, OUTPUT);
   
   pinMode(potenciometro, INPUT);
   
   Serial.begin(9600);
}

void loop()
  {int valor = analogRead(potenciometro);
   Serial.println(valor);
   
   if(valor >= 0 && valor < 256){
     digitalWrite(verde, HIGH);
     digitalWrite(amarelo, LOW);
     digitalWrite(laranja, LOW);
     digitalWrite(vermelho, LOW);
   }
   
   if(valor >= 256 && valor < 512){
     digitalWrite(verde, LOW);
     digitalWrite(amarelo, HIGH);
     digitalWrite(laranja, LOW);
     digitalWrite(vermelho, LOW);
   }
   
   if(valor >= 512 && valor < 801){
     digitalWrite(verde, LOW);
     digitalWrite(amarelo, LOW);
     digitalWrite(laranja, HIGH);
     digitalWrite(vermelho, LOW);
   }
   
   if(valor >= 801){
     digitalWrite(verde, LOW);
     digitalWrite(amarelo, LOW);
     digitalWrite(laranja, LOW);
     digitalWrite(vermelho, HIGH);
   }
}