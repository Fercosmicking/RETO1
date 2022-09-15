#include <Arduino.h>
#include "task2.h"

String btnState(uint8_t btnState){
  if(btnState == HIGH){
    return "OFF";
  }
  else return "ON";
}

void task2()
{
  enum class TaskStates
  {
    INIT,
    WAIT_COMMANDS
  };
  static TaskStates taskState = TaskStates::INIT;
  constexpr uint8_t ledYellow = 25;
  constexpr uint8_t button1Pin = 12;
  static bool ledStatus = false;


  switch (taskState)
  {
  case TaskStates::INIT:
  {
    Serial.begin(115200);
    pinMode(ledYellow, OUTPUT);
    digitalWrite(ledYellow, LOW);
    pinMode(button1Pin, INPUT_PULLUP);
    taskState = TaskStates::WAIT_COMMANDS;
    break;
  }
  case TaskStates::WAIT_COMMANDS:
  {
    if (Serial.available() > 0)
    {
      String command = Serial.readStringUntil('\n');
      if (command == "OutOn")
      {
        digitalWrite(ledYellow, HIGH);
        digitalWrite(ledYellow,ledStatus);
        ledStatus = !ledStatus;
      }
      else if (command == "OutOff")
      {
        digitalWrite(ledYellow, LOW);
        digitalWrite(ledYellow,ledStatus);
        
      }
      else if (command == "Read")
      {

        Serial.print(btnState(digitalRead(button1Pin)).c_str());
        Serial.print("btn1: ");
        Serial.print('\n');
      }
    }
    break;
  }
  default:
  {
    break;
  }
  }
}