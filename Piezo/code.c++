#define BUZZER1 10
#define BUZZER2 8
#define BUZZER3 7

void setup() {
  pinMode(BUZZER1, OUTPUT);
  pinMode(BUZZER2, OUTPUT);
  pinMode(BUZZER3, OUTPUT);
}

void loop() {
  tone(BUZZER1, 50); 
  delay(1000);
  noTone(BUZZER1);
  delay(1000);

  tone(BUZZER2, 100); 
  delay(1000);
  noTone(BUZZER2);
  delay(1000);

  tone(BUZZER3, 150); 
  delay(1000);
  noTone(BUZZER3);
  delay(1000);
}
