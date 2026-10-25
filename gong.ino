const int so1 = 1;
const int so2 = 2;
const int so3 = 3;
const int so4 = 4;
const int so5 = 5;
const int so6 = 6;
const int so7 = 7;
const int so8 = 8;
const int so9 = 9;
const int so10 = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(so1, OUTPUT);
  pinMode(so2, OUTPUT);
  pinMode(so3, OUTPUT);
  pinMode(so4, OUTPUT);
  pinMode(so5, OUTPUT);
  pinMode(so6, OUTPUT);
  pinMode(so7, OUTPUT);
  pinMode(so8, OUTPUT);
  pinMode(so9, OUTPUT);
  pinMode(so10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  gong(so1, 500);
  gong(so2, 500);
  gong(so3, 500);
  gong(so4, 500);
  gong(so5, 500);
  gong(so6, 500);
  gong(so7, 500);
  gong(so8, 500);
  gong(so9, 500);
  gong(so10, 500);

  gong(so10, 500);
  gong(so9, 500);
  gong(so8, 500);
  gong(so7, 500);
  gong(so6, 500);
  gong(so5, 500);
  gong(so4, 500);
  gong(so3, 500);
  gong(so2, 500);
  gong(so1, 500);

}

void gong(int gongPin, int delayduration) {
  digitalWrite(gongPin, HIGH);
  delay(200);
  digitalWrite(gongPin, LOW);
  delay(delayduration);
}
