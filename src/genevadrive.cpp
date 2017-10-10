#include "main.h"
  void genevadrive () {
    int motor;
    int buttonaxis;
    while (20){
      motor = 6;
      buttonaxis = 7;
      if(joystickGetDigital(1, buttonaxis, JOY_LEFT) == 1){
        motorSet(motor, 127);}
    if(digitalRead(LIMIT_SWITCH) == LOW);{
      motorStop(motor);}
      if(digitalRead(LIMIT_SWITCH2) == LOW);{
        motorStop(motor);}
        if(digitalRead(LIMIT_SWITCH3) == LOW);{
          motorStop(motor);}
          if(digitalRead(LIMIT_SWITCH4) == LOW);{
            motorStop(motor);}
      delay(20);      
    }
  }
