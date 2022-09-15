#include <Arduino.h>
#line 1 "/home/fercosmiking/Descargas/TrabajosUnity/Reto1/simpleProject.ino"
#include "task1.h"
#include "task2.h"

#line 4 "/home/fercosmiking/Descargas/TrabajosUnity/Reto1/simpleProject.ino"
String btnState(uint8_t btnState);
#line 12 "/home/fercosmiking/Descargas/TrabajosUnity/Reto1/simpleProject.ino"
void setup();
#line 17 "/home/fercosmiking/Descargas/TrabajosUnity/Reto1/simpleProject.ino"
void loop();
#line 4 "/home/fercosmiking/Descargas/TrabajosUnity/Reto1/simpleProject.ino"
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

