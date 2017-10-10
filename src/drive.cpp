#include"main.h"
void drive() {
		int power; // variable for forward axis
		int turn; // varibale for turning axis
		int joystick; // variable for the joystick used
	while (1) {
		joystick = 1; // use the first joystick
		power = joystickGetAnalog(joystick,2); // use axis 2 for forward movement
		turn = joystickGetAnalog(joystick,1); // use axis 1 for forward movement
		motorSet(2,power+turn); // sets motor pin 2 for movement
		motorSet(3,power-turn); // sets motor pin 3 for movement
	delay(20);
}}
