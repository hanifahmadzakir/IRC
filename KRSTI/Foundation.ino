void moveDegree(int IDservo, int Degree, int Speed){
  Degree = map(Degree, 0, 300, 0, 1023);
  ax12a.moveSpeed(IDservo, Degree, Speed);
}

void Delay(){
  delay(30);
}

void DelayB(){
  delay(500);
}

void Stand() {
  ax12a.move(254, 512);
}

void Walk(){
  /*moveDegree(4, 170);
  DelayB();
  moveDegree(6, 110);
  Delay();
  moveDegree(5, 110);
  Delay();
  Stand();
  //DelayB();
  moveDegree(3, 180);
  Delay();
  moveDegree(2, 180);
  DelayB();
  moveDegree(4, 150);
  
  /*moveDegree(3, 110);
  Delay();
  moveDegree(2, 110);
  DelayB();
  moveDegree(6, 150);
  Delay();
  moveDegree(5, 150);
  DelayB();
  moveDegree(3, 150);
  Delay();
  moveDegree(2, 150);
  DelayB();*/
}
