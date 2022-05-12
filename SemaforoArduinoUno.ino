// AUTOR: JOSUÉ ROMERO
int LED_ROJO = 4;
int LED_AMARILLO = 3;
int LED_VERDE = 2;

// MÉTODO DE CONFIGURACIÓN NULA
void setup() {
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_VERDE, LOW);
}

// MÉTODO DE REPETICIÓN SUCESIVA
void loop() {
  digitalWrite(LED_ROJO, HIGH);
  delay(4000);
  digitalWrite(LED_ROJO, LOW);

  digitalWrite(LED_AMARILLO, HIGH);
  delay(1850);
  digitalWrite(LED_AMARILLO, LOW);

  digitalWrite(LED_VERDE, HIGH);
  delay(6000);
  digitalWrite(LED_VERDE, LOW);
}
