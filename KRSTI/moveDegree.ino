#include "Arduino.h"
#include "AX12A.h"

#define DirectionPin   (10u)
#define BaudRate      (1000000ul)
#define ID        (1u)



void setup()
{
  ax12a.begin(BaudRate, DirectionPin, &Serial);
  //Stand();
  walkMode();
  RightStep();
  LeftStep();
  //Walk();
  
}

void loop(){
  
   
}
