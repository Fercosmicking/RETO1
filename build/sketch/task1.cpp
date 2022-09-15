#line 1 "/home/fercosmiking/Descargas/TrabajosUnity/Reto1/task1.cpp"
#include <Arduino.h>
#include "task1.h"


void task1(){
    enum class Task1States{
        INIT,
        WAIT_TO_TOGGLE_LED
    };
    static Task1States task1State = Task1States::INIT;
    static uint32_t lasTime;
    static constexpr uint32_t INTERVAL = 1000;
    static constexpr uint8_t ledBLue = 26;
    static bool ledStatus = false;

    switch(task1State){
        case Task1States::INIT:{
            pinMode(ledBLue,OUTPUT);
            lasTime = millis();
            task1State = Task1States::WAIT_TO_TOGGLE_LED;
            break;
        }

        case Task1States::WAIT_TO_TOGGLE_LED:{

            uint32_t currentTime = millis();
            if( (currentTime - lasTime) >= INTERVAL ){
                lasTime = currentTime;
                digitalWrite(ledBLue,ledStatus);
                ledStatus = !ledStatus;
            }
            break;
        }

        default:{
            break;
        }
    }

}