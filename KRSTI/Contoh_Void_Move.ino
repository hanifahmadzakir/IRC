void setup() {
  Serial3.begin(9600);
  delay(100);

}

void loop() {
  move(3, 180, 100);
  Delay();
  move(3, 90, 100);
  Delay();
  move(3, 0, 100);
  Delay();

  

}

void Delay(){
  delay(3000);
}

void sembahPembuka() {
  move(28, 1475, 100);
  delay(2000);
  move(29, 1500, 100);
  delay(2000);
  move(30, 500, 100);
  delay(2000);
  move(31, 2250, 100);
  delay(2000);
  move(32, 2100, 100);
  delay(2000);
}

void moveAll500() {
  move(9, 500, 100);
  delay(2000);
  move(13, 500, 100);
  delay(2000);
  move(17, 500, 100);
  delay(2000);
  move(25, 500, 100);
  delay(2000);
  move(29, 500, 100);
  delay(2000);
}

void moveAll1500() {
  move(9, 1500, 100);
  delay(2000);
  move(13, 1500, 100);
  delay(2000);
  move(17, 1500, 100);
  delay(2000);
  move(25, 1500, 100);
  delay(2000);
  move(29, 1500, 100);
  delay(2000);
}

void moveAll2500() {
  move(9, 2500, 100);
  delay(2000);
  move(13, 2500, 100);
  delay(2000);
  move(17, 2500, 100);
  delay(2000);
  move(25, 2500, 100);
  delay(2000);
  move(29, 2500, 100);
  delay(2000);
}

void move (int servo, int position, int time) {
  position = map(position, 0, 180, 500, 2500); 
  Serial3.print("#");
  Serial3.print(servo);
  Serial3.print("P");
  Serial3.print(position);
  Serial3.print("T");
  Serial3.print(time);
  Serial3.print("\r\n");
}
