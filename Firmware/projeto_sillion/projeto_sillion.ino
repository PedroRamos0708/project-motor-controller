const int motorPin   = 3; //declaração de variáveis
const int triggerPin = 2; 

void setup() {
  pinMode(motorPin, OUTPUT); // setando o pino PD3 como saída
  pinMode(triggerPin, INPUT_PULLUP); //setando o PD2 como entrada
  Serial.begin(9600); // inicializando a comunicação serial
  }

void loop() {
  if (digitalRead(triggerPin) == LOW) { // se a entrada digital interpretar sinal 0V
    Serial.println("Motor ON"); //envia a mensagem no serial
    digitalWrite(motorPin, HIGH);  // envia 5V para a saída PD3
    delay(10000);  // motor ligado por 10 segundos
    digitalWrite(motorPin, LOW);   // desativa o chaveamento do MOSFET
    Serial.println("Motor OFF"); //envia nova mensagem no serial
    delay(200); // espera
  }
}
