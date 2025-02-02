#define ENA 26  // PWM pin for Motor A
#define IN1 14  // Control pin 1 for Motor A
#define IN2 27  // Control pin 2 for Motor A

#define ENB 19  // PWM pin for Motor B
#define IN3 5   // Control pin 1 for Motor B
#define IN4 18  // Control pin 2 for Motor B

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Start motors
  moveForward();
}

void loop() {
  delay(3000);
  moveBackward();
  delay(3000);
  moveForward();
}

// Move motors forward
void moveForward() {
  analogWrite(ENA, 200); // Speed control (0-255)
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  analogWrite(ENB, 200);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// Move motors backward
void moveBackward() {
  analogWrite(ENA, 200);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  analogWrite(ENB, 200);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}
