#include "task1.h"
#include "task2.h"

String btnState(uint8_t btnState){

  if(btnState == HIGH){
    return "ON";
  }
  else return "OFF";
}

void setup()
{
  task1();
}

void loop()
{
  task1();
}
