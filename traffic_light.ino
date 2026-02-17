#define RED 3
#define YELLOW 6
#define GREEN 9

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  digitalWrite(RED, HIGH);
  delay(5*1000);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  delay(20*1000);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2*1000);
  digitalWrite(YELLOW, LOW);
}
