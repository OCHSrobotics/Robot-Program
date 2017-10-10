#include "main.h"
	void grabber () {
		int servo;
		int joystick;
		int buttonaxis;
		int servoopen;
		int servoclose;
	while(1) {
		servoclose = -127;
		servoopen = 127;
		joystick = 1;
		servo = 5;
		buttonaxis = 8;
		if (joystickGetDigital(joystick, buttonaxis, JOY_RIGHT) == 1){
				motorSet(servo, servoopen);}
		if (joystickGetDigital(joystick, buttonaxis, JOY_LEFT) == 1){
				motorSet(servo, servoclose);}
}
}
